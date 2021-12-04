using System.Collections;
using System.Collections.Generic;
using System.Xml;                   //basic xml attributes
using System.Xml.Serialization;     //access to xml serializer
using System.IO;                    //file management
using UnityEngine;
using System;

public class DataManager : MonoBehaviour
{
    public static DataManager ins;

    private void Awake()
    {
        ins = this;
        DontDestroyOnLoad(this);
    }

    public InventoryDatabase invDb;
    public TransformDatabase transformDb;
    public GameController controller;

    private bool loadedFile;

    public bool GetLoadedFile()
    {
        return loadedFile;
    }

    public void SetLoadedFile(bool value)
    {
        loadedFile = value;
    }


    public void Save(List<string> itemsList, List<bool> holdingItemCurrentlyList, List<string> transformableCharactersList, List<bool> isTransformedList)
    {
        invDb = AddToInventoryDb(itemsList, holdingItemCurrentlyList);
        transformDb = AddToTransformDb(transformableCharactersList, isTransformedList);
        XmlSerializer inventorySerializer = new XmlSerializer(typeof(InventoryDatabase));
        XmlSerializer transformSerializer = new XmlSerializer(typeof(TransformDatabase));
        FileStream inventoryStream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml", FileMode.Create);
        FileStream transfromStream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/transform_data.xml", FileMode.Create);
        inventorySerializer.Serialize(inventoryStream, invDb);
        transformSerializer.Serialize(transfromStream, transformDb);
        inventoryStream.Close();
        transfromStream.Close();
    }

    public Dictionary<string, bool> LoadPickedUpAndHolding()
    {

        XmlSerializer inventorySerializer = new XmlSerializer(typeof(InventoryDatabase));
        if (System.IO.File.Exists(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml"))
        {
            FileStream inventoryStream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml", FileMode.Open);
            invDb = inventorySerializer.Deserialize(inventoryStream) as InventoryDatabase;
            inventoryStream.Close();
        }

        List<string> loadedItemsList = LoadItemNames();
        List<bool> loadedHoldingItemsList = LoadHoldingItems();
        Dictionary<string, bool> tempPickedUpAndHoldingDict = new Dictionary<string, bool>();

        for (int i = 0; i < loadedItemsList.Count; i++)
        {
            
            tempPickedUpAndHoldingDict.Add(loadedItemsList[i], loadedHoldingItemsList[i]);
        }

        controller.dataPersistenceOnLoad.IsLoaded = true;

        return tempPickedUpAndHoldingDict;

    }

    public Dictionary<string,bool> LoadTransformedCharacters()
    {
        XmlSerializer transformSerializer = new XmlSerializer(typeof(TransformDatabase));
        if (System.IO.File.Exists(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/transform_data.xml"))
        {
            FileStream transformStream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/transform_data.xml", FileMode.Open);
            transformDb = transformSerializer.Deserialize(transformStream) as TransformDatabase;
            transformStream.Close();
        }

        List<string> loadedTransformableCharactersList = LoadTransformableCharacterNames();
        List<bool> loadedIsTransformedList = LoadIsTransformed();
        Dictionary<string, bool> tempTransformableCharactersDict = new Dictionary<string, bool>();

        for (int i = 0; i < loadedTransformableCharactersList.Count; i++)
        {
            tempTransformableCharactersDict.Add(loadedTransformableCharactersList[i], loadedIsTransformedList[i]);
        }

        return tempTransformableCharactersDict;
    }

    public List<string> LoadItemNames()
    {
        List<string> itemsList = new List<string>();

        for (int i = 0; i < invDb.list.Count; i++)
        {
            itemsList.Add(invDb.list[i].GetItemName());
        }

        return itemsList;
    }

    public List<bool> LoadHoldingItems()
    {
        List<bool> holdingItemsList = new List<bool>();

        for (int i = 0; i < invDb.list.Count; i++)
        {
            holdingItemsList.Add(invDb.list[i].GetHolding());
        }

        return holdingItemsList;
    }

    public List<string> LoadTransformableCharacterNames()
    {
        List<string> transformableCharactersList = new List<string>();

        for (int i = 0; i < transformDb.list.Count; i++)
        {
            transformableCharactersList.Add(transformDb.list[i].GetCharacterName());
        }
        return transformableCharactersList;
    }

    private List<bool> LoadIsTransformed()
    {
        List<bool> isTransformedList = new List<bool>();

        for (int i = 0; i < transformDb.list.Count; i++)
        {
            isTransformedList.Add(transformDb.list[i].GetTransformed());
        }

        return isTransformedList;
    }

    public InventoryDatabase AddToInventoryDb (List<string> itemsList, List<bool> holdintItemCurrentlyList)
    {
        InventoryDatabase tempDb = new InventoryDatabase();
        InventoryItem newItem; 

        for (int i = 0; i < itemsList.Count; i++)
        {
            newItem = new InventoryItem();
            newItem.SetItemName(itemsList[i]);
            newItem.SetHolding(holdintItemCurrentlyList[i]);
            tempDb.list.Add(newItem);
        }

        return tempDb;
    }

    public TransformDatabase AddToTransformDb (List<string> transformableCharactersList, List<bool> isTransformedList)
    {
        TransformDatabase tempDb = new TransformDatabase();
        TransformableCharacter newCharacter;

        for (int i = 0; i < transformableCharactersList.Count; i++)
        {
            newCharacter = new TransformableCharacter();
            newCharacter.SetCharacterName(transformableCharactersList[i]);
            newCharacter.SetTransformed(isTransformedList[i]);
            tempDb.list.Add(newCharacter);
        }
        return tempDb;
    }

    [System.Serializable]
    public class InventoryItem
    {
        public string itemNoun;
        public bool holding;

        public string GetItemName()
        {
            return itemNoun;
        }

        public bool GetHolding()
        {
            return holding;
        }

        public void SetItemName(string itemName)
        {
            itemNoun = itemName;
        }

        public void SetHolding(bool holdingItem)
        {
            holding = holdingItem;
        }
    }

    [System.Serializable]
    public class TransformableCharacter
    {
        public string characterName;
        public bool transformed;

        public string GetCharacterName()
        {
            return characterName;
        }

        public bool GetTransformed()
        {
            return transformed;
        }

        public void SetCharacterName(string name)
        {
            characterName = name;
        }

        public void SetTransformed(bool isTransformed)
        {
            transformed = isTransformed;
        }
    }

    [System.Serializable]
    public class InventoryDatabase
    {
        [XmlArray("InventoryItems")]
        public List<InventoryItem> list = new List<InventoryItem>();
    }

    [System.Serializable]
    public class TransformDatabase
    {
        [XmlArray("TransformedCharacters")]
        public List<TransformableCharacter> list = new List<TransformableCharacter>();
    }


}

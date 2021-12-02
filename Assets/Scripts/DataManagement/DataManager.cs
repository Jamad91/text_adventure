using System.Collections;
using System.Collections.Generic;
using System.Xml;                   //basic xml attributes
using System.Xml.Serialization;     //access to xml serializer
using System.IO;                    //file management
using UnityEngine;

public class DataManager : MonoBehaviour
{
    public static DataManager ins;

    private void Awake()
    {
        ins = this;   
    }

    public InventoryDatabase invDb;

    public void Save(List<string> itemsList, List<bool> holdingItemCurrentlyList)
    {
        invDb = addToInventoryDb(itemsList, holdingItemCurrentlyList);   
        XmlSerializer serializer = new XmlSerializer(typeof(InventoryDatabase));
        FileStream stream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml", FileMode.Create);
        serializer.Serialize(stream, invDb);
        stream.Close();
    }

    public Dictionary<string, bool> Load()
    {

        XmlSerializer serializer = new XmlSerializer(typeof(InventoryDatabase));
        if (System.IO.File.Exists(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml"))
        {
            FileStream stream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml", FileMode.Open);
            invDb = serializer.Deserialize(stream) as InventoryDatabase;
            stream.Close();
        }

        List<string> loadedItemsList = LoadItemNames();
        List<bool> loadedHoldingItemsList = LoadHoldingItems();
        Dictionary<string, bool> tempPickedUpAndHoldingDict = new Dictionary<string, bool>();

        for (int i = 0; i < loadedItemsList.Count; i++)
        {
            tempPickedUpAndHoldingDict.Add(loadedItemsList[i], loadedHoldingItemsList[i]);
        }

        return tempPickedUpAndHoldingDict;

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

    public InventoryDatabase addToInventoryDb (List<string> itemsList, List<bool> holdintItemCurrentlyList)
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
    public class InventoryDatabase
    {
        [XmlArray("InventoryItems")]
        public List<InventoryItem> list = new List<InventoryItem>();
    }
}

using System.Collections;
using System.Collections.Generic;
using System.Xml;                   //basic xml attributes
using System.Xml.Serialization;     //access to xml serializer
using System.IO;                    //file management
using UnityEngine;

public class XMLManager : MonoBehaviour
{

    public static XMLManager ins;

    private void Awake()
    {
        ins = this;
    }
    //list of items
    public ItemDatabase itemDb;

    //save function
    public void SaveItems()
    {
        //open a new xml file
        XmlSerializer serializer = new XmlSerializer(typeof(ItemDatabase));
        FileStream stream = new FileStream(Application.persistentDataPath + "/Scripts/XML_Guide/StreamingFiles/XML/item_data.xml", FileMode.Create);
        serializer.Serialize(stream, itemDb);
        stream.Close();
    }

    //load function
    public void LoadItems()
    {
        XmlSerializer serializer = new XmlSerializer(typeof(ItemDatabase));
        //add check to make sure there is a file to be loaded
        FileStream stream = new FileStream(Application.persistentDataPath + "/Scripts/XML_Guide/StreamingFiles/XML/item_data.xml", FileMode.Open);
        itemDb = serializer.Deserialize(stream) as ItemDatabase;
        stream.Close();
    }
}


//This is an item entry that will appear in our XML file
[System.Serializable]
public class ItemEntry
{
    public string itemName;
    public Material material;
    public int value;
}

[System.Serializable]
public class ItemDatabase
{
    [XmlArray("CombatEquipment")]
    public List<ItemEntry> list = new List<ItemEntry>();
}

public enum Material
{
    Wood,
    Copper,
    Iron,
    Steel,
    Obsidian
}
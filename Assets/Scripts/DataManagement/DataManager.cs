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

    //XmlSerializer xmls = new XmlSerializer(typeof(string));
    //StringWriter sw = new StringWriter();

    // Start is called before the first frame update

    public void Save(List<string> itemsList, List<bool> holdingItemCurrentlyList)
    {
        Debug.Log("hitting the new save function");

        for (int i = 0; i < itemsList.Count; i++)
        {
            Debug.Log("In the list, the index is " + i + " and the item is " + itemsList[i]);
        }

        invDb = addToInventoryDb(itemsList, holdingItemCurrentlyList);
        Debug.Log("Length of new db: " + invDb.list.Count);
        XmlSerializer serializer = new XmlSerializer(typeof(InventoryDatabase));

        FileStream stream = new FileStream(Application.dataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml", FileMode.Create);
        serializer.Serialize(stream, invDb);
        stream.Close();
    }

    public void Load()
    {
        //    string test = null;

        //    using (var stream = File.OpenRead("my_player.xml"))
        //    {
        //        if (stream.Position > 0)
        //        {
        //            stream.Position = 0;
        //        }

        //        test = xmls.Deserialize(stream) as string;
        //    }
        //    Debug.Log(test);
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Xml.Serialization;
using System.IO;

public class DataManager : MonoBehaviour
{
    public DataManagement mgmt = FindObjectOfType<DataManagement>();

    XmlSerializer xmls = new XmlSerializer(typeof(string));
    StringWriter sw = new StringWriter();

    // Start is called before the first frame update

    public void Save()
    {
        Debug.Log("Count: " + mgmt.charactersThatHaveBeenGivenItem.Count);
        string json = JsonUtility.ToJson(mgmt.charactersThatHaveBeenGivenItem.ToString());


        Debug.Log(json);

        using (var stream = File.OpenWrite("my_player.xml"))
        {
            xmls.Serialize(sw, mgmt.charactersThatHaveBeenGivenItem.ToString());
        }
    }

    public void Load()
    {
        string test = null;

        using (var stream = File.OpenRead("my_player.xml"))
        {
            if (stream.Position > 0)
            {
                stream.Position = 0;
            }

            test = xmls.Deserialize(stream) as string;
        }
        Debug.Log(test);
    }
}

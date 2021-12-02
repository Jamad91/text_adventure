using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Xml.Serialization;

[XmlRoot]
public class DataManagement : MonoBehaviour
{
    [XmlElement]
    public List<string> charactersThatHaveBeenGivenItem;
    //public List<string> transformedCharacters;
    //public List<string> pickedUpAndHoldingItemNames;
    //public List<string> pickedUpAndHoldingBools;

    

}



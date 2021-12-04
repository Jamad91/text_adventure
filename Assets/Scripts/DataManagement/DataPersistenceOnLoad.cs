using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/DataPersistanceOnLoad")]
public class DataPersistenceOnLoad : ScriptableObject
{
    public Dictionary<string, bool> persistingPickedUpAndHolding;
    public Dictionary<string, bool> persistingTransformedCharacters;
    public bool IsLoaded;
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/NPC")]
public class NPC : ScriptableObject// , ISerializationCallbackReceiver
{

    public string characterName = "name";
    [TextArea]
    public string description = "Description of person";

    public bool transformableCharacter;
    public string transformedCharacterName;
    public string transformedDescription;

    public Interaction[] interactions;
    public Response responses;


}

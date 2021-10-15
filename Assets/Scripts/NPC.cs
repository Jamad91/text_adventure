using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/NPC")]
public class NPC : ScriptableObject
{

    public string name = "name";
    [TextArea]
    public string description = "Description of person";
    public Interaction[] interactions;

}

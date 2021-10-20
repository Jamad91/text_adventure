using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableCharacters : MonoBehaviour
{
    public List<NPC> charactersList;

    public Dictionary<string, string> characterDictionary = new Dictionary<string, string>();

    [HideInInspector] public List<string> charactersInRoom = new List<string>();

    GameController controller;

    public string GetCharactersInRoom(Room currentRoom, int i)
    {
        NPC characterInRoom = currentRoom.charactersInRoom[i];
        charactersInRoom.Add(characterInRoom.characterName);
        return characterInRoom.description;

    }

    public void ClearCollections()
    {
        characterDictionary.Clear();
        charactersInRoom.Clear();
    }

}

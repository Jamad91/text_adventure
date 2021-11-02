using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableCharacters : MonoBehaviour
{
    public List<NPC> charactersList;

    public Dictionary<string, string> characterDictionary = new Dictionary<string, string>();

    [HideInInspector] public List<string> charactersInRoom = new List<string>();

    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
    }

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

    public void TalkToCharacter(string[] seperatedInputWords)
    {
        string characterSpokenTo = seperatedInputWords[2];
        if (charactersInRoom.Contains(characterSpokenTo))
        {
            for (int i = 0; i < charactersList.Count; i++)
            {
                if (characterSpokenTo == charactersList[i].characterName)
                {
                    controller.LogStringWithReturn(charactersList[i].characterName + ": " + CharacterResponse(charactersList[i]));
                }
            } 
        }
        else
        {
            controller.LogStringWithReturn("There is no " + characterSpokenTo + " here");
        }
    }

    public string CharacterResponse(NPC characterSpokenTo)
    {
        if (characterSpokenTo.response.holdingItem)
        {
            return characterSpokenTo.response.holdingResponse;
        }
        else
        {
            return characterSpokenTo.response.notHoldingResponse;
        }
    }

}

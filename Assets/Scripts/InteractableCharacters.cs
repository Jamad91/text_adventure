using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableCharacters : MonoBehaviour
{
    public List<NPC> charactersList;
    public List<NPC> transformableCharactersList;

    public Dictionary<string, string> characterDictionary = new Dictionary<string, string>();
    public Dictionary<string, bool> charactersTransformedDictionary = new Dictionary<string, bool>();

    [HideInInspector] public List<string> charactersInRoom = new List<string>();
    public Dictionary<string, Dictionary<InteractableObject, bool>> itemsCharsHave = new Dictionary<string, Dictionary<InteractableObject, bool>>();
    public Dictionary<string, Dictionary<InteractableObject, bool>> itemsCharsAreGiven = new Dictionary<string, Dictionary<InteractableObject, bool>>();

    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
        for (int i = 0; i < charactersList.Count; i++)
        {
            if (charactersList[i].transformableCharacter)
            {
                charactersTransformedDictionary.Add(charactersList[i].name, false);
                Debug.Log("A transformer: " + charactersList[i].name);
            }
        }
    }

    public string GetCharactersInRoom(Room currentRoom, int i)
    {
        NPC characterInRoom = currentRoom.charactersInRoom[i];
        Debug.Log(isTransformed(characterInRoom.name));
        if (isTransformed(characterInRoom.name))
        {
            charactersInRoom.Add(characterInRoom.transformedCharacterName);
            Debug.Log("Added transformer: " + charactersInRoom[charactersInRoom.Count - 1]);
            return characterInRoom.transformedDescription;
        } else
        {
            charactersInRoom.Add(characterInRoom.characterName);
            Debug.Log("Added: " + charactersInRoom[charactersInRoom.Count - 1]);
            return characterInRoom.description;
        }
    }

    public void ClearCollections()
    {
        characterDictionary.Clear();
        charactersInRoom.Clear();

    }

    public void TalkToCharacter(string[] seperatedInputWords)
    {
        bool hasBeenTransformed;

        if (seperatedInputWords.Length != 3)
        {
            controller.LogStringWithReturn("TALK TO who? What are you saying? Try again, please.");
            return;
        }
        string characterSpokenTo = seperatedInputWords[2];


        if (charactersInRoom.Contains(characterSpokenTo))
        {
            
            for (int i = 0; i < charactersList.Count; i++)
            {
                hasBeenTransformed = isTransformed(charactersList[i].name);
                if (!hasBeenTransformed && characterSpokenTo == charactersList[i].characterName)
                {
                    controller.LogStringWithReturn(charactersList[i].characterName + ": " + CharacterResponse(charactersList[i]));
                }
                else if (hasBeenTransformed && characterSpokenTo == charactersList[i].transformedCharacterName)
                {
                    controller.LogStringWithReturn(charactersList[i].transformedCharacterName + ": " + CharacterResponse(charactersList[i]));
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
        bool holdingItem;
        if (itemsCharsAreGiven.ContainsKey(characterSpokenTo.characterName) == true && itemsCharsAreGiven[characterSpokenTo.characterName].ContainsKey(characterSpokenTo.responses.itemToBeGiven) == true)
        {
            holdingItem = itemsCharsAreGiven[characterSpokenTo.characterName][characterSpokenTo.responses.itemToBeGiven];
        } else
        {
            holdingItem = false;
        }

        if (holdingItem)
        {
            return characterSpokenTo.responses.isHoldingGivenItemResponse;
        }
        else
        {
            return characterSpokenTo.responses.notHoldingGivenItemResponse;
        }
    }

    public void transformCharacter(string name)
    {
        Debug.Log("Transformed: " + charactersTransformedDictionary[name]);
        charactersTransformedDictionary[name] = true;
        //Debug.Log("Transformed: " + charactersTransformedDictionary[name]);

    }

    public bool isTransformed(string name)
    {
        
        return charactersTransformedDictionary.ContainsKey(name) && charactersTransformedDictionary[name]; 
    }

}

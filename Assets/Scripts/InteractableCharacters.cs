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
            return characterInRoom.transformedDescription;
        } else
        {
            charactersInRoom.Add(characterInRoom.characterName);
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

        Debug.Log("talking to: " + characterSpokenTo);
        if (charactersInRoom.Contains(characterSpokenTo))
        {
            Debug.Log("they're here!");
            for (int i = 0; i < charactersList.Count; i++)
            {
                Debug.Log("have they been transformed?");
                hasBeenTransformed = isTransformed(charactersList[i].name);
                Debug.Log("transform status: " + hasBeenTransformed);
                Debug.Log("matching: " + characterSpokenTo == charactersList[i].transformedCharacterName);
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
        if (itemsCharsAreGiven.ContainsKey(characterSpokenTo.name) == true && itemsCharsAreGiven[characterSpokenTo.name].ContainsKey(characterSpokenTo.responses.itemToBeGiven) == true)
        {
            holdingItem = itemsCharsAreGiven[characterSpokenTo.name][characterSpokenTo.responses.itemToBeGiven];
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

    public void transformCharacter(NPC character)
    {
        charactersTransformedDictionary[character.name] = true;
        charactersInRoom.Remove(character.characterName);
        charactersInRoom.Add(character.transformedCharacterName);
        //Debug.Log(character.characterName + "aka old: " + charactersInRoom.Contains(character.characterName) + character.transformedCharacterName + " aka new: " + charactersInRoom.Contains(character.transformedCharacterName));
    }

    public bool isTransformed(string name)
    {
        
        return charactersTransformedDictionary.ContainsKey(name) && charactersTransformedDictionary[name]; 
    }

}

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

    public string GetCharacterInRoom(Room currentRoom, int i)
    {
        NPC characterInRoom = currentRoom.charactersInRoom[i];
       
        if (IsTransformed(characterInRoom.name))
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

        if (charactersInRoom.Contains(characterSpokenTo))
        {
            for (int i = 0; i < charactersList.Count; i++)
            {
                hasBeenTransformed = IsTransformed(charactersList[i].name);

                if (!hasBeenTransformed && characterSpokenTo.ToLower() == charactersList[i].characterName.ToLower())
                {
                    controller.LogStringWithReturn(charactersList[i].characterName.ToUpper() + ": " + CharacterResponse(charactersList[i]));
                }
                else if (hasBeenTransformed && characterSpokenTo.ToLower() == charactersList[i].transformedCharacterName.ToLower())
                {
                    controller.LogStringWithReturn(charactersList[i].transformedCharacterName.ToUpper() + ": " + CharacterResponse(charactersList[i]));
                }
            }
        }
        else
        {
            controller.LogStringWithReturn("There is no " + characterSpokenTo + " here");
        }

    }

    //public Dictionary<string, Dictionary<InteractableObject, bool>> itemsCharsAreGiven = new Dictionary<string, Dictionary<InteractableObject, bool>>();

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

    public void TransformCharacter(NPC character)
    {
        charactersTransformedDictionary[character.name] = true;
        charactersInRoom.Remove(character.characterName);
        charactersInRoom.Add(character.transformedCharacterName);
        controller.transformCount++;
    }

    public bool IsTransformed(string name)
    {
        return charactersTransformedDictionary.ContainsKey(name) && charactersTransformedDictionary[name]; 
    }

    public void LookAtCharacters()
    {

        if (charactersInRoom.Count < 1)
        {
            controller.LogStringWithReturn("There are none in this room.");
            return;
        }

        for (int i = 0; i < charactersInRoom.Count; i++)
        {
            controller.LogStringWithoutReturn(charactersInRoom[i].ToUpper());
        }

    }

}

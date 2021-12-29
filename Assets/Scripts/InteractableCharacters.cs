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

    //items to be give away to player
    public Dictionary<string, Dictionary<InteractableObject, bool>> itemsCharsHave = new Dictionary<string, Dictionary<InteractableObject, bool>>();

    //item to be given to NPC from player
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
                    
                    controller.LogStringWithReturn("el " + charactersList[i].transformedCharacterName.ToUpper() + ": " + CharacterResponse(charactersList[i]));
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

        List<string> keys = new List<string>(controller.pickedUpAndHolding.Keys);

        if (itemsCharsAreGiven.ContainsKey(characterSpokenTo.name)
            && itemsCharsAreGiven[characterSpokenTo.name].ContainsKey(characterSpokenTo.responses.itemToBeGiven)
            && controller.pickedUpAndHolding.ContainsKey(characterSpokenTo.responses.itemToBeGiven.noun)
            && !controller.pickedUpAndHolding[characterSpokenTo.responses.itemToBeGiven.noun]
            )
        {
            holdingItem = itemsCharsAreGiven[characterSpokenTo.name][characterSpokenTo.responses.itemToBeGiven];
        } else
        {
            holdingItem = false;
        }

        if (holdingItem != false)
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
    }

    public bool IsTransformed(string name)
    {
        return charactersTransformedDictionary.ContainsKey(name) && charactersTransformedDictionary[name]; 
    }

    public int GetTransformedTotal()
    {
        int totalTransformed = 0;

        for (int i = 0; i < transformableCharactersList.Count; i++)
        {
            if (charactersTransformedDictionary[transformableCharactersList[i].name])
            {
                totalTransformed++;
            }
        }

        return totalTransformed;
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

    public NPC GetNPC(string name)
    {
        for (int i = 0; i < charactersList.Count; i++)
        {
            if (name == charactersList[i].name)
            {
                return charactersList[i];
            }
        }
        return null;
    }

    public void Examine(string[] seperatedInputWords)
    {
        string characterName = seperatedInputWords[1];
        bool hasBeenTransformed;

        for (int i = 0; i < charactersList.Count; i++)
        {
            hasBeenTransformed = IsTransformed(charactersList[i].name);

            if (!hasBeenTransformed && characterName.ToLower() == charactersList[i].characterName.ToLower())
            {
                controller.LogStringWithReturn(charactersList[i].description);
            }
            else if (hasBeenTransformed && characterName.ToLower() == charactersList[i].transformedCharacterName.ToLower())
            {
                controller.LogStringWithReturn(charactersList[i].transformedDescription);
            }
        }

    }

    public bool isCharacterInCurrentRoom(string characterName)
    {
        if (charactersInRoom.Contains(characterName))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableItems : MonoBehaviour
{

    public List<InteractableObject> usableItemList;

    public Dictionary<string, string> examineDictionary = new Dictionary<string, string>();
    public Dictionary<string, string> takeDictionary = new Dictionary<string, string>();


    [HideInInspector] public List<string> nounsInRoom = new List<string>();

    private Dictionary<string, ActionResponse> useDictionary = new Dictionary<string, ActionResponse>();

    List<string> nounsInInventory = new List<string>();
    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
    }

    public string GetObjectsNotInInventory(Room currentRoom, int i)
    {
        InteractableObject interactableInRoom = currentRoom.interactableObjectsInRoom[i];

        if (!nounsInInventory.Contains(interactableInRoom.noun))
        {
            nounsInRoom.Add(interactableInRoom.noun);
            return interactableInRoom.description;
        }

        return null;
    }

    public void AddActionResponsesToUseDictionary()
    {
        

        for (int i = 0; i < nounsInInventory.Count; i++)
        {
            string noun = nounsInInventory[i];

            
            InteractableObject interactableObjectinInventory = GetInteractableObjectFromUsableList(noun);

            if (interactableObjectinInventory == null)
            {
                continue;
            }
            else
            {
                for (int j = 0; j < interactableObjectinInventory.interactions.Length; j++)
                {
                    Interaction interaction = interactableObjectinInventory.interactions[j];

                    if (interaction.actionResponse == null)
                    {
                        continue;
                    }
                    if (!useDictionary.ContainsKey(noun))
                    {
                        useDictionary.Add(noun, interaction.actionResponse);
                    }
                }
            }
        }

        
    }

    InteractableObject GetInteractableObjectFromUsableList(string noun)
    {
        
        for (int i = 0; i < usableItemList.Count; i++)
        {
            if (usableItemList[i].noun == noun)
            {
                return usableItemList[i];
            }
        }
        return null;
    }



    public void DisplayInventory()
    {
        if (controller.pickedUpAndHolding.Count == 0 || !controller.pickedUpAndHolding.ContainsValue(true))
        {
            controller.LogStringWithReturn("Your backpack is empty!");
        }
        else
        {
            controller.LogStringWithReturn("You look in your backpack, inside you have: ");
            for (int i = 0; i < nounsInInventory.Count; i++)
            {
                if (controller.pickedUpAndHolding.ContainsKey(nounsInInventory[i]) && controller.pickedUpAndHolding[nounsInInventory[i]])
                {
                    controller.LogStringWithReturn(nounsInInventory[i]);
                }
            }

        }
    }


    public void ClearCollections()
    {
        examineDictionary.Clear();
        takeDictionary.Clear();
        nounsInRoom.Clear();
    }

    public Dictionary<string, string> Take (string[] seperatedInputWords)
    {
        string noun = seperatedInputWords[1];

        if (nounsInRoom.Contains(noun))
        {
            if (!controller.pickedUpAndHolding.ContainsKey(noun))
            {
                nounsInInventory.Add(noun);
                AddActionResponsesToUseDictionary();
                nounsInRoom.Add(noun);
                return takeDictionary;
            }
            else
            {
                controller.LogStringWithReturn("You already picked up the " + noun + "!");
            }

        }
        else
        {
            controller.LogStringWithReturn("There is no " + noun + " here to take.");
        }
        return null;
    }

    public void UseItem(string[] seperatedInputWords)
    {
        string nounToUse = seperatedInputWords[1];

        if (nounsInInventory.Contains(nounToUse))
        {
            if (useDictionary.ContainsKey(nounToUse))
            {
                bool actionResult = useDictionary[nounToUse].DoActionResonse(controller);
                if (!actionResult)
                {
                    controller.LogStringWithReturn("Hmm. Nothing happens.");
                }
                else
                {
                    controller.pickedUpAndHolding[nounToUse] = false;
                }
            }
            else
            {
                controller.LogStringWithReturn("You can't use the " + nounToUse);
            }
        }
        else
        {
            controller.LogStringWithReturn("There is no " + nounToUse + " in your inventory to use");
        }
    }

    public void GiveItem(string[] seperatedInputWords)
    {
        List<string> charactersInRoom = controller.interactableCharacters.charactersInRoom;
        List<NPC> charactersList = controller.interactableCharacters.charactersList;
        NPC currentCharacter;
        InteractableObject currentCharacterItemToGiveAway;
        InteractableObject currentCharacterItemToBeGiven;

        if (seperatedInputWords.Length != 4)
        {
            controller.LogStringWithReturn("You want to GIVE what TO who? Try again, please.");
            return;
        }

        string item = seperatedInputWords[1];
        string npc = seperatedInputWords[3];

        if (!nounsInInventory.Contains(item) || !controller.pickedUpAndHolding[item])
        {
            controller.LogStringWithReturn("You sure you're carrying " + item + "? Check your INVENTORY to see what you have.");
        }

        for (int i = 0; i < charactersInRoom.Count; i++)
        {
            if (charactersInRoom[i] == npc && nounsInInventory.Contains(item))
            {
                for (int j = 0; j < charactersList.Count; j++)
                {
                    currentCharacter = charactersList[j];

                    if (currentCharacter.characterName == npc)
                    {
                        
                        currentCharacterItemToBeGiven = currentCharacter.response.itemToBeGiven;
                        currentCharacterItemToGiveAway = currentCharacter.response.itemToGiveAway;
                        controller.pickedUpAndHolding[item] = false;

                        if (currentCharacterItemToBeGiven.noun == item)
                        {
                            controller.interactableCharacters.itemsCharsAreGiven[currentCharacter.characterName][currentCharacterItemToBeGiven] = true;
                            controller.pickedUpAndHolding[item] = false;
                            if (currentCharacterItemToGiveAway != null && controller.interactableCharacters.itemsCharsHave[currentCharacter.characterName][currentCharacterItemToGiveAway])
                            {
                                controller.interactableCharacters.itemsCharsHave[currentCharacter.characterName][currentCharacterItemToGiveAway] = false;
                                nounsInInventory.Add(currentCharacterItemToGiveAway.noun);
                                AddActionResponsesToUseDictionary();
                                controller.pickedUpAndHolding.Add(currentCharacterItemToGiveAway.noun, true);
                            }
                        }
                        return;
                    }
                }
            }
        }
    }


}

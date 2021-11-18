using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableItems : MonoBehaviour
{

    public List<InteractableObject> usableItemList;

    public Dictionary<string, string> examineDictionary = new Dictionary<string, string>();
    public Dictionary<string, string> takeDictionary = new Dictionary<string, string>();
    public InteractableObject hammer;

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
                    controller.LogStringWithoutReturn(nounsInInventory[i]);
                }
            }
            controller.LogStringWithReturn("\n");

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
                controller.pickedUpExamineDictionary.Add(noun, examineDictionary[noun]);
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
        InteractableObject itemToGiveAway;
        InteractableObject itemToBeGiven;
        Interaction givingItemInteraction;

        if (seperatedInputWords.Length != 4)
        {
            controller.LogStringWithReturn("You want to GIVE who  TO who? Try again, please.");
            return;
        }

        string item = seperatedInputWords[1];
        string npc = seperatedInputWords[3];

        if (!nounsInInventory.Contains(item) || !controller.pickedUpAndHolding[item])
        {
            controller.LogStringWithReturn("You sure you're carrying " + item + "? Check your INVENTORY to see what you have.");
            return;
        }

        if (!charactersInRoom.Contains(npc))
        {
            controller.LogStringWithReturn("Who are you talking about? I don't think they're in this room.");
            return;
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
                        itemToBeGiven = currentCharacter.responses.itemToBeGiven;
                        itemToGiveAway = currentCharacter.responses.itemToGiveAway;

                        if (itemToBeGiven != null && itemToBeGiven.noun == item)
                        {
                            givingItemInteraction = itemToBeGiven.interactions[0];
                            controller.interactableCharacters.itemsCharsAreGiven[currentCharacter.name][itemToBeGiven] = true;
                            controller.pickedUpAndHolding[item] = false;
                            

                            if (givingItemInteraction.inputAction.ToString().Substring(0,4) == "Give" && givingItemInteraction.textResponse != null && givingItemInteraction.textResponse.Length > 0)
                            {
                                controller.LogStringWithReturn(givingItemInteraction.textResponse);
                            }
                            else
                            {
                                controller.LogStringWithReturn("You gave " + currentCharacter.characterName + " the " + item);
                            }

                            if (controller.interactableCharacters.charactersTransformedDictionary.ContainsKey(currentCharacter.name))
                            {
                                controller.interactableCharacters.transformCharacter(currentCharacter);
                                controller.LogStringWithReturn(currentCharacter.transformedCharacterName + ": " + currentCharacter.responses.beingGivenItemResponse);
                                if (controller.transformCount == controller.interactableCharacters.transformableCharactersList.Count)
                                {
                                    GetItem(hammer);
                                    controller.LogStringWithReturn("You have received the hammer. Now you can free Heavy D.");
                                }
                            }
                            else
                            {
                                controller.LogStringWithReturn(currentCharacter.characterName + ": " + currentCharacter.responses.beingGivenItemResponse);
                            }

                            if (itemToGiveAway != null && controller.interactableCharacters.itemsCharsHave[currentCharacter.name][itemToGiveAway])
                            {
                                controller.interactableCharacters.itemsCharsHave[currentCharacter.name][itemToGiveAway] = false;
                                GetItem(itemToGiveAway);
                                controller.LogStringWithReturn(itemToGiveAway.beingGivenDescription);
                            }
                        }
                        else
                        {
                            if (currentCharacter.transformableCharacter && controller.interactableCharacters.charactersTransformedDictionary[currentCharacter.name])
                            {
                                controller.LogStringWithReturn(currentCharacter.characterName + ": " + currentCharacter.responses.transformedDoesNotWantItemResponse);
                                return;
                            }
                            controller.LogStringWithReturn(currentCharacter.characterName + ": " + currentCharacter.responses.doesNotWantItemResponse);
                        }
                        return;
                    }
                }
                
            }
        }
        if (controller.GetNPC(npc).transformableCharacter && controller.interactableCharacters.charactersTransformedDictionary[controller.GetNPC(npc).name])
        {
            controller.LogStringWithReturn(controller.GetNPC(npc).characterName + ": " + controller.GetNPC(npc).responses.transformedDoesNotWantItemResponse);
        }
        else
        {
            controller.LogStringWithReturn(npc + ": " + controller.GetNPC(npc).responses.doesNotWantItemResponse);
        }

        return;
    }

    public void Examine(string[] seperatedInputWords)
    {

        if (seperatedInputWords.Length < 2)
        {
            controller.LogStringWithReturn("EXAMINE what exactly? Speak clearly!");
            return;
        }

        string item = seperatedInputWords[1];
        if (controller.pickedUpAndHolding.ContainsKey(item) && controller.pickedUpAndHolding[item]) {
            controller.LogStringWithReturn(controller.pickedUpExamineDictionary[item]);
            return;
        }

        if (!nounsInRoom.Contains(item) || (controller.pickedUpAndHolding.ContainsKey(item) && !controller.pickedUpAndHolding[item]))
        {
            controller.LogStringWithReturn("There isn't a " + item + " around for you to look at.");
        }
        else
        {
            controller.LogStringWithReturn(controller.TestVerbDictionaryWithNoun(controller.interactableItems.examineDictionary, seperatedInputWords[0], seperatedInputWords[1]));
        }

    }

    public InteractableObject GetItem(string item)
    {
        for (int i = 0; i < usableItemList.Count; i ++)
        {
            if (item == usableItemList[i].noun)
            {
                return usableItemList[i];
            }
        }
        return null;
    }

    public string GetInteractionDescription(InteractableObject interactable, string inputAction)
    {
        for (int i = 0; i < interactable.interactions.Length; i++)
        {
            if (interactable.interactions[i].inputAction.keyword == inputAction && inputAction == "examine")
            {
                return interactable.interactions[i].textResponse;
            }
        }
        return null;
    }

    public void GetItem(InteractableObject item)
    {
        nounsInInventory.Add(item.noun);
        controller.pickedUpAndHolding.Add(item.noun, true);
        AddActionResponsesToUseDictionary();
        examineDictionary.Add(item.noun, GetInteractionDescription(item, "examine"));
        controller.pickedUpExamineDictionary.Add(item.noun, examineDictionary[item.noun]);
    }

    public void LookAtItems()
    {

        if (nounsInRoom.Count < 1)
        {
            controller.LogStringWithReturn("There are none in this room.");
            return;
        }

        for (int i = 0; i < nounsInRoom.Count; i++)
        {
            controller.LogStringWithoutReturn(nounsInRoom[i].ToUpper());
        }
        
    }


}

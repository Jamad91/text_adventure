using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    public Text displayText;
    public InputAction[] inputActions;

    [HideInInspector] public RoomNavigation roomNavigation;
    [HideInInspector] public List<string> interactionDescriptionsInRoom = new List<string>();
    [HideInInspector] public InteractableItems interactableItems;
    [HideInInspector] public InteractableCharacters interactableCharacters;
    [HideInInspector] public List<string> characterDescriptionsInRoom = new List<string>();
    [HideInInspector] public Dictionary<string, bool> pickedUpAndHolding = new Dictionary<string, bool>();
    [HideInInspector] public Dictionary<string, string> pickedUpExamineDictionary = new Dictionary<string, string>();

    List<string> actionLog = new List<string>();

    void Awake()
    {
        interactableItems = GetComponent<InteractableItems>();
        interactableCharacters = GetComponent<InteractableCharacters>();
        roomNavigation = GetComponent<RoomNavigation>();
    }

    public void DisplayLoggedText()
    {
        string logAsText = string.Join("\n", actionLog.ToArray());

        displayText.text = logAsText;
    }

    void Start()
    {
        DisplayRoomText();
        DisplayLoggedText();

    }

    public void DisplayRoomText()
    {
        ClearCollectionsForNewRoom();

        UnpackRoom();

        string joinedInteractionDescriptions = string.Join("\n", interactionDescriptionsInRoom.ToArray());
        string joinedCharacterDescriptions = string.Join("\n", characterDescriptionsInRoom.ToArray());
        string combinedText = roomNavigation.currentRoom.description + "\n" + joinedInteractionDescriptions + "\n" + joinedCharacterDescriptions;
        LogStringWithReturn(combinedText);
    }

    void UnpackRoom()
    {
        roomNavigation.UnpackExitsInRoom();
        PrepareObjectsToAction(roomNavigation.currentRoom);
        PrepareCharactersInRoom(roomNavigation.currentRoom);
    }

    public NPC GetNPC(string character)
    {
        NPC[] characters = roomNavigation.currentRoom.charactersInRoom;
        for (int i = 0; i < characters.Length; i++)
        {
            if (character == characters[i].characterName || characters[i].transformedCharacterName != null && character == characters[i].transformedCharacterName)
            {
                return characters[i];
            }
        }
        return null;
    }

    void PrepareObjectsToAction(Room currentRoom)
    {
        for (int i = 0; i < currentRoom.interactableObjectsInRoom.Length; i++)
        {
            string descriptionNotInInventory = interactableItems.GetObjectsNotInInventory(currentRoom, i);
            if (descriptionNotInInventory != null)
            {
                interactionDescriptionsInRoom.Add(descriptionNotInInventory);
            }

            InteractableObject interactableInRoom = currentRoom.interactableObjectsInRoom[i];

            for (int j = 0; j < interactableInRoom.interactions.Length; j++)
            {
                Interaction interaction = interactableInRoom.interactions[j];
                if (interaction.inputAction.keyword == "examine")
                {
                    interactableItems.examineDictionary.Add(interactableInRoom.noun, interaction.textResponse);
                }

                else if (interaction.inputAction.keyword == "take")
                {
                    interactableItems.takeDictionary.Add(interactableInRoom.noun, interaction.textResponse);
                }
            }
        }
    }

    void PrepareCharactersInRoom(Room currentRoom)
    {
        for (int i = 0; i < currentRoom.charactersInRoom.Length; i++)
        {
            characterDescriptionsInRoom.Add(interactableCharacters.GetCharactersInRoom(currentRoom, i));

            NPC characterInRoom = currentRoom.charactersInRoom[i];
            if (!interactableCharacters.itemsCharsAreGiven.ContainsKey(characterInRoom.name))
            {
                if (characterInRoom.responses.itemToBeGiven != null)
                {
                    interactableCharacters.itemsCharsAreGiven.Add(characterInRoom.name, new Dictionary<InteractableObject, bool> { { characterInRoom.responses.itemToBeGiven, false } });
                }
            }

            if (!interactableCharacters.itemsCharsHave.ContainsKey(characterInRoom.name))
            {
                if (characterInRoom.responses.itemToGiveAway != null)
                {
                    interactableCharacters.itemsCharsHave.Add(characterInRoom.name, new Dictionary<InteractableObject, bool> { { characterInRoom.responses.itemToGiveAway, true } });
                }
            }
        }
    }

    public string TestVerbDictionaryWithNoun(Dictionary<string, string> verbDictionary, string verb, string noun)
    {
        if (verbDictionary.ContainsKey(noun))
        {
            return verbDictionary[noun];
        }        
        return "You can't " + verb + " " + noun + ".";
    }

    void ClearCollectionsForNewRoom()
    {
        interactableItems.ClearCollections();
        interactableCharacters.ClearCollections();
        characterDescriptionsInRoom.Clear();
        interactionDescriptionsInRoom.Clear();
        roomNavigation.ClearExits();
    }

    public void LogStringWithReturn(string stringToAdd)
    {
        actionLog.Add(stringToAdd + "\n");
    }


    
}

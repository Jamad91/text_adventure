using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Look")]


public class Look : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithBreakLine();

        if (seperatedInputWords.Length == 2 && seperatedInputWords[1] == "around")
        {
            controller.DisplayRoomText();
        }

        else if (seperatedInputWords.Length == 3 || seperatedInputWords[1] == "at")
        {
            if (seperatedInputWords[2] == "room")
            {
                controller.roomNavigation.LookAtRoom();
            }
            else if (seperatedInputWords[2] == "exits")
            {
                controller.roomNavigation.LookAtExits();
            }
            else if (seperatedInputWords[2] == "characters")
            {
                controller.interactableCharacters.LookAtCharacters();
            }
            else if (seperatedInputWords[2] == "items")
            {
                controller.interactableItems.LookAtItems();
            }
        }
        else
        {
            controller.LogStringWithReturn("What do you want to LOOK AT? The ROOM, the EXITS, the CHARACTERS, or the ITEMS?");
        }
        controller.LogStringWithReturn("");
    }
}

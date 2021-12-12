using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Examine")]

public class Examine : InputAction 
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithBreakLine();
        bool characterExamined = controller.interactableCharacters.isCharacterInCurrentRoom(seperatedInputWords[1]);
        if (characterExamined)
        {
            controller.interactableCharacters.Examine(seperatedInputWords);
        }
        else
        {
            controller.interactableItems.Examine(seperatedInputWords);
        }
    }
}

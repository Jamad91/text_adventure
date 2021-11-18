using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Examine")]

public class Examine : InputAction 
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithBreakLine();

        controller.interactableItems.Examine(seperatedInputWords);
    }
}

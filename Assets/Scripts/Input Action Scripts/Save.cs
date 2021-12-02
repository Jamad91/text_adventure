using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Save")]

public class Save : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.Save();

        controller.LogStringWithBreakLine();

        controller.LogStringWithReturn("Save successful!");
           

    }
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Save")]

public class Save : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        if (controller.sceneLoader.GetScene() == 1)
        {
            controller.LogStringWithReturn("You cannot save in the tutorial!");
        }
        else if (controller.sceneLoader.GetScene() == 3)
        {
            controller.Save();

            controller.LogStringWithBreakLine();

            controller.LogStringWithReturn("Save successful!");
        }
           

    }
}


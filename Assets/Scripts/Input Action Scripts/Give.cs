using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Give")]

public class Give : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {

        controller.interactableItems.GiveItem(seperatedInputWords);

    }
}

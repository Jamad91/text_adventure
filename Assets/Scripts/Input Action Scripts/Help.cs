using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Help")]

public class Help : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithReturn("Need some help? You can:\n GO in a dicrection \n TAKE something \n EXAMINE something \n check your INVENTORY \n TALK to someone");
    }
}

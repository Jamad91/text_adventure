using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Help")]

public class Help : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithBreakLine();

        controller.LogStringWithReturn(
            "Need some help? You can:" +
            "\n GO in a direction " +
            "\n TAKE something " +
            "\n EXAMINE something " +
            "\n check your INVENTORY " +
            "\n TALK TO someone " +
            "\n GIVE an item TO someone" +
            "\n USE an item" +
            "\n LOOK AROUND to check your surroundings again" +
            "\n SAVE your progress" +
            "\n Use the UP and DOWN keys to scroll through previous commands"
        );
            
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="TextAdventure/InputActions/Go")]

public class Go : InputAction
{

    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithBreakLine();

        controller.roomNavigation.AttemptToChangeRooms(seperatedInputWords[1]);

        List<string> itemsList = new List<string>(controller.pickedUpAndHolding.Keys);

        Debug.Log("hitting go");

        for (int i = 0; i < itemsList.Count; i++)
        {
            Debug.Log("Index: " + i + " Item: " + itemsList[i] + " Holding: " + controller.pickedUpAndHolding[itemsList[i]]);
        }
    }

}

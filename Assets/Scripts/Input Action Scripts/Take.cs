using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Take")]

public class Take : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        Dictionary<string, string> takeDictionary = controller.interactableItems.Take(seperatedInputWords);

        controller.LogStringWithBreakLine();

        if (takeDictionary != null)
        {
            if (!controller.pickedUpAndHolding.ContainsKey(seperatedInputWords[1]))
            {
                controller.pickedUpAndHolding.Add(seperatedInputWords[1], true);
            }
            controller.LogStringWithReturn(controller.TestVerbDictionaryWithNoun(takeDictionary, seperatedInputWords[0], seperatedInputWords[1]) + "\n");
        }
    }
}

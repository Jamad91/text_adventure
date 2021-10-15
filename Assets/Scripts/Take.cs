using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Take")]

public class Take : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        Dictionary<string, string> takeDictionary = controller.interactableItems.Take(seperatedInputWords);



        if (takeDictionary != null)
        {
            Debug.Log(takeDictionary.ContainsValue(seperatedInputWords[0]));
            if (!controller.pickedUpAndHolding.ContainsKey(seperatedInputWords[1]))
            {
                controller.pickedUpAndHolding.Add(seperatedInputWords[1], true);
                
            }
            controller.LogStringWithReturn(controller.TestVerbDictionaryWithNoun(takeDictionary, seperatedInputWords[0], seperatedInputWords[1]));
        }
    }
}

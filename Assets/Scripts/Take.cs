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
            if (controller.pickedUpItems.ContainsKey(seperatedInputWords[1]))
            {
                Debug.Log("Picked up " + seperatedInputWords[1] + ": " + controller.pickedUpItems[seperatedInputWords[1]]);
            }
            else
            {
                Debug.Log("Nope, pick up now");
                controller.pickedUpItems.Add(seperatedInputWords[1], true);
                controller.LogStringWithReturn(controller.TestVerbDictionaryWithNoun(takeDictionary, seperatedInputWords[0], seperatedInputWords[1]));
            }
            
            //Debug.Log("Taking " + seperatedInputWords[0] + " " + seperatedInputWords[1]);
            
        }
    }
}

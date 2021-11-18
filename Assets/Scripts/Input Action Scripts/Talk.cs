using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/Talk")]

public class Talk : InputAction
{
    public override void RespondToInput(GameController controller, string[] seperatedInputWords)
    {
        controller.LogStringWithBreakLine();

        controller.interactableCharacters.TalkToCharacter(seperatedInputWords);
    }
}

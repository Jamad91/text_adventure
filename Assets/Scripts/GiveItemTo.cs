using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/GiveItem")]
public class GiveItemTo : ActionResponse
{
    public NPC characterToGiveTo;
    public InteractableItems itemToGive;

    public override bool DoActionResonse(GameController controller)
    {
        return false;
    }

}

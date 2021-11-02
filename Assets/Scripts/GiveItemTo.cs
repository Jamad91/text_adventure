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
        
        //List<NPC> characters = controller.interactableCharacters.charactersList;
        //for (int i = 0; i < characters.Count; i++)
        //{
        //    if (characters[i].characterName == requiredString)
        //    {
        //        return true;
        //    }
        //}
        return false;
    }

}

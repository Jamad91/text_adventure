using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/ChangeRoom")]
public class ChangeRoomResponse : ActionResponse
{

    public Room roomToChangeTo;

    public override bool DoActionResonse(GameController controller)
    {
        if (controller.roomNavigation.currentRoom.roomName == requiredString)
        {
            controller.roomNavigation.currentRoom = roomToChangeTo;
            controller.DisplayRoomText();
            if (controller.roomNavigation.currentRoom.name == controller.roomNavigation.winRoom.name)
            {
                controller.LoadEndScene();
            }
            return true;
        }
        return false;
    }

}

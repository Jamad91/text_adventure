using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "TextAdventure/InputActions/ChangeRoom")]
public class ChangeRoomResponse : ActionResponse
{

    public Room roomToChangeTo;

    public override bool DoActionResponse(GameController controller)
    {
        if (controller.roomNavigation.currentRoom.roomName == requiredString)
        {
            controller.roomNavigation.currentRoom = roomToChangeTo;
            controller.DisplayRoomText();
            if (controller.roomNavigation.winRoom != null)
            {
                if (controller.roomNavigation.currentRoom.name == controller.roomNavigation.winRoom.name)
                {
                    if (controller.sceneLoader.GetScene() == 3)
                    {
                        controller.LoadEndScene();
                    }
                    else if (controller.sceneLoader.GetScene() == 1)
                    {
                        controller.sceneLoader.LoadScene(0);
                    }
                }
            }
            return true;
        }
        return false;
    }

}

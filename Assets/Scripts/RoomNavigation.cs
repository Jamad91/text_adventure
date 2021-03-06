using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomNavigation : MonoBehaviour
{
    public Room currentRoom;
    public Room winRoom;
    Dictionary<string, Room> exitDictionary = new Dictionary<string, Room>();
    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
    }

    public Room GetRoom()
    {
        return currentRoom;
    }

    public void UnpackExitsInRoom()
    {
        if (currentRoom != null)
        {
            for (int i = 0; i < currentRoom.exits.Length; i++)
            {
                exitDictionary.Add(currentRoom.exits[i].keyString, currentRoom.exits[i].valueRoom);
                controller.directionDescriptionsInRoom.Add(currentRoom.exits[i].exitDescription);
            }

        }

    }

    public void AttemptToChangeRooms(string directionNoun)
    {

        if (exitDictionary.ContainsKey(directionNoun))
        {
            currentRoom = exitDictionary[directionNoun];
            if (directionNoun == "up" || directionNoun == "down")
            {
                controller.LogStringWithReturn("You go " + directionNoun);
            }
            else
            {
                controller.LogStringWithReturn("You head off to the " + directionNoun);
            }
            controller.DisplayRoomText();
        }
        else
        {
            controller.LogStringWithReturn("There is no path to the " + directionNoun);
        }
        
    }

    public void ClearExits()
    {
        exitDictionary.Clear();
    }

    public void LookAtRoom()
    {
        controller.LogStringWithReturn(currentRoom.description);
    }

    public void LookAtExits()
    {
        for (int i = 0; i < currentRoom.exits.Length; i++)
        {
            controller.LogStringWithoutReturn(currentRoom.exits[i].exitDescription);
        }
    }
}

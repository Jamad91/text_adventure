using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Response
{
    [TextArea]
    public string isHoldingGivenItemResponse;
    [TextArea]
    public string notHoldingGivenItemResponse;

    public InteractableObject itemToBeGiven;
    public InteractableObject itemToGiveAway;
}

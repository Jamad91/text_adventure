using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Response
{
    [TextArea]
    public string notHoldingGivenItemResponse;
    [TextArea]
    public string beingGivenItemResponse;
    [TextArea]
    public string isHoldingGivenItemResponse;
    
    public InteractableObject itemToBeGiven;
    public InteractableObject itemToGiveAway;
}

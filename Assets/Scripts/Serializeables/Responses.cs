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
    [TextArea]
    public string doesNotWantItemResponse;
    
    public InteractableObject itemToBeGiven = null;
    public InteractableObject itemToGiveAway = null;
}

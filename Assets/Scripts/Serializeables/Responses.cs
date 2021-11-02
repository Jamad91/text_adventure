using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Response
{
    public bool isHoldingGivenItem;
    [TextArea]
    public string isHoldingGivenItemResponse;
    [TextArea]
    public string notHoldingGivenItemResponse;

    public bool isHoldingItemToGive;
    public InteractableObject itemToGive;

}

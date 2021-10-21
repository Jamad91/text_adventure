using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Response
{
    public bool holdingItem;
    [TextArea]
    public string holdingResponse;
    [TextArea]
    public string notHoldingResponse;
}

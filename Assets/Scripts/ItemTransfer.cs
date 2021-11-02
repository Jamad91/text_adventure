using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemTransfer : MonoBehaviour
{
    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
    }
}

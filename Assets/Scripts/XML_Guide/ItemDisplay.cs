using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemDisplay : MonoBehaviour
{
    public ItemBlock blockPrefab;

    // Start is called before the first frame update
    void Start()
    {
        foreach (ItemEntry item in XMLManager.ins.itemDb.list)
        {
            Display();
        }
    }

    public void Display()
    {
        foreach (Transform child in transform)
        {
            Destroy(child.gameObject);
        }

        foreach (ItemEntry item in XMLManager.ins.itemDb.list)
        {
            ItemBlock newBlock = Instantiate(blockPrefab) as ItemBlock;
            newBlock.transform.SetParent(transform, false);
            newBlock.Display(item);
        }
            
    }
}

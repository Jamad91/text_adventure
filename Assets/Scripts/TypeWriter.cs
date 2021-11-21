using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TypeWriter : MonoBehaviour
{

    [SerializeField]
    float delay = 0.05f;

    Text txt;
    string story;

    void Awake()
    {
        txt = GetComponent<Text>();
        story = txt.text;
        txt.text = "";

        

        // TODO: add optional delay when to start
        StartCoroutine("PlayText");
    }

    IEnumerator PlayText()
    {
        foreach (char c in story)
        {
            txt.text += c;
            yield return new WaitForSeconds(delay);
        }
    }

}

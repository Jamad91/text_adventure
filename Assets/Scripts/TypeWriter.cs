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
    public bool textFullyRendered = false;

    void Awake()
    {
        txt = GetComponent<Text>();
        story = txt.text;
        txt.text = "";

        StartCoroutine("PlayText");
    }

    IEnumerator PlayText()
    {
        foreach (char c in story)
        {
            txt.text += c;
            yield return new WaitForSeconds(delay);

        }
        textFullyRendered = true;
    }

    public bool IsTextRendered()
    {
        return textFullyRendered;
    }

}

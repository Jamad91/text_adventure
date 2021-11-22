using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleScript : MonoBehaviour
{
    [SerializeField]
    GameObject displayText;

    private void Awake()
    {
        StartCoroutine("LoadOpeningText");
    }

    IEnumerator LoadOpeningText()
    {
        yield return new WaitForSeconds(65f);
        displayText.SetActive(true);
    }
}

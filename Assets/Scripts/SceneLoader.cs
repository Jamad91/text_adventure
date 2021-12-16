using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{

    Scene currentScene;
    TypeWriter typeWriter;

    [SerializeField]
    CheckIfMobileForUnityWebGL.Samples.DisplayPCOrMobile displayPCOrMobile;
    [SerializeField]
    GameObject inputfield;
    [SerializeField]
    GameObject titleText;
    [SerializeField]
    GameObject phoneText;

    private void Awake()
    {
        if (titleText != null && titleText.GetComponent<TypeWriter>() != null)
        {
            typeWriter = titleText.GetComponent<TypeWriter>();
        }
    }

    private void Update()
    {
        if (typeWriter != null && typeWriter.IsTextRendered() == true)
        {
            if (inputfield != null)
            {
                inputfield.SetActive(true);
            }
        }
    }

    public void LoadStart()
    {
        titleText.SetActive(true);
    }

    public void LoadMobileScreen()
    {
        phoneText.SetActive(true);
    }

    public int GetScene()
    {
        return SceneManager.GetActiveScene().buildIndex;
    }

    public void LoadScene(int i)
    {
        SceneManager.LoadScene(i);
    }

    public void EndGame()
    {
        StartCoroutine("LoadEnd");
    }

    private IEnumerator LoadEnd()
    {
        yield return new WaitForSeconds(5f);
        SceneManager.LoadScene(4);
    }


    public void StartMenu()
    {
        StartCoroutine("LoadMainMenu");
    }

    private IEnumerator LoadMainMenu()
    {
        yield return new WaitForSeconds(12f);
        SceneManager.LoadScene(0);
    }

}

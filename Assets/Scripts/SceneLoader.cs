using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    Scene currentScene;

    [SerializeField]
    CheckIfMobileForUnityWebGL.Samples.DisplayPCOrMobile displayPCOrMobile;
    [SerializeField]
    GameObject inputfield;
    [SerializeField]
    GameObject titleText;
    [SerializeField]
    GameObject phoneText;

    //private void Start()
    //{
    //    //displayPCOrMobile = GetComponent<CheckIfMobileForUnityWebGL.Samples.DisplayPCOrMobile>();

    //    currentScene = SceneManager.GetActiveScene();
    //    if (currentScene.buildIndex == 0)
    //    {
    //        Debug.Log("Is mobile: " + displayPCOrMobile.GetIsMobile());
    //        if (displayPCOrMobile.GetIsMobile() == true)
    //        {
    //            phoneText.SetActive(true);
    //        }
    //        else
    //        {
    //            titleText.SetActive(true);
    //            StartCoroutine("StartGame");
    //        }
    //    }
    //}

    public void LoadStart()
    {
        titleText.SetActive(true);
        StartCoroutine("StartGame");
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

    private IEnumerator StartGame()
    {
        yield return new WaitForSeconds(115f);
        if (inputfield != null)
        {
            inputfield.SetActive(true);
        }
    }

    public void EndGame()
    {
        StartCoroutine("LoadEnd");
    }

    private IEnumerator LoadEnd()
    {
        yield return new WaitForSeconds(5f);
        SceneManager.LoadScene(2);
    }


}

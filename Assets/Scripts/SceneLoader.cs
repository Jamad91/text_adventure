using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    Scene currentScene;

    [SerializeField]
    GameObject inputfield;

    private void Start()
    {
        currentScene = SceneManager.GetActiveScene();
        if (currentScene.buildIndex == 0)
        {
            StartCoroutine("StartGame");
        }
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

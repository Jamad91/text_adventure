using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    Scene currentScene;

    void Start()
    {
        currentScene = SceneManager.GetActiveScene();
        Debug.Log(currentScene.name);
        StartCoroutine("LoadGame");
    }

    private IEnumerator LoadGame()
    {

        yield return new WaitForSeconds(60f); // wait two minutes
                                               //Launch Train
        SceneManager.LoadScene(1);
    }
}

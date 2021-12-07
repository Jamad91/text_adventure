using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class TextInput : MonoBehaviour
{
    [SerializeField]
    public Text displayText;

    public InputField inputField;
    [HideInInspector] public List<string> previousCommands;
    [HideInInspector] public int previousMessageIndex;

    SceneLoader sceneLoader;
    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
        sceneLoader = GetComponent<SceneLoader>();
        if (inputField != null)
        {
            inputField.onEndEdit.AddListener(AcceptStringInput);
            previousCommands = new List<string>();
        }
    }

    private void Update()
    {
        DisplayPreviousCommand();
    }

    void AcceptStringInput(string userInput)
    {
        if (!Input.GetMouseButton(0) && !Input.GetMouseButton(1) && !Input.GetMouseButton(2))
        {
            bool actionTaken = false;
            userInput = userInput.ToLower();
            if (controller != null)
            {


                controller.LogStringWithReturn(userInput);

                char[] delimiterCharacters = { ' ' };
                string[] serparatedInputWords = userInput.Split(delimiterCharacters);

                for (int i = 0; i < controller.inputActions.Length; i++)
                {
                    InputAction inputAction = controller.inputActions[i];
                    if (inputAction.keyword == serparatedInputWords[0])
                    {
                        inputAction.RespondToInput(controller, serparatedInputWords);
                        actionTaken = true;
                    }
                }
                //previousCommands.Add(userInput);
                previousMessageIndex = previousCommands.Count;
                InputComplete();
                if (actionTaken == false && userInput.Length > 0)
                {
                    controller.LogStringWithReturn("That is not an available action. Please type HELP if you need assistance.");
                }
            }

            if (sceneLoader.GetScene() == 0)
            {
                if (userInput.ToLower() == "new")
                {
                    controller.dataManager.SetLoadedFile(false);
                    sceneLoader.LoadScene(1);
                }
                else if (userInput.ToLower() == "load")
                {
                    //                if (!System.IO.File.Exists(Application.persistentDataPath + "/Scripts/DataManagement/StreamingFiles/XML/inventory_data.xml") && !System.IO.File.Exists(Application.persistentDataPath+ "/Scripts/DataManagement/StreamingFiles/XML/transform_data.xml"))
                    if (PlayerPrefs.GetString(controller.dataManager.inventoryDbName).Length == 0 && PlayerPrefs.GetString(controller.dataManager.transformDbName).Length == 0)
                    {
                        controller.dataManager.SetLoadedFile(false);
                        sceneLoader.LoadScene(1);
                    }
                    else
                    {
                        controller.dataManager.SetLoadedFile(true);
                        displayText.text += "\n\nGame Loading...";
                        controller.Load();
                    }
                }
            }
            else if (sceneLoader.GetScene() == 1)
            {
                if (userInput.ToLower() == "begin")
                {
                    sceneLoader.LoadScene(2);
                }
                else
                {
                    displayText.text += "If you're already having a hard time spelling, this is going to be rough for you. Type \"BEGIN\" and hit ENTER.\n\n\n";
                }
            }
            else if (sceneLoader.GetScene() == 2)
            {
                previousCommands.Add(userInput);
                previousMessageIndex = previousCommands.Count;
                InputComplete();
            }
        }
    }

    


    void InputComplete()
    {
        controller.DisplayLoggedText();
        inputField.ActivateInputField();
        inputField.text = null;
    }

    void DisplayPreviousCommand()
    {
        
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            Debug.Log("hitting up key");
            if (previousMessageIndex >= 0)
            {
                previousMessageIndex--;
            }

            if (previousCommands.Count > 0 && previousMessageIndex > -1)
            {
                inputField.text = previousCommands[previousMessageIndex];
            }
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (previousMessageIndex < previousCommands.Count)
            {
                previousMessageIndex++;
            }

            if (previousCommands.Count > 0)
            {
                if (previousMessageIndex < previousCommands.Count)
                {
                    inputField.text = previousCommands[previousMessageIndex];
                }
                else if (previousMessageIndex == previousCommands.Count)
                {
                    inputField.text = "";
                }
            }
        }
        
    }

    
}

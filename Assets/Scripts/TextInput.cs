using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextInput : MonoBehaviour
{
    public InputField inputField;
    [HideInInspector] public List<string> previousCommands;
    [HideInInspector] public int previousMessageIndex;

    GameController controller;

    private void Awake()
    {
        controller = GetComponent<GameController>();
        inputField.onEndEdit.AddListener(AcceptStringInput);
        previousCommands = new List<string>();
        
    }

    private void Update()
    {
        DisplayPreviousCommand();
    }

    void AcceptStringInput(string userInput)
    {
        userInput = userInput.ToLower();
        controller.LogStringWithReturn(userInput);

        char[] delimiterCharacters = { ' ' };
        string[] serparatedInputWords = userInput.Split(delimiterCharacters);
  
        for (int i = 0; i < controller.inputActions.Length; i++)
        {
            InputAction inputAction = controller.inputActions[i];
            if (inputAction.keyword == serparatedInputWords[0])
            {
                inputAction.RespondToInput(controller, serparatedInputWords);
            }
        }
        previousCommands.Add(userInput);
        previousMessageIndex = previousCommands.Count;
        InputComplete();
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
            previousMessageIndex--;
            if (previousCommands.Count > 0 && previousMessageIndex > -1)
            {
                inputField.text = previousCommands[previousMessageIndex];
            }
        }
    }
}

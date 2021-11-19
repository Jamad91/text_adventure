﻿using System.Collections;
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
        Debug.Log(previousMessageIndex);

        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            Debug.Log("hitting");
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class input_field : MonoBehaviour
{
    public InputField mainInputField;
    //6-15-2023
    //debug commands for testing
    public void Start()
    {
        mainInputField = this.GetComponent<InputField>();
        //Adds a listener to the main input field and invokes a method when the value changes.
        mainInputField.onValueChanged.AddListener(delegate { ValueChangeCheck(); });
    }

    // Invoked when the value of the text field changes.
    public void ValueChangeCheck()
    {
        Debug.Log("Value Changed"+this.GetComponentInChildren<Text>().text);

        if (this.GetComponentInChildren<Text>().text=="unlock_levels")
        {
            GameObject.Find("sela").GetComponent<LevelHistory>().unlockPlayerData();
        }
        else if (this.GetComponentInChildren<Text>().text=="lock_levels")
        {
            GameObject.Find("sela").GetComponent<LevelHistory>().resetPlayerData();
        }
    }
}

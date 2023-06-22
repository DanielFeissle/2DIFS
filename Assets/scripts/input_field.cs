using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class input_field : MonoBehaviour, ISelectHandler, IDeselectHandler
{
    public InputField mainInputField;
    bool inp_selected = false;
    public void OnDeselect(BaseEventData eventData)
    {
        inp_selected = false;
        Debug.Log("no longer selected");
    }

    public void OnSelect(BaseEventData eventData)
    {
        inp_selected = true;
        Debug.Log("YUOU SELECTED");
    }


    //6-15-2023
    //debug commands for testing
    public void Start()
    {
        mainInputField = this.GetComponent<InputField>();
        //Adds a listener to the main input field and invokes a method when the value changes.
        mainInputField.onValueChanged.AddListener(delegate { ValueChangeCheck(); });

    }
    public void Update()
    {
        if (Input.GetKeyDown("return") && inp_selected==true )
        {
            string return_result = this.GetComponentInChildren<Text>().text;
            Debug.Log("BUTTON RETURNED");
            if (this.GetComponentInChildren<Text>().text == "unlock_levels")
            {
                GameObject.Find("sela").GetComponent<LevelHistory>().unlockPlayerData();
                return_result += "++OK";
            }
            else if (this.GetComponentInChildren<Text>().text == "lock_levels")
            {
                GameObject.Find("sela").GetComponent<LevelHistory>().resetPlayerData();
                return_result += "++OK";
            }
            else
            {
                return_result += "--NOK";
            }
            string[] totstr = GameObject.Find("txt_inp_history").GetComponent<Text>().text.Split('\n');
            if (totstr.Length>=15)
            {
                Debug.Log("CLEANING UP");
                GameObject.Find("txt_inp_history").GetComponent<Text>().text = null;
                for (int i=1;i<totstr.Length-1; i++)
                {
                    GameObject.Find("txt_inp_history").GetComponent<Text>().text += totstr[i] + "\n";
                }
                GameObject.Find("txt_inp_history").GetComponent<Text>().text += return_result + "\n";
            }
            else
            {
                GameObject.Find("txt_inp_history").GetComponent<Text>().text += return_result + "\n";
            }
            this.GetComponent<InputField>().ActivateInputField();
            this.GetComponent<InputField>().text = "";
        }
    }
    // Invoked when the value of the text field changes.
    public void ValueChangeCheck()
    {


    }




}

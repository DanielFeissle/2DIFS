using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ui_getValue_disp : MonoBehaviour
{
    //8-24-2022
//This is a general ui value descriptor script
//Assign this script to the child (text) and have the parent be the one withe the slider or user input field.
//Then in the editor place a description of what is being shown during execution
    public string UiDescription;

    // Update is called once per frame
    void Update()
    {
        this.GetComponent<Text>().text = UiDescription+": "+ this.transform.parent.gameObject.GetComponent<Slider>().value.ToString();
    }
}

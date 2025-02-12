using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class realGenericCheckBox : MonoBehaviour
{
    public Toggle toggle;
    public int buttonVal = 0; //0 normal 1 easy 2 mythic
    public GameObject listner;
    // Use this for initialization


    public Toggle myToggle;

    void Start()
    {
       
        myToggle.onValueChanged.AddListener(delegate {
            ToggleValueChanged(myToggle);
        });
    }



    void ToggleValueChanged(Toggle change)
    {
        if (change.isOn)
        {
            GameObject.Find(listner.name).GetComponent<realGenericButtonListner>().buttonScreeen = buttonVal;
            Debug.Log("You have clicked " + this.gameObject.name + " button with a value of " + buttonVal + "!");
            Debug.Log("Checkbox is checked");
        }
        else
        {
            GameObject.Find(listner.name).GetComponent<realGenericButtonListner>().buttonScreeen = buttonVal;
            Debug.Log("You have clicked " + this.gameObject.name + " button with a value of " + buttonVal + "!");
            Debug.Log("Checkbox is unchecked");
        }
    }
}

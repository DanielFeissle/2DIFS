using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GenericButtonController : MonoBehaviour {
    //Version 1 August 2020
    //Version 2 December 2021- make it general to use in different games without specific code changes
    public Button yourButton;
    public int buttonVal=0; //0 normal 1 easy 2 mythic
    public GameObject mastercontroller;
    public ScriptableObject mastscript;
    int buttonTemp;
   // float delay = 0.5f; //only half delay
   // float nextUsage;

    // Use this for initialization
    void Start () {
        yourButton = gameObject.GetComponent<Button>();
        yourButton.onClick.AddListener(TaskOnClick);
        buttonTemp = buttonVal;
        buttonVal = -1;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
   

        void TaskOnClick()
    {
        //  if (Time.time > nextUsage) //continue scrolling
        //  {
        buttonVal = buttonTemp;
            Debug.Log("You have clicked the "+this.gameObject.name+" button with a value of: "+buttonVal+"!");
        buttonVal = -1;
        //    nextUsage = Time.time + delay; //it is on display
        // }

    }
}

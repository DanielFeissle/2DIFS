using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class btn_title_quit : MonoBehaviour
{
    float delay = 0.5f; //only half delay
    float nextUsage;
    bool buttton_clicked = false;
    public Button yourButton;
    // Start is called before the first frame update
    void Start()
    {
        EventSystem.current.firstSelectedGameObject = this.gameObject;
        Button btn = yourButton.GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
    }

    void TaskOnClick()
    {
        nextUsage = Time.time + delay; //it is on display
        buttton_clicked = true;
        try
        {
            //string debugText = GameObject.Find("txt_debugCommand").GetComponent<InputField>().text;
            //  if (debugText == "2")
            {
                //load the final iteration

            }
        }
        catch
        {
            Debug.Log("Old Command warning");
        }



    }
    GameObject lastSelected;
    // Update is called once per frame
    void Update()
    {

        if (Time.time > nextUsage && buttton_clicked == true) //continue scrolling
        {
#if UNITY_EDITOR
            if (EditorApplication.isPlaying)
            {
                EditorApplication.isPlaying = false;
            }
#else 
        Application.Quit();
#endif
            buttton_clicked = false;
            Debug.Log("QUIT");
            
            nextUsage = Time.time + delay; //it is on display
        }
    }
}

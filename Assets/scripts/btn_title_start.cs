using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class btn_title_start : MonoBehaviour
{
    float delay = 0.5f; //only half delay
    float nextUsage;
    bool buttton_clicked = false;
    public Button yourButton;
    // Start is called before the first frame update
    void Start()
    {
        EventSystem.current.firstSelectedGameObject =this.gameObject;
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

        //this is for the overworld mode
        Debug.Log("You have clicked the button!2222");
      //  GameObject.Find("PlayerShip").GetComponent<playerController>().playMode = 1;
        //    SceneManager.LoadScene("stage_OverSpace-world-duh");
        //     SceneManager.LoadScene("stage_Convention");
        try
        {
        //    this.gameObject.GetComponent<DiffSettings>().btn_dif = 1;
        }
        catch
        {

        }

        //   GameObject.Find("PlayerShip").GetComponent<LevelHistory>().LoadScene("stage_OverSpace-world-duh");


    }
    // Update is called once per frame
    void Update()
    {
        if (Time.time > nextUsage && buttton_clicked==true) //continue scrolling
        {
            buttton_clicked = false;
            GameObject.Find("sela").GetComponent<LevelHistory>().LoadScene("SampleScene", this.GetComponentInChildren<Text>().text);
            nextUsage = Time.time + delay; //it is on display
        }
     }
}

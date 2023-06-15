using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class btn_stage_selection : MonoBehaviour
{
   
    public Button yourButton;

    void TaskOnClick()
    {
        //6-15-2023
        //keeping the old style for now, could rather just use this.name, since the level is in the name.
        if (Camera.main.GetComponent<level_select_data>().scene_to_load== this.GetComponentInChildren<Text>().text.Split('\n')[0])
        {
            GameObject.Find("sela").GetComponent<LevelHistory>().LoadScene("SampleScene", this.GetComponentInChildren<Text>().text.Split('\n')[0]);
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
        else //else- select /load the preview in the pane
        {
            Camera.main.GetComponent<level_select_data>().deleteAll();
            Camera.main.GetComponent<level_select_data>().scene_to_load = this.GetComponentInChildren<Text>().text.Split('\n')[0];
            Camera.main.GetComponent<world_scene_preview>().ReadString(this.GetComponentInChildren<Text>().text.Split('\n')[0]);
        }
     

    }
    // Start is called before the first frame update
    void Start()
    {
        yourButton = this.gameObject.GetComponent<Button>();

           Button btn = yourButton.GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

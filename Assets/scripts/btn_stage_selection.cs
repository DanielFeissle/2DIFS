using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class btn_stage_selection : MonoBehaviour
{
   
    public Button yourButton;

    void TaskOnClick()
    {
        if (Camera.main.GetComponent<level_select_data>().scene_to_load== this.GetComponentInChildren<Text>().text)
        {
            GameObject.Find("sela").GetComponent<LevelHistory>().LoadScene("SampleScene", this.GetComponentInChildren<Text>().text);
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
            Camera.main.GetComponent<level_select_data>().scene_to_load = this.GetComponentInChildren<Text>().text;
            Camera.main.GetComponent<world_scene_preview>().ReadString(this.GetComponentInChildren<Text>().text);
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

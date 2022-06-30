using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class btn_title_start : MonoBehaviour
{
    public Button yourButton;
    // Start is called before the first frame update
    void Start()
    {
        Button btn = yourButton.GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
    }

    void TaskOnClick()
    {
        GameObject.Find("player").GetComponent<LevelHistory>().LoadScene("SampleScene");
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
        
    }
}

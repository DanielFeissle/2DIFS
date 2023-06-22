using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class btn_title_stage_select : MonoBehaviour, ISelectHandler
{
    //6-22-2023
    //added delay for button animations
    float delay = 0.5f; //only half delay
    float nextUsage;
    bool buttton_clicked = false;
    int dbg_count = 0;
    float dbg_delay = 0.5f; //only half delay
    float dbg_nextUsage;
    public Button yourButton;
    GameObject debug_term;
    // Start is called before the first frame update
    void Start()
    {
        debug_term = GameObject.Find("terminal_Background");
        debug_term.SetActive(false);
        dbg_nextUsage = Time.time + dbg_delay; //it is on display
        Button btn = yourButton.GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
    }
    public void OnSelect(BaseEventData eventData)
    {
       // Debug.Log("THE COUNT IS " + dbg_count);
        if (Time.time > dbg_nextUsage ) 
        {
           
            dbg_nextUsage = Time.time + dbg_delay; //it is on display
            dbg_count++;
            if (dbg_count > 5)
            {
                dbg_count = 0;
               //  Debug.Log("THE COUNT IS " + dbg_count);
                if (debug_term.activeSelf)
                {
                    debug_term.SetActive(false);
                }
                else
                {
                    debug_term.SetActive(true);
                }

            }
        }


    }
    void TaskOnClick()
    {
        nextUsage = Time.time + delay; //it is on display
        buttton_clicked = true;

    }
    // Update is called once per frame
    void Update()
    {
        if (Time.time > nextUsage && buttton_clicked == true) //continue scrolling
        {
            dbg_count = 0;
            GameObject.Find("sela").GetComponent<LevelHistory>().LoadScene("scene_select_preview", "no-scene");
        }
     }
}

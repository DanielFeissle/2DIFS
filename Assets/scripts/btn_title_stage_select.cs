using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class btn_title_stage_select : MonoBehaviour
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
        GameObject.Find("sela").GetComponent<LevelHistory>().LoadScene("scene_select_preview","no-scene");

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

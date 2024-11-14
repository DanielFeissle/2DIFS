using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class button_scene_select_manager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (this.GetComponent<realGenericButtonListner>().buttonScreeen==5)
        {
        
            SceneManager.LoadScene("title_scene");
        }
        else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 7)
        {
            //toggle canvas text (2DIFS 11-13-2024)
            if (GameObject.Find("txt_OBJ"))
            {
                if (GameObject.Find("txt_OBJ").GetComponent<Text>().enabled == true)
                {
                    GameObject.Find("txt_OBJ").GetComponent<Text>().enabled = false;
                    GameObject.Find("Panel").GetComponent<Image>().enabled = true;
                }
                else
                {
                    GameObject.Find("txt_OBJ").GetComponent<Text>().enabled = true;
                    GameObject.Find("Panel").GetComponent<Image>().enabled = false;
                }

            }

            this.GetComponent<realGenericButtonListner>().buttonScreeen = 0;
        }
    }
}

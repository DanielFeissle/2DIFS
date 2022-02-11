using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchAndDie : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    //2-9-2022 to do make this an array
   public string defTag1 = "";
    public string defTag2 = "";
    public string defTag3 = "";
    public string[] myTags;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        bool valFound = false;
        //2-10-22 Now using array hopefully
        foreach (string tag in myTags)
        {
            if (collision.tag == tag)
            {
                valFound = true;
            }
        }
        if (valFound==false)
        {
            GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal = true;
            GameObject.Find("Player_plane").GetComponent<mplane_controller>().postmortem = 1;
          
        }    

        /*
        if (collision.tag != defTag1)
        {
            if (collision.tag != defTag2)
            {
                if (collision.tag != defTag3)
                {
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal = true;
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().postmortem = 1;
                }
            }
        }
        */
    }
}

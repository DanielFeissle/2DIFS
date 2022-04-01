using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class text_chucker : MonoBehaviour
{
    //Generalized text handler 3-31-2022
    public string textCall;
    public int readMode = -1; //-1 OFF, 0 auto mode (one liner), 1, player prompt
    public int locCnt = 0;
    // Start is called before the first frame update
    void Start()
    {
        locCnt = 0;
        nextUsage = Time.time + delay;
    }
    float delay = 0.05f; //only half delay
    float nextUsage;
    // Update is called once per frame
    void Update()
    {

    }
    string liner = "";
    private void LateUpdate()
    {

        if (readMode != -1)
        {
            //we are go
            TextAsset totcont=null;
            //999 lines is the most you can store per file

            int maxArrayText = 0;
         
            if (this.GetComponent<Image>().enabled==false)
            {
                totcont = (TextAsset)Resources.Load("text\\" + textCall, typeof(TextAsset));
                //this area is for dynamic text sizes based on the situration
                if (textCall== "ui_death_noeject")
                {
                    GameObject.Find("txt_disc").GetComponent<Text>().fontSize = 120;
                }
                this.GetComponent<Image>().enabled = true;
                locCnt = 1;
                //     this.GetComponent<Renderer>().enabled = true;

                foreach (string tta in totcont.text.Split('\n'))
                {
                    maxArrayText++;
                }
                string[] linerA = new string[maxArrayText];
                linerA = totcont.text.Split('\n');
                liner = linerA[Random.Range(0, maxArrayText)];
            }    



            if (locCnt != 0)
            {
                if (Time.time > nextUsage) //continue scrolling
                {
                  
                     if (locCnt > liner.Length-1)
                    {
                        readMode = -1;
                        textCall = "";
                    }
                    GameObject uiAltiText = GameObject.Find("txt_disc");
                    Text delta1 = uiAltiText.GetComponent<Text>();
                    delta1.text = liner.Substring(0, locCnt);

                 //   Debug.Log("HI THERE" + locCnt +"/"+liner.Length+ liner);
                    nextUsage = Time.time + delay; //it is on display
                    locCnt++;
                }

            }



        }

        if (GameObject.Find("img_discussion").GetComponent<Image>().enabled == false)
        {
            GameObject uiAltiText = GameObject.Find("txt_disc");
            Text delta1 = uiAltiText.GetComponent<Text>();
            delta1.text = "";
            readMode = -1;
        }


    }
}

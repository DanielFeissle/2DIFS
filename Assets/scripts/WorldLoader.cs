using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;
using UnityEngine.UI;

public class WorldLoader : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("HI");
         ReadString("1x1");

     //   TextAsset txt = (TextAsset)Resources.Load("scenes\\readme", typeof(TextAsset));
      //  string content = txt.text;
      //  GameObject dad5 = GameObject.Find("poop");
      //  TextMesh TxtTm = dad5.GetComponent<TextMesh>();
      //  TxtTm.text = txt.ToString();
      //  Debug.Log("DONE");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
 

    //https://support.unity3d.com/hc/en-us/articles/115000341143-How-do-I-read-and-write-data-from-a-text-file-
    static void ReadString(string sceneRead)
    {
        int xpos = 0;

        TextAsset txt = (TextAsset)Resources.Load("scenes\\"+sceneRead, typeof(TextAsset));
       foreach (string tta in txt.text.Split('\n') )
                {
            if (tta.Substring(0,1)=="#")
            {
                Debug.Log("line comment");
             
            }
            else if (tta.Substring(0,3)=="OBJ")
            {
                string[] sclir = tta.Split(',');
                GameObject uiAltiText2 = GameObject.Find("txt_OBJ");
                Text delta21 = uiAltiText2.GetComponent<Text>();
                delta21.text = "DRF-"+sclir[1]+"\n Reach a height of "+ sclir[2]+" and land in "+ sclir[3]+" to "+ sclir[4];
                GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_title = sclir[1];
                GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Height = Convert.ToInt32(sclir[2]);
                GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_s = Convert.ToInt32(sclir[3]);
                GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_e = Convert.ToInt32(sclir[4]);

            }
            else
            {
                string[] sclir = tta.Split(',');
                GameObject picky = Instantiate(Resources.Load(sclir[0])) as GameObject;
                if (sclir[1]=="1")
                {
                    picky.tag = "ground";
                } else if (sclir[1] == "2")
                {
                    picky.tag = "game";
                }
                var renderer = picky.GetComponent<Renderer>();
                float width = renderer.bounds.size.x;
                float height = renderer.bounds.size.y;
                int startX = Convert.ToInt32(sclir[2]);
                int endX = Convert.ToInt32(sclir[3]);
                int startY = Convert.ToInt32(sclir[4]);
                int endY = Convert.ToInt32(sclir[5]);

                for (float x=startX;x<endX;x=x+ width)
                {
                    for (float y = startY; y < endY; y = y + height)
                    {
                        GameObject picky2 = Instantiate(Resources.Load(sclir[0])) as GameObject;
                        Debug.Log("BUILDING"+sclir[0] + ":" + x + "," + y);
                        picky2.name = sclir[0]+":"+x+","+y;
                        picky2.transform.position = new Vector2(x, y);
                    }
                }

              
            //    TextMesh TxtTm = picky.GetComponent<TextMesh>();
             //   TxtTm.text = tta.ToString();
                //   xpos = xpos + 10;
            }

        }
        Debug.Log("DONE");
    }

}

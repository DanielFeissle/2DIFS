using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;

public class WorldLoader : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("HI");


         ReadString();

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
    static void ReadString()
    {
        int xpos = 0;

        TextAsset txt = (TextAsset)Resources.Load("scenes\\readme", typeof(TextAsset));
       foreach (string tta in txt.text.Split('\n') )
                {
            GameObject picky = Instantiate(Resources.Load("DefTextMesh")) as GameObject;
            picky.name = "regCool";
            picky.transform.position = new Vector2(xpos, 0);
            TextMesh TxtTm = picky.GetComponent<TextMesh>();
            TxtTm.text = tta.ToString();
            xpos = xpos + 10;
        }

    }

}

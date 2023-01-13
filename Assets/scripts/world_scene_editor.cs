using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class world_scene_editor : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    Renderer objRenderer;
    GameObject[] gamy;
    GameObject[] bamy;
    GameObject[] damy;
    private Camera cam;

    public void clearPreview()
    {
        //12-14-2022
        //this is how to clear the preview screen
        //this is not called at all
        //1-11-2023
        //now this is for editor of levels
        gamy = GameObject.FindGameObjectsWithTag("ground");
        bamy = GameObject.FindGameObjectsWithTag("background");
        damy = GameObject.FindGameObjectsWithTag("detail");


        if (gamy != null)
        {
            GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().resetStage = false;
            foreach (var obj in gamy)
                Destroy(obj);
            foreach (var obj in bamy)
                Destroy(obj);
            foreach (var obj in damy)
                Destroy(obj);
            
        }
    }

    //https://support.unity3d.com/hc/en-us/articles/115000341143-How-do-I-read-and-write-data-from-a-text-file-
    public void ReadString(string sceneRead)
    {
        int xpos = 0;
        //12-8-2022
        //perhaps a better method to catch if a file does not exist
        TextAsset txt = (TextAsset)Resources.Load("scenes\\" + sceneRead, typeof(TextAsset));
        if (txt == null)
        {
            txt = (TextAsset)Resources.Load("scenes\\1x1", typeof(TextAsset));
        }
        foreach (string tta in txt.text.Split('\n'))
        {
            if (tta.Substring(0, 1) == "#")
            {
                Debug.Log("line comment");

            }
            else if (tta.Substring(0, 3) == "GTO")
            {
                //template will have most up to date content
                //(0-Height/distance obj, 1-Land on gameobject name, 2-Pass checkpoints, 3-Grab object and get to designated end point)
                string[] sclir = tta.Split(',');
                GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective = Convert.ToInt32(sclir[1]);

            }
            else if (tta.Substring(0, 3) == "OBJ")
            {

                string[] sclir = tta.Split(',');
                GameObject uiAltiText2 = GameObject.Find("txt_OBJ");
                Text delta21 = uiAltiText2.GetComponent<Text>();

                if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective == 0)
                {
                    delta21.text = "DRF-" + sclir[1] + "\n Reach a height of " + sclir[2] + " and land in " + sclir[3] + " to " + sclir[4];
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_title = sclir[1];
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Height = Convert.ToInt32(sclir[2]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_s = Convert.ToInt32(sclir[3]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_e = Convert.ToInt32(sclir[4]);
                }
                else if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective == 1)
                {

                }


            }
            else if (tta.Substring(0, 3) == "CLD")
            {
                string[] sclir = tta.Split(',');
                //Camera.main.GetComponent<weather>().cloudHeight = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WTH")
            {
                string[] sclir = tta.Split(',');
               // Camera.main.GetComponent<weather>().cloudy = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WND")
            {
                string[] sclir = tta.Split(',');
                //Camera.main.GetComponent<weather>().AirSpeed = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAD")
            {
                string[] sclir = tta.Split(',');
              //  Camera.main.GetComponent<weather>().radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAB")
            {
                string[] sclir = tta.Split(',');
              //  Camera.main.GetComponent<weather>().background_radiosity = int.Parse(sclir[1]);
            }
             
            else
            {

                string[] sclir = tta.Split(',');
                // Debug.Log(Resources.Load(sclir[0].ToString()));
                GameObject picky = Instantiate(Resources.Load(sclir[0])) as GameObject;
                if (sclir[1] == "1")
                {
                    picky.tag = "ground";
                }
                else if (sclir[1] == "2")
                {
                    picky.tag = "game";
                }
                var renderer = picky.GetComponent<Renderer>();
                GameObject.Destroy(picky);
                float width = renderer.bounds.size.x;
                float height = renderer.bounds.size.y;
                int startX = Convert.ToInt32(sclir[2]);
                int endX = Convert.ToInt32(sclir[3]);
                int startY = Convert.ToInt32(sclir[4]);
                int endY = Convert.ToInt32(sclir[5]);

                for (float x = startX; x < endX; x = x + width)
                {
                    for (float y = startY; y < endY; y = y + height)
                    {
                        GameObject picky2 = Instantiate(Resources.Load(sclir[0])) as GameObject;
                        Debug.Log("BUILDING" + sclir[0] + ":" + x + "," + y);
                        picky2.name = sceneRead + sclir[0] + ":" + x + "," + y;
                        picky2.transform.position = new Vector2(x, y);
                        //9-29-2022 pulled below from specr2, and probab somewhere else
                        //attach script during runtime
                        //We have a string holding a script name
                        string ScriptName = "general_invent_kill";
                        //We need to fetch the Type
                        System.Type MyScriptType = System.Type.GetType(ScriptName + ",Assembly-CSharp");
                        //Now that we have the Type we can use it to Add Component
                        picky2.AddComponent(MyScriptType);
                    }
                }


                //    TextMesh TxtTm = picky.GetComponent<TextMesh>();
                //   TxtTm.text = tta.ToString();
                //   xpos = xpos + 10;
            }

        }
        Debug.Log("--------------------------------------DONE");
      //  Camera.main.GetComponent<cam_distance>().sceneLoad = false;
    }
}

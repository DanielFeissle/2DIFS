using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;
using UnityEngine.UI;

public class WorldLoader : MonoBehaviour
{
    public float minX, minY, maxX,maxY;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("HI");
     //    ReadString("1x1");

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
 
    public void phonehome(string level)
    {
        GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().resetStage = true;

        minX = 0;
        //clean up stage before loading objects
        general_invent_kill[] myItems = FindObjectsOfType(typeof(general_invent_kill)) as general_invent_kill[];
        Debug.Log("Found " + myItems.Length + " instances with this script attached");
        foreach (general_invent_kill item in myItems)
        {
            Debug.Log("THIS IS THE ITEM"+item.gameObject.name);
         
           // Destroy(item.gameObject);
        }


       // GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().resetStage = false;

        Debug.Log("----------------------------------WE ARE LIVE");
        ReadString(level);
     
    }
    //https://support.unity3d.com/hc/en-us/articles/115000341143-How-do-I-read-and-write-data-from-a-text-file-
    //static void ReadString(string sceneRead)
    public void ReadString(string sceneRead)
    {
        minX = -29;
        minY = -29;
        maxX = -29;
        maxY = -29;

        int xpos = 0;
        //12-8-2022
        //perhaps a better method to catch if a file does not exist
        sceneRead = sceneRead.TrimEnd('\r', '\n');
        TextAsset txt = (TextAsset)Resources.Load("scenes\\"+sceneRead, typeof(TextAsset));
        if (txt==null)
        {
            txt = (TextAsset)Resources.Load("scenes\\1x1", typeof(TextAsset));
        }
       foreach (string tta in txt.text.Split('\n') )
                {

            if (tta == "")
            {
                Debug.Log("No line");

            }
            else if (tta.Substring(0,1)=="#")
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
            else if (tta.Substring(0,3)=="OBJ")
            {
                
                string[] sclir = tta.Split(',');
                GameObject uiAltiText2 = GameObject.Find("txt_OBJ");
                Text delta21 = uiAltiText2.GetComponent<Text>();

                if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective==0)
                {
                    delta21.text = "" + sclir[1] + "\n Reach a height of " + sclir[2] + " and land in " + sclir[3] + " to " + sclir[4];
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_title = sclir[1];
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Height = Convert.ToInt32(sclir[2]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_s = Convert.ToInt32(sclir[3]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_e = Convert.ToInt32(sclir[4]);
                    try
                    {
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_A = Convert.ToInt32(sclir[5]);
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_C = Convert.ToInt32(sclir[6]);
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_F = Convert.ToInt32(sclir[7]);
                    }
                    catch
                    {
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_A = 3000;
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_C =1500;
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_F = 1;
                    }

                }
                else if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective == 1)
                {

                }


            }
            else if (tta.Substring(0, 3) == "CLD")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<weather>().cloudHeight = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WTH")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<weather>().cloudy = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WND")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<weather>().AirSpeed = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAD")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<weather>().radiosity = Single.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAB")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<weather>().background_radiosity = Single.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "FPS")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<frame_rate>().fpss = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "GRX")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<scene_grav_change>().changeGravi(Single.Parse(sclir[1]), Physics2D.gravity.y);
            }
            else if (tta.Substring(0, 3) == "GRY")
            {
                string[] sclir = tta.Split(',');
                Camera.main.GetComponent<scene_grav_change>().changeGravi(Physics2D.gravity.x, Single.Parse(sclir[1]));
            }
            else
            {
                
                string[] sclir = tta.Split(',');
               // Debug.Log(Resources.Load(sclir[0].ToString()));
                GameObject picky = Instantiate(Resources.Load(sclir[0])) as GameObject;
                ////////////////////////////////
                //10-12-2023
                //this is to backwards compat existing scenes, if they don't have the rotate or scale configured. Use the default
                float rotateZ = 0;
                float scaleX = picky.transform.localScale.x;
                float scaleY = picky.transform.localScale.y;
                Debug.Log("WHAT IS THE LENGTH" + sclir.Length);
                if (sclir.Length > 7)
                {

                    scaleX = Convert.ToSingle(sclir[6]);
                    scaleY = Convert.ToSingle(sclir[7]);
                    rotateZ = Convert.ToSingle(sclir[8]);
                }
                picky.transform.localScale = new Vector3(scaleX, scaleY, 1);


                ////////////////////////////////
                if (sclir[1]=="1")
                {
                    picky.tag = "ground";
                } else if (sclir[1] == "2")
                {
                    picky.tag = "game";
                }
                var renderer = picky.GetComponent<Renderer>();
                GameObject.Destroy(picky);
                //   GameObject.Destroy(picky);
                float width = renderer.bounds.size.x;
                float height = renderer.bounds.size.y;
                float startX = Convert.ToSingle(sclir[2]); //single is float alias
                float endX = Convert.ToSingle(sclir[3]);
                float startY = Convert.ToSingle(sclir[4]);
                float endY = Convert.ToSingle(sclir[5]);

                for (float x=startX;x<endX;x=x+ width)
                {
                    if (x<minX)
                    {
                        minX = x;
                    }
                    if (x>maxX)
                    {
                        maxX = x;
                    }
                    
                    for (float y = startY; y < endY; y = y + height)
                    {
                        if (y < minY)
                        {
                            minY = y;
                        }
                        if (y > maxY)
                        {
                            maxY = y;
                        }
                        GameObject picky2 = Instantiate(Resources.Load(sclir[0])) as GameObject;
                        //10-12-2023
                        //  picky2.transform.eulerAngles = Vector3.forward * rotateZ;

                        picky2.transform.localScale = new Vector3(scaleX, scaleY, 1);
                        picky2.transform.rotation = Quaternion.Euler(Vector3.forward * rotateZ);

                        //10-12-2023
                        Debug.Log("BUILDING"+sclir[0] + ":" + x + "," + y);
                        picky2.name = sceneRead + sclir[0]+":"+x+","+y;
                        picky2.transform.position = new Vector2(x, y);

                        //5-6-2024
                        //fix the minimap issue that I introduced back in December...
                        //copy paste pretty much. should have fixed it back in December! oh well, minimap fixed again. I keep breaking that...
                        // chunkx++;
                        if (picky2.GetComponent<MeshRenderer>())
                        {
                            picky2.GetComponentInChildren<MeshRenderer>().enabled = true;
                        }
                        Component[] mmeshRender;
                        mmeshRender = picky2.GetComponentsInChildren<MeshRenderer>();

                        foreach (MeshRenderer add_mesh in mmeshRender)
                            add_mesh.GetComponent<MeshRenderer>().enabled = true;
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
        Debug.Log("--------------------------------------DONE, world loader");
        Camera.main.GetComponent<cam_distance>().sceneLoad = false;
       // Camera.main.GetComponent<cam_distance>().resetthis();
    }

}

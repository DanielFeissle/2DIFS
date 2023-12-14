using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class world_scene_editor : MonoBehaviour
{

    // 2-16-2023 do not copy this into any other world loading scripts
    int Wind = 1;
    int CloudLevel = 1;
    int Weather = 1;
    int FPS = 30;
    float RADBCK = 1;
    float RAD = 1;
    int spacing = 2;
    string objTXT = "Welcome!";
    int getHeight = 0; //height to obtain
    int lstart = 0; //land start
    int lend = 1; //land end
    float gravx = 0;
    float gravy = -9.81f;
    //end of 2-16-2023 do not copy
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
        //3-30-2023
        //capture chunks of data that are chunk based and not exact matches (makes sense hopefully!)
        StreamWriter writer_chunk = new StreamWriter("Assets/Resources/scenes/_scene_loader_chunk.txt",false);
        //     int Wind = 1;
        //  int CloudLevel = 1;
        //  int Weather = 1;
        //  int FPS = 1;
        //  float RADBCK = 1;
        //  float RAD = 1;
        int count = 0;
        int initcount = 0;
     //   int xpos = 0;
        //12-8-2022
        //perhaps a better method to catch if a file does not exist
        sceneRead = sceneRead.TrimEnd('\r', '\n');
        TextAsset txt = (TextAsset)Resources.Load("scenes\\" + sceneRead, typeof(TextAsset));
        if (txt == null)
        {
            txt = (TextAsset)Resources.Load("scenes\\1x1", typeof(TextAsset));
        }
        foreach (string tta in txt.text.Split('\n'))
        {
            count++;
            if (count>=txt.text.Split('\n').Length)
            {
                break;
            }
            if (tta == "")
            {
                Debug.Log("No line");

            }
            else if (tta.Substring(0, 1) == "#")
            {
                Debug.Log("line comment");
                if (initcount!=0)
                {
//store this into temp memory
                    writer_chunk.WriteLine(tta);
                }
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
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_C = 1500;
                        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_F = 1;
                    }
                    getHeight = Convert.ToInt32(sclir[2]); //height to obtain
                     lstart = Convert.ToInt32(sclir[3]); //land start
                     lend = Convert.ToInt32(sclir[4]); //land end
                    objTXT = sclir[1];
                }
                else if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective == 1)
                {

                }


            }
            else if (tta.Substring(0, 3) == "CLD")
            {
                string[] sclir = tta.Split(',');
                CloudLevel= int.Parse(sclir[1]);
                //Camera.main.GetComponent<weather>().cloudHeight = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WTH")
            {
                string[] sclir = tta.Split(',');
                Weather= int.Parse(sclir[1]);
                // Camera.main.GetComponent<weather>().cloudy = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WND")
            {
                string[] sclir = tta.Split(',');
                Wind= int.Parse(sclir[1]);
                //Camera.main.GetComponent<weather>().AirSpeed = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAD")
            {
                string[] sclir = tta.Split(',');
                RAD= Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAB")
            {
                string[] sclir = tta.Split(',');
                RADBCK= Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().background_radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "FPS")
            {
                string[] sclir = tta.Split(',');
                FPS = int.Parse(sclir[1]);
                // Camera.main.GetComponent<frame_rate>().fpss = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "GRX")
            {
                string[] sclir = tta.Split(',');
                gravx = Single.Parse(sclir[1]);
                //    Camera.main.GetComponent<scene_grav_change>().changeGravi(Single.Parse(sclir[1]), Physics2D.gravity.y);
            }
            else if (tta.Substring(0, 3) == "GRY")
            {
                string[] sclir = tta.Split(',');
                gravy = Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<scene_grav_change>().changeGravi(Physics2D.gravity.x, Single.Parse(sclir[1]));
            }
            else
            {
                if (initcount==0)
                {
                    initcount = count;
                }
              
                
                int chunkx = 0;
                int chunky = 0;
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
                //   picky.transform.rotation = new Vector3(0, 0, rotateZ);
                if (sclir[1] == "1")
                {
                    picky.tag = "ground";
                }
                else if (sclir[1] == "2")
                {
                    picky.tag = "game";
                }
                var renderer = picky.GetComponent<Renderer>();

             //   GameObject.Destroy(picky);
                float width = renderer.bounds.size.x;
                float height = renderer.bounds.size.y;
                float startX = Convert.ToSingle(sclir[2]); //single is float alias
                float endX = Convert.ToSingle(sclir[3]);
                float startY = Convert.ToSingle(sclir[4]);
                float endY = Convert.ToSingle(sclir[5]);



                //1-24-2023 NOTED: REMOVED adding +1 to width and height. The issue is in the save function found in ShowPopUpExample.cs
                for (float x = startX; x < endX; x = x + width)
                {
                    for (float y = startY; y < endY; y = y + height)
                    {
                        chunkx = 0;
                        chunky = 0;
                        for (float xL = startX; xL < endX; xL = xL + width)
                        {
                            for (float yL = startY; yL < endY; yL = yL + height)
                            {
                                chunkx++;
                            }
                            chunky++;
                        }


                        GameObject picky2 = Instantiate(Resources.Load(sclir[0])) as GameObject;
                        //10-12-2023
                        //  picky2.transform.eulerAngles = Vector3.forward * rotateZ;

                        picky2.transform.localScale = new Vector3(scaleX, scaleY, 1);
                        picky2.transform.rotation = Quaternion.Euler(Vector3.forward * rotateZ);

                        //10-12-2023
                        Debug.Log("BUILDING" + sclir[0] + ":" + x + "," + y);
                        picky2.name = sceneRead +"-"+ sclir[0] + "-" + x + "," + y;
                        picky2.transform.position = new Vector2(x, y);
                        //9-29-2022 pulled below from specr2, and probab somewhere else
                        //attach script during runtime
                        //We have a string holding a script name
                        string ScriptName = "general_invent_kill";
                        //We need to fetch the Type
                        System.Type MyScriptType = System.Type.GetType(ScriptName + ",Assembly-CSharp");
                        //Now that we have the Type we can use it to Add Component
                        picky2.AddComponent(MyScriptType);
                        chunkx++;
                        if (picky2.GetComponent<MeshRenderer>())
                        {
                            picky2.GetComponentInChildren<MeshRenderer>().enabled = false;
                        }


                        Component[] mmeshRender;
                        mmeshRender = picky2.GetComponentsInChildren<MeshRenderer>();

                        foreach (MeshRenderer remove_mesh in mmeshRender)
                            remove_mesh.GetComponent<MeshRenderer>().enabled = false;
                        //    joint.useSpring = false;
                        //     picky2.GetComponentsInChildren<MeshRenderer>().

                        //                        if (picky2.transform.localRotation.z==0)
                        if (chunkx > 2 || chunky > 2)
                        {
                            string ScriptName2 = "marker_standalone";
                            picky2.name = sceneRead + "-" + sclir[0] + "-" + x + "," + y+"###LINE:"+ count+"###" + "__bulk_edit_in_text_mode_no_editor_changes4u__";
                            picky2.GetComponent<SpriteRenderer>().color = new Color(1f, 0f, 0f, 1f);
                           
                            picky2.GetComponentInChildren<SpriteRenderer>().color = new Color(1f, 0f, 0f, 1f);
                            System.Type MyScriptType2 = System.Type.GetType(ScriptName2 + ",Assembly-CSharp");
                            picky2.AddComponent(MyScriptType2);

                            Component[] sprite_color;
                            sprite_color = picky2.GetComponentsInChildren<SpriteRenderer>();

                            foreach (SpriteRenderer change_color in sprite_color)
                                change_color.GetComponent<SpriteRenderer>().color = new Color(1f, 0f, 0f, 1f);
                        }

                    }
                    chunky++;
                }


                if (chunkx > 2 || chunky > 2)
                {
                    writer_chunk.WriteLine(tta);
                }

                //Write some text to the test.txt file
                StreamWriter writer = new StreamWriter("Assets/Resources/scenes/_scene_data_holder.txt", false);
                    writer.NewLine = "\r\n";

                    writer.WriteLine("CLD," + CloudLevel);
                    writer.WriteLine("WTH," + Weather);
                    writer.WriteLine("WND," + Wind);
                    writer.WriteLine("RAD," + RAD);
                    writer.WriteLine("RAB," + RADBCK);



                    writer.Close();
                

                //1-24-2023
                //moved down here to fix extra objects staing loaded
#if UNITY_EDITOR
                //GameObject.Destroy(picky);
                DestroyImmediate(picky);
#else
                       
#endif
                //    TextMesh TxtTm = picky.GetComponent<TextMesh>();
                //   TxtTm.text = tta.ToString();
                //   xpos = xpos + 10;
            }

        }
        stageChanges();
        writer_chunk.Close();
        Debug.Log("--------------------------------------DONE");
        GameObject.Find("Canvas").SetActive(false);
        //  Camera.main.GetComponent<cam_distance>().sceneLoad = false;
    }

    void stageChanges()
    {

        //Write some text to the test.txt file
        StreamWriter writer = new StreamWriter("Assets/Resources/scenes/_scene_data_holder.txt", false);
        writer.NewLine = "\r\n";

        writer.WriteLine("CLD," + CloudLevel);
        writer.WriteLine("WTH," + Weather);
        writer.WriteLine("WND," + Wind);
        writer.WriteLine("RAD," + RAD);
        writer.WriteLine("RAB," + RADBCK);
        writer.WriteLine("FPS," + FPS);
        writer.WriteLine("GRX," + gravx);
        writer.WriteLine("GRY," + gravy);
        writer.WriteLine("OBJ," + objTXT + "," + getHeight + "," + lstart + "," + lend);

        writer.Close();
    }


}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class world_scene_preview : MonoBehaviour
{
    public float rollSpeed = 30f;
    Vector3 cameraStart;
    bool reachedEndofPreview = false;
    // Start is called before the first frame update
    void Start()
    {
        cameraStart = Camera.main.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (reachedEndofPreview==true)
        {
            reachedEndofPreview = false;
            scenePreview = true;
        }
        if (Time.time > nextUsage &&scenePreview==true ) //continue scrolling
        {
      
            nextUsage = Time.time + delay; //it is on display
            cntdelay++;
        }
        if (scenePreview==true && cntdelay>2)
        {
          
          //   StartCoroutine(GetSpeed());
          if (Camera.main.transform.position.x<furthestXPos-5)
            {
                StartCoroutine(LerpFromTo(Camera.main.transform.position, new Vector3(furthestXPos, Camera.main.transform.position.y, Camera.main.transform.position.z), rollSpeed));
            }
          else
            {
                StartCoroutine(LerpFromTo(Camera.main.transform.position, new Vector3(cameraStart.x, Camera.main.transform.position.y, Camera.main.transform.position.z), rollSpeed));
            }
           
            scenePreview = false;
            cntdelay = 0;
        }
        
    }

    IEnumerator LerpFromTo(Vector3 pos1, Vector3 pos2, float duration)
    {
        for (float t = 0f; t < duration; t += Time.deltaTime)
        {
            transform.position = Vector3.Lerp(pos1, pos2, t / duration);
            yield return 0;
        }
        transform.position = pos2;
        reachedEndofPreview = true;
    }

    private IEnumerator GetSpeed()
    {


        YieldInstruction timedWait = new WaitForSeconds(1);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;

        while (Camera.main.transform.position.x<furthestXPos)
        {
            yield return timedWait;
            Camera.main.transform.position = Camera.main.transform.position + new Vector3(5,Camera.main.transform.position.y,Camera.main.transform.position.z);
        }

     
    }

    Renderer objRenderer;
    GameObject[] gamy;
    GameObject[] bamy;
    GameObject[] damy;
    private Camera cam;
    float furthestXPos = 0;
    float furthestYPos = 0;
    float delay = 1.45f; //only half delay
    float nextUsage;
    bool scenePreview = false;
    int cntdelay = 0;
    public void clearPreview()
    {
        //12-14-2022
        //this is how to clear the preview screen
        //this is not called at all
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
        furthestXPos = 0;
        furthestYPos = 0;
        nextUsage = Time.time + delay;
        scenePreview = true;
        StopAllCoroutines();
           Camera.main.transform.position = cameraStart;
        int xpos = 0;
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
            if (tta== "")
            {
                Debug.Log("No line");

            }
            else if (tta.Substring(0, 1) == "#")
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
                delta21.text = "DRF-" + sclir[1] + "\n Reach a height of " + sclir[2] + " and land in " + sclir[3] + " to " + sclir[4];
                Debug.Log("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW TRIGGERED!");
                if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective == 0)
                {
                    delta21.text = "DRF-" + sclir[1] + "\n Reach a height of " + sclir[2] + " and land in " + sclir[3] + " to " + sclir[4];
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_title = sclir[1];
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Height = Convert.ToInt32(sclir[2]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_s = Convert.ToInt32(sclir[3]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_e = Convert.ToInt32(sclir[4]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_A = Convert.ToInt32(sclir[5]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_C = Convert.ToInt32(sclir[6]);
                    GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().grading_F = Convert.ToInt32(sclir[7]);
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
                Debug.Log("FFFF" + sclir[1]);
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
             //   Camera.main.GetComponent<frame_rate>().fpss = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "GRX")
            {
                string[] sclir = tta.Split(',');
            //    Camera.main.GetComponent<scene_grav_change>().changeGravi(Single.Parse(sclir[1]), Physics2D.gravity.y);
            }
            else if (tta.Substring(0, 3) == "GRY")
            {
                string[] sclir = tta.Split(',');
              //  Camera.main.GetComponent<scene_grav_change>().changeGravi(Physics2D.gravity.x, Single.Parse(sclir[1]));
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
                //   GameObject.Destroy(picky);
                float width = renderer.bounds.size.x;
                float height = renderer.bounds.size.y;
                float startX = Convert.ToSingle(sclir[2]); //single is float alias
                float endX = Convert.ToSingle(sclir[3]);
                float startY = Convert.ToSingle(sclir[4]);
                float endY = Convert.ToSingle(sclir[5]);

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
                        if (picky2.transform.position.x> furthestXPos)
                        {
                            furthestXPos = picky2.transform.position.x;
                        }
                        if (picky2.transform.position.y > furthestYPos)
                        {
                            furthestYPos = picky2.transform.position.y;
                        }
                    }
                }


                //    TextMesh TxtTm = picky.GetComponent<TextMesh>();
                //   TxtTm.text = tta.ToString();
                //   xpos = xpos + 10;
            }

        }
        //4-6-2023
        //https://stackoverflow.com/questions/71013982/change-the-size-of-camera-to-fit-a-gameobject-in-unity-c
        //scale camera based on scene
        float w = furthestXPos/2;
        float h = furthestYPos;
        float xx = w * 0.5f - 1.5f;
        float yy = h * 0.5f - 0.5f;
        Debug.Log("THE VALUES ARE" + xx + "," + yy);
        Camera.main.transform.position = new Vector3(xx, yy, -10f);

        Camera.main.orthographicSize = ((w > h * Camera.main.aspect) ? (float)w / (float)Camera.main.pixelWidth * Camera.main.pixelHeight : h) / 2;

        //minimap camera may be removed or commented out :)
        Camera minicam = GameObject.Find("map_camera").GetComponent<Camera>();
        minicam.transform.position = new Vector3(xx, yy, -10f);

        minicam.orthographicSize = ((w > h * minicam.aspect) ? (float)w / (float)minicam.pixelWidth * minicam.pixelHeight : h) / 2;
        Debug.Log("--------------------------------------DONE");
      //  Camera.main.GetComponent<cam_distance>().sceneLoad = false;
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class WorldFlowTrack : MonoBehaviour
{
    Level_Flow_Paths LvlFlw = new Level_Flow_Paths();
    public int world = 0;
    public int scene = 0;
    public string flow = "flow";
    int loadedWorld = 0;
    int loadedScene = 0;
    public bool resetStage = false;
    TextAsset txt;
    // Start is called before the first frame update
    void Start()
    {
        txt = (TextAsset)Resources.Load("scenes\\" + flow, typeof(TextAsset));
     //   DontDestroyOnLoad(gameObject.transform);
        if (SceneManager.GetActiveScene().name == "SampleScene")
        {
            SendStage();
        }

    }


    public void SendStage()
    {
        try
        {
            if (GameObject.Find("sela").GetComponent<LevelHistory>().NameOfLevel != "Start")
            {
                string[] splitter = GameObject.Find("sela").GetComponent<LevelHistory>().NameOfLevel.Split('x');
                loadedWorld = Convert.ToInt32(splitter[0]);
                loadedScene = Convert.ToInt32(splitter[1]);

                scene = loadedScene - 1;
                world = loadedWorld - 1;


                GameObject.Find("sela").GetComponent<LevelHistory>().NameOfLevel = "Start";
            }
        }
        catch
        {
            //11-17-2022 this script gets called once per game load
            if (!GameObject.Find("sela"))
            {
                GameObject pback = Instantiate(Resources.Load("player\\sel_a")) as GameObject;
                pback.name = "sela";
                pback.transform.position = new Vector2(0, 0);
                DontDestroyOnLoad(pback.gameObject);
            }

            scene =  1;
            world =  1;
        }


      

        string[] blar = txt.text.Split('\n');
        //1-8-2025
        //adding the exit ramp after no more scenes
        if (world >= blar.Length)
        {
            Debug.Log("Mission complete");
            SceneManager.LoadScene("outro1");
            //scene = 0;
          //  world = 0;
        }
        else
        {
            //4-30-2025 prevent running this if the first condition occured
            Debug.Log("-----------WORLD LEVELS-------------------" + blar.Length);
            string[] bkg = blar[world].Split(';'); //0 is background 1 is the world content flow
            string[] scf = bkg[1].Split(',');

            // ERROR

            GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().phonehome(scf[scene]);
            GameObject.Find("sela").GetComponent<LevelHistory>().curscene = scene + 1;
            GameObject.Find("sela").GetComponent<LevelHistory>().curworld = world + 1;
            GameObject.Find("hi_score").GetComponent<Text>().text = GameObject.Find("sela").GetComponent<LevelHistory>().curworld + "x" + GameObject.Find("sela").GetComponent<LevelHistory>().curscene + ":" + GameObject.Find("sela").GetComponent<LevelHistory>().high_score[GameObject.Find("sela").GetComponent<LevelHistory>().curworld, GameObject.Find("sela").GetComponent<LevelHistory>().curscene];


        }

    }

    public void TrackStage()
    {
      //  GameObject.Find("sela").GetComponent<LevelHistory>().LoadSameStateScene(world, scene, 45);//todo 6-12-2023:update score tracking array
        //   SceneManager.LoadScene("SampleScene");
        Debug.Log("CURRENT----------------------------WORLD" + world +", SCENE"+ scene);
        scene++;
        
        //assuming the objective was complete, this is where scene will be added. and if scene is reached the end-next world will be loaded
        string[] blar = txt.text.Split('\n');
        Debug.Log("-----------WORLD LEVELS-------------------" + blar.Length);
        string[] bkg = blar[world].Split(';'); //0 is background 1 is the world content flow
        string[] scf = bkg[1].Split(',');

        if (world > blar.Length)
        {
            Debug.Log("Mission complete");
            scene = 0;
            world = 0;
        }


        string maxlevel = LvlFlw.checkLevels(scene, world);
        //set world to new value?
        Debug.Log("+++++++++++++The world tracked value is " + maxlevel);
      //  world = Convert.ToInt32(maxlevel.Split('x')[0]);
      if (scene== Convert.ToInt32(maxlevel.Split('x')[1]))
        {
            world++;
            scene = 0;
            GameObject.Find("sela").GetComponent<LevelHistory>().scene = 0;
            GameObject.Find("sela").GetComponent<LevelHistory>().world = GameObject.Find("sela").GetComponent<LevelHistory>().world+1;
        }
        Debug.Log("NEXT----------------------------WORLD" + world + ", SCENE" + scene);
        // var trimmed = scf[scene].Substring(0, scf[scene+1].LastIndexOf("\r\n"));
        scf[scene] = scf[scene].TrimEnd(new char[] { '\r', '\n' });
        var dataset = Resources.Load<TextAsset>("scenes\\"+scf[scene]);
        if (dataset != null)
        {
        
            

        if (scene>scf.Length)
        {
            scene = 0;
            world++;
                Debug.Log("LOADING NEXT WORLD----------------------------WORLD" + world + ", SCENE" + scene);
                SendStage();
        }
        else
        {
            SendStage();
        }
        }
        else
        {
          //  Debug.Log("Warning file not found in resources!? Returning to previous scene");
            Debug.Log("Go to end game page. This is how we tell if the route is finished (drf 7-6-2023");
            GameObject.Find("sela").GetComponent<LevelHistory>().LoadScene("outro1", "end_stage"); //1 is name of actual scene, 2 is the meta information
            //scene--;
        }


        GameObject.Find("sela").GetComponent<LevelHistory>().curscene = scene+1;
        GameObject.Find("sela").GetComponent<LevelHistory>().curworld = world+1;
        Debug.Log("The following is the level "+GameObject.Find("sela").GetComponent<LevelHistory>().curworld + ":"+ GameObject.Find("sela").GetComponent<LevelHistory>().curscene);
        GameObject.Find("hi_score").GetComponent<Text>().text = GameObject.Find("sela").GetComponent<LevelHistory>().curworld + "x" + GameObject.Find("sela").GetComponent<LevelHistory>().curscene + ":" + GameObject.Find("sela").GetComponent<LevelHistory>().high_score[GameObject.Find("sela").GetComponent<LevelHistory>().curworld, GameObject.Find("sela").GetComponent<LevelHistory>().curscene];
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//core script
//https://forum.unity.com/threads/how-can-i-open-previous-scene.652507/
//retrieved 6-25-2020
//specr3 use case
//attach to the player and call these functions
public class LevelHistory : MonoBehaviour {


    private List<string> sceneHistory = new List<string>();  //running history of scenes
    public string NameOfLevel = null;
    //MAX REACHED
    public int world = 0;
    public int scene = 0;// Use this for initialization
    //END OF MAX REACHED
    //CURRENT LEVEL SELECTION
    public int curworld = 1;
    public int curscene = 1;// Use this for initialization
    //END CURRENT LEVEL SELECTION
    public int[,] high_score = new int[9, 5]; //6-12-2023-for now just creating an empty 9x99 array
    public int curStageScore = 0;
    int priorWorld = 0;
    int priorScene = 0;


    int masterWorld = 1;
    int masterScene = 1;
    void Start () {
        sceneHistory.Add(SceneManager.GetActiveScene().name);
        LoadPlayer();
    }
  //  public PlayerData readTextComponent;
  public void resetPlayerData()
    {
        curworld = 1;
        curscene = 1;
        world = 1;
        scene = 1;
        for (int i = 0; i < high_score.GetLength(0); i++)
        {
            for (int j = 0; j < high_score.GetLength(1); j++)
            {
                 high_score[i, j]=0;
            }
        }
        saveplayer();
    }
    public void unlockPlayerData()
    {
        world = 9;
        scene = 5;
        for (int i = 0; i < high_score.GetLength(0); i++)
        {
            for (int j = 0; j < high_score.GetLength(1); j++)
            {
                high_score[i, j] = UnityEngine.Random.Range(100, 1000);
            }
        }
        saveplayer();
    }
    public void saveplayer()
    {
  //      readTextComponent.currentStage = 3;
    //    readTextComponent.currentWorld = 3;
      if (GameObject.Find("checkerBoard(256x256)"))
        {
            curStageScore = GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().saved_grade_score;
        }
      else
        {//this else check is for the debug terminal to reset scores outside of the level
            curStageScore= UnityEngine.Random.Range(1000, 9999);
        }

        //  curStageScore = UnityEngine.Random.Range(0, 100);

        //5-28-2024
        //this should fix the issue of world/scene data being overwrittten by current scene/world
        if (world<masterWorld)
        {
            world = masterWorld;
        }
        if (scene<masterScene)
        {
            scene = masterScene;
        }
        BinSaveSystem.SaveScene(this);
       
    }
    public void LoadPlayer()
    {
     //   Debug.Log("111111111111111111111111111111EHEM" + readTextComponent.level_world + "," + readTextComponent.currentWorld);
        PlayerData data = BinSaveSystem.LoadPlayer();
        if (data != null)
        {
            //   curStageScore = GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().saved_grade_score;
            if(scene==0)
            {
                scene++;
            }
            if (world==0)
            {
                world++;
            }
            curStageScore = data.level_high_score[world, scene];
            scene = data.level_scene;
            world = data.level_world;
            masterWorld = world;
            masterScene = scene;
            high_score = data.level_high_score;

            priorWorld = data.level_world;
            priorScene = data.level_scene;
            for (int i = 0; i < high_score.GetLength(0); i++)
            {
                for (int j = 0; j < high_score.GetLength(1); j++)
                {
                    string s = high_score[i, j].ToString();
                    Debug.Log(i+","+j+":"+s);
                }
            }
            Debug.Log("MAX WORLD:" + world + "MAX SCENE:" + scene);

        }

    }
    
    //Call this whenever you want to load a new scene
    //It will add the new scene to the sceneHistory list
    public void LoadScene(string newScene, string specLevel)
    {
        NameOfLevel = specLevel;
        sceneHistory.Add(newScene);
        SceneManager.LoadScene(newScene);
    }
    public void LoadSameStateScene(int w, int s) //w: world, s: string, hs: highscore
    {
        if (world<=priorWorld)
        {
            world = w + 1;
        }
        if (scene <= priorScene)
        {
            scene = s + 2;
        }

        saveplayer();
    }
    [RuntimeInitializeOnLoadMethod]
    static void RunOnStart()
    {

        Application.quitting += Quit;
    }
    static void Quit()
    {
       
        Debug.Log("Quitting the Player");
    }

    //Call this whenever you want to load the previous scene
    //It will remove the current scene from the history and then load the new last scene in the history
    //It will return false if we have not moved between scenes enough to have stored a previous scene in the history
    public bool PreviousScene()
    {
        bool returnValue = false;
        if (sceneHistory.Count >= 2)  //Checking that we have actually switched scenes enough to go back to a previous scene
        {
            //note 10--6-20 easy dif, this solves the death issue, but normal dif appears to have been fine- further testing is needed on difs
            returnValue = true;
            //sceneHistory.RemoveAt(sceneHistory.Count - 1);


           for (int i=sceneHistory.Count-1;i>0;i--)
            {
                if (sceneHistory[i] == SceneManager.GetActiveScene().name)
                {
                    sceneHistory.RemoveAt(i);
                    Debug.Log("DO NOT LOAD THIS STAGE AGAIN");
                }

            }
            
                
                Debug.Log("Name of scene prior: " + sceneHistory[sceneHistory.Count-1]);
                SceneManager.LoadScene(sceneHistory[sceneHistory.Count-1]);
                
            


        }

        return returnValue;
    }


    public string GetPrevSceneName()
    {
        string returnValue = "";
        if (sceneHistory.Count >= 2)  //Checking that we have actually switched scenes enough to go back to a previous scene
        {

            for (int i = sceneHistory.Count - 1; i > 0; i--)
            {
                if (sceneHistory[i] == SceneManager.GetActiveScene().name)
                {
                    sceneHistory.RemoveAt(i);
                    Debug.Log("DO NOT LOAD THIS STAGE AGAIN");
                }

            }


            returnValue = sceneHistory[sceneHistory.Count-1].ToString();
           


            /*
                            if (sceneHistory[sceneHistory.Count - 2] == SceneManager.GetActiveScene().name)
                        {
                            returnValue = sceneHistory[sceneHistory.Count - 1].ToString();
                        }
                        else
                        {
                            returnValue = sceneHistory[sceneHistory.Count - 2].ToString();
                        }
                            // sceneHistory.RemoveAt(sceneHistory.Count - 1);
                           */
        }

        return returnValue;
    }
    // Update is called once per frame
    void Update () {
		
	}
}

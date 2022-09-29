using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WorldFlowTrack : MonoBehaviour
{
    public int world = 0;
    public int scene = 0;
    public string flow = "flow";
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
       
        string[] blar = txt.text.Split('\n');
        Debug.Log("-----------WORLD LEVELS-------------------" + blar.Length);
        string[] bkg = blar[world].Split(';'); //0 is background 1 is the world content flow
        string[] scf = bkg[1].Split(',');

        GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().phonehome(scf[scene]);
    }

    public void TrackStage()
    {
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

        Debug.Log("NEXT----------------------------WORLD" + world + ", SCENE" + scene);
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
            Debug.Log("Warning file not found in resources!? Returning to previous scene");
            scene--;
        }




    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

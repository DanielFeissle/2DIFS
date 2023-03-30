using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Build : MonoBehaviour
{

    //https://stackoverflow.com/questions/45081576/how-can-i-compile-a-unity3d-game-project-from-command-line-into-webgl
    static void build()
        {
        //https://docs.unity3d.com/Manual/BuildPlayerPipeline.html
        // Place all your scenes here
        //   string[] scenes = { "Assets/scenes/SampleScene.unity" };
        string[] scenes = {"Assets/scenes/ba_in_sc.unity",
                            "Assets/scenes/title_scene.unity",
                            "Assets/scenes/SampleScene.unity",
                            "Assets/scenes/scene_select_preview.unity" };
                           /* "Assets/scenes/S_1.unity",
                            "Assets/scenes/S_Reward.unity",
                            "Assets/scenes/S_Credits.unity",
                            "Assets/scenes/S_Settings.unity",
                            "Assets/scenes/S_SceneSelector.unity"};
           */
          //  string pathToDeploy = "builds/WebGLversion/";

        //    BuildPipeline.BuildPlayer(scenes, pathToDeploy, BuildTarget.WebGL, BuildOptions.None);
        
                       string pathToDeploy = "builds/EXE/test.exe";

            BuildPipeline.BuildPlayer(scenes, pathToDeploy, BuildTarget.StandaloneWindows, BuildOptions.None);
        }



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

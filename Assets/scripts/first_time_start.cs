using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class first_time_start : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //7-1-2025

#if UNITY_EDITOR
        Debug.Log("Running in the Unity Editor");
#elif UNITY_STANDALONE
    Debug.Log("Running as a standalone EXE");
#elif UNITY_WEBGL
    Debug.Log("Running in a web browser (WebGL)");
    Debug.unityLogger.logEnabled = false;
#else
    Debug.Log("Unknown platform");
#endif


        Time.timeScale = 1;
        //11-17-2022 this script gets called once per game load
        if (!GameObject.Find("sela"))
        {
            GameObject pback = Instantiate(Resources.Load("player\\sel_a")) as GameObject;
            pback.name = "sela";
            pback.transform.position = new Vector2(0, 0);
            DontDestroyOnLoad(pback.gameObject);
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

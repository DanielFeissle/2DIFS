using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class frame_rate : MonoBehaviour
{
    public int fpss = 300;
    int priorFPS = -1;
    // Start is called before the first frame update
    void Start()
    {
        //https://docs.unity3d.com/ScriptReference/Application-targetFrameRate.html
        // Make the game run as fast as possible
        Application.targetFrameRate = fpss;
        priorFPS = fpss;
    }
    private void LateUpdate()
    {
        if (priorFPS!=fpss)
        {
            Application.targetFrameRate = fpss;
            priorFPS = fpss;
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

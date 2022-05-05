using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camera_wireframe : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
      
    }
    void OnPreRender()
    {
        GL.Color(Color.red);
         GL.wireframe = true;
        GL.sRGBWrite = true;
    }
    void OnPostRender()
    {
        GL.wireframe = false;
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

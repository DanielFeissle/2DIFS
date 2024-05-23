using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lighting_tool : MonoBehaviour
{
    //8-31-2022 now the lighting is controllable through a script
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void LightThisUp(GameObject fd)
    {
        var tempColorA = Camera.main.backgroundColor;
        tempColorA.r= Camera.main.GetComponent<weather>().background_radiosity;
        tempColorA.g = Camera.main.GetComponent<weather>().background_radiosity;
        tempColorA.b = Camera.main.GetComponent<weather>().background_radiosity;
        Camera.main.backgroundColor = tempColorA;
        if (fd.GetComponent<SpriteRenderer>())
        {
            var tempColor = fd.GetComponent<SpriteRenderer>().color;
            tempColor.r = Camera.main.GetComponent<weather>().radiosity;
            tempColor.g = Camera.main.GetComponent<weather>().radiosity;
            tempColor.b = Camera.main.GetComponent<weather>().radiosity;
            fd.GetComponent<SpriteRenderer>().color = tempColor;
        }

     
      
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

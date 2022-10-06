using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class general_match_axis : MonoBehaviour
{
    //10-6-2022 a general script to match one axis (like a player/start line)
    public GameObject go;
    public string goa = "y"; //x,y, or z
    public float ovr;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (goa== "y")
        {
            this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, go.transform.position.y+ovr, this.transform.position.z);
        }
        else if (goa == "x")
        {
            this.gameObject.transform.position = new Vector3( go.transform.position.x + ovr, this.transform.position.y , this.transform.position.z);
        }
        else if (goa == "z")
        {
            this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, this.transform.position.y, go.transform.position.z + ovr);
        }


    }
}

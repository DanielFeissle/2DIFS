using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class general_riser : MonoBehaviour
{

    //8-2-2022
    //this script is called by the altimeter script (alt_gauge)
    //pretty much put in flat ground when the player is above it
    int alternator = 0;
    GameObject prevOBJ;
    // Start is called before the first frame update
    void Start()
    {
        prevOBJ = null;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void hide()
    {
        GameObject.Find("FLATGROUND").transform.position = new Vector3(-1000, -1000, 0);
    }
    public float offset = .08f;
    public void rise(GameObject dur)
    {

        if (dur.GetComponent<BoxCollider2D>())
        {

            //    GameObject.Find("FLATGROUND").transform.position = GameObject.Find("minorWheels").GetComponent<CapsuleCollider2D>().bounds.center- new Vector3(0.35f, offset, 0);
            GameObject.Find("FLATGROUND").transform.position = new Vector3(GameObject.Find("minorWheels").GetComponent<CapsuleCollider2D>().bounds.center.x-0.25f, dur.GetComponent<BoxCollider2D>().bounds.max.y + offset, 0);
        }


            /*
            if (prevOBJ != dur)
            {
                if (dur.GetComponent<BoxCollider2D>())
                {
                    if (alternator==0)
                    {
                    
                    }
                    else if (alternator==1)
                    {
                        GameObject.Find("FLATGROUND2").transform.position = dur.GetComponent<BoxCollider2D>().bounds.center + new Vector3(0, 0.53f, 0);
                    }    
                    else
                    {
                        GameObject.Find("FLATGROUND3").transform.position = dur.GetComponent<BoxCollider2D>().bounds.center + new Vector3(0, 0.53f, 0);
                    }

                    // GameObject.Find("FLATGROUND").transform.position = dur.GetComponent<BoxCollider2D>().bounds.center + new Vector3(0, 0.1f, 0);
                }
                else if (dur.GetComponent<PolygonCollider2D>())
                {

                }
                alternator++;
                if (alternator>2)
                {
                    alternator = 0;
                }
                prevOBJ = dur;
            }
          */
        }

}

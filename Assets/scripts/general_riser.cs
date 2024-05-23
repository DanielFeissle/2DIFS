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

    Quaternion startRotation;
    Quaternion endRotation;
    float rotationProgress = -1;

    // Call this to start the rotation
    void StartRotating(float zPosition)
    {

        // Here we cache the starting and target rotations
        startRotation = transform.rotation;
        endRotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y, zPosition);

        // This starts the rotation, but you can use a boolean flag if it's clearer for you
        rotationProgress = 0;
    }



    public float offset = 0.28f;
    public void rise(GameObject dur, float hit)
    {

        if (dur.GetComponent<BoxCollider2D>())
        {

            //    GameObject.Find("FLATGROUND").transform.position = GameObject.Find("minorWheels").GetComponent<CapsuleCollider2D>().bounds.center- new Vector3(0.35f, offset, 0);
           
          float  fewfe = hit + .28f;
           
            GameObject.Find("FLATGROUND").transform.position = new Vector3(GameObject.Find("minorWheels").GetComponent<CapsuleCollider2D>().bounds.center.x -0.35f, fewfe, 0);
            // GameObject.Find("FLATGROUND").transform.position = new Vector3(GameObject.Find("minorWheels").GetComponent<CapsuleCollider2D>().bounds.center.x - 0.25f, hit.y - offset, 0);
           
            //5-21-2024 rotation to match the plane
            // GameObject.Find("FLATGROUND").transform.rotation =  Quaternion.Euler(new Vector3(0, 0, 0));
          //  if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground==false)
            {
                GameObject.Find("FLATGROUND_ACT").transform.rotation = dur.GetComponent<BoxCollider2D>().transform.rotation;
            }
        //     else
            {
                //5-23-2024 attempt to match while on the ground
           //      Vector3 direction = new Vector3(0, 0, dur.GetComponent<BoxCollider2D>().transform.rotation.z*100);
       //         Quaternion targetRotation = Quaternion.Euler(direction);
      //          GameObject.Find("FLATGROUND_ACT").transform.rotation = Quaternion.Lerp(this.transform.rotation, targetRotation, Time.deltaTime * 100);
                //   GameObject.Find("FLATGROUND_ACT").transform.rotation = GameObject.Find("Player_plane").transform.rotation;
                /*
                if (rotationProgress < 1 && rotationProgress >= 0)
                {
                    rotationProgress += Time.deltaTime * 5;

                    // Here we assign the interpolated rotation to transform.rotation
                    // It will range from startRotation (rotationProgress == 0) to endRotation (rotationProgress >= 1)
                    transform.rotation = Quaternion.Lerp(startRotation, endRotation, rotationProgress);
                }
                */
            }
            

        }
        else if (dur.GetComponent<PolygonCollider2D>())
            {
         
        //      GameObject.Find("FLATGROUND").transform.rotation = GameObject.Find("Player_plane").transform.rotation;
       //     GameObject.Find("FLATGROUND").transform.position = new Vector3(GameObject.Find("minorWheels").GetComponent<CapsuleCollider2D>().bounds.center.x - 0.25f, dur.GetComponent<PolygonCollider2D>().bounds.max.y + offset, 0);
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

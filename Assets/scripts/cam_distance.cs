using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cam_distance : MonoBehaviour
{


 
    Renderer objRenderer;
    GameObject[] gamy;
    GameObject[] bamy;
    private Camera cam;

    float delay = 0.1f; //only half delay
    float nextUsage;
    bool sceneLoad = false;
    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
 

        nextUsage = Time.time + delay; //it is on display
    }
    private void Awake()
    {
      

        nextUsage = Time.time + delay; //it is on display
    }
    // Update is called once per frame
    void Update()
    {

        //GameObject.FindObjectsOfType(typeof(MonoBehaviour));
        // GameObject.FindGameObjectsWithTag("ground"); 

        if (Time.time > nextUsage)
        {


           




            if (sceneLoad==false)
            {
                
                gamy = GameObject.FindGameObjectsWithTag("ground");
                bamy = GameObject.FindGameObjectsWithTag("background");
                sceneLoad = true;
            }
           

            rendThis(gamy);
            rendThis(bamy);


            nextUsage = Time.time + delay;
        }
     }


    private void rendThis(GameObject[] bar)
    {

        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
        Debug.Log("CAMERA POS RIGHT MOST:" + q.x + " LEFT MOST " + p.x);
        foreach (GameObject g in bar)
        {
            if (g.transform.position.x < (q.x + 10) && (g.transform.position.x > (p.x - 10)))
            {
                g.GetComponent<Renderer>().enabled = true;
                //      Debug.Log("THE FOLLOWING IS" + g.name);

            }
            else if (g.transform.position.x < (p.x - 10))
            {
                g.GetComponent<Renderer>().enabled = false;
               
            }
            else
            {
                g.GetComponent<Renderer>().enabled = false;
            }

        }
    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cam_distance : MonoBehaviour
{


    //cull gameobjects that are not close enough to show. Added this comment to help locate it!
   

    Renderer objRenderer;
    GameObject[] gamy;
    GameObject[] bamy;
    GameObject[] damy;
    private Camera cam;

    float delay = 0.1f; //only half delay
    float nextUsage;
   public bool sceneLoad = true;
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
                if (gamy!=null)
                {
                    GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().resetStage = false;
                    foreach (var obj in gamy)
                        Destroy(obj);
                    foreach (var obj in bamy)
                        Destroy(obj);
                    foreach (var obj in damy)
                        Destroy(obj);
                    sceneLoad = false;
                }
                gamy = GameObject.FindGameObjectsWithTag("ground");
                bamy = GameObject.FindGameObjectsWithTag("background");
                damy = GameObject.FindGameObjectsWithTag("detail");
               
                sceneLoad = true;
            }
            else
            {
                {
                    rendThis(gamy);
                    rendThis(bamy);
                    rendThis(damy);
                }
            }
        //    if (GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().resetStage == false)
        if (sceneLoad== true)
            {
             //   rendThis(gamy);
             //   rendThis(bamy);
             //   rendThis(damy);
            }
            else
            {
             
            }


            nextUsage = Time.time + delay;
        }
     }
    //4-5-2023 downRefresh is used in conjunction with the alt_gauge. This number will temp bypass checks and rerender everything below the player. If a new object is present it will update
    public int downRefresh = 60; //how many frames before decull bottom side to poll if new ground is below player
    int downRefreshCount = 0;
    private void rendThis(GameObject[] bar)
    {
        downRefreshCount++;
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
   //     Debug.Log("CAMERA POS RIGHT MOST:" + q.x + " LEFT MOST " + p.x);
        foreach (GameObject g in bar)
        {
            if (g!=null)
            {

           
            //2-28-22 setactive saves a lot of processing power- scenes should now be able to be very large without issues!
            //3-29-2023 now includes the Y axis of what to render or not
            if (g.gameObject.GetComponent<Renderer>())
            {
                GameObject pl=GameObject.Find("Player_plane");
                //6-15-2022- splitting this up to save resources until after char ejects
                if (pl.GetComponent<mplane_controller>().peject==true)
                {
                    if ((g.GetComponent<Renderer>().bounds.min.x < (q.x + 15) && (g.GetComponent<Renderer>().bounds.max.x > (p.x - 15)) && (g.GetComponent<Renderer>().bounds.min.y < (p.y + 15) && (g.GetComponent<Renderer>().bounds.max.y > (q.y - 15)))) || (g.GetComponent<Renderer>().bounds.min.x < (pl.transform.position.x + 15) && (g.GetComponent<Renderer>().bounds.max.x > (pl.transform.position.x - 15))) && (g.GetComponent<Renderer>().bounds.min.y < (pl.transform.position.y + 15) && (g.GetComponent<Renderer>().bounds.max.y > (pl.transform.position.y - 15))))
                    {
                        //   g.GetComponent<Renderer>().enabled = true;
                        //      Debug.Log("THE FOLLOWING IS" + g.name);
                        g.SetActive(true);
                        this.gameObject.GetComponent<lighting_tool>().LightThisUp(g);
                    }
                    else if (g.GetComponent<Renderer>().bounds.min.x < (p.x - 15) || g.GetComponent<Renderer>().bounds.max.x < (pl.transform.position.x - 15) || g.GetComponent<Renderer>().bounds.min.y < (p.y + 15) || g.GetComponent<Renderer>().bounds.max.y < (pl.transform.position.y - 15))
                    {
                        //   g.GetComponent<Renderer>().enabled = false;
                        g.SetActive(false);

                    }
                    else
                    {
                        //  g.GetComponent<Renderer>().enabled = false;
                        g.SetActive(false);
                    }
                }
                    else
                    {
                        if (downRefreshCount>downRefresh)
                        {
                          
                              if ((g.GetComponent<Renderer>().bounds.min.x < (q.x + 15) && (g.GetComponent<Renderer>().bounds.max.x > (p.x - 15))) && (g.GetComponent<Renderer>().bounds.min.y < (p.y + 15)))
                            {
                                //   g.GetComponent<Renderer>().enabled = true;
                                //      Debug.Log("THE FOLLOWING IS" + g.name);
                                g.SetActive(true);
                                this.gameObject.GetComponent<lighting_tool>().LightThisUp(g);
                            }
                            else if (g.GetComponent<Renderer>().bounds.max.x < (p.x - 15) || g.GetComponent<Renderer>().bounds.min.y < (p.y + 15))
                            {
                                //   g.GetComponent<Renderer>().enabled = false;
                                g.SetActive(false);

                            }
                            else
                            {
                                //  g.GetComponent<Renderer>().enabled = false;
                                g.SetActive(false);
                            }
                        }
                        else if ((g.GetComponent<Renderer>().bounds.min.x < (q.x + 15) && (g.GetComponent<Renderer>().bounds.max.x > (p.x - 15))) && (g.GetComponent<Renderer>().bounds.min.y < (p.y + 15)) && (g.GetComponent<Renderer>().bounds.max.y > (q.y - 15) || GameObject.Find("altimeter").GetComponent<alt_gauge>().hit_pos-2<g.transform.position.y)) //&& (g.transform.position.y > (q.y - 15))
                        {
                            //   g.GetComponent<Renderer>().enabled = true;
                            //      Debug.Log("THE FOLLOWING IS" + g.name);
                            g.SetActive(true);
                            this.gameObject.GetComponent<lighting_tool>().LightThisUp(g);
                        }
                        else if (g.transform.position.x < (p.x - 15) || g.transform.position.y < (p.y + 15))
                        {
                            //   g.GetComponent<Renderer>().enabled = false;
                            g.SetActive(false);

                        }
                        else
                        {
                            //  g.GetComponent<Renderer>().enabled = false;
                            g.SetActive(false);
                        }
                    }





                }
            }

        }
        if (downRefreshCount>downRefresh )
        {
            downRefreshCount = 0;
        }
    }





    private void ShowAll(GameObject[] bar)
    {

        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
                                                                                               //     Debug.Log("CAMERA POS RIGHT MOST:" + q.x + " LEFT MOST " + p.x);
        foreach (GameObject g in bar)
        {
            //2-28-22 setactive saves a lot of processing power- scenes should now be able to be very large without issues!
            if (g.gameObject.GetComponent<Renderer>())
            {
                GameObject pl = GameObject.Find("Player_plane");
                //6-15-2022- splitting this up to save resources until after char ejects
                if (pl.GetComponent<mplane_controller>().peject == true)
                {
                    if (g.transform.position.x < (q.x + 99999) && (g.transform.position.x > (p.x - 99999)) || (g.transform.position.x < (pl.transform.position.x + 99999) && (g.transform.position.x > (pl.transform.position.x - 99999))))
                    {
                        //   g.GetComponent<Renderer>().enabled = true;
                        //      Debug.Log("THE FOLLOWING IS" + g.name);
                        g.SetActive(true);
                        this.gameObject.GetComponent<lighting_tool>().LightThisUp(g);
                    }
                    else if (g.transform.position.x < (p.x - 99999) || g.transform.position.x < (pl.transform.position.x - 99999))
                    {
                        //   g.GetComponent<Renderer>().enabled = false;
                        g.SetActive(false);

                    }
                    else
                    {
                        //  g.GetComponent<Renderer>().enabled = false;
                        g.SetActive(false);
                    }
                }
                else
                {
                    if (g.transform.position.x < (q.x + 99999) && (g.transform.position.x > (p.x - 99999)))
                    {
                        //   g.GetComponent<Renderer>().enabled = true;
                        //      Debug.Log("THE FOLLOWING IS" + g.name);
                        g.SetActive(true);
                        this.gameObject.GetComponent<lighting_tool>().LightThisUp(g);
                    }
                    else if (g.transform.position.x < (p.x - 99999))
                    {
                        //   g.GetComponent<Renderer>().enabled = false;
                        g.SetActive(false);

                    }
                    else
                    {
                        //  g.GetComponent<Renderer>().enabled = false;
                        g.SetActive(false);
                    }
                }





            }


        }
    }

}

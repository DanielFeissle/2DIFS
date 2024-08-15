using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class cam_distance : MonoBehaviour
{


    //cull gameobjects that are not close enough to show. Added this comment to help locate it!
   

    Renderer objRenderer;
    GameObject[] gamy;
    GameObject[] bamy;
    GameObject[] damy;
    private Camera cam;
    bool triggerPauseShow = false;
    float delay = 0.1f; //only half delay
    float nextUsage;
   public bool sceneLoad = true;
    bool passOnce = false;
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
        //6-24-2024
        //pause takes priority and only during player alive seq
        if (GameObject.Find("altimeter").GetComponent<menu_runtime>().specButtonStat == 1 && triggerPauseShow==false)
        {
            triggerPauseShow = true;
        }
      else   if (GameObject.Find("altimeter").GetComponent<menu_runtime>().specButtonStat == -1 && triggerPauseShow == true)
        {
            triggerPauseShow = false;
        }
       if (GameObject.Find("altimeter").GetComponent<menu_runtime>().screenshotDone==true)
        {
            triggerPauseShow = false;
        }
        if (Time.time > nextUsage || triggerPauseShow==true)
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
                    float oldDistance = 9999;
                    List<GameObject> unityGameObjects = new List<GameObject>();
                    GameObject closetsObject=null;
                    float heightbypass = 0;
                    /*
                    if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground == true)
                    {
                        heightbypass = 4;
                    }

                    */

                    if (GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt < 4.5f)
                    {
                        heightbypass = 4.5f;
                    }
                    
                    foreach (GameObject g in gamy)
                    {
                        //  float dist = Vector3.Distance(this.gameObject.transform.position, g.transform.position

                        float dist = Vector3.Distance(this.gameObject.transform.position, g.transform.position);
                        if (dist < oldDistance && g.transform.position.x > GameObject.Find("Player_plane").transform.position.x && (g.GetComponent<Renderer>().bounds.max.y > GameObject.Find("Player_plane").transform.position.y + heightbypass && g.GetComponent<Renderer>().bounds.min.y < GameObject.Find("Player_plane").transform.position.y + heightbypass))
                        {
                            closetsObject = g;
                            oldDistance = dist;
                        }

                    }
                    GameObject priorGE = null;
                    GameObject priorGA = null;
                  //  GameObject priorLG = null;
                    int count = 0;
                    //   float deltaDist = -5555;
                    foreach (GameObject g in gamy)
                    {
                        //if ( g.transform.position.x == closetsObject.transform.position.x)
                        if (g.GetComponent<Renderer>().bounds.min.x-0<=closetsObject.GetComponent<Renderer>().bounds.center.x && g.GetComponent<Renderer>().bounds.max.x+0 >= closetsObject.GetComponent<Renderer>().bounds.center.x)
                        {
                            if (g.GetComponent<Renderer>().bounds.min.x <= closetsObject.transform.position.x && g.GetComponent<Renderer>().bounds.max.x >= closetsObject.transform.position.x) //
                            {
                                unityGameObjects.Add(g);
                            }
                        }
                    }

                    //  unityGameObjects.Sort();
                    //8-7-2024:Important to sort by Y axis. Otherwise this is broken!
                    unityGameObjects.Sort((o1, o2) => o1.transform.position.y.CompareTo(o2.transform.position.y));
                    for (int i=unityGameObjects.Count-1;i>0;i--)
                    {
                        //this loop will start at the higest object and go down. Getting the first notable gap
                        GameObject g = unityGameObjects[i];
                        count++;
                        




                        if (priorGE == null)
                        {
                            priorGE = g;
                        }
                        if (priorGE != null) //compare
                        {
                            // if ((g.gameObject.transform.position.y - priorGE.gameObject.transform.position.y)> deltaDist)
                            //   if (g.GetComponent<Renderer>().bounds.min.y - 2 > priorGE.GetComponent<Renderer>().bounds.max.y + 2)
                            float mathfunc = 2;
                       //     float std_gap = 5; //gap size
                            if (g.transform.position.y>0)
                            {
                                mathfunc = g.GetComponent<Renderer>().bounds.size.y;
                             //   std_gap = mathfunc;
                            }
                            else
                            {
                                mathfunc = Mathf.Abs(0-(g.GetComponent<Renderer>().bounds.size.y));
                            //    std_gap = -1* mathfunc;

                             //   mathfunc = -1*(mathfunc);
                             //  mathfunc = -(g.GetComponent<Renderer>().bounds.size.y);
                            }

                            //    if ((Math.Abs(priorGE.transform.position.y) - priorGE.GetComponent<Renderer>().bounds.size.y)  > (g.transform.position.y + mathfunc )) //we found a gap at top level
                            if ((priorGE.transform.position.y - priorGE.GetComponent<Renderer>().bounds.size.y) > (g.transform.position.y + mathfunc)) //we found a gap at top level
                            {

                              //   if (i>1)
                                {
                                  //  Debug.Log("dfa" + g.gameObject.name + ">"+ priorGE.gameObject.name);
                                    priorGA = g;
                                    break;
                                }

                            }

                            /*
                            //  deltaDist = g.gameObject.transform.position.y - priorGE.gameObject.transform.position.y;
                            if (priorLG == null)
                            {
                                priorLG = g.gameObject;
                            }
                            //get the interiod last highest item
                            if (g.GetComponent<Renderer>().bounds.max.y + priorGE.GetComponent<Renderer>().bounds.max.y > g.GetComponent<Renderer>().bounds.max.y - 0)
                            {
                             
                             //   if (priorGE.transform.position.y < g.transform.position.y)
                                {

                                    priorLG = g;

                                }

                            }
                            */
                        }


                        priorGE = g;
                    }


                        if (closetsObject != null)
                    {
                        /*
                        GameObject priorG = null;
                        foreach (GameObject g in unityGameObjects)
                        {
                            if (priorG!=null)
                            {
                                if ((priorG.GetComponent<Renderer>().bounds.max.y - priorG.GetComponent<Renderer>().bounds.center.y) + priorG.GetComponent<Renderer>().bounds.center.y >= g.GetComponent<Renderer>().bounds.center.y)
                                {
                                    Debug.Log(":" + "" + g.name + "uuuuuuu" + (priorG.GetComponent<Renderer>().bounds.max.y - priorG.GetComponent<Renderer>().bounds.center.y) + "+" + priorG.GetComponent<Renderer>().bounds.center.y + "VVVVVVVVVVVVVV" + g.GetComponent<Renderer>().bounds.center.y);

                                }
                            }

                            priorG = g;

                        }
                        */
                        string opening = "";
                        if (priorGA!=null)
                        {
                            // if (priorGA.transform.position.y <= GameObject.Find("Player_plane").transform.position.y)
                            if (priorGA.GetComponent<Renderer>().bounds.max.y <= GameObject.Find("Player_plane").GetComponent<Renderer>().bounds.min.y)
                            {
                                opening = "V";
                            }
                           else
                            {
                                opening = "^";
                            }
                        }
                        if (opening=="") //8-11-2024:handle unknown or flat areas
                        {
                            opening = "=";
                        }
                        Debug.Log("qwe" + oldDistance + "----"+closetsObject.name);
                        GameObject txt_xwall = GameObject.Find("txt_xwall");
                        txt_xwall.GetComponent<Text>().text = "XCOR: "+opening+":" + (Math.Round(oldDistance, 2));
                    }
                    
                    passOnce = false;
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
         
        Camera cam22 = GameObject.Find("pause_camera").GetComponent<Camera>();
        // Replace the `cam` variable with your camera.
        float w = GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().maxX;
        float h = GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().maxY;
        //  float x = w * 0.5f - 0.5f;
        //  float y = h * 0.5f - 0.5f;

        //  cam22.transform.position = new Vector3(x, y, -10f);
        float middleSceneX = ( GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().minX + GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().maxX) / 2;
        float middleSceneY = (GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().minY + GameObject.Find("checkerBoard(256x256)").GetComponent<WorldLoader>().maxY) / 2;
        Debug.Log("EXACT CENTER IS" + middleSceneX + "," + middleSceneY);
         cam22.transform.position = new Vector3(middleSceneX, middleSceneY, -10f);
        cam22.orthographicSize = ((w > h * cam22.aspect) ? (float)w / (float)cam22.pixelWidth * cam22.pixelHeight : h) / 2;
        // To add padding, just add a value to the result of the `orthographicSize` calculation, like this:
        // cam.orthographicSize = ((w > h * cam.aspect) ? (float)w / (float)cam.pixelWidth * cam.pixelHeight : h) / 2 + 1;
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
                        //6-24-2024
                        //pause takes priority and only during player alive seq
                        if (GameObject.Find("altimeter").GetComponent<menu_runtime>().specButtonStat == 1&& GameObject.Find("altimeter").GetComponent<menu_runtime>().screenshotDone == false)
                        {
                            g.SetActive(true);
                        }
                      else  if (downRefreshCount>downRefresh)
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

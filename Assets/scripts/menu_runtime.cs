using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class menu_runtime : MonoBehaviour
{
    public int btn_pauser = -1;
    public int specButtonStat = -1;
    public GameObject ListnerAndRuntimeOBJ;
    public GameObject playerOBJ;
    public int nextLevel = 0;
    int buttonVal = -1;
    public bool screenshotDone=false;
    // Start is called before the first frame update
    void Start()
    {
        btn_pauser = -1;
        if (ListnerAndRuntimeOBJ==null)
        {
            Debug.Log("NULL VALUE, LOADING");
            ListnerAndRuntimeOBJ = this.gameObject;
        }

    }
    //12-8-2021
    //For this to work there are two gameobjects 
    //ListnerAndRuntimeOBJ - this can either be set ahead of time or picked up on the spot
    // This gameobject needs to have menu_runtime and the realGenericButtonListner script attached!
    //playerOBJ - Connect this to the player prefab
    //specButtonStat is a custom value- currently designed to be used to tell the player to sodoff and not allow any input or rotation
    public void issueComplete()
    {
        //11-25-2024 -I am back! finishing up with ideas
        //skip to next level because I am not going to playtest every level and rather than leave it broken, give this way
        btn_pauser = 2;
        StartCoroutine(menu_waiter());
    }
    // Update is called once per frame
    void Update()
    {
        if (!GameObject.Find("minimap"))
        {
            GameObject minimap = Instantiate(Resources.Load("ui\\minimap")) as GameObject;
            minimap.name = "minimap";
            minimap.transform.position = new Vector3(6.913f, -3.84f, 1.93f);
        }
        if (!GameObject.Find("Cube"))
        {
            GameObject minimap = Instantiate(Resources.Load("ui\\Cube")) as GameObject;
            minimap.name = "Cube";
            minimap.transform.position = new Vector3(11.0006f, -3.75883f, 10f);
        }
        //   Debug.Log("VALUE IS " + this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen);
        int fff= GameObject.Find(ListnerAndRuntimeOBJ.name).GetComponent<realGenericButtonListner>().buttonScreeen;
    //    Debug.Log("WHAT IS " + fff);
        if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen != 0)
        {

            if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 1)
            {
                btn_pauser = 2;
            }
            else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 2)
            {
                btn_pauser = 1;
                //3-31-2022 This will exit or return to the main menu
                //TODO- add check to see if there is a stage in the flow or not. If not then exit the game
                EndGame();
            }
            else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 3)
            {
                //1-4-2023 -return to title screen, btn_pauser is important to set back to two otherwise it will be frozen
                btn_pauser = 2;
              //  Destroy(GameObject.Find("sela"));
                SceneManager.LoadScene("title_scene");
            }
            else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 4 || Input.GetButtonUp("Fire34"))
            {
                Debug.Log("HI THERE");
                //11-25-2024 -I am back! finishing up with ideas
                //skip to next level because I am not going to playtest every level and rather than leave it broken, give this way
                btn_pauser = 2;
                //call the next level through a function
                //     GameObject.Find("Player_plane").transform.position=new Vector3(GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Land_s + 2, GameObject.Find("Player_plane").transform.position.y, 0);
                // GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt = GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().OBJ_Height;
                //GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed < 5 && GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground == true && timeStart == true
              StartCoroutine(menu_waiter());
            //  
               // Debug.Log("drf_11-25");
               // Time.timeScale = 1;
            }
            else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 5)
            {
                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().noHullStress==false)
                {
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().noHullStress = true;
                    GameObject.Find("txt_bod_stress").GetComponent<Text>().text = "DISABLED";
                }
                else
                {
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().noHullStress = false;
                    GameObject.Find("txt_bod_stress").GetComponent<Text>().text = "HULL STRESS";

                }
            }
            else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 6)
            {
                //hide debug text values in game
                if (GameObject.Find("InputDisp").GetComponent<Text>().enabled == false)
                {
                 //   GameObject.Find("chk_toggle_debug_checker").GetComponent<Toggle>().isOn = false;
                    GameObject.Find("InputDisp").GetComponent<Text>().enabled = true;
                    GameObject.Find("dbg_fps").GetComponent<Text>().enabled = true;
                }
                else
                {
                  //  GameObject.Find("chk_toggle_debug_checker").GetComponent<Toggle>().isOn = true;
                    GameObject.Find("InputDisp").GetComponent<Text>().enabled = false;
                    GameObject.Find("dbg_fps").GetComponent<Text>().enabled = false;
                }

            }

                Debug.Log("HI THERE");
           this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen = 0;
        }
        if (Input.GetButtonUp("Fire34"))
        {
            issueComplete();
        }

        GameObject curPlay = GameObject.Find(playerOBJ.name);
        Transform lard = curPlay.GetComponent<Transform>();
        mplane_controller FFF = curPlay.GetComponent<mplane_controller>();


        //Handling the pause effects 8-25-19
        //thanks ss2 for doing the groundwork/research, but this time we will have a more extensive menu system
        if (SceneManager.GetActiveScene().name.Contains("Sample"))
        {
            if (GameObject.Find("btn_Resume")) //if it exists
            {
             //   buttonVal= GameObject.Find("btn_Resume").GetComponent<GenericButtonController>().buttonVal;
             //   buttonVal = GameObject.Find("btn_Quit").GetComponent<GenericButtonController>().buttonVal;
          //      Debug.Log("YOUR BUTTON VALUE IS " + buttonVal);
            }

                if ((btn_pauser == 1 || Input.GetButtonUp("Fire2")) && Time.timeScale != 0 && FFF.pdead == false) //StartButton , not paused and not dead
            {
                btn_pauser = -1;
                specButtonStat = 1;
                GameObject getCand = GameObject.Find("Canvas");
                // GameObject getEvent = GameObject.Find("EventSystem");

                GameObject btn_quiter = Instantiate(Resources.Load("menu\\pause\\btn_Quit")) as GameObject;
                // btn_quiter.transform.parent = getCand.transform; //this sets the prefab to the canvas, which will control the location
                btn_quiter.name = "btn_Quit";
                btn_quiter.transform.SetParent(getCand.transform, false);
                btn_quiter.transform.localPosition = new Vector2(50, -150.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                EventSystem.current.firstSelectedGameObject = btn_quiter;

                GameObject btn_returner = Instantiate(Resources.Load("menu\\pause\\btn_return")) as GameObject;
                // btn_quiter.transform.parent = getCand.transform; //this sets the prefab to the canvas, which will control the location
                btn_returner.name = "btn_return";
                btn_returner.transform.SetParent(getCand.transform, false);
                btn_returner.transform.localPosition = new Vector2(50, -75.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                EventSystem.current.firstSelectedGameObject = btn_returner;

                GameObject btn_Resume = Instantiate(Resources.Load("menu\\pause\\btn_Resume")) as GameObject;
                btn_Resume.name = "btn_Resume";
                btn_Resume.transform.SetParent(getCand.transform, false);
                btn_Resume.transform.localPosition = new Vector2(50, 0.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                EventSystem.current.SetSelectedGameObject(btn_Resume.gameObject); // Highlight the button


                GameObject btn_skipLevel = Instantiate(Resources.Load("menu\\pause\\btn_skip_level")) as GameObject;
                btn_skipLevel.name = "btn_skipLevel";
                btn_skipLevel.transform.SetParent(getCand.transform, false);
                btn_skipLevel.transform.localPosition = new Vector2(50, -200.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location

                GameObject chk_toggle_hullStress = Instantiate(Resources.Load("menu\\pause\\chk_toggle_hullStress")) as GameObject;
                chk_toggle_hullStress.name = "chk_toggle_hullStress";
                chk_toggle_hullStress.transform.SetParent(getCand.transform, false);
                chk_toggle_hullStress.transform.localPosition = new Vector2(750, -230.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().noHullStress == false)
                {
                    GameObject.Find("chk_toggle_hullStress_checker").GetComponent<Toggle>().isOn = true;
                }
                else
                {
                    GameObject.Find("chk_toggle_hullStress_checker").GetComponent<Toggle>().isOn = false;
                }


                GameObject chk_debug_active = Instantiate(Resources.Load("menu\\pause\\chk_debug_active")) as GameObject;
                chk_debug_active.name = "chk_debug_active";
                chk_debug_active.transform.SetParent(getCand.transform, false);
                chk_debug_active.transform.localPosition = new Vector2(750, -260.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                if (GameObject.Find("InputDisp").GetComponent<Text>().enabled == false)
                {
                    GameObject.Find("chk_toggle_debug_checker").GetComponent<Toggle>().isOn = false;
                    GameObject.Find("InputDisp").GetComponent<Text>().enabled = false;
                    GameObject.Find("dbg_fps").GetComponent<Text>().enabled = false;
                }
                else
                {
                    GameObject.Find("chk_toggle_debug_checker").GetComponent<Toggle>().isOn = true;
                    GameObject.Find("InputDisp").GetComponent<Text>().enabled = true;
                    GameObject.Find("dbg_fps").GetComponent<Text>().enabled = true;
                }


                GameObject txt_music_field = Instantiate(Resources.Load("menu\\pause\\txt_music_field")) as GameObject;
                txt_music_field.name = "txt_music_field";
                txt_music_field.transform.SetParent(getCand.transform, false);
                txt_music_field.transform.localPosition = new Vector2(750, -190.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                GameObject.Find("txt_ugm").GetComponent<InputField>().text = GameObject.Find("Player_plane").GetComponent<ugbm>().musicDirectory;

                GameObject ui_wholeMap = Instantiate(Resources.Load("menu\\pause\\ui_wholeMap")) as GameObject;
                ui_wholeMap.name = "ui_wholeMap";
                ui_wholeMap.transform.SetParent(getCand.transform, false);
                ui_wholeMap.transform.localPosition = new Vector2(-550, -60.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location

                if (GameObject.Find("txt_Pause"))
                {
                    Destroy(GameObject.Find("txt_Pause"));
                }


                GameObject txt_Pause = Instantiate(Resources.Load("menu\\pause\\txt_PAUSED")) as GameObject;
                txt_Pause.name = "txt_Pause";
                txt_Pause.transform.SetParent(getCand.transform, false);
                txt_Pause.transform.localPosition = new Vector2(50, 75.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location

                //debug zone 8-18-2022

                //Background Lighting
                GameObject sld_BR = Instantiate(Resources.Load("menu\\pause\\debug\\sld_radiosit_back")) as GameObject;
                sld_BR.name = "sld_BR";
                sld_BR.GetComponent<RectTransform>().anchorMin = new Vector2(.85f, 0.53f);
                sld_BR.GetComponent<RectTransform>().anchorMax = new Vector2(.85f, 0.53f);
                sld_BR.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
                // GameObject.Find("pic_green_debug_menu").gameObject.transform.parent = sld_BR.gameObject.transform;
                RectTransform BRdu = GameObject.Find("Slider_radiosit_back").GetComponent<RectTransform>();
                GameObject.Find("Slider_radiosit_back").GetComponent<Slider>().value = Camera.main.GetComponent<weather>().background_radiosity;
                // sld_BR.transform.SetParent(getCand.transform, false);
                sld_BR.transform.SetParent(getCand.transform, false);
                sld_BR.transform.localPosition = new Vector2(-40, -375);
                EventSystem.current.firstSelectedGameObject = sld_BR;
                //sld_BR.transform.localPosition = new Vector2(-300, -500.0f);


                //Object Lighting
                GameObject sld_RAD = Instantiate(Resources.Load("menu\\pause\\debug\\sld_radiosit")) as GameObject;
                sld_RAD.name = "sld_RAD";
                sld_RAD.GetComponent<RectTransform>().anchorMin = new Vector2(.85f, 0.49f);
                sld_RAD.GetComponent<RectTransform>().anchorMax = new Vector2(.85f, 0.49f);
                sld_RAD.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
                RectTransform RADdu = GameObject.Find("Slider_radiosit").GetComponent<RectTransform>();
                GameObject.Find("Slider_radiosit").GetComponent<Slider>().value = Camera.main.GetComponent<weather>().radiosity;
                //  sld_RAD.transform.SetParent(getCand.transform, true);

                sld_RAD.transform.SetParent(getCand.transform, false);
                sld_RAD.transform.localPosition = new Vector2(-40, -415);

                //  sld_RAD.transform.localPosition = new Vector2(-300, -600.0f);


                //FPS
                GameObject sld_FPSS = Instantiate(Resources.Load("menu\\pause\\debug\\sld_fpss")) as GameObject;
                sld_FPSS.name = "sld_FPSS";
                sld_FPSS.GetComponent<RectTransform>().anchorMin = new Vector2(.85f, 0.56f);
                sld_FPSS.GetComponent<RectTransform>().anchorMax = new Vector2(.85f, 0.56f);
                sld_FPSS.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
                RectTransform fpsDu =  GameObject.Find("Slider_FPSS").GetComponent<RectTransform>();
                GameObject.Find("Slider_FPSS").GetComponent<Slider>().value = Camera.main.GetComponent<frame_rate>().fpss;

                // sld_FPSS.transform.localPosition = new Vector2(-300, -400.0f);
                sld_FPSS.transform.SetParent(getCand.transform, false);
                sld_FPSS.transform.localPosition = new Vector2(-40, -335);


                //weather
                GameObject sld_weather = Instantiate(Resources.Load("menu\\pause\\debug\\sld_weather")) as GameObject;
                sld_weather.name = "sld_weather";
                sld_weather.GetComponent<RectTransform>().anchorMin = new Vector2(.85f, 0.59f);
                sld_weather.GetComponent<RectTransform>().anchorMax = new Vector2(.85f, 0.59f);
                sld_weather.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
                RectTransform weatherDu = GameObject.Find("Slider_weather").GetComponent<RectTransform>();
                GameObject.Find("Slider_weather").GetComponent<Slider>().value = Camera.main.GetComponent<weather>().cloudy;


                //  sld_weather.transform.localPosition = new Vector2(-300, -300.0f);
                sld_weather.transform.SetParent(getCand.transform, false);
                sld_weather.transform.localPosition = new Vector2(-40, -295);


                //cloud height
                GameObject sld_cloud_height = Instantiate(Resources.Load("menu\\pause\\debug\\sld_cloud_level")) as GameObject;
                 sld_cloud_height.name = "sld_cloud_height";
                sld_cloud_height.GetComponent<RectTransform>().anchorMin = new Vector2(.85f, 0.63f);
                sld_cloud_height.GetComponent<RectTransform>().anchorMax = new Vector2(.85f, 0.63f);
                sld_cloud_height.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
                RectTransform CloudHeightDu = GameObject.Find("Slider_cloudLevel").GetComponent<RectTransform>();
                GameObject.Find("Slider_cloudLevel").GetComponent<Slider>().value = Camera.main.GetComponent<weather>().cloudHeight;


                //  sld_cloud_height.transform.localPosition = new Vector2(-300, -100.0f);
                sld_cloud_height.transform.SetParent(getCand.transform, false);
                sld_cloud_height.transform.localPosition = new Vector2(-40, -255);

                // wind

                GameObject sld_wind = Instantiate(Resources.Load("menu\\pause\\debug\\sld_wind")) as GameObject;
                sld_wind.name = "sld_wind";
                sld_wind.GetComponent<RectTransform>().anchorMin = new Vector2(.85f, 0.67f);
                sld_wind.GetComponent<RectTransform>().anchorMax = new Vector2(.85f, 0.67f);
                sld_wind.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
                RectTransform windDu = GameObject.Find("Slider_wind").GetComponent<RectTransform>();
                GameObject.Find("Slider_wind").GetComponent<Slider>().value = Camera.main.GetComponent<weather>().AirSpeed;


                //  sld_wind.transform.localPosition = new Vector2(-300, -200.0f);
                sld_wind.transform.SetParent(getCand.transform, false);
                sld_wind.transform.localPosition = new Vector2(-40, -215);

                GameObject.Find("pic_green_debug_menu").GetComponent<Image>().enabled = true;

                //end of debug zone
                GameObject ddd = GameObject.Find("shipBlast");
                /*  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f)); */
                //   AudioSource blaster = ddd.GetComponent<AudioSource>();
                //    blaster.volume = 0.0f;
                GameObject debug_container = Instantiate(Resources.Load("menu\\pause\\debug\\debug_container")) as GameObject;
                debug_container.name = "debug_container";
                // Pass in a callback telling the routine what to do when the snapshot is ready
                screenshotDone = false;


                // GameObject.Find("checkerBoard(256x256)").GetComponent<SnapshotController>().Snapshot(HandleNewSnapshotTexture);
                //    GameObject.Find("checkerBoard(256x256)").GetComponent<SnapshotController>().Snapshot(HandleNewSnapshotTexture);
                //7-2-2024 corrections to new pause map and a you are here locater
                GameObject uhere = Instantiate(Resources.Load("uhere")) as GameObject;
                uhere.name = "uhere";
                uhere.transform.position = GameObject.Find("Player_plane").transform.position;
          


                muteSound();
               //6-27-2024
               //I had the other snapshot method, which seemed to work but there are issues with it. In the end, this method of utilizing the frozen scene works for the purpose of the current applicattion
              StartCoroutine(WaitForItemsToLoad());
                
               // Time.timeScale = 0;
              //      screenshotDone = true;
            }
            else if ((btn_pauser == 2 || Input.GetButtonUp("Fire2")) && Time.timeScale != 1 && FFF.pdead ==false) //StartButton ,  paused and not dead
            {
                UnmutemuteSound();
                btn_pauser = -1;
                DestroyPauseMenuObj();
                specButtonStat = -1;
                Time.timeScale = 1;
            }
                else if (Input.GetButtonUp("debug1"))
            {
                Time.timeScale = 1;
                //   GameObject.Find("checkerBoard(256x256)").GetComponent<SnapshotController>().Snapshot(HandleNewSnapshotTexture);
                screenshotDone = true;
                Debug.Log("6-27-2024-prob should remove this");
            }
        }
    }

   
    private IEnumerator menu_waiter()
    {

        nextLevel = 1;
        YieldInstruction timedWait = new WaitForSeconds(0.01f);
        GameObject.Find("bluLoading").GetComponent<SpriteRenderer>().enabled = false;
       GameObject.Find("checkerBoard(256x256)").GetComponent<SpriteRenderer>().enabled = false;
             GameObject.Find("minimap").GetComponent<MeshRenderer>().enabled = false;
    //     GameObject.Find("minimap").gameObject.SetActive(false);//= false;
    
        Camera.main.GetComponent<cam_distance>().sceneLoad = false;
      //  Camera.main.GetComponent<cam_distance>().resetthis();


        int sleepCount = 0;
        while (sleepCount < 50) //a little bit of wait 
        {
            yield return timedWait;
            sleepCount++;
            Debug.Log("drf_11-25");
        }
        Debug.Log("drf_11-25_2024");
        GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().funcAutoLoader();
    }
   

    IEnumerator WaitForItemsToLoad()
    {
        int countdown = 1;
        //   velocity = (transform.position - pos) / Time.deltaTime;
        //   pos = transform.position;

        YieldInstruction timedWait = new WaitForSeconds(0.15f);


        while (countdown > 0)
        {
            yield return timedWait;
            countdown = countdown - 1;
            Debug.Log("COUNTDOWN" + countdown);


        }
        screenshotDone = true;
        Time.timeScale = 0;
    }

    private void HandleNewSnapshotTexture(Texture2D texture)
    {
       
       var material = GetComponent<Renderer>().material;
        
        // IMPORTANT! Textures are not automatically GC collected. 
        // So in order to not allocate more and more memory consider actively destroying
        // a texture as soon as you don't need it anymore
         if (material.mainTexture) Destroy(material.mainTexture);

        material.mainTexture = texture;
        screenshotDone = true;
    }
    //sound or music that should be stopped when the pause button is pressed should go here
    void muteSound()
    {
        GameObject.Find("PSFX_AMB").GetComponent<AudioSource>().enabled = false;
    }

    void UnmutemuteSound()
    {
        GameObject.Find("PSFX_AMB").GetComponent<AudioSource>().enabled = true;
    }

    public void EndGame()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
         Application.Quit();
#endif
    }

    void DestroyPauseMenuObj()
    {
        GameObject.Find("debug_container").GetComponent<debug_menu_ui>().exitMenu();
        //create a destroy method
        GameObject btn_quit = GameObject.Find("btn_Quit");
        Destroy(btn_quit);
        GameObject btn_return = GameObject.Find("btn_return");
        Destroy(btn_return);
        GameObject btn_Resume = GameObject.Find("btn_Resume");
        Destroy(btn_Resume);
        GameObject btn_skipLevel = GameObject.Find("btn_skipLevel");
        Destroy(btn_skipLevel);
        GameObject chk_toggle_hullStress = GameObject.Find("chk_toggle_hullStress");
        Destroy(chk_toggle_hullStress);
        GameObject chk_debug_active = GameObject.Find("chk_debug_active");
        Destroy(chk_debug_active);
        if (GameObject.Find("txt_ugm").GetComponent<InputField>().text=="")
        {
            GameObject.Find("Player_plane").GetComponent<ugbm>().musicDirectory = "";
            GameObject.Find("Player_plane").GetComponent<ugbm>().musicLoader();
        }
        else
        {
            GameObject.Find("Player_plane").GetComponent<ugbm>().musicDirectory = GameObject.Find("txt_ugm").GetComponent<InputField>().text;
            GameObject.Find("Player_plane").GetComponent<ugbm>().musicLoader();
        }

        GameObject txt_music_field = GameObject.Find("txt_music_field");
        Destroy(txt_music_field);
        GameObject ui_wholeMap = GameObject.Find("ui_wholeMap");
        Destroy(ui_wholeMap);
        if (GameObject.Find("txt_Pause"))
        {
            GameObject.Find("txt_Pause").GetComponent<Text>().text = "RESUME..";
            StartCoroutine(DestroyWithDelay());
        }

        GameObject sld_FPSS = GameObject.Find("sld_FPSS");
        Destroy(sld_FPSS);
        GameObject sld_weather = GameObject.Find("sld_weather");
        Destroy(sld_weather);
        GameObject sld_wind = GameObject.Find("sld_wind");
        Destroy(sld_wind);
        GameObject sld_cloud_height = GameObject.Find("sld_cloud_height");
        Destroy(sld_cloud_height);
        GameObject sld_BR = GameObject.Find("sld_BR");
        Destroy(sld_BR);
        GameObject sld_RAD = GameObject.Find("sld_RAD");
        Destroy(sld_RAD);
        GameObject.Find("pic_green_debug_menu").GetComponent<Image>().enabled = false;
        GameObject debug_container = GameObject.Find("debug_container");
        Destroy(debug_container);
        GameObject uhere = GameObject.Find("uhere");
        Destroy(uhere);

        //  var material = GetComponent<Renderer>().material;
        //   Resources.UnloadUnusedAssets();

    }
    public float pause_delay = 3f; // Time in seconds to wait before destroying the object
    private IEnumerator DestroyWithDelay()
    {
        yield return new WaitForSeconds(pause_delay); // Wait for the specified delay
        GameObject txt_Pause = GameObject.Find("txt_Pause");
        Destroy(txt_Pause);
        Debug.Log("GameObject destroyed after " + pause_delay + " seconds.");
    }


}

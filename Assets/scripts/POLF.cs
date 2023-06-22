using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class POLF : MonoBehaviour
{
    double curTime = 0;
    float MaxSpeed = 0;
    float impactDev = 0;
    double MaxAlt = 0;
    bool bailed = true;
    string stats_msg = "stats go here";
    // Start is called before the first frame update
    //this is the script for the golf like mini game demo

    float delay = .1f; //only one sec
    float nextUsage;

    bool timeStart = false;
    bool curSceneOver = false;

    //These are temp vars to be replaced at runtime by the WorldLoader script
    public string OBJ_title="EMPTY";
    public int OBJ_Height=9999;
    public int OBJ_Land_s=9999;
    public int OBJ_Land_e=99999;
    public int grade_score = 0;
    public int saved_grade_score = 0;
    public int GameObjective = 0;
    public bool StageStarted = false;

    //5-11-2023 plan is to allow scenes to set grading conditionals
    public int grading_A = 3000;
    public int grading_C = 1500;
    public int grading_F = 1;
    private Camera cam;
    void Start()
    {
        cam = Camera.main;
    }
    float _screenWidth;
    float _screenHeight;
    void funcICO()
    {
        string gradeIconToLoad = "thumb_up";
        if (grade_score > grading_A)
        {
            gradeIconToLoad = "thumb_up";
        }
        else if (grade_score > grading_C)
        {
            gradeIconToLoad = "cminy";
        }
        else if (grade_score > grading_F)
        {
            gradeIconToLoad = "poo";
        }
        else
        {
            gradeIconToLoad = "cross";
        }
       // if (grade_score>saved_grade_score)
        {
            saved_grade_score = grade_score; //new score to be saved
            //6-14-2023
            //this section is where the high score is set. search keyword for future reference is
            //what is the shorthand name for forumla units? 
            //not good? what rymes with boron
            //still stinks?
            //pu!
            GameObject.Find("sela").GetComponent<LevelHistory>().high_score[GameObject.Find("sela").GetComponent<LevelHistory>().curworld, GameObject.Find("sela").GetComponent<LevelHistory>().curscene]=saved_grade_score; //6-15-2023-might be an issue with array positions
        }
        GameObject img_rating_icon = Instantiate(Resources.Load(gradeIconToLoad)) as GameObject;
        img_rating_icon.name = "img_rating_icon";
        img_rating_icon.transform.parent = GameObject.Find("img_stat_extra").transform;
        img_rating_icon.transform.position = GameObject.Find("img_stat_extra").transform.position + new Vector3(2, 2.5f);
    }

    void funcTROLO()
    {
        stats_msg = "Flight facts: \n" + "Max Speed: " + MaxSpeed + "\n Impact: " + impactDev + "\n Max Altitude: " + MaxAlt + "\n Total Elapsed time: " + curTime + "Bailed: " + GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject;
        if (grade_score>1)
        {
            grade_score = ((int)MaxSpeed) - ((int)impactDev) + (((int)MaxAlt) * OBJ_Height) - ((int)curTime);

        }




        stats_msg = stats_msg + "\n\nRATING: " + grade_score + extraWords;
        Camera.main.GetComponent<HUD_buttons>().powerSwitch("off");
        Camera.main.GetComponent<HUD_buttons>().wheelUpDown("down");
        Camera.main.GetComponent<HUD_buttons>().WheelLandAlrt("!");
        Camera.main.GetComponent<HUD_buttons>().SpeedWarn("!");
        Camera.main.GetComponent<HUD_buttons>().GeneralWarn("!");
        //the case is gone, retry stage-
        GameObject uiAltiText2 = GameObject.Find("txt_stats");
        Text delta21 = uiAltiText2.GetComponent<Text>();
        delta21.text = stats_msg;//.Substring(0, locCnt);
        GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt = 0;

        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
        GameObject fss = Instantiate(Resources.Load("menu\\flight_stats_sign")) as GameObject;
        fss.name = "fss";
        _screenWidth = (Camera.main.orthographicSize * 2) / Screen.height * Screen.width;
        _screenHeight = Camera.main.orthographicSize * 2;
        fss.transform.localScale = new Vector3(_screenWidth, _screenHeight);
        GameObject.Find("Canvas").GetComponent<Canvas>().renderMode = RenderMode.ScreenSpaceCamera;
        GameObject.Find("Canvas").GetComponent<Canvas>().worldCamera = Camera.main;
        GameObject.Find("Canvas").GetComponent<Canvas>().sortingOrder = 40;
        GameObject.Find("img_stat_extra").GetComponent<Image>().enabled = true;
    }
    string extraWords = "";
    // Update is called once per frame
    void Update()
    {
        
        if (GameObject.Find("fss"))
        {
            GameObject fss = GameObject.Find("fss");
            fss.transform.position = Camera.main.transform.position + new Vector3(0, 0, 10);


        }
        if (GameObjective==0)
        {

            //went over objective, can't really turn around.,,.
            if (GameObject.Find("Player_plane").transform.position.x > OBJ_Land_e)
            {
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead = true;
            }
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == false)
            {
               // Debug.Log("MAX HEIGHT " + GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt);
             //   Debug.Log("OBJ HEIGHT " + OBJ_Height);
               // Debug.Log("GROUNDED: " + GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground);
                if (GameObject.Find("Player_plane").transform.position.x > OBJ_Land_s && GameObject.Find("Player_plane").transform.position.x < OBJ_Land_e && GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt > OBJ_Height && GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed < 5 && GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground == true && timeStart==true)
                {
                    grade_score = ((int)MaxSpeed) - ((int)impactDev) + (((int)MaxAlt) * OBJ_Height) - ((int)curTime);
                    extraWords = "complete!";
                    stats_msg = stats_msg + "\n\nRATING: " + grade_score + extraWords;
                    funcTROLO();
                    funcICO();
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().autoProgress = true;
                    GameObject uiCongrats = GameObject.Find("txt_OBJ");
                    uiCongrats.gameObject.GetComponent<Text>().text = "                                     You win!";
                    uiCongrats.gameObject.GetComponent<Text>().enabled = true;
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead = true;
                //    GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().
                    GameObject.Find("sela").GetComponent<LevelHistory>().LoadSameStateScene(GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().world, GameObject.Find("Player_plane").GetComponent<WorldFlowTrack>().scene);//todo 6-12-2023:update score tracking array
                }
            }


            if (curSceneOver == true && GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == false)
            {

               GameObject.Find("Player_plane").GetComponent<mplane_controller>().autoProgress = false;
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt = 0;
                //12-1-2021 this means that the player restarted the scene again
                this.gameObject.GetComponent<SpriteRenderer>().enabled = true;
                timeStart = false;
                curTime = 0;
                MaxSpeed = 0;
                impactDev = 0;
                MaxAlt = 0;
                bailed = true;
                curSceneOver = false;
                GameObject uiAltiText2 = GameObject.Find("txt_stats");
                Text delta21 = uiAltiText2.GetComponent<Text>();
                delta21.text = "";//.Substring(0, locCnt);
                GameObject uiAltiText22 = GameObject.Find("txt_OBJ");
                uiAltiText22.gameObject.GetComponent<Text>().enabled = true;
                GameObject uiAltiText222 = GameObject.Find("img_obj_difference");
                uiAltiText222.gameObject.GetComponent<Image>().enabled = true;

                GameObject bluTXT = GameObject.Find("bluLoading");
                bluTXT.gameObject.GetComponent<SpriteRenderer>().enabled = true;
                extraWords = "";

            }
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == true && curSceneOver == false && extraWords=="")
            {
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().autoProgress = true;
                //    GameObject.Find("img_obj_difference").transform.position = new Vector3(GameObject.Find("img_obj_difference").transform.position.x, GameObject.Find("img_obj_difference").transform.position.y, -6000);
                //   GameObject.Find("img_obj_difference").GetComponent<RectTransform>().transform.position = new Vector3(GameObject.Find("img_obj_difference").GetComponent<RectTransform>().transform.position.x, GameObject.Find("img_obj_difference").GetComponent<RectTransform>().transform.position.y, -6000);
                curSceneOver = true;
                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == false && GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == true)
                {
                    // grade_score = -2147483647;
                    grade_score = -999999999;
                    extraWords = "\nURDEAD";
                }
                funcTROLO();
                funcICO();
            }
            else if (Time.time > nextUsage && timeStart == true) //continue scrolling
            {

                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > MaxSpeed)
                {
                    MaxSpeed = GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed;
                }
                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > impactDev)
                {
                    impactDev = GameObject.Find("Player_plane").GetComponent<mplane_controller>().impact;
                }
                if (GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt > MaxAlt)
                {
                    MaxAlt = GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt;
                }


                curTime = curTime + 0.1;
                nextUsage = Time.time + delay; //it is on display
            }
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().qreset == true) //if the player ejects early and restarts the stage early, bring everything back in
            {
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().qreset = false;
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt = 0;
                this.gameObject.GetComponent<SpriteRenderer>().enabled = true;
                timeStart = false;
                curTime = 0;
                MaxSpeed = 0;
                impactDev = 0;
                MaxAlt = 0;
                bailed = true;
                curSceneOver = false;
                GameObject uiAltiText2 = GameObject.Find("txt_stats");
                Text delta21 = uiAltiText2.GetComponent<Text>();
                delta21.text = "";//.Substring(0, locCnt);
                GameObject uiAltiText22 = GameObject.Find("txt_OBJ");
                uiAltiText22.gameObject.GetComponent<Text>().enabled = true;
                GameObject uiAltiText222 = GameObject.Find("img_obj_difference");
                uiAltiText222.gameObject.GetComponent<Image>().enabled = true;

                GameObject bluTXT = GameObject.Find("bluLoading");
                bluTXT.gameObject.GetComponent<SpriteRenderer>().enabled = true;

            }
        }
        else if ( GameObjective==1)
        {

        }
      




    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.name=="Player_plane")
        {
            StageStarted = true;
            GameObject uiAltiText2 = GameObject.Find("txt_OBJ");
            uiAltiText2.gameObject.GetComponent<Text>().enabled = false;
            GameObject bluTXT = GameObject.Find("bluLoading");
            bluTXT.gameObject.GetComponent<SpriteRenderer>().enabled = false;
            GameObject uiAltiText222 = GameObject.Find("img_obj_difference");
            uiAltiText222.gameObject.GetComponent<Image>().enabled = false;

            this.gameObject.GetComponent<SpriteRenderer>().enabled = false;
            timeStart = true;
        }

    }
}

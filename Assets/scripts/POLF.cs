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

    public int GameObjective = 0;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (GameObjective==0)
        {
            //went over objective, can't really turn around.,,.
            if (GameObject.Find("Player_plane").transform.position.x > OBJ_Land_e)
            {
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead = true;
            }
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == false)
            {
                if (GameObject.Find("Player_plane").transform.position.x > OBJ_Land_s && GameObject.Find("Player_plane").transform.position.x < OBJ_Land_e && GameObject.Find("Player_plane").GetComponent<mplane_controller>().maxAlt > OBJ_Height && GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed < 5 && GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground == true)
                {
                    GameObject uiCongrats = GameObject.Find("txt_OBJ");
                    uiCongrats.gameObject.GetComponent<Text>().text = "                                     You win!";
                    uiCongrats.gameObject.GetComponent<Text>().enabled = true;
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead = true;

                }
            }


            if (curSceneOver == true && GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == false)
            {
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

                GameObject bluTXT = GameObject.Find("bluLoading");
                bluTXT.gameObject.GetComponent<SpriteRenderer>().enabled = true;

            }
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == true && curSceneOver == false)
            {
                curSceneOver = true;
                stats_msg = "Flight facts: \n" + "Max Speed: " + MaxSpeed + "\n Impact: " + impactDev + "\n Max Altitude: " + MaxAlt + "\n Total Elapsed time: " + curTime + "Bailed: " + GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject;
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
            GameObject uiAltiText2 = GameObject.Find("txt_OBJ");
            uiAltiText2.gameObject.GetComponent<Text>().enabled = false;
            GameObject bluTXT = GameObject.Find("bluLoading");
            bluTXT.gameObject.GetComponent<SpriteRenderer>().enabled = false;

            this.gameObject.GetComponent<SpriteRenderer>().enabled = false;
            timeStart = true;
        }

    }
}

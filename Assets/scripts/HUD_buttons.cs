using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD_buttons : MonoBehaviour
{
    // Start is called before the first frame update
    float nextUsage;
    float delay = 0.5f; //only half delay
    void Start()
    {
        nextUsage = Time.time + delay; //it is on display

    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time > nextUsage)
        {



            nextUsage = Time.time + delay;
        }
    }


    public void powerSwitch(string off_on)
    {
        if (off_on=="off")
        {
            GameObject.Find("pic_power_toggle").GetComponent<Image>().enabled = false;
        }
        else
        {
            GameObject.Find("pic_power_toggle").GetComponent<Image>().enabled = true;
        }
    }

    public void wheelUpDown(string Up_down)
    {
        if (Up_down == "down")
        {
            GameObject.Find("pic_wheel_toggle").GetComponent<Image>().enabled = false;
        }
        else
        {
            GameObject.Find("pic_wheel_toggle").GetComponent<Image>().enabled = true;
        }
    }

    public void WheelLandAlrt(string WheelNotDown)
    {
        if (WheelNotDown == "!")
        {
            GameObject.Find("pic_wheel_not_land_toggle").GetComponent<Image>().enabled = false;
        }
        else
        {
            GameObject.Find("pic_wheel_not_land_toggle").GetComponent<Image>().enabled = true;
        }
    }

    public void SpeedWarn(string Speed)
    {
        if (Speed == "!")
        {
            GameObject.Find("pic_speed_toggle").GetComponent<Image>().enabled = false;
        }
        else
        {
            GameObject.Find("pic_speed_toggle").GetComponent<Image>().enabled = true;
        }
    }

    public void GeneralWarn(string Uh)
    {
        if (Uh == "!")
        {
            GameObject.Find("pic_warning_toggle").GetComponent<Image>().enabled = false;
        }
        else
        {
            GameObject.Find("pic_warning_toggle").GetComponent<Image>().enabled = true;
        }
    }
}

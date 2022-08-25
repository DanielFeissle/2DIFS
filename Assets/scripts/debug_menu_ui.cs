using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class debug_menu_ui : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void LateUpdate()
    {
        //  GameObject.Find("sld_hull_stress").GetComponent<Slider>().value = WingHP;
      

    }
    public void exitMenu()
    {
        if (GameObject.Find("Slider_cloudLevel"))
        {
            Camera.main.GetComponent<weather>().cloudHeight = (int)GameObject.Find("Slider_cloudLevel").GetComponent<Slider>().value;
        }
        if (GameObject.Find("Slider_FPSS"))
        {
            Camera.main.GetComponent<frame_rate>().fpss = (int)GameObject.Find("Slider_FPSS").GetComponent<Slider>().value;
        }
        if (GameObject.Find("Slider_weather"))
        {
              Camera.main.GetComponent<weather>().cloudy = (int)GameObject.Find("Slider_weather").GetComponent<Slider>().value;
        }
        if (GameObject.Find("Slider_wind"))
        {
            if ((int)GameObject.Find("Slider_wind").GetComponent<Slider>().value==0)
            {
                GameObject.Find("Slider_wind").GetComponent<Slider>().value = 1;
            }
              Camera.main.GetComponent<weather>().AirSpeed = (int)GameObject.Find("Slider_wind").GetComponent<Slider>().value;
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

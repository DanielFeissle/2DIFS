using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weather : MonoBehaviour
{
    public int AirSpeed = 444;
    public int cloudy = 0; //more clouds is more chance for thunder/rain
    
    float delay = 0.25f; //only half delay
    float nextUsage;
    private Camera cam;
    Renderer m_Renderer;
    int priorSpeed = 1;
  
    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        m_Renderer = GetComponent<Renderer>();
        delay = 0.15f; //only half delay
        nextUsage = 0;
      

    }

    // Update is called once per frame
    void Update()
    {

        if (Time.time > nextUsage || AirSpeed!=priorSpeed) //continue scrolling
        {
            Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
            Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
            if (Random.Range(0,100)<cloudy)
            {
                if (this.transform.position.y>-50)
                {
                   
                    for (int i = 0; i < cloudy; i++)
                    {
                        int randoCloudo = Random.Range(1, 5);
                        GameObject picky = Instantiate(Resources.Load("weather/cloud/cloud"+ randoCloudo)) as GameObject;
                        picky.name = "starmon";
                        //3-15-2022 now the weather objects will spawn in the right direction based on the current air speed direction
                        if (Camera.main.GetComponent<weather>().AirSpeed>0)
                        {
                            picky.transform.position = new Vector2(UnityEngine.Random.Range(p.x + 75, q.x + 75), UnityEngine.Random.Range(q.y - 25, p.y + 25));
                        }
                        else if (Camera.main.GetComponent<weather>().AirSpeed<0)
                        {
                            picky.transform.position = new Vector2(UnityEngine.Random.Range(p.x - 75, q.x - 75), UnityEngine.Random.Range(q.y - 25, p.y + 25));
                        }
                     
                        //        picky.transform.localScale = new Vector2(UnityEngine.Random.Range(p.x , q.x ), UnityEngine.Random.Range(q.y , p.y ));
                        picky.transform.localScale = new Vector2(UnityEngine.Random.Range(4, 8), UnityEngine.Random.Range(4, 8));
                        if (Random.Range(0, 100) > cloudy)
                        {
                            break;
                        }
                    }
                }
              
            }


            //2-16-2022 only do this if a zero number gets put in by accident!
            if (AirSpeed==0)
            {
                Debug.Log("MY VAL IS" + priorSpeed);
                bool positive = priorSpeed > 0;
                if (positive == true)
                {
                    AirSpeed = 1;
                }
                else if (positive == false)
                {
                    AirSpeed = -1;
                }
            }

            cam = Camera.main;
            


            if (AirSpeed>0)
            {
                GameObject Supacont = Instantiate(Resources.Load("player\\contrail")) as GameObject;
                Supacont.name = "windy";
                Supacont.transform.position = new Vector3(q.x, ((p.y + q.y) / 2), 0);
                Supacont.transform.rotation = this.gameObject.transform.rotation;
                Supacont.transform.localScale = new Vector3(5, 40, 1);
                Supacont.AddComponent<weather_obj>();
                Supacont.GetComponent<SpriteRenderer>().enabled = false;
                Supacont.GetComponent<Rigidbody2D>().AddForce(Vector3.left * 594 * AirSpeed * Time.deltaTime);
            }
            else
            {
                GameObject Supacont = Instantiate(Resources.Load("player\\contrail")) as GameObject;
                Supacont.name = "windy";
                Supacont.transform.position = new Vector3(p.x, ((p.y + q.y) / 2), 0);
                Supacont.transform.rotation = this.gameObject.transform.rotation;
                Supacont.transform.localScale = new Vector3(5, 40, 1);
                Supacont.AddComponent<weather_obj>();
                Supacont.GetComponent<SpriteRenderer>().enabled = false;
                Supacont.GetComponent<Rigidbody2D>().AddForce(Vector3.left * 594 * AirSpeed * Time.deltaTime);
            }



            nextUsage = Time.time + delay; //it is on display

            priorSpeed = AirSpeed;
        }

    
    }
    }

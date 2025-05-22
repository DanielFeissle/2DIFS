using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weather_gc : MonoBehaviour
{
    //3-1-2022 
    //the goal of the weather garbage collector is to delete stuff after it is away from the player (MAIN CAMERA)
    // Start is called before the first frame update
    Renderer m_Renderer;
    public int rendDist = 200;
    private Rigidbody2D rb;
    private Camera cam;
    void Start()
    {
        m_Renderer = GetComponent<Renderer>();
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        try
        {
            //3-7-2022 now clouds go in the direction of generation
            if (Camera.main.GetComponent<weather>())
            {
                rb.AddForce(Vector3.right * Camera.main.GetComponent<weather>().AirSpeed * -5 * Time.deltaTime);
                float dist = Vector3.Distance(Camera.main.transform.position, transform.position);

                if (GetComponent<Renderer>().isVisible)
                //  {
                //   if (m_Renderer.isVisible)
                {
                    ////debug.log("object is visible");
                }
                else
                {
                    if (dist > rendDist)
                    {
                        Destroy(this.gameObject);
                    }

                }
            }

        }
        catch
        {
            Debug.Log("ERROR_ON_LOAD " + this.name + " ERROR: ");
        }


       


    }
    

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (Camera.main.GetComponent<weather>())
        {
            int weatherDetector = Camera.main.GetComponent<weather>().cloudy;
            if (weatherDetector > 55)  //3-15-2022 55 is rainhy weather, 65 and above is thunderboomers
            {
                if (collision.CompareTag("cloud"))
                {
                    var objects = GameObject.FindGameObjectsWithTag("rain");
                    if (objects.Length < 10)
                    {
                        GameObject RAIN = Instantiate(Resources.Load("weather\\rain")) as GameObject;
                        RAIN.name = "rain";
                        RAIN.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z);
                        RAIN.transform.rotation = this.gameObject.transform.rotation;
                        RAIN.transform.localScale = new Vector3(Random.Range(20, 35), Random.Range(20, 40), 1);
                    }

                }
            }
            if (weatherDetector > 65)
            {
                if (collision.CompareTag("cloud"))
                {
                    if (this.gameObject.GetComponent<Renderer>().isVisible == true)
                    {

                        var objects = GameObject.FindGameObjectsWithTag("lighting");
                        if (objects.Length < 1)
                        {
                            GameObject LMAN = Instantiate(Resources.Load("weather\\lighting")) as GameObject;
                            LMAN.name = "lrod";
                            LMAN.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z);
                            LMAN.transform.rotation = this.gameObject.transform.rotation;
                            LMAN.transform.localScale = new Vector3(Random.Range(.25f, 2), Random.Range(1, 5), 1);
                        }



                    }



                }
            }
        }

    }
}

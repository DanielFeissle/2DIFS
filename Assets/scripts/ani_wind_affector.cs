using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ani_wind_affector : MonoBehaviour
{

    Vector2 startPos;
    Vector2 startScale;
    float delay = 0.75f; //only half delay
    float nextUsage;
    int windCol = 0;
    float opX;
    float opY;
    string stupName="";
    // Start is called before the first frame update
    void Start()
    {
        startPos = this.gameObject.transform.position;
        startScale = this.transform.localScale;

        transform.localScale = new Vector2(.1f, transform.localScale.y);
        transform.position = startPos;
        nextUsage = Time.time + delay;

        stupName = "fpole" + UnityEngine.Random.Range(0,9999);

        GameObject fud2 = Instantiate(Resources.Load("fpole")) as GameObject;
        fud2.name = stupName;
        fud2.transform.position = this.transform.position;
     
     //   this.transform.parent = fud2.transform; //how do I put a parent with a child prefab, this is how!


    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.GetComponent<Rigidbody2D>() != null)
        {
            // windCol = 2;
        }
    }
    //2-23-22 final part, adjust speed for when player comes rolling on through the area
    float AirspeedOverride = 0;
    float AirspeedOverrideABS = 0;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<Rigidbody2D>()!=null)
        {

            if (!collision.GetComponent<weather_obj>())
            {
                //THis is the player contrails
                // delay = 0.05f;
                if (AirspeedOverrideABS==0)
                {
                    StartCoroutine(WindGust());
                    AirspeedOverrideABS = Mathf.Abs(AirspeedOverride);
                }

                if (Mathf.Abs(Camera.main.GetComponent<weather>().AirSpeed) > AirspeedOverrideABS)
                {
                    AirspeedOverrideABS = 0;
                    AirspeedOverride = 0;
                }
                if (AirspeedOverrideABS > 0f)
                {
                    AirspeedOverrideABS = AirspeedOverrideABS - 0.1f;
                    if (AirspeedOverrideABS < .2f)
                    {
                        AirspeedOverrideABS = Mathf.Round(AirspeedOverrideABS);
                        AirspeedOverride = Mathf.Round(AirspeedOverride);
                    }
                   
                }
                AirspeedOverride = collision.GetComponent<Rigidbody2D>().velocity.x;
                Debug.Log("SPEEEEEEEEEEEEEEEEEEED"+AirspeedOverride);
            }
            else
            {
                AirspeedOverride = 0;
                delay = 0.75f;
            }
            //     Debug.Log("HELLO THERE " + collision.name +Mathf.Abs(collision.GetComponent<Rigidbody2D>().velocity.x) + "AND THIS IS MY CURRENT SPEED"+ this.transform.localScale.x);
            if (AirspeedOverride == 0)
            {
                if (Mathf.Abs(collision.GetComponent<Rigidbody2D>().velocity.x) > this.transform.localScale.x)
                {
                    //   Debug.Log("WE MADE IT"+ Mathf.Abs(collision.GetComponent<Rigidbody2D>().velocity.x));
                    if (Mathf.Abs(collision.GetComponent<Rigidbody2D>().velocity.x) < 4) //change this value to match scenario
                    {
                        this.transform.localScale = new Vector3((collision.GetComponent<Rigidbody2D>().velocity.x), this.transform.localScale.y, 0);
                        //   this.transform.localPosition += new Vector3(0, this.transform.localPosition.y, 0);
                        opX = ((collision.GetComponent<Rigidbody2D>().velocity.x));
                        if (windCol == 0)
                        {
                            firsttouch = true;
                            windCol = 1;
                        }
                        cnttch++;
                        //   StartCoroutine(WindGust());
                        //   transform.position = startPos;
                    }
                    else //speed is greater than four or whatever wise guy set it
                    {
                        if (Camera.main.GetComponent<weather>().AirSpeed > 0)
                        {

                            this.transform.localScale = new Vector3(-4, this.transform.localScale.y, 0);
                            //  this.transform.localPosition += new Vector3(0, this.transform.localPosition.y, 0);
                            opX = ((collision.GetComponent<Rigidbody2D>().velocity.x));
                            if (windCol == 0)
                            {
                                firsttouch = true;
                                windCol = 1;
                            }
                            cnttch++;
                            //  StartCoroutine(WindGust());
                            //   transform.position = startPos;
                        }
                        else
                        {

                            this.transform.localScale = new Vector3((4), this.transform.localScale.y, 0);
                            //   this.transform.localPosition += new Vector3(0, this.transform.localPosition.y, 0);
                            opX = ((collision.GetComponent<Rigidbody2D>().velocity.x));
                            if (windCol == 0)
                            {
                                firsttouch = true;
                                windCol = 1;
                            }
                            cnttch++;
                            //  StartCoroutine(WindGust());
                            //  transform.position = startPos;



                        }

                    }

                }
            }
            else
            {


                if (AirspeedOverride < 0.1)
                {

                    this.transform.localScale = new Vector3(-4, this.transform.localScale.y, 0);
                    //  this.transform.localPosition += new Vector3(0, this.transform.localPosition.y, 0);
                    opX = ((collision.GetComponent<Rigidbody2D>().velocity.x));
                    if (windCol == 0)
                    {
                        firsttouch = true;
                        windCol = 1;
                    }
                    cnttch++;
                    //  StartCoroutine(WindGust());
                    //   transform.position = startPos;
                }
                else
                {

                    this.transform.localScale = new Vector3((4), this.transform.localScale.y, 0);
                    //   this.transform.localPosition += new Vector3(0, this.transform.localPosition.y, 0);
                    opX = ((collision.GetComponent<Rigidbody2D>().velocity.x));
                    if (windCol == 0)
                    {
                        firsttouch = true;
                        windCol = 1;
                    }
                    cnttch++;
                    //  StartCoroutine(WindGust());
                    //  transform.position = startPos;



                }

            }


        }

    }
   public int cnttch = 0;
    bool firsttouch =false;
    private void LateUpdate()
    {
    //    if (windCol == 1)
     //       cnttch++;
      //  if (windCol == 2)
       //     cnttch--;

    //   Debug.Log("CNT" + cnttch);
        cnttch = cnttch + cnttch;
        if (Time.time > nextUsage) //continue scrolling
        {

            if (cnttch==0)
            {
                //no longer touching or activly blowing
                StartCoroutine(WindGust());
                firsttouch = false;
            }
            else if (firsttouch==true)
            {
                StartCoroutine(WindGust());
            }

            /*
            if (windCol==1)
            {
                StartCoroutine(WindGust());
                windCol = 3;
            }
            else if (windCol==2) //nothing touching for a while
            {
                windCol = 0;
            }
            */
            delay = 0.75f;
            cnttch = 0;
            nextUsage = Time.time + delay; //it is on display
        }
         
        }


    IEnumerator WindGust()
    {
 
     //   2-10-22 kind of a cheap wind solution but for what I have/can do this is good for now. Or perhaps forever in here
        transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y,0);
        while (this.transform.localScale!=new Vector3(0,0,0)) //infinite loop or something
        {

            if (AirspeedOverride==0)
            {
                //2-15-2022 this controls the pole movement location, right now for x weather the speed is going left or right
                if (Camera.main.GetComponent<weather>().AirSpeed > 0)
                {


                    Debug.Log("MY OBJECT IS " + stupName);

                    //       var renderer2 = this.GetComponent<Renderer>();
                    //      GameObject.Find(stupName).transform.position = new Vector3(renderer2.bounds.max.x, GameObject.Find(stupName).transform.position.y, 0);
                    var renderer2 = this.GetComponent<Renderer>();
                    //2-17-2022 Take that 2-10-22 comment, this is no longer the cheap fx, the flag moves. not the pole! (repeated in the else statement just removed  the negation)
                    this.gameObject.transform.position = new Vector3((-renderer2.bounds.extents.x + GameObject.Find(stupName).GetComponent<Renderer>().bounds.center.x), GameObject.Find(stupName).transform.position.y, 0);



                    yield return new WaitForSeconds(0.35f);



                    transform.localScale = new Vector3(transform.localScale.x + .1f, transform.localScale.y, 0);
                    //  Debug.Log("HIIII " + transform.localScale.x);
                    if (transform.localScale.x > 0)
                    {
                        transform.localScale = new Vector3(-0.1f, transform.localScale.y, 0);
                        break;
                    }

                }
                else
                {
                    var renderer2 = this.GetComponent<Renderer>();

                    //    GameObject.Find(stupName).transform.position = new Vector3(renderer2.bounds.min.x, GameObject.Find(stupName).transform.position.y, 0);

                    //      yield return new WaitForSeconds(0.55f);

                    this.gameObject.transform.position = new Vector3((renderer2.bounds.extents.x + GameObject.Find(stupName).GetComponent<Renderer>().bounds.center.x), GameObject.Find(stupName).transform.position.y, 0);

                    yield return new WaitForSeconds(0.35f);

                    transform.localScale = new Vector3(transform.localScale.x - .1f, transform.localScale.y, 0);

                    if (transform.localScale.x < 0)
                    {
                        transform.localScale = new Vector3(.1f, transform.localScale.y, 0);
                        break;
                    }
                }
            }
            else
            {

                if (AirspeedOverride < 0)
                {




                    //       var renderer2 = this.GetComponent<Renderer>();
                    //      GameObject.Find(stupName).transform.position = new Vector3(renderer2.bounds.max.x, GameObject.Find(stupName).transform.position.y, 0);
                    var renderer2 = this.GetComponent<Renderer>();
                    //2-17-2022 Take that 2-10-22 comment, this is no longer the cheap fx, the flag moves. not the pole! (repeated in the else statement just removed  the negation)
                    this.gameObject.transform.position = new Vector3((-renderer2.bounds.extents.x + GameObject.Find(stupName).GetComponent<Renderer>().bounds.center.x), GameObject.Find(stupName).transform.position.y, 0);



                    yield return new WaitForSeconds(0.35f);



                    transform.localScale = new Vector3(transform.localScale.x + .1f, transform.localScale.y, 0);
                    //  Debug.Log("HIIII " + transform.localScale.x);
                    if (transform.localScale.x > 0)
                    {
                        transform.localScale = new Vector3(-0.1f, transform.localScale.y, 0);
                        break;
                    }

                }
                else
                {
                    var renderer2 = this.GetComponent<Renderer>();

                    //    GameObject.Find(stupName).transform.position = new Vector3(renderer2.bounds.min.x, GameObject.Find(stupName).transform.position.y, 0);

                    //      yield return new WaitForSeconds(0.55f);

                    this.gameObject.transform.position = new Vector3((renderer2.bounds.extents.x + GameObject.Find(stupName).GetComponent<Renderer>().bounds.center.x), GameObject.Find(stupName).transform.position.y, 0);

                    yield return new WaitForSeconds(0.35f);

                    transform.localScale = new Vector3(transform.localScale.x - .1f, transform.localScale.y, 0);

                    if (transform.localScale.x < 0)
                    {
                        transform.localScale = new Vector3(.1f, transform.localScale.y, 0);
                        break;
                    }
                }


            }


        }

    }


    // Update is called once per frame
    void Update()
    {

    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;

public class mplane_controller : MonoBehaviour
{
    private Rigidbody2D rb;
    public float moveVertSense;
    public float moveHorSense;
    public bool moveVertButt;
    public float moveVertSense2;
    bool bypass = false; //vertical
    bool bypass2 = false; //hor
    public float engineSpool = 0;
    public bool moveHortButt;
    public float rotateSpeed = 188;
    Vector3 pos;
    Vector3 velocity;
    public bool pdead = false;
    public bool peject = false;
    bool toggleLandGear = false;
    public bool onground = true;
    bool heavyMass = false;
    System.Random blarg = new System.Random();
    public Animator ani;
    Vector3 startLoc;
    Quaternion SteuAngle;
    Quaternion[] whang = new Quaternion[3];
    Vector3[] whipos = new Vector3[3];
    public double maxAlt = 0;
    float nextUsage;
    float delay = 0.05f; //only half delay
    float cameraDef;
    Vector3 CamOffSetStd;
    public bool plane_recovered;
    // Start is called before the first frame update
    void Start()
    {
        cameraDef = Camera.main.orthographicSize;
        nextUsage = Time.time + delay; //it is on display
        startLoc = transform.position;
        SteuAngle = transform.rotation;
        Vector3 pos = transform.position;
        rb = GetComponent<Rigidbody2D>();
        //   ani =GameObject.Find("plane_wheel").GetComponent<Animator>();
        //  ani.runtimeAnimatorController = Resources.Load("assets/sprites/plane_tire(64x64)_0") as RuntimeAnimatorController;
        //   ani = this.GetComponent<Animator>();
        CamOffSetStd = new Vector3(3.97f, 0, -10);// Camera.main.GetComponent<CameraController>().offset;

        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                GameObject wheely = GameObject.Find("plane_wheel_" + i);
                whipos[i] = wheely.transform.localPosition;
                whang[i] = wheely.transform.localRotation;
                wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
                wheely.GetComponent<Rigidbody2D>().simulated = false;
                wheely.GetComponent<PolygonCollider2D>().enabled = false;
            }
            else
            {
                GameObject wheely = GameObject.Find("plane_wheel_" + i);
                whipos[i] = wheely.transform.localPosition;
                whang[i] = wheely.transform.localRotation;
                wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
                wheely.GetComponent<Rigidbody2D>().simulated = false;
                wheely.GetComponent<PolygonCollider2D>().enabled = false;
            }

        }


    }

    //8-5-2021
    //controller controls improved- now you can play with the controller connected, but it will go to where you are inputing from (keyboard or controller)
    private int Xbox_One_Controller = 0;
    private int PS4_Controller = 0;
    bool controlerUsed = false;
    bool movechk = false;
    bool moveHorchk = false;
    private void controllerCheck()
    {
        //  Debug.Log(Input.GetJoystickNames().ToString());

        //https://answers.unity.com/questions/131899/how-do-i-check-what-input-device-is-currently-beei.html

        string[] names = Input.GetJoystickNames();
        for (int x = 0; x < names.Length; x++)
        {
            //   print(names[x].Length);
            //  print(names[x]);
            if (names[x].Length == 0)
            {
                //disconnected, switch back to mouse/keyboard
                controlerUsed = false;
                PS4_Controller = 0;
                Xbox_One_Controller = 0;
            }
            if (names[x].Contains("PS"))
            {
                //  print("PS* CONTROLLER IS CONNECTED");
                PS4_Controller = 1;
                Xbox_One_Controller = 0;
            }
            if (names[x].Contains("Xbox"))
            {
                //  print("XBOX ONE CONTROLLER IS CONNECTED");
                //set a controller bool to true
                PS4_Controller = 0;
                Xbox_One_Controller = 1;

            }
        }

        if (names.Length == 0)
        {
            //disconnected, switch back to mouse/keyboard
            controlerUsed = false;
            PS4_Controller = 0;
            Xbox_One_Controller = 0;
        }
        if (Xbox_One_Controller == 1)
        {
            //do something
            controlerUsed = true;
        }
        else if (PS4_Controller == 1)
        {
            //do something
            controlerUsed = true;
        }
        else
        {
            // assumption of mouse and keyboard
            controlerUsed = false;
        }
        moveVertButt = Input.GetButton("Vertical");
        movechk = Input.GetButtonUp("Vertical");
        moveHortButt = Input.GetButton("Horizontal");
        moveHorchk = Input.GetButtonUp("Horizontal");
        if (controlerUsed == true)
        {
            //player may have a controller connected, but not using it(axis check will say if they are keyboard users)
            if (movechk == true)
            {
                moveVertSense = 0;
                controlerUsed = false;
                bypass = true;
            }
            if (moveHorchk == true)
            {
                moveHorSense = 0;
                controlerUsed = false;
                bypass2 = true;
            }

            if (moveVertButt == true)
            {
                //   moveVertSense = 0;
                controlerUsed = false;
                bypass = false;
            }
            if (moveHortButt == true)
            {
                //   moveHorSense = 0;
                controlerUsed = false;
                bypass2 = false;
            }

        }



        float TriggerRight = Input.GetAxis("Cont_Trigger");
        if (TriggerRight != 0)
        {
            moveHorSense = TriggerRight;
        }

        //   Debug.Log("Your Value for Trigger is " + TriggerRight);
        if (Input.GetButtonDown("EJECT") && peject == false)
        {
            peject = true;

            GameObject indeje = Instantiate(Resources.Load("player\\ind")) as GameObject;
            indeje.name = "ind_pi";
            indeje.transform.position = new Vector2(transform.position.x - 1.5f, transform.position.y + 0.55f);
            indeje.GetComponent<Rigidbody2D>().AddForce(Vector2.up * 4 * 1000);
           
            Camera.main.GetComponent<CameraController>().player = indeje; //4-4-22 now the pi gets followed
              GameObject.Find("altimeter").GetComponent<CameraController>().player = indeje;
            StartCoroutine(EjectControledPowerOff());

        }

        if (Input.GetButtonDown("Jump"))
        {
            //Landing Gear



            if (onground == false)
            {
                if (toggleLandGear == false)
                {
                    GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = false;
                    GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = false;
                    toggleLandGear = true;
                    tireAni();
                    Debug.Log("LANDING GEAR");
                }
                else
                {

                    GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = true;
                    GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = true;
                    toggleLandGear = false;
                    tireAni();
                    Debug.Log("NO LANDING GEAR");
                }
            }




        }

    }

    void tireAni()
    {       
        for (int i = 0; i < 3; i++)
        {
            ani = GameObject.Find("plane_wheel_" + i).GetComponent<Animator>();

            if (toggleLandGear == false)
            {
                ani.SetInteger("ani_tire", 2);
                if (quickTireSet == true)
                {
                    ani.speed = 1.01f;
                }
                else
                {
                    ani.speed = 0.1f;
                }

            }
            else
            {
                ani.speed = 0.1f;
                ani.SetInteger("ani_tire", 1);
            }
        }


    }

    void tireDisappear()
    {
        for (int i = 0; i < 3; i++)
        {
            GameObject.Find("plane_wheel_" + i).GetComponent<SpriteRenderer>().enabled = false;



        }


    }


    public float impact;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        impact = Vector3.Magnitude(rb.velocity);
        //   Debug.Log(collision.gameObject.name+"  "+impact);

        //   var direction = transform.InverseTransformPoint(collision.transform.position); //this helps us find which direction the object collided from

        //     if (direction.y < -0.1f)
        //     {
        //        Debug.Log("The object collided with the right side of the ball!");
        //    }
        //   Debug.Log(direction.y);
        //   Debug.Log(collision.name);
        // if (collision.transform.position.x < transform.position.x)
        //  if (collision.gameObject.tag == "ground" && direction.y > 0f)
        //   {

        //   }
        //  else
        //{
        if (collision.gameObject.tag== "Player" && collision.gameObject.name== "windy")
        {
            if (Speed>5)
            {
                ani.SetBool("IS_GUST", true);
            }
          

        }
        if (collision.gameObject.tag != "Player")
        {
            if (collision.gameObject.tag != "detail")
            {
                if (collision.gameObject.tag != "cloud")
                {
                    //    Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");

                    if (impact > 15)
                    {

                        int randoExplod = UnityEngine.Random.Range(2, 5);
                        for (int qt = 0; qt < randoExplod; qt++)
                        {
                            GameObject RepeatGround33 = Instantiate(Resources.Load("Exp2017")) as GameObject;
                            RepeatGround33.name = "plaxplode(" + qt + ")";
                            RepeatGround33.transform.position = new Vector2(transform.position.x + UnityEngine.Random.Range(-2, 2), transform.position.y - UnityEngine.Random.Range(-2, 2));

                            rb.velocity = Vector3.zero;
                            rb.freezeRotation = true;
                            rb.constraints = RigidbodyConstraints2D.FreezeAll;


                            if (pdead == false)
                            {

                                if (impact > 25)
                                {
                                    GameObject pback = Instantiate(Resources.Load("player\\gib\\p_back")) as GameObject;
                                    pback.name = "p_back)";
                                    pback.transform.position = new Vector2(transform.position.x - 0.5f, transform.position.y);

                                    GameObject pmid = Instantiate(Resources.Load("player\\gib\\p_mid")) as GameObject;
                                    pmid.name = "p_mid)";
                                    pmid.transform.position = new Vector2(transform.position.x, transform.position.y);


                                    GameObject pfront = Instantiate(Resources.Load("player\\gib\\p_front")) as GameObject;
                                    pfront.name = "p_front)";
                                    pfront.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y);

                                    this.GetComponent<SpriteRenderer>().enabled = false;
                                    this.GetComponent<Collider2D>().enabled = false;
                                }



                            }
                            if (peject==false)
                            {
                                deadAniHint();
                            }
                            Debug.Log("HEY YOUR DEAD NOW" + collision.gameObject.tag);
                            tireDisappear();
                            pdead = true;
                        }
                    }
                }
            }
        }
        // }
    }
    public player_end_routine per;
    private void deadAniHint()
    {
        //3-29-2022 we only want to run this once (send the signal once!)
        if (!GameObject.Find("ind_pi"))
        {

            //3-31-2022 usefull for methods but not for corots
            //   per.MyMethod();
            // instantiate a copy of the script class and call the non-static method
            //  per = new player_end_routine();
            //  per.MyMethod();

            if (!gameObject.GetComponent<player_end_routine>())             //ensure we only have one script at a time!
            {
                gameObject.AddComponent<player_end_routine>();
            }
            

            /*
            Debug.Log("PRESS EJECT PLEASE");
            StartCoroutine(EjectHint());
            */
        }

    }

    private void OnCollisionStay2D(Collision2D collision)
    {
    //    onground = true;
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
       // onground = false;
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
    

    }
    public double OBJaltitude;
    public double altitude;
    float basense;
    float[] speedArr=new float[10];
    float res = 0;
    int gib = 0;
    public bool colSignal = false;
    public int postmortem = 0;
    bool quickTireSet = false;
    public bool qreset = false;
    //what you did code
    // 0- alive and a ok (not dead)
    // 1-hull breach
    //2 - landing gear break
    //3 - 
    private void LateUpdate()
    {
        if (pdead==true && this.GetComponent<fx_pdead>().enabled==false)
        {
            this.GetComponent<fx_pdead>().enabled = true;
        }
        if (ani.GetCurrentAnimatorStateInfo(0).IsName("plane_gust") &&
ani.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
        {
            ani.SetBool("IS_GUST", false);
        }
        if (GameObject.Find("altimeter").gameObject.GetComponent<menu_runtime>().specButtonStat == -1)
        {


            if (onground==true)
        {
            rb.mass = 60;
            rb.drag = .5f;
            heavyMass = false;
        }
            //NOTE TO SELF, This is the magic reset button for restarting the stage- thanks df 3-30-2022!
        if (Input.GetButtonDown("Fire3") || (plane_recovered==true && peject ==true))
        {
                Vector3 plSp=Vector3.zero;
            if (pdead == true || peject==true)
            {
                    if (GameObject.Find("ind_pi") )
                    {
                        Camera.main.GetComponent<CameraController>().player = this.gameObject; //4-4-2022 reset the pi back to the plane
                        GameObject.Find("altimeter").GetComponent<CameraController>().player = this.gameObject;
                        //if (eject_cr == false)
                        // {
                        //      StopCoroutine(EjectHint());
                        Destroy(GetComponent<player_end_routine>());
                        StopAllCoroutines();
                        //6-23-2022 plaer spot. Get the last spot and put plane there if recovered
                        plSp = GameObject.Find("ind_pi").transform.position;
                            GameObject.Destroy(GameObject.Find("ind_pi"));
                        //}
                  //      else
                    //    {
                     //       eject_cr = false; //send the stop signal
                      //  }
                      
                    }
               //     GameObject.Find("minimap").gameObject.SetActive(true);
                    GameObject fff = GameObject.Find("minimap");
                    if (fff)
                    {
                        fff.GetComponent<MeshRenderer>().enabled = true;
                        fff.GetComponent<minimap_player_control>().enabled = true;
                    }
                    this.GetComponent<fx_pdead>().enabled = false;
                    Camera.main.GetComponent<CameraController>().offset = CamOffSetStd;
                    Camera.main.GetComponent<CameraController>().player = this.gameObject;
                    Camera.main.orthographicSize = cameraDef;
                GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = true;
                GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = true;
                GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP = 100;
                GameObject.Find("planeSkid_front").GetComponent<wheelHealth>().wheelHP = 100;
                    GameObject.Find("img_discussion").GetComponent<Image>().enabled = false;
                    GameObject.Find("img_discussion").GetComponent<text_chucker>().readMode = -1;
                    GameObject.Find("img_discussion").GetComponent<text_chucker>().textCall = "";
                    this.GetComponent<SpriteRenderer>().enabled = true;
                    rb.velocity = Vector3.zero;
                    this.GetComponent<Collider2D>().enabled = true;
                    peject = false;
                    pdead = false;
                    qreset = true; //really only for use in the POLF script for restarting the stage
                    colSignal = false;
                    ani = this.GetComponent<Animator>();
                    ani.SetBool("IS_AIR_ROLL", false);
                    ani.SetBool("IS_GUST", false);
                    
                    countStrain = 0;
                    gib = 0;
                    //4-27-2022 selective cleanup, finall added
                    string GIBS = "p_back,p_mid,p_mid_NO_WING,p_wing_bot,p_wing_top,p_front,jump_seat,box_a,par_drop";
                    Debug.Log("START TIME:" + Time.time);
                    foreach(string blarg in GIBS.Split(','))
                    {

                        GameObject[] GameObjects = (FindObjectsOfType<GameObject>() as GameObject[]);

                        for (int i = 0; i < GameObjects.Length; i++)
                        {
                            if (GameObjects[i].name.Contains(blarg))
                            {
                                Destroy(GameObjects[i]);
                            }
                            
                        }


                    }
                    Debug.Log("END TIME:" + Time.time);
                    postmortem = 0;
                engineSpool = 0;
                    WingHP = 100;
                    rb.mass = 60;
                rb.drag = .5f;
                heavyMass = false;
                rb.constraints = RigidbodyConstraints2D.None;
                //colSignal
                quickTireSet = true;
                toggleLandGear = false;
                tireAni();
                quickTireSet = false;
                for (int i = 0; i < 3; i++)
                {
                    if (i == 0)
                    {
                        GameObject wheely = GameObject.Find("plane_wheel_" + i);
                        wheely.transform.localPosition= whipos[i];
                        wheely.transform.localRotation = whang[i];
                        wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
                        wheely.GetComponent<Rigidbody2D>().simulated = false;
                        wheely.GetComponent<PolygonCollider2D>().enabled = false;
                        wheely.GetComponent<SpriteRenderer>().enabled = true;
                    }
                    else
                    {
                        GameObject wheely = GameObject.Find("plane_wheel_" + i);
                        wheely.transform.localPosition = whipos[i];
                        wheely.transform.localRotation = whang[i];
                        wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
                        wheely.GetComponent<Rigidbody2D>().simulated = false;
                        wheely.GetComponent<PolygonCollider2D>().enabled = false;
                        wheely.GetComponent<SpriteRenderer>().enabled = true;
                    }

                }
                if (plane_recovered==true)
                    {
                        transform.position = plSp;
                        GameObject.Find("checkerBoard(256x256)").transform.position = plSp + new Vector3(5, 0, 0);
                    }
                else
                    {
                        GameObject.Find("checkerBoard(256x256)").transform.position = new Vector3(7.74f, -1.3905f, 0); //6-23-2022hardcoded might fix....
                        transform.position = startLoc;
                    }
                    plane_recovered = false;
                    transform.rotation = SteuAngle;
                rb.mass = 60;
                rb.drag = .5f;
                heavyMass = false;
            }

        }
        RaycastHit2D hit = Physics2D.Raycast(new Vector3(transform.position.x, transform.position.y - 0.1f, 0), -Vector2.up);
      //  Debug.Log(hit.collider.name);



        // If it hits something...
        if (hit.collider != null)
        {
            if (transform.position.y<hit.collider.transform.position.y)
            {
                rb.angularDrag = 9999999999999999;
                rb.AddForce(Vector2.up*-50);
               // transform.position =  new Vector2(transform.position.x, hit.collider.transform.position.y + 0.0f);
            }
            else
            {
                rb.angularDrag = 117;
            }

        }

        if (colSignal==true)
        {
            if (postmortem==1)
            {
                if (gib < 5)
                {
                    GameObject pback = Instantiate(Resources.Load("player\\gib\\p_back")) as GameObject;
                    pback.name = "p_back";
                    pback.transform.position = new Vector2(transform.position.x - 0.5f, transform.position.y);

                    GameObject pmid = Instantiate(Resources.Load("player\\gib\\p_mid")) as GameObject;
                    pmid.name = "p_mid";
                    pmid.transform.position = new Vector2(transform.position.x, transform.position.y);


                    GameObject pfront = Instantiate(Resources.Load("player\\gib\\p_front")) as GameObject;
                    pfront.name = "p_front";
                    pfront.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y);

                    this.GetComponent<SpriteRenderer>().enabled = false;
                    this.GetComponent<Collider2D>().enabled = false;
                    pdead = true;
                    gib++;
                }
            }
            else if (postmortem==2)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (i==0)
                    {
                        GameObject wheely = GameObject.Find("plane_wheel_" + i);
                        wheely.transform.position = new Vector3((this.GetComponent<SpriteRenderer>().bounds.extents.x) + this.transform.position.x, wheely.transform.position.y, 0);
                        wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                        wheely.GetComponent<Rigidbody2D>().simulated = true;
                        wheely.GetComponent<Rigidbody2D>().AddForce(Vector2.right * i);
                        wheely.GetComponent<PolygonCollider2D>().enabled = true;
                    }
                    else
                    {
                        GameObject wheely = GameObject.Find("plane_wheel_" + i);
                        wheely.transform.position = new Vector3(this.transform.position.x-(this.GetComponent<SpriteRenderer>().bounds.extents.x), wheely.transform.position.y, 0);
                        wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                        wheely.GetComponent<Rigidbody2D>().simulated = true;
                        wheely.GetComponent<Rigidbody2D>().AddForce(Vector2.left * i);
                        wheely.GetComponent<PolygonCollider2D>().enabled = true;
                        wheely.GetComponent<Rigidbody2D>().gravityScale = 1;
                        wheely.GetComponent<Rigidbody2D>().mass = 10;
                    }

                }
            }
            else if (postmortem==3) //hull integ is maxed out, wings get removed
                {
                    if (gib<1)
                    {
                        GameObject pback = Instantiate(Resources.Load("player\\gib\\p_back")) as GameObject;
                        pback.name = "p_back";
                        pback.transform.position = new Vector2(transform.position.x - 0.5f, transform.position.y);

                        GameObject pmid = Instantiate(Resources.Load("player\\gib\\p_mid_NO_WING")) as GameObject;
                        pmid.name = "p_mid_NO_WING";
                        pmid.transform.position = new Vector2(transform.position.x, transform.position.y+0.25f);

                        GameObject pmid_wing_bot = Instantiate(Resources.Load("player\\gib\\p_wing_bot")) as GameObject;
                        pmid_wing_bot.name = "p_wing_bot";
                        pmid_wing_bot.transform.position = new Vector2(transform.position.x, transform.position.y - 0.5f);


                        GameObject p_wing_top = Instantiate(Resources.Load("player\\gib\\p_wing_top")) as GameObject;
                        p_wing_top.name = "p_wing_top";
                        p_wing_top.transform.position = new Vector2(transform.position.x, transform.position.y + 0.5f);


                        GameObject pfront = Instantiate(Resources.Load("player\\gib\\p_front")) as GameObject;
                        pfront.name = "p_front";
                        pfront.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y);

                        this.GetComponent<SpriteRenderer>().enabled = false;
                        this.GetComponent<Collider2D>().enabled = false;
                       
                        for (int iq=0;iq<22;iq++)
                        {
                            string name_of_object = "box_a";
                            float randOBJ_val = UnityEngine.Random.Range(0, 100);
                            if (randOBJ_val > 50)
                            {
                                name_of_object = "box_a";
                            }
                            else if (randOBJ_val<51)
                            {
                                name_of_object = "jump_seat";
                            }
                            GameObject p_rand_obj = Instantiate(Resources.Load("player\\gib\\"+ name_of_object)) as GameObject;
                            p_rand_obj.name = name_of_object;
                            p_rand_obj.transform.position = new Vector2(transform.position.x + UnityEngine.Random.Range(-1,3), transform.position.y+UnityEngine.Random.Range(-2, 2));
                        }
                        pdead = true;
                        gib = 10;
                    }
                   

                }
                GameObject fff = GameObject.Find("minimap");
                if (fff)
                {
                    //fff.SetActive(false);
                    fff.GetComponent<MeshRenderer>().enabled = false;
                    fff.GetComponent<minimap_player_control>().enabled = false;
                }    
                
                
                pdead = true;
                //4-14-2022 good spot for reseting ondemand animations and stuff to prevent them from spilling post
                ani = this.GetComponent<Animator>();
                ani.SetBool("IS_AIR_ROLL", false);
                countStrain = 0;
            }

        if (pdead==false)
        {


        GameObject throttle = GameObject.Find("sld_throttleGauge");
        throttle.GetComponent<Slider>().value = engineSpool;

        //lets do this the -- way- only one sensor
          basense = transform.rotation.eulerAngles.z;

        basense = basense - 180;
        basense = basense * -1;
        if (basense<0)
        {
            basense = 360+basense;
        }
        GameObject aoa_gauge = GameObject.Find("sld_AOA");
        aoa_gauge.GetComponent<Slider>().value = basense;

        GameObject txtAlt = GameObject.Find("txt_altitude");
            altitude = Math.Round(transform.position.y, 2);
        txtAlt.GetComponent<Text>().text = "SEA: " + altitude;
                //contrails show up after this distance (1-11-2022)
                //also part of the wind system that may be used later...
                if (Time.time > nextUsage) //continue scrolling
                {
                    GameObject Supacont = Instantiate(Resources.Load("player\\contrail")) as GameObject;
                    Supacont.name = "contrail";
                    Supacont.transform.position = this.gameObject.transform.position;
                    Supacont.transform.rotation = this.gameObject.transform.rotation;
                    Supacont.GetComponent<SpriteRenderer>().enabled = false;
                    Supacont.GetComponent<Rigidbody2D>().AddForce(Vector3.left * 394 *engineSpool * Time.deltaTime);
                    if (altitude > 100)
                    {
                        Supacont.GetComponent<SpriteRenderer>().enabled = true;
                    }
                    Supacont.GetComponent<SpriteRenderer>().enabled = true;
                    nextUsage = Time.time + delay; //it is on display
                }
              
                if (altitude>maxAlt)
                {
                    maxAlt = altitude;
                }
                else if (pdead==true)
                {
                    maxAlt = 0;
                }
        GameObject txtSpd = GameObject.Find("txt_speed");
        txtSpd.GetComponent<Text>().text = "Speed: " + Math.Round(Speed, 2);
            rb.AddRelativeForce(Vector3.right * 20 * 340 * Time.deltaTime);
            //    Debug.Log("THE VALUE IS " + transform.rotation.eulerAngles.z);
            if (engineSpool > 0)
        {
            rb.AddRelativeForce(Vector3.right * engineSpool * 440 * Time.deltaTime);
            }
        else
        {
            rb.AddRelativeForce(Vector3.right * engineSpool * 200 * Time.deltaTime);
        }

            if (onground==false)
            {
                    if (toggleLandGear==true) //landing gear is gone, so increase the speed
                    {
                        rb.AddRelativeForce(Vector3.right * engineSpool * 55 * Time.deltaTime);
                    }

                if (transform.rotation.eulerAngles.z > 0 && transform.rotation.eulerAngles.z < 45)
                {

                    if (engineSpool > 90 && altitude < 100)
                    {
                        rb.AddRelativeForce(Vector3.up * 2400 * Time.deltaTime * 2);

                        Quaternion rot = transform.rotation;
                        rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .0001f);
                        transform.rotation = rot;
                    }
                    else
                    {
                        rb.AddRelativeForce(Vector3.up * 2400 * Time.deltaTime * 2);

                        Quaternion rot = transform.rotation;
                        rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .02f);
                        transform.rotation = rot;
                    }

                

                    if (altitude < 150)
                    {
                        rb.mass = 60;
                        rb.drag = .5f;
                        heavyMass = false;
                    }
                    else
                    {
                        rb.mass = 88;
                        rb.drag = .55f;
                        heavyMass = true;
                    }


                }
                else if (transform.rotation.eulerAngles.z > 45 && transform.rotation.eulerAngles.z < 74)
                {
                    res = transform.rotation.eulerAngles.z - 74;
                    Quaternion rot = transform.rotation;
                    rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
                    transform.rotation = rot;
                    res = res * -50;
                    rb.mass = 60;
                    rb.drag = .5f;
                    heavyMass = false;
                    //      rb.AddRelativeForce(Vector3.right * engineSpool * -res * Time.deltaTime);
                }
                else if (transform.rotation.eulerAngles.z > 74 && transform.rotation.eulerAngles.z < 250)
                {
                    //  rb.AddRelativeForce(new Vector3(-444, 0,0) * 50 * Time.deltaTime*4);


                    res = transform.rotation.eulerAngles.z - 74;
                    Quaternion rot = transform.rotation;
                    rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .1f);
                    transform.rotation = rot;
                    res = res * 200;


                    //  rb.AddRelativeForce(Vector3.down * engineSpool * res * Time.deltaTime);
                    if (Speed < 20)
                    {
                        rb.mass = 175;
                        rb.drag = .1f;
                        heavyMass = true;
                    }

                }
                else if (transform.rotation.eulerAngles.z > 250 && transform.rotation.eulerAngles.z < 360)
                {

                        rb.drag = .88f;
                }

                   
                    if (Speed < 25)
                {
                    rb.AddRelativeForce(Vector3.up * 2500 * Time.deltaTime * 4);
                    if (Speed < 20 && engineSpool < 20)
                    {
                        rb.mass = 225;
                        rb.drag = .01f;
                        heavyMass = true;
                    }
                }
                else
                {

                 //    rb.AddRelativeForce(Vector3.up * 250 * Time.deltaTime *  -4);
                }

                if (Speed > 20)
                {
                    rb.AddRelativeForce(Vector3.up * 2000 * Time.deltaTime * 4);
                    Quaternion rot = transform.rotation;
                    rot.eulerAngles = rot.eulerAngles + new Vector3(0, 0, .01f);
                    transform.rotation = rot;
                }
                else
                {
                    if (!(transform.rotation.eulerAngles.z > 260 && transform.rotation.eulerAngles.z < 290))
                    {
                        res = transform.rotation.eulerAngles.z - 74;
                        Quaternion rot = transform.rotation;
                        rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
                        transform.rotation = rot;
                        res = res * -50;


                            if (transform.rotation.eulerAngles.z > 290 && transform.rotation.eulerAngles.z < 360)
                        {
                            res = transform.rotation.eulerAngles.z + 74;
                            rot = transform.rotation;
                            rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
                            transform.rotation = rot;
                            res = res * 2;
                            rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);

                              
                            }
                        else if (transform.rotation.eulerAngles.z > 184 && transform.rotation.eulerAngles.z < 290)
                        {
                            //  rb.AddRelativeForce(new Vector3(-444, 0,0) * 50 * Time.deltaTime*4);
                            res = transform.rotation.eulerAngles.z + 74;
                            rot = transform.rotation;
                            rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .1f);
                            transform.rotation = rot;
                            res = res * 20;
                            rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);
                                //1-27-2022 this spot controls the weird behavior 

                             
                              
                                if (moveVertSense<0) //going up
                                {
                              //      rb.AddRelativeForce(Vector3.up * 30700 * Time.deltaTime * -4);
                                //    rb.AddRelativeForce(Vector3.right * 40700 * Time.deltaTime * -4);
                                }

 

                            }
                        else
                        {
                            rb.AddRelativeForce(Vector3.up * -444 * Time.deltaTime * 4);
                        }



                    }
                    rb.AddRelativeForce(Vector3.down * 1000 * Time.deltaTime * 10);
                    //      rb.AddRelativeForce(Vector3.right * engineSpool * -res * Time.deltaTime);
                }
            }
            if (peject==true && Speed>10)
                {
                    Quaternion rot = transform.rotation;
                    //3-24-2022 downward spiral without pi
                    res = transform.rotation.eulerAngles.z - 74;
                    rot = transform.rotation;
                    rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .1f);
                    transform.rotation = rot;
                    res = res * 20;
                    rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);

                }
                //1-27-2022 this spot controls the weird behavior as well aswell
                if (moveVertSense < 0 && Speed<16 && (transform.rotation.eulerAngles.z > 90 && transform.rotation.eulerAngles.z < 180))
                {
                    transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * UnityEngine.Random.Range(.65f,.98f)));
               

                }
                else if (moveVertSense > 0 && (transform.rotation.eulerAngles.z > 180 && transform.rotation.eulerAngles.z < 300))
                {
                    //  transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * UnityEngine.Random.Range(.65f, .98f)));
                     rb.AddRelativeForce(new Vector3(0,1,0) * 9700 * Time.deltaTime * 4);
                     rb.AddRelativeForce(Vector3.up * 9700 * Time.deltaTime * 4);
                    Debug.Log("HELPING");
                }

                StartCoroutine(GetSpeed());

        if (Speed > 10) //faster so harder to move
        {
            rotateSpeed = 100;
        }
        else
        {
           rotateSpeed = 188;
        }
        }
        }
    }
    float delay1 = 0.10f; //only half delay
    float nextUsage1;
    int countStrain = 0;
    public int strainLimitLO_CNT = 5;
    public int WingHP = 100;
    // Update is called once per frame
    void Update()
    {
        ani = this.GetComponent<Animator>();

        //  GameObject.Find("HOLDER").GetComponent<Transform>().transform.position = this.transform.position;
        //   GameObject.Find("HOLDER").GetComponent<Transform>().transform.eulerAngles = this.transform.eulerAngles;
        if (pdead==false && peject == false && GameObject.Find("altimeter").gameObject.GetComponent<menu_runtime>().specButtonStat==-1)
        {

       //     DetectGround();
       if (peject==false) //eject feature now added 3-22-2022
            {
                moveVertSense = Input.GetAxis("Vertical");
                moveVertSense2 = Input.GetAxis("Vertical");

                moveHorSense = Input.GetAxis("Horizontal");
                

            }

            //4-14-2022 potential idea, if stress levels exceed then wings pop off mind flight 
            if (Time.time > nextUsage1)
            {
                if (Speed > 7)
                {
                    if (moveVertSense != 0 || moveVertSense2 != 0)
                    {
                       
                        WingHP = WingHP - countStrain/4;
                    }
                    else
                    {
                        countStrain = 0;
                        if (WingHP<100)
                        {
                            WingHP = WingHP + 5;
                        }
                        else
                        {
                            WingHP = 100;
                        }
                      
                    }

                    if (countStrain > strainLimitLO_CNT)
                    {
                        ani.SetBool("IS_AIR_ROLL", true);
                    }
                    else
                    {

                        ani.SetBool("IS_AIR_ROLL", false);
                    }
                    Debug.Log("THE BOD HEALTH IS " + WingHP + "/100");
               //     Debug.Log("THE CURRENT STRESS IS" + countStrain + " OUT OF " + strainLimitLO_CNT);
                    nextUsage1 = Time.time + delay1; //it is on display
                }
                countStrain++;
                GameObject.Find("sld_hull_stress").GetComponent<Slider>().value = WingHP;
                if (WingHP>66)
                {
                    GameObject.Find("Handle_hull_stress_COLOR").GetComponent<Image>().color = Color.blue;
                }
                else if (WingHP>33)
                {
                    GameObject.Find("Handle_hull_stress_COLOR").GetComponent<Image>().color = Color.cyan;
                }
                else
                {
                    GameObject.Find("Handle_hull_stress_COLOR").GetComponent<Image>().color = Color.magenta;
                }

            }
            if (WingHP<0 && colSignal==false)
            {
                colSignal = true;
                postmortem = 3;
            }

            if (moveVertSense == 0 )
        {
            bypass = false;
        }
        if (moveHorSense == 0)
        {
            bypass2 = false;
        }
        controllerCheck();

        if (moveVertSense != 0)
        {
            moveVertSense = moveVertSense * 2;
        }
        if (moveHorSense != 0)
        {
            moveHorSense = moveHorSense * 2;
        }
        if (moveVertSense < 0)
        {
            // if (!Input.GetKey(KeyCode.LeftArrow))
            //needs to be negative
            if (!moveVertButt && controlerUsed==false)
            {
                //player let up return to 0 right away
                moveVertSense = 0;
            }
        }
        else if (moveVertSense > 0)
        {
            if (!moveVertButt && controlerUsed == false)
            {
                //player let up return to 0 right away
                moveVertSense = 0;
            }
            else if (controlerUsed == true)
            {

            }
        }

        if (moveHorSense < 0)
        {
            if (!moveHortButt && controlerUsed == false)
            {
                //player let up return to 0 right away
                moveHorSense = 0;
            }
        }
        else if (moveHorSense > 0)
        {
            if (!moveHortButt && controlerUsed == false)
            {
                //player let up return to 0 right away
                moveHorSense = 0;
            }
        }
 
        if (bypass==false)
        {
            if (moveVertSense > 0)
            {
              //  if (transform.rotation.eulerAngles.z > 68 && transform.rotation.eulerAngles.z < 120)
            //    {
                 //   transform.Rotate(0, 0, -40 * Time.deltaTime);
             //   }
             //   else
            //    {
                    transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime*(engineSpool/100)));
                    if (peject==true)
                    {
                        transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * (engineSpool / 100)));
                    }
          //      }

                //rb.velocity = Vector3.zero;

            }
            else if (moveVertSense < 0)
            {
                    if (peject==false)
                    {
                        transform.Rotate(0, 0, rotateSpeed * (Time.deltaTime * (engineSpool / 100)));
                    }
                
                    if (onground == true && Speed>17)
                    {
                        rb.AddRelativeForce(Vector3.up * 5444 * Time.deltaTime * 4);
                    }
                    else if (onground == true && Speed < 17)
                    {
                      //  rb.drag = 2;
                    }
                    // rb.velocity = Vector3.zero;
                }



        }

        if (bypass2==false)
        {
            if (moveHorSense > 0)
            {
                if (engineSpool < 99)
                {
                    engineSpool = engineSpool + 0.5f;
                }

            }
            else if (moveHorSense < 0)
            {
                if (engineSpool > -19)
                {
                    engineSpool = engineSpool - 0.5f;
                }

            }
        }
        }

    }

    public float floatHeight;     // Desired floating height.
    public float liftForce;       // Force to apply when lifting the rigidbody.
    public float damping;         // Force reduction proportional to speed (reduces bouncing).


    public float Speed;
    public float UpdateDelay=1;
    //interesting idea, could not get it to work yet
    //https://forum.unity.com/threads/2d-rigidbody-bounces-over-tiled-colliders.413752/
    //using 2d capsules greatly improved the detection
    public bool IsGrounded { get; private set; }
    public Transform groundRaycaster;
    public Transform feetLocationTransform;
    public float raycastDistance = .1f;
    void DetectGround()
    {
        RaycastHit2D hit = Physics2D.Raycast(groundRaycaster.position, -Vector2.up, raycastDistance);
        if (hit.collider)
        {
            if (rb.velocity.y <= 0)
            {
                rb.gravityScale = 0;
                Vector3 position = transform.position;
                position.y = position.y - (feetLocationTransform.position.y - hit.point.y);
                transform.position = position;

            }
            IsGrounded = true;
        }
        else
        {
            rb.gravityScale = 1;
            IsGrounded = false;
        }
    }

    private IEnumerator GetSpeed()
    {

    //   velocity = (transform.position - pos) / Time.deltaTime;
     //   pos = transform.position;

        YieldInstruction timedWait = new WaitForSeconds(UpdateDelay);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;

        while (enabled)
        {
            yield return timedWait;

            var deltaPosition = (transform.position - lastPosition).magnitude;
            var deltaTime = Time.time - lastTimestamp;

            if (Mathf.Approximately(deltaPosition, 0f)) // Clean up "near-zero" displacement
                deltaPosition = 0f;

            Speed = deltaPosition / deltaTime;


            lastPosition = transform.position;
            lastTimestamp = Time.time;
        }

    }



    private IEnumerator EjectControledPowerOff()
    {

        //   velocity = (transform.position - pos) / Time.deltaTime;
        //   pos = transform.position;

        YieldInstruction timedWait = new WaitForSeconds(0.5f);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;

        while (engineSpool>0)
        {
            yield return timedWait;
            engineSpool = engineSpool - 7;
        
            Debug.Log("ENGINE SPOOL IS " + engineSpool);
            if (GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt > 2)
            {
             //   rb.AddForce(Vector2.down * 1000 * 5);
             //   transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * UnityEngine.Random.Range(55.9f, 90.98f)));
                //  FORCE A CRASH SOONER 6-9-2022
                //6-15-2022:NO - not needed now- script checks for plane distance and cam distance
            }

        }

    }



}

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
    AudioSource [] generalAS= new AudioSource[9];
    public bool zzengineOnOff = false;
    bool zzShutDownFin = true;
    Coroutine ff;
    float delay23 = 0.1f; //only half delay
    float nextUsage23;
    bool FX_EXP_ACTIVE = false;
    // Start is called before the first frame update
    void Start()
    {
        metime = Time.time;
        _audio7 = Resources.Load<AudioClip>("_FX\\SFX\\flight\\spooling2_start");
        nextUsage23 = Time.time + delay23; //it is on display
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

        //this:
        //    generalAS = GetComponent<AudioSource>();
        //or this for multiple audio sources:
        int tempArr = 0;
        foreach (AudioSource aSource in GameObject.Find("PSFX_AMB").GetComponents<AudioSource>())
        { 
            generalAS[tempArr] = aSource;
       //     Debug.Log(generalAS[tempArr].clip.name);

            tempArr++;
        }

    }
    AudioClip _audio7;
    //8-5-2021
    //controller controls improved- now you can play with the controller connected, but it will go to where you are inputing from (keyboard or controller)
    private int Xbox_One_Controller = 0;
    private int PS4_Controller = 0;
    bool controlerUsed = false;
    bool movechk = false;
    bool moveHorchk = false;
    double metime = 0;
    double tempAlt = -1;
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

        if (GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt < 15 && toggleLandGear==true)
        {
            Camera.main.GetComponent<HUD_buttons>().WheelLandAlrt("");
        }
        else
        {
            Camera.main.GetComponent<HUD_buttons>().WheelLandAlrt("!");
        }

        if (Speed>25)
        {
            Camera.main.GetComponent<HUD_buttons>().SpeedWarn("");
        }
        else
        {
            Camera.main.GetComponent<HUD_buttons>().SpeedWarn("!");
        }
     //   Debug.Log("COUNT IS " + countStrain + "WHEEL HEALTH" + GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP);
        if (WingHP<50 || GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP!= 100 || GameObject.Find("planeSkid_front").GetComponent<wheelHealth>().wheelHP!=100)
        {
            Camera.main.GetComponent<HUD_buttons>().GeneralWarn("");
        }
         else
        {
            Camera.main.GetComponent<HUD_buttons>().GeneralWarn("!");
        }

        float TriggerRight = Input.GetAxis("Cont_Trigger");
        if (TriggerRight != 0)
        {
            moveHorSense = TriggerRight;
        }
        double someTime = 0;
        if (Time.time > nextUsage23)
        {
        //    metime = _audio7.length;
            nextUsage23 = Time.time + delay23; //it is on display
           
        }
            //8-8-2022 now we can turn on or off all
            if (Input.GetButtonDown("TogglePower") && peject == false && pdead == false)
        {
          
            //   someTime=Math.Abs(_audio7.length - Time.time);
            someTime = Time.time - _audio7.length;
            if (zzShutDownFin==true && someTime> metime)
            {
                metime2 = Time.time + _audio7.length;
              //  someTime2 = Time.time - _audio7.length*2;
                metime = Time.time;

                if (zzengineOnOff == true)
                {
                    Camera.main.GetComponent<HUD_buttons>().powerSwitch("on");
                    _audio7 = Resources.Load<AudioClip>("_FX\\SFX\\flight\\spooling2_start");
                    this.GetComponent<mplane_audio>().afx();
                     //  StopCoroutine(ff);
                    ff = null;
                    zzengineOnOff = false;
                    zzShutDownFin = true;
                    nextUsage23 = Time.time + delay23; //it is on display
                }
                else
                {
                    Camera.main.GetComponent<HUD_buttons>().powerSwitch("off");
                    _audio7 = Resources.Load<AudioClip>("_FX\\SFX\\flight\\spooling2");
                    this.GetComponent<mplane_audio>().afx_q();
                    if (engineSpool<1)
                    {
                        engineSpool = 5;
                    }
                   
                    ff = StartCoroutine(EjectControledPowerOff());
                    zzengineOnOff = true;
                    zzShutDownFin = false;
                    nextUsage23 = Time.time + delay23; //it is on display
                }

                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
            }
           
        }
            //   Debug.Log("Your Value for Trigger is " + TriggerRight);
            if (Input.GetButtonDown("EJECT") && peject == false)
        {
            //10-24-2022 should fix plane not crashing issue
            GameObject.Find("FLATGROUND").GetComponent<EdgeCollider2D>().enabled = false;
            alt_gauge txt_ground_dist_alt = GameObject.Find("altimeter").GetComponent<alt_gauge>();
           
            if (txt_ground_dist_alt.act_alt > 10 && Speed>10)
            {
                GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = true;
                GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = true;
                toggleLandGear = true;
                tireAni();
            }

            Debug.Log("NO LANDING GEAR");
            /*   foreach (PolygonCollider2D pol in this.gameObject.GetComponents<PolygonCollider2D>())
               {
                   if (pol.isTrigger == false)
                   {
                       pol.enabled = false;
                   }
               } */
            peject = true;
            //8-4-2022 we want to keep the object moving at fast speeds, not so much at slow speeds
            if (engineSpool>65)
            {
                rb.AddForce(Vector2.right * 50 * 1015);
            }
           
            // rb.AddForce(Vector2.right * 10150);
            //   rb.AddForce(Vector2.right * 500 * 5340 * Time.deltaTime);
            //   rb.AddRelativeForce(Vector3.right * 50 * 5340 * Time.deltaTime);
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
                    Camera.main.GetComponent<HUD_buttons>().wheelUpDown("down");
                    toggleLandGear = true;
                    tireAni();
                    Debug.Log("LANDING GEAR");
                }
                else
                {

                    GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = true;
                    GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = true;
                    toggleLandGear = false;
                    Camera.main.GetComponent<HUD_buttons>().wheelUpDown("up");
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
                //10-18-2022 fixed the collision when no wheels are present
                foreach (CapsuleCollider2D cap in GameObject.Find("minorWheels").GetComponents<CapsuleCollider2D>())
                {
                    cap.enabled = true;
                }
                foreach (CapsuleCollider2D cap in GameObject.Find("planeSkid_front").GetComponents<CapsuleCollider2D>())
                {
                    cap.enabled = true;
                }
                foreach (CapsuleCollider2D cap in GameObject.Find("planeSkid_back").GetComponents<CapsuleCollider2D>())
                {
                    cap.enabled = true;
                }

                foreach (PolygonCollider2D pol in this.gameObject.GetComponents<PolygonCollider2D>())
                {
                    if (pol.isTrigger == false)
                    {
                        pol.enabled = true;
                    }
                }
                GameObject.Find("FLATGROUND").GetComponent<EdgeCollider2D>().enabled = true;
                //     GameObject.Find("planeSkid_front").SetActive(true);
                //     GameObject.Find("planeSkid_back").SetActive(true);
                //  GameObject.Find("minorWheels").SetActive(true);

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

                foreach (PolygonCollider2D pol in this.gameObject.GetComponents<PolygonCollider2D>())
                {
                 if (pol.isTrigger==false)
                    {
                        pol.enabled = false;
                    }
                }

                foreach (CapsuleCollider2D cap in GameObject.Find("minorWheels").GetComponents<CapsuleCollider2D>())
                {
                    cap.enabled = false;
                }
                foreach (CapsuleCollider2D cap in GameObject.Find("planeSkid_front").GetComponents<CapsuleCollider2D>())
                {
                    cap.enabled = false;
                }
                foreach (CapsuleCollider2D cap in GameObject.Find("planeSkid_back").GetComponents<CapsuleCollider2D>())
                {
                    cap.enabled = false;
                }
                GameObject.Find("FLATGROUND").GetComponent<EdgeCollider2D>().enabled = false;
                if (GameObject.Find("minorWheels"))
                {
              //      GameObject.Find("planeSkid_front").SetActive(false);
               //     GameObject.Find("planeSkid_back").SetActive(false);
                 //   GameObject.Find("minorWheels").SetActive(false);
                }

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
                    if (collision.gameObject.tag != "FakeGround")
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
                           //     rb.constraints = RigidbodyConstraints2D.FreezeAll;


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

                                        this.GetComponent<SpriteRenderer>().enabled = true;
                                        ani.SetBool("IS_DEAD", true);
                                        if (FX_EXP_ACTIVE==false)
                                        {
                                            FX_EXP_ACTIVE = true;
                                            GameObject TurdBall2 = Instantiate(Resources.Load("shrap_fx")) as GameObject;
                                            TurdBall2.name = "FX_EXP";
                                            TurdBall2.transform.position = transform.position;
                                        }

                                        quickTireSet = true;
                                        toggleLandGear = false;
                                        tireAni();
                                        this.GetComponent<Collider2D>().enabled = false;
                                    }



                                }
                                if (peject == false)
                                {
                                    deadAniHint();
                                }
                                Debug.Log("HEY YOUR DEAD NOW" + collision.gameObject.tag);
                                tireDisappear();
                                pdead = true;
                                autoProgress = true;
                            }
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
    if (collision.gameObject.tag=="PlaInd")
        {
            //   rb.bodyType=RigidbodyType2D.Static;
          //  rb.constraints = RigidbodyConstraints2D.FreezeAll;
        }

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
    public bool autoProgress = false;
    bool autoProgressCleared = false;
    float delayAUTO = 1; //only half delay
    int autoCount = 0;
    int autoKeyDelayCount = 0;
    float nextUsageAUTO;
    public bool MasterAutoProgressSetting = true;
    bool timerCounterAUTO = false;
    bool quickTime = false;
    //what you did code
    // 0- alive and a ok (not dead)
    // 1-hull breach
    //2 - landing gear break
    //3 - 
    private void LateUpdate()
    {
       
      //  this.GetComponent<mplane_audio>().afx();

        if (pdead==true && this.GetComponent<fx_pdead>().enabled==false)
        {
            this.GetComponent<fx_pdead>().enabled = true;
            GameObject.Find("PSFX_AMB").GetComponent<AudioSource>().enabled = false;
        }
        if (ani.GetCurrentAnimatorStateInfo(0).IsName("plane_gust") &&
ani.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
        {
            ani.SetBool("IS_GUST", false);
        }
        if (GameObject.Find("altimeter").gameObject.GetComponent<menu_runtime>().specButtonStat == -1)
        {
            if (onground == true)
            {
                rb.mass = 60;
                rb.drag = .5f;
                heavyMass = false;
            }
            //5-29-2023 auto restart scenes added also with MasterAutoProgressSetting as a potential config to disable it
            if ((Time.time > nextUsageAUTO && autoProgress == true)||quickTime==true) //continue scrolling // 
            {
                if (autoKeyDelayCount>2)
                {
                    quickTime = true;
                    if (Input.anyKeyDown)
                    {
                      
                       if (GameObject.Find("CircleTimer"))
                       {
                           if (timerCounterAUTO==false)
                           {
                               timerCounterAUTO = true;
                               GameObject.Find("CircleTimer").GetComponent<Animator>().speed = 1;
                               GameObject.Find("CircleTimer").GetComponent<Animator>().Play("10SecDelay(128x128)", -1, 0f);
                               autoProgress = true;
                           }
                           else
                           {
                               timerCounterAUTO = false;
                               GameObject.Find("CircleTimer").GetComponent<Animator>().speed = 0;

                               autoProgress = true;
                           }



                           //  GameObject.Destroy(GameObject.Find("CircleTimer"));
                       }
                      // autoProgress = false;
                  
                     autoCount = 0;
                      nextUsageAUTO = Time.time + delayAUTO; //it is on display
                    }
                }
                autoKeyDelayCount++;

            }
            if ((autoProgress == true ) && MasterAutoProgressSetting==true) //|| timerCounterAUTO==false
            {
                if (!GameObject.Find("CircleTimer"))
                {
                    GameObject CircleTimer = Instantiate(Resources.Load("CircleTimer")) as GameObject;
                    CircleTimer.name = "CircleTimer";
                    CircleTimer.transform.parent = GameObject.Find("img_stat_extra").transform;
                    CircleTimer.transform.position = GameObject.Find("img_stat_extra").transform.position + new Vector3(2, 0);
                    timerCounterAUTO = true;
                }
                if (Time.time > nextUsageAUTO && timerCounterAUTO==true) //continue scrolling
                {
                    if (autoCount>9)
                    {
                        autoProgressCleared = true;
                        autoCount = 0;
                        autoProgress = false;
                        autoKeyDelayCount = 0;
                        if (GameObject.Find("CircleTimer"))
                        {
                            GameObject.Destroy(GameObject.Find("CircleTimer"));
                        }

                    }
                    autoCount++;
                    Debug.Log("++++++++++++++++++++The counter "+autoCount);
                    nextUsageAUTO = Time.time + delayAUTO; //it is on display

                } 
           
            }
            if (Input.GetButtonDown("Debug Reset"))
            {
                Debug.Log("THE STAGE HAS BEEN CALLED UPON");
                this.gameObject.GetComponent<WorldFlowTrack>().TrackStage();
            }
            //NOTE TO SELF, This is the magic reset button for restarting the stage- thanks df 3-30-2022!
        if ((Input.GetButtonDown("Fire3") || (plane_recovered==true && peject ==true)) || autoProgressCleared==true)
        {
                if (GameObject.Find("fss"))
                {
                    GameObject.Destroy(GameObject.Find("fss"));
                }
                
                qreset = false;
                autoProgress = false;
                autoProgressCleared = false;
                delayAUTO = 1; //only half delay
                autoCount = 0;
                autoKeyDelayCount = 0;
                //      nextUsageAUTO;
                MasterAutoProgressSetting = true;
                timerCounterAUTO = false;


             //   timerCounterAUTO = true;
                Camera.main.GetComponent<HUD_buttons>().powerSwitch("off");
                _audio7 = Resources.Load<AudioClip>("_FX\\SFX\\flight\\spooling2");
                this.GetComponent<mplane_audio>().afx_q();
                if (engineSpool < 1)
                {
                    engineSpool = 5;
                }

                ff = StartCoroutine(EjectControledPowerOff());
                zzengineOnOff = true;
                zzShutDownFin = false;

                quickTime = false;
                GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().StageStarted = false;  //this resets back to not active state
                autoProgressCleared = false;
                autoCount = 0;
                autoProgress = false;
                autoKeyDelayCount = 0;

                if (GameObject.Find("CircleTimer"))
                {
                    GameObject.Find("CircleTimer").GetComponent<Animator>().speed = 1;
                    GameObject.Destroy(GameObject.Find("CircleTimer"));
                }
                autoProgressCleared = false;
                maxAlt = 0;
                tempAlt = 0;
                GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt=0;
                if (GameObject.Find("txt_OBJ").gameObject.GetComponent<Text>().text.Contains("win"))
                {
                    //call this when a stage complete
                    Debug.Log("-==jjjjjj=====================================LOADING");
                    this.gameObject.GetComponent<WorldFlowTrack>().scene++;
                    this.gameObject.GetComponent<WorldFlowTrack>().SendStage();
                }
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
                 //   rb.bodyType = RigidbodyType2D.Dynamic;
                    rb.constraints = RigidbodyConstraints2D.None;
                    //   GameObject.Find("Player_plane").tag = "Player";
                    this.GetComponent<fx_pdead>().enabled = false;
                    Camera.main.GetComponent<CameraController>().offset = CamOffSetStd;
                    Camera.main.GetComponent<CameraController>().player = this.gameObject;
                    Camera.main.orthographicSize = cameraDef;
                 //   GameObject.Find("txt_OBJ").transform.position = new Vector3(GameObject.Find("txt_OBJ").transform.position.x, GameObject.Find("txt_OBJ").transform.position.y, 0);
                    // GameObject.Find("img_obj_difference").transform.position = new Vector3(GameObject.Find("img_obj_difference").transform.position.x, GameObject.Find("img_obj_difference").transform.position.y, 0); //reset back to viewing range
                    zzengineOnOff = false;
                    FX_EXP_ACTIVE = false;
                    zzShutDownFin = true;
                    Speed = 0;
                    GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = true;
                GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = true;
                GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP = 100;
                GameObject.Find("planeSkid_front").GetComponent<wheelHealth>().wheelHP = 100;
                    GameObject.Find("img_discussion").GetComponent<Image>().enabled = false;
                    GameObject.Find("PSFX_AMB").GetComponent<AudioSource>().enabled = true;
                    /* 7-26-2022 not a good audio idea
                    foreach (AudioSource aSource in generalAS)
                    {
                        if (aSource==null)
                        {
                            break;
                        }
                        if (aSource.clip.name=="amb1")
                        {
                            aSource.enabled = true;
                        }
                    }
                       */
                  //  GameObject.Find("PSFX_AMB").GetComponent<AudioSource>().clip.
                    GameObject.Find("img_discussion").GetComponent<text_chucker>().readMode = -1;
                    GameObject.Find("img_discussion").GetComponent<text_chucker>().textCall = "";
                    this.GetComponent<SpriteRenderer>().enabled = true;
                    ani.SetBool("IS_DEAD", false);
                   // rb.velocity = Vector3.zero;
                    this.GetComponent<Collider2D>().enabled = true;
                    peject = false;
                    this.GetComponent<mplane_audio>().afx();
                    pdead = false;
                    qreset = true; //really only for use in the POLF script for restarting the stage
                    colSignal = false;
                    ani = this.GetComponent<Animator>();
                    ani.SetBool("IS_AIR_ROLL", false);
                    ani.SetBool("IS_GUST", false);
                    invincible = true;
                    _audio7 = Resources.Load<AudioClip>("_FX\\SFX\\flight\\spooling2");
                    this.GetComponent<mplane_audio>().afx_q();
                    if (engineSpool < 1)
                    {
                        engineSpool = 5;
                    }
                    //9-28-2022- when respawn turn off engine
                    ff = StartCoroutine(EjectControledPowerOff());
                    zzengineOnOff = true;
                    zzShutDownFin = false;
                    nextUsage23 = Time.time + delay23; //it is on display
                

                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                    Camera.main.GetComponent<HUD_buttons>().wheelUpDown("up");
                    countStrain = 0;
                    gib = 0;
                    GameObject.Find("Canvas").GetComponent<Canvas>().renderMode = RenderMode.ScreenSpaceOverlay;
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
           //     rb.constraints = RigidbodyConstraints2D.None;
                //colSignal
                quickTireSet = true;
                toggleLandGear = false;
                tireAni();
                quickTireSet = false;
                    GameObject.Destroy(GameObject.Find("fss"));
                    GameObject.Find("img_stat_extra").GetComponent<Image>().enabled = false;
                    Destroy(GameObject.Find("img_rating_icon"));
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
                        engineSpool = 0;
                        StartCoroutine(SlowBounceOnRecover());
                        //asdf
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
                    Speed = 0;
                }
                Speed = 0;
                autoProgress = false;
                pdead = false;


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

        if (colSignal==true && invincible==false)
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

                    this.GetComponent<SpriteRenderer>().enabled = true;
                        ani.SetBool("IS_DEAD", true);
                        if (FX_EXP_ACTIVE == false)
                        {
                            GameObject TurdBall2 = Instantiate(Resources.Load("shrap_fx")) as GameObject;
                            TurdBall2.name = "FX_EXP";
                            TurdBall2.transform.position = transform.position;
                            FX_EXP_ACTIVE = true;
                        }
                        quickTireSet = true;
                        toggleLandGear = false;
                        tireAni();
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

                        this.GetComponent<SpriteRenderer>().enabled = true;
                        ani.SetBool("IS_DEAD", true);
                        if (FX_EXP_ACTIVE == false)
                        {
                            FX_EXP_ACTIVE = true;
                            GameObject TurdBall2 = Instantiate(Resources.Load("shrap_fx")) as GameObject;
                            TurdBall2.name = "FX_EXP";
                            TurdBall2.transform.position = transform.position;
                        }
                        quickTireSet = true;
                        toggleLandGear = false;
                        tireAni();
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
                    if (GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt > 100)
                    {
                        Supacont.GetComponent<SpriteRenderer>().enabled = true;
                    }
                    Supacont.GetComponent<SpriteRenderer>().enabled = true;
                    nextUsage = Time.time + delay; //it is on display
                }
                 tempAlt = GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt;
                if (tempAlt > maxAlt)
                {
                    maxAlt = tempAlt;
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

            if (onground==false &&  peject == false)
            {
                    if (toggleLandGear==true) //landing gear is gone, so increase the speed
                    {
                        rb.AddRelativeForce(Vector3.right * engineSpool * 55 * Time.deltaTime);
                    }

                if (transform.rotation.eulerAngles.z > 0 && transform.rotation.eulerAngles.z < 45)
                {

                    if (engineSpool > 90 && GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt < 100)
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

                

                    if (GameObject.Find("altimeter").GetComponent<alt_gauge>().act_alt < 150)
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
            if (peject==false)
                {
                    //1-27-2022 this spot controls the weird behavior as well aswell
                    if (moveVertSense < 0 && Speed < 16 && (transform.rotation.eulerAngles.z > 90 && transform.rotation.eulerAngles.z < 180))
                    {
                        transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * UnityEngine.Random.Range(.65f, .98f)));


                    }
                    else if (moveVertSense > 0 && (transform.rotation.eulerAngles.z > 180 && transform.rotation.eulerAngles.z < 300))
                    {
                        //  transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * UnityEngine.Random.Range(.65f, .98f)));
                        rb.AddRelativeForce(new Vector3(0, 1, 0) * 9700 * Time.deltaTime * 4);
                        rb.AddRelativeForce(Vector3.up * 9700 * Time.deltaTime * 4);
                        Debug.Log("HELPING");
                    }
                }


                StartCoroutine(GetSpeed());
                 if (Speed > 8 && Speed<17)
                {
                    rotateSpeed = 50;
                }
           else     if (Speed > 17 && Speed<21) 
        {
            rotateSpeed = 90;
        }
                else if (Speed > 21)
                {
                    rotateSpeed = 150;
                }
                else 
        {
           rotateSpeed = 30;
        }
        }

        }
    }
    float delay1 = 0.10f; //only half delay
    float nextUsage1;
    int countStrain = 0;
    public int strainLimitLO_CNT = 5;
    public int WingHP = 100;

    void HullStress()
    {
        //4-14-2022 potential idea, if stress levels exceed then wings pop off mind flight 
        if (Time.time > nextUsage1)
        {
            // if ( onground==false)
            {
                if (Speed > 27)
                {
                    WingHP = WingHP - 6;
                    countStrain++;
                }
               //  Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFF"+transform.rotation.eulerAngles.z);
            //    Debug.Log("WWWWWWWWWWWWWWWWWWWWWWW" + rb.velocity.x);
                //2-23-2023 modification to add more stress if lack of speed/aoa to high
                //subject to change!
                if (transform.rotation.eulerAngles.z>25 && rb.velocity.x < 19)
                {
                    WingHP = WingHP - 3;
                    countStrain++;
                }
                if ((moveVertSense != 0 || moveVertSense2 != 0) && onground == false)
                {

                    WingHP = WingHP - countStrain / 4;
                }
                else
                {
                    countStrain = 0;
                    if (WingHP < 100)
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
                //    Debug.Log("THE BOD HEALTH IS " + WingHP + "/100");
                //     Debug.Log("THE CURRENT STRESS IS" + countStrain + " OUT OF " + strainLimitLO_CNT);
                nextUsage1 = Time.time + delay1; //it is on display
            }
            countStrain++;
            GameObject.Find("sld_hull_stress").GetComponent<Slider>().value = WingHP;
            if (WingHP > 66)
            {
                GameObject.Find("Handle_hull_stress_COLOR").GetComponent<Image>().color = Color.blue;
            }
            else if (WingHP > 33)
            {
                GameObject.Find("Handle_hull_stress_COLOR").GetComponent<Image>().color = Color.cyan;
            }
            else
            {
                GameObject.Find("Handle_hull_stress_COLOR").GetComponent<Image>().color = Color.magenta;
            }

        }
        if (WingHP < 0 && colSignal == false)
        {
            colSignal = true;
            postmortem = 3;
        }
    }
    // Update is called once per frame
    void Update()
    {
        ani = this.GetComponent<Animator>();
        HullStress();
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

         //  HullStress();

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
                    if (peject == false)
                    {
                        transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * (engineSpool / 100)));
                        if (peject == true)
                        {
                            transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime * (engineSpool / 100)));
                        }
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

       //     Debug.Log("SOMETIME2 " + someTime2 + "METIME2 " + metime2);
            //key word- FPS, FPS control scheme
            //9-26-2022
            float tfps = 1;
            float num;
            string value = GameObject.Find("dbg_fps").GetComponent<Text>().text;
            if (!float.TryParse(value, out num))
            {
              //  throw new InvalidOperationException("Value is not a number.");
            }
            else
            {
                tfps = (float)Convert.ToDouble(GameObject.Find("dbg_fps").GetComponent<Text>().text);
            }
               


         
        
            int baselinefps = 120;
            float deltatf = baselinefps - tfps;
            float add_fps = 0;
            if (deltatf>0) // we are in less than optimal territory
            {
                add_fps =Mathf.Abs(deltatf)/45;
            //    Debug.Log("zzzzzzzzzzzzzzzzzzzzzzzzzTHE FPS ADD VALUE ISA " + add_fps);
            }
            //end of 9-26-2022 FPS control scheme
                if (bypass2==false && zzengineOnOff==false && Time.time > metime2)
        {
                
                if (moveHorSense > 0)
            {
                if (engineSpool < 99)
                {
                        this.GetComponent<mplane_audio>().afxPitchUp();
                        engineSpool = engineSpool + 0.5f+ add_fps;
                }

            }
            else if (moveHorSense < 0)
            {
                if (engineSpool > -19)
                {
                        this.GetComponent<mplane_audio>().afxPitchDown();
                      
                        engineSpool = engineSpool - 0.5f- add_fps;
                }

            }
        }
        }

    }
    float metime2=0;
    float someTime2=1;
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
    public bool invincible = false;
    private IEnumerator SlowBounceOnRecover()
    {

       

        YieldInstruction timedWait = new WaitForSeconds(0.5f);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;
        invincible = true;
        while (engineSpool <10)
        {
            yield return timedWait;
            GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP = 100;
            GameObject.Find("planeSkid_front").GetComponent<wheelHealth>().wheelHP = 100;

        }
        invincible = false;
        colSignal = false;
      postmortem =0;
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
        zzShutDownFin = true;
       // ff = null;
    }



}

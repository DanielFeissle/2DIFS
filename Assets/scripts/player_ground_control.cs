using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_ground_control : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        ani = this.GetComponent<Animator>();
        spriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
        nextUsage = Time.time + delay; //it is on display
      if  (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == true)
        {
            ani.SetBool("IS_ALIVE", true);
        }
    //    GameObject.Find("Player_plane").tag = "PlaDebris";
    }
    [SerializeField] SpriteRenderer spriteRenderer;
    private int Xbox_One_Controller = 0;
    private int PS4_Controller = 0;
    bool controlerUsed = false;
    bool movechk = false;
    bool moveHorchk = false;
    private Rigidbody2D rb;
    public float moveVertSense;
    public float moveHorSense;
    public bool moveVertButt;
    public bool moveHortButt;
    bool bypass = false; //vertical
    bool bypass2 = false; //hor
    public float engineSpool = 0;
    public bool onground = true;
    public float moveVertSense2;
    public Animator ani;
    float delay = .5f; //only half delay
    float nextUsage;
    float delay2 = .5f; //only half delay
    float nextUsage2;
    bool plaGround = false;
    int indIdle = 0;
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
        if (plaGround == true)
        {
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


            if (Input.GetButtonDown("Jump"))
            {
                //Landing Gear

            }
        }

      

    }

    int recTime = -1;//RecoverTime
    //7-19-2022 FIXED the waiting tool 
    private void OnCollisionStay2D(Collision2D collision)
    {
        if (Time.time > nextUsage) //continue scrolling
        {
            nextUsage = Time.time + delay; //it is on display
            if (collision.gameObject.tag == "Player")
            {
                Debug.Log("RECOVEING " + recTime);
                recTime++;
            } else
            {
                recTime = -1;
            }

            if (recTime > 5)
            {
                if (collision.gameObject.tag == "Player")
                {
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().plane_recovered = true;
                    Debug.Log("RECOVERED!");
                    recTime = -1;
                    GameObject.Find("Player_plane").tag = "Player";
                }
            }

          
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name== "Player_plane")
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == true) //7-27-2022, hopeful this fixes the rare bug
            {
                if (ani.GetCurrentAnimatorStateInfo(0).IsName("Eject_Phase2_stable"))
                {

                    rb.gravityScale = 1;//0.14f;
                    ani.SetBool("IS_PAR_GROUNDED", true);
                    GameObject pardrop = Instantiate(Resources.Load("player\\par_drop")) as GameObject;
                    pardrop.name = "par_drop";
                    pardrop.transform.position = new Vector2(transform.position.x + 0.0f, transform.position.y - 0.0f);
                }
                ani.SetBool("IS_JUMP", false);
                plaGround = true;
            }
        }

        if (collision.gameObject.tag == "ground" || collision.gameObject.tag == "PlaDebris")
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject==true) //7-27-2022, hopeful this fixes the rare bug
            {
                if (ani.GetCurrentAnimatorStateInfo(0).IsName("Eject_Phase2_stable"))
                {

                    rb.gravityScale = 1;//0.14f;
                    ani.SetBool("IS_PAR_GROUNDED", true);
                    GameObject pardrop = Instantiate(Resources.Load("player\\par_drop")) as GameObject;
                    pardrop.name = "par_drop";
                    pardrop.transform.position = new Vector2(transform.position.x + 0.0f, transform.position.y - 0.0f);
                }
                ani.SetBool("IS_JUMP", false);
                plaGround = true;
            }

        }
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {

        





    }
    private void LateUpdate()
    {
      //  if ((GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == true) && (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == false))
      //  {
       //     this.GetComponent<player_ground_control>().enabled = false;
       // }

    }
    // Update is called once per frame
    void Update()
    {
        if (recTime==0)
        {
            if (!GameObject.Find("REC_BAR_OBJ") && GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject==true)
            {
                GameObject REC_BAR = Instantiate(Resources.Load("menu\\green_prog_bar")) as GameObject;
                REC_BAR.name = "REC_BAR_OBJ";

                REC_BAR.transform.position = GameObject.Find("ind_pi").transform.position + new Vector3(0, 1, 0);
                REC_BAR.transform.parent = this.transform;

            }

        } else if (recTime==-1)
        {
            if (GameObject.Find("REC_BAR_OBJ"))
                {
                Destroy(GameObject.Find("REC_BAR_OBJ"));
            }
       
        }
        if (Time.time > nextUsage2) //continue scrolling
        {
            if (ani.GetCurrentAnimatorStateInfo(0).IsName("ind_co_run 0"))
            {
              
                if (indIdle>4)
                {
                    ani.SetBool("IS_BREATH_LONG", true);
                } else
                {
                    indIdle++;
                }
            }
            else
            {
                
                indIdle = 0;
            }
                
            nextUsage2 = Time.time + delay2; //it is on display
        }


        if (ani.GetCurrentAnimatorStateInfo(0).IsName("Jump") &&
        ani.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f) //animation is finished
        {

            ani.SetBool("IS_JUMP", false);
        }

            moveVertSense = Input.GetAxis("Vertical");
        moveVertSense2 = Input.GetAxis("Vertical");

        moveHorSense = Input.GetAxis("Horizontal");


        if (moveVertSense == 0)
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
            if (!moveVertButt && controlerUsed == false)
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

        if (bypass == false)
        {
            if (moveVertSense > 0)
            {
                //  if (transform.rotation.eulerAngles.z > 68 && transform.rotation.eulerAngles.z < 120)
                //    {
                //   transform.Rotate(0, 0, -40 * Time.deltaTime);
                //   }
                //   else
                //    {
            ///////////////////   transform.Rotate(0, 0, -30 * (Time.deltaTime * (engineSpool / 100)));
             //   if (peject == true)
                {
                  //  transform.Rotate(0, 0, -30 * (Time.deltaTime * (engineSpool / 100)));
                }
                //      }

                //rb.velocity = Vector3.zero;

            }
            else if (moveVertSense < 0)
            {
               // if (peject == false)
                {
                  //  transform.Rotate(0, 0, 30 * (Time.deltaTime * (engineSpool / 100)));
                }

             //   if (onground == true && Speed > 17)
                {
                    rb.AddRelativeForce(Vector3.up * 5444 * Time.deltaTime * 4);
                }
             //   else if (onground == true && Speed < 17)
                {
                    //  rb.drag = 2;
                }
                // rb.velocity = Vector3.zero;
            }



        }

        if (bypass2 == false)
        {
            if (moveHorSense > 0)
            {
                //  if (engineSpool < 99)
                {
                    engineSpool = engineSpool + 0.5f;
                    rb.AddForce(Vector3.right * 5444 * Time.deltaTime * 4);

                }

            }
            else if (moveHorSense < 0)
            {
                //     if (engineSpool > -19)
                {
                    engineSpool = engineSpool - 0.5f;
                    rb.AddForce(Vector3.left * 5444 * Time.deltaTime * 4);
                }

            }
            if (moveHorSense!=0)
            {
                if (ani.GetCurrentAnimatorStateInfo(0).IsName("sat"))
                {
                    ani.SetBool("IS_BREATH_LONG", false);
                }
            }
            if (moveHorSense > 0.5f || moveHorSense<-0.5f)
            {
                ani.SetBool("IS_BREATHER", false);
                if (dirRest==false)
                {
                    dirRest = true;
                    if (moveHorSense > 0)
                    {
                        spriteRenderer.flipX = Physics2D.gravity.x < -180;
                    }
                    else if (moveHorSense < 0)
                    {
                        spriteRenderer.flipX = Physics2D.gravity.x < 180;
                    }
                    Debug.Log("THE CURRENT VALUE OF HORSENSE" + moveHorSense);
                }
            
            }
            else
            {
                if ((GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead==false) || (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == true))
                {
                    dirRest = false;
                    ani.SetBool("IS_BREATHER", true);
                }

            }
           
            if (Input.GetButton("Jump") && plaGround==true)
            {

                plaGround = false;
                //   ani.SetBool("IS_BREATH_LONG", true);
                ani.SetBool("IS_JUMP", true);
                rb.AddRelativeForce(Vector3.up * 777 *2  * 8);
            }
        }














        if (this.GetComponent<SpriteRenderer>().isVisible==true)
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject==true)
            {
                if (ZoomTriggered==false)
                {
                    ZoomTriggered = true;
                    Camera.main.GetComponent<CameraController>().enabled = false;
                    Camera.main.transform.position = this.transform.position;
                    Camera.main.GetComponent<CameraController>().enabled = true;
                    Camera.main.GetComponent<CameraController>().player = null;
                    StartCoroutine(ZoomIn());
                }
             


            }

        }
    }
    bool dirRest = false;
    //5-25-2022 neat method of sprite flipping
    private void UpdateSpriteFlip()
    {
        spriteRenderer.flipX = Physics2D.gravity.x < 180;
        spriteRenderer.flipY = Physics2D.gravity.y > 0;
      
    }

    bool ZoomTriggered = false;

    IEnumerator ZoomIn()
    {
       GameObject.Find("Player_plane").GetComponent<mplane_controller>().plane_recovered = false;
           GameObject CameFind = GameObject.Find("Main Camera");
        // CameraController CamControl2 = CameFind2.GetComponent<CameraController>();
        Camera.main.GetComponent<CameraController>().player = this.gameObject;
        CameraController CamControl = CameFind.GetComponent<CameraController>();
        while (CameFind.GetComponent<Camera>().orthographicSize >= 2.75f)
        {
            yield return new WaitForSeconds(0.001f);
            Camera.main.GetComponent<CameraController>().offset = Camera.main.GetComponent<CameraController>().offset-new Vector3(0.014f,0,0);
            Camera.main.orthographicSize -= 0.01f;
            Camera.main.transform.position = this.transform.position;
            //  Debug.Log("11111111111111111111111111111111111111111111111");
        }
     
    }

}

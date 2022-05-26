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


        if (Input.GetButtonDown("Jump"))
        {
            //Landing Gear



           




        }

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag=="ground")
        {
            if (ani.GetCurrentAnimatorStateInfo(0).IsName("Eject_Phase2_stable"))
                {
                ani.SetBool("IS_PAR_GROUNDED", true);
                GameObject pardrop = Instantiate(Resources.Load("player\\par_drop")) as GameObject;
                pardrop.name = "par_drop";
                pardrop.transform.position = new Vector2(transform.position.x + 0.0f, transform.position.y - 0.0f);
            }

        }
    }
    // Update is called once per frame
    void Update()
    {
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
                dirRest = false;
                ani.SetBool("IS_BREATHER", true);
            }
           
            if (Input.GetButton("Jump"))
            {
                rb.AddForce(Vector3.up * 5444 * Time.deltaTime * 8);
            }
        }














        if (this.GetComponent<SpriteRenderer>().isVisible==true)
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject==true)
            {
                Camera.main.GetComponent<CameraController>().enabled = false;
                Camera.main.transform.position = this.transform.position;
                Camera.main.GetComponent<CameraController>().enabled = true;
                StartCoroutine(ZoomIn());
             
              
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
    IEnumerator ZoomIn()
    {
     
        GameObject CameFind = GameObject.Find("Main Camera");
        // CameraController CamControl2 = CameFind2.GetComponent<CameraController>();
        Camera.main.GetComponent<CameraController>().player = this.gameObject;
        CameraController CamControl = CameFind.GetComponent<CameraController>();
        while (CameFind.GetComponent<Camera>().orthographicSize >= 2.75f)
        {
            yield return new WaitForSeconds(0.01f);
            Camera.main.orthographicSize -= 0.001f;
            Camera.main.transform.position = this.transform.position;
            //  Debug.Log("11111111111111111111111111111111111111111111111");
        }
     
    }

}

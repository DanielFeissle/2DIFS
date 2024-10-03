using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wheelHealth : MonoBehaviour
{
    public int wheelHP = 100;
    Vector3 pos, velocity;
    private Vector3 offset;
    int lastDamage = 0;
    float delay = 1.0f; //only half delay
    float nextUsage;
    Color curCol = Color.red;

    AudioClip _audioTire;

    // Start is called before the first frame update
    void Start()
    {
        nextUsage = Time.time + delay; //it is on display
        ani_front = GameObject.Find("plane_wheel_0").GetComponent<Animator>(); //zero is front tire
        ani_back = GameObject.Find("plane_wheel_1").GetComponent<Animator>(); //one and two is back tire -does not matter pick one
        //  offset = transform.position - GameObject.Find("planeSkid_front").transform.position;
        //   pos = transform.position;
    }
    /*
    private void LateUpdate()
    {

        try
        {
           //12-1-2021 specr3 test
            //4-7-20 new inner collision detection method!
            //will actually check if objects are inside of playership
            GameObject otherColliders = Physics2D.OverlapBox(new Vector3(this.transform.position.x,this.transform.position.y-.01f,0), new Vector2(.001f, .001f), 1).gameObject;
            //    if (otherColliders.CompareTag("ShipIndest"))

            //   if (!otherColliders.gameObject.CompareTag("station") && !otherColliders.gameObject.CompareTag("Player") && !otherColliders.gameObject.CompareTag("Finish") && !otherColliders.gameObject.CompareTag("ShipLiquidWaste") && !otherColliders.gameObject.CompareTag("Cloud"))
            if (otherColliders.gameObject.CompareTag("ground"))
            {

                Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$" + otherColliders.name);
                Debug.Log("wheel is stuck");
                GameObject.Find("Player_plane").transform.position = new Vector3(transform.position.x + .3f, transform.position.y + .3f);
            }
        }
        catch (Exception ex)
        {
            Debug.Log("Strange problem..." + ex.ToString());
        }



    }
    */
    // Update is called once per frame
    void Update()
    {
        if (GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().StageStarted == false && wheelHP!=100)
        {
            //8-24-2023
            //set wheel hp to 100 until after the stage is in started mode
            wheelHP = 100;
        }
        //  transform.position = GameObject.Find("planeSkid_front").transform.position + offset;


        if (ani_back.GetCurrentAnimatorStateInfo(0).IsName("tire_bounce") &&
   ani_back.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
        {
            ani_back.SetBool("IS_BOUNCE", false);
        }
        if (ani_front.GetCurrentAnimatorStateInfo(0).IsName("tire_bounce") &&
ani_front.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
        {
            ani_front.SetBool("IS_BOUNCE", false);
        }


        if (Time.time > nextUsage) //continue scrolling
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal == false)
            {
                if (wheelHP < 101)
                {
                    wheelHP = wheelHP + 30;
                    if (wheelHP > 100)
                    {
                        wheelHP = 100;
                    }
                }
            }
            
            if (wheelHP>80)
            {
                curCol = Color.green;
            }
            else if (wheelHP>33)
            {
                curCol = Color.yellow;
            }
            else
            {
                curCol = Color.red;
            }
            
            if (this.gameObject.name== "planeSkid_front")
            {
                GameObject.Find("sld_tire_front").GetComponent<Slider>().value = wheelHP;
                    GameObject.Find("Handle_front_tire").GetComponent<Image>().color=curCol;
                //     GameObject.Find("sld_tire_front").GetComponent<Slider>().spriteState.disabledSprite = curCol;
            }
            else if (this.gameObject.name== "planeSkid_back")
            {
                GameObject.Find("sld_tire_back").GetComponent<Slider>().value = wheelHP;
                GameObject.Find("Handle_back_tire").GetComponent<Image>().color = curCol;
            }

            nextUsage = Time.time + delay; //it is on display
        }
        if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal == false)
        { 

            if (wheelHP < 1)
            {
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal = true;
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().postmortem = 2;
             //   this.GetComponent<CapsuleCollider2D>().enabled = false;
            }
    }
    }





    public Animator ani_back;
    public Animator ani_front;
    void OnCollisionEnter2D(Collision2D c)
    {
        float impulse = 0f;
        foreach (ContactPoint2D cp in c.contacts)
        {
            impulse += cp.normalImpulse;
        }
       if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().invincible == false)
        {

        
        if (impulse>20)
        {
            int randTire = UnityEngine.Random.Range(1, 9);
            _audioTire = Resources.Load<AudioClip>("_FX\\SFX\\flight\\TireLand"+ randTire);
            AudioSource.PlayClipAtPoint(_audioTire, this.transform.position, 100);
            AudioSource.PlayClipAtPoint(_audioTire, this.transform.position, 100);
            AudioSource.PlayClipAtPoint(_audioTire, this.transform.position, 100);
            AudioSource.PlayClipAtPoint(_audioTire, this.transform.position, 100);
            AudioSource.PlayClipAtPoint(_audioTire, this.transform.position, 100);
            AudioSource.PlayClipAtPoint(_audioTire, this.transform.position, 100);

            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().engineSpool>55)
            {
                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > 18)
                {
                 //   Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
                    lastDamage = (Convert.ToInt32(impulse) );
                    wheelHP = wheelHP - lastDamage;
                }
                else
                {
                    //  Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
                    lastDamage = (Convert.ToInt32(impulse) / 4);
                    wheelHP = wheelHP - lastDamage;
                }
                //winner of the centur section here, hardcoded to the xtreeeme. blame past self 4/--/2022
                if (this.gameObject.name== "planeSkid_front")
                {
                    ani_front.SetBool("IS_BOUNCE", true);
                }
                else if (this.gameObject.name == "planeSkid_back")
                {
                    ani_back.SetBool("IS_BOUNCE", true);
                }

                //4-20-2022-adding the dust function of the tire
                GameObject ExpDust = Instantiate(Resources.Load("player\\plane_dust")) as GameObject;
                ExpDust.name = "FallingAst";
                ExpDust.transform.position = this.transform.position;

            }
            else
            {
              //  Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
                lastDamage = (Convert.ToInt32(impulse) / 4);
                wheelHP = wheelHP - lastDamage;
            }

        }
        }
    }
    //9-10-2024
    //keeping this in for now, might remove as this section does nothing right now
    int _overlaps;

    public bool isOverlapping
    {
        get
        {
            return _overlaps > 0;
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag== "FakeGround")
        {
            _overlaps++;
        }
        
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "FakeGround")
        {
            _overlaps--;
        }
        
    }
    //////////////////////////////////////////////
    /*
    private void OnCollisionEnter2D(Collision2D collision)
    {
        //    float impact = Vector3.Magnitude(rb.velocity);
        if (collision.gameObject.tag != "Player")
        {

            var direction = transform.InverseTransformPoint(collision.transform.position); //this helps us find which direction the object collided from

            if (direction.y < -0.1f)
            {
                Debug.Log("The object collided with the right side of the ball!");
            }

            velocity = (transform.position - pos) / Time.deltaTime;
            pos = transform.position;
            Debug.Log("HIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" + pos.y);//+ impact);
           // velocity = Vector3.zero;
        }
    }
    */

}

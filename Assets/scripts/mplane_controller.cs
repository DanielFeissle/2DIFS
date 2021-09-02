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
    public float rotateSpeed=188;
    Vector3 pos;
    Vector3 velocity;
    bool pdead = false;
    System.Random blarg = new System.Random();
    // Start is called before the first frame update
    void Start()
    {
        Vector3 pos = transform.position;
        rb = GetComponent<Rigidbody2D>();
    }

    //8-5-2021
    //controller controls improved- now you can play with the controller connected, but it will go to where you are inputing from (keyboard or controller)
    private int Xbox_One_Controller = 0;
    private int PS4_Controller = 0;
    bool controlerUsed = false;
    bool movechk=false;
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
        movechk=Input.GetButtonUp("Vertical");
        moveHortButt = Input.GetButton("Horizontal");
        moveHorchk = Input.GetButtonUp("Horizontal");
        if (controlerUsed==true)
        {
            //player may have a controller connected, but not using it(axis check will say if they are keyboard users)
            if (movechk==true)
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

            if (moveVertButt == true )
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
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        float impact = Vector3.Magnitude(rb.velocity);
       Debug.Log(impact);
        if (impact>15)
        {

            int randoExplod = UnityEngine.Random.Range(2, 5);
            for (int qt = 0; qt < randoExplod; qt++)
            {
                GameObject RepeatGround33 = Instantiate(Resources.Load("Exp2017")) as GameObject;
                RepeatGround33.name = "plaxplode("  + qt + ")";
                RepeatGround33.transform.position = new Vector2(transform.position.x + UnityEngine.Random.Range(-2, 2), transform.position.y - UnityEngine.Random.Range(-2, 2));
                pdead = true;
                rb.velocity = Vector3.zero;
                rb.freezeRotation=true;
                rb.constraints = RigidbodyConstraints2D.FreezeAll;
            }

        }
    }

    float[] speedArr=new float[10];
    float res = 0;
    private void LateUpdate()
    {
        if (pdead==false)
        {


        GameObject throttle = GameObject.Find("sld_throttleGauge");
        throttle.GetComponent<Slider>().value = engineSpool;

        //lets do this the -- way- only one sensor
        float basense = transform.rotation.eulerAngles.z;

        basense = basense - 180;
        basense = basense * -1;
        if (basense<0)
        {
            basense = 360+basense;
        }
        GameObject aoa_gauge = GameObject.Find("sld_AOA");
        aoa_gauge.GetComponent<Slider>().value = basense;


        GameObject txtAlt = GameObject.Find("txt_altitude");
        txtAlt.GetComponent<Text>().text = "Altitude: " + Math.Round(transform.position.y,3);

        GameObject txtSpd = GameObject.Find("txt_speed");
        txtSpd.GetComponent<Text>().text = "Speed: " + Math.Round(Speed, 3);

     //    Debug.Log("THE VALUE IS " + transform.rotation.eulerAngles.z);
        if (engineSpool > 0)
        {
            rb.AddRelativeForce(Vector3.right * engineSpool * 340 * Time.deltaTime);
        }
        else
        {
            rb.AddRelativeForce(Vector3.right * engineSpool * 200 * Time.deltaTime);
        }
      
        if (transform.rotation.eulerAngles.z>5 && transform.rotation.eulerAngles.z<45)
        {
            rb.AddRelativeForce(Vector3.up * 1000 * Time.deltaTime*4);
            Quaternion rot = transform.rotation;
            rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .01f);
            transform.rotation = rot;
        }
        else if (transform.rotation.eulerAngles.z>45 && transform.rotation.eulerAngles.z<74)
        {
            res = transform.rotation.eulerAngles.z - 74;
            Quaternion rot = transform.rotation;
            rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
            transform.rotation = rot;
            res = res * -50;
                //      rb.AddRelativeForce(Vector3.right * engineSpool * -res * Time.deltaTime);
            }
            else if (transform.rotation.eulerAngles.z > 74 && transform.rotation.eulerAngles.z < 180)
        {
            //  rb.AddRelativeForce(new Vector3(-444, 0,0) * 50 * Time.deltaTime*4);
            res = transform.rotation.eulerAngles.z - 74;
            Quaternion rot = transform.rotation;
            rot.eulerAngles = rot.eulerAngles- new Vector3(0, 0, .1f);
            transform.rotation = rot;
            res = res * -200;
            rb.AddRelativeForce(Vector3.up * engineSpool * res * Time.deltaTime);
        }
        else if (transform.rotation.eulerAngles.z > 290 && transform.rotation.eulerAngles.z < 360)
        {
            res = transform.rotation.eulerAngles.z + 74;
            Quaternion rot = transform.rotation;
            rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
            transform.rotation = rot;
            res = res * 5;
            rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);
        }
        else if (transform.rotation.eulerAngles.z > 184 && transform.rotation.eulerAngles.z < 290)
        {
            //  rb.AddRelativeForce(new Vector3(-444, 0,0) * 50 * Time.deltaTime*4);
            res = transform.rotation.eulerAngles.z + 74;
            Quaternion rot = transform.rotation;
            rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .1f);
            transform.rotation = rot;
            res = res * 20;
            rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);
        }
        else
        {
            rb.AddRelativeForce(Vector3.up * -444* Time.deltaTime*4);
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

    // Update is called once per frame
    void Update()
    {

        if (pdead==false)
        {



            moveVertSense = Input.GetAxis("Vertical");
            moveVertSense2 = Input.GetAxis("Vertical");
        moveHorSense= Input.GetAxis("Horizontal");


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
                    transform.Rotate(0, 0, -rotateSpeed * Time.deltaTime);
          //      }

                //rb.velocity = Vector3.zero;

            }
            else if (moveVertSense < 0)
            {
                transform.Rotate(0, 0, rotateSpeed * Time.deltaTime);
                // rb.velocity = Vector3.zero;
            }



        }

        if (bypass2==false)
        {
            if (moveHorSense > 0)
            {
                if (engineSpool < 99)
                {
                    engineSpool = engineSpool + 0.1f;
                }

            }
            else if (moveHorSense < 0)
            {
                if (engineSpool > -19)
                {
                    engineSpool = engineSpool - 0.1f;
                }

            }
        }
        }


    }
    public float Speed;
    public float UpdateDelay=1;

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



}

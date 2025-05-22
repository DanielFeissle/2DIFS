using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class missle_launch_behavior : MonoBehaviour
{
    public Transform target; // The target GameObject to face
    public float rotationSpeed = 5f; // Speed of rotation
    public float speed = 50.0f;
    Vector2 startPos;
    Vector3 startRot;
    public Vector3 targpos;
    private void Start()
    {
        //target = GameObject.Find("Player_plane_title").transform;
        startPos = this.transform.position;
        startRot  = transform.eulerAngles;
        Debug.Log("RETURN_TO " + startPos);
    }
    public bool targetHit;
    public float xThreshold = 0; // Set this to the X coordinate limit
    void Update()
    {

        if (target != null || targpos!=null)
        {


            if (this.name.Contains("mx")) //5-5-2025spec item, handled differently 
            {
                
                if (target!=null)
                {

                    GameObject exp22 = Instantiate(Resources.Load("smoke_puff1")) as GameObject;
                    exp22.name = "px2" + targpos.x + "," + targpos.y;
                    exp22.transform.position = this.transform.position;

                    targpos = target.position;
                    target = null;
                    Destroy(this.gameObject, 5f);
                }
                // Calculate the direction to the target
                Vector3 direction = targpos - transform.position;
                direction.z = 0; // Ensure it's 2D (ignore the z-axis)

                // Calculate the target rotation
                float targetAngle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

                // Smoothly interpolate the rotation
                float angle = Mathf.LerpAngle(transform.eulerAngles.z, targetAngle - 90, rotationSpeed * Time.deltaTime);

                // Apply the new rotation
                transform.rotation = Quaternion.Euler(0, 0, angle);
                transform.Translate(Vector3.up * speed * Time.deltaTime);

                Vector3 screenPosition = Camera.main.WorldToScreenPoint(transform.position);

                // Check if the GameObject is off-screen past the threshold
                float leftEdge = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).x;
       
             //   if (screenPosition.x <= leftEdge)//|| transform.position.x < xThreshold)
             if (this.transform.position.x<targpos.x)
                {

                        Debug.Log(gameObject.name + " is off-screen past X = " + xThreshold);
                    GameObject exp2 = Instantiate(Resources.Load("Exp2017")) as GameObject;
                    exp2.name = "px" + targpos.x+","+targpos.y;
                    exp2.transform.position = this.transform.position;
                    Destroy(this.gameObject);
                    

                }
            }
            else if (target != null)
            {
                // Calculate the direction to the target
                Vector3 direction = target.position - transform.position;
                direction.z = 0; // Ensure it's 2D (ignore the z-axis)

                // Calculate the target rotation
                float targetAngle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

                // Smoothly interpolate the rotation
                float angle = Mathf.LerpAngle(transform.eulerAngles.z, targetAngle - 90, rotationSpeed * Time.deltaTime);

                // Apply the new rotation
                transform.rotation = Quaternion.Euler(0, 0, angle);
                transform.Translate(Vector3.up * speed * Time.deltaTime);
                if (this.GetComponent<AudioSource>().enabled == false)
                {
                    this.GetComponent<AudioSource>().enabled = true;
                }
                if (this.transform.position.x < target.GetComponent<Renderer>().bounds.max.x && this.transform.position.x > target.GetComponent<Renderer>().bounds.min.x)
                {
                    if (this.transform.position.y < target.GetComponent<Renderer>().bounds.max.y && this.transform.position.y > target.GetComponent<Renderer>().bounds.min.y)
                    {


                        GameObject RepeatGround33 = Instantiate(Resources.Load("Exp2017")) as GameObject;
                        RepeatGround33.name = "plaxplode";
                        RepeatGround33.transform.position = new Vector2(transform.position.x + UnityEngine.Random.Range(-2, 2), transform.position.y - UnityEngine.Random.Range(-2, 2));

                        if (target.gameObject.tag == "Player")
                        {
                            GameObject exp22 = Instantiate(Resources.Load("smoke_puff1")) as GameObject;
                            exp22.name = "px2" + targpos.x + "," + targpos.y;
                            exp22.transform.position = this.transform.position;
                            //3-31-2025 for a very specifcic and rushed scene
                            targetHit = true;
                            GameObject.Find("Player_plane_title").transform.position = new Vector2(-0.93f, -2.04f);

                        }
                        //rather than destroy gameobject, reset it back to start position
                        //because this is being used in a reusable scenario
                        //3-26-2025
                        target = null;
                        this.transform.position = startPos;
                        transform.eulerAngles = startRot;
                        Debug.Log("RETURN_TO " + startPos);
                        this.GetComponent<AudioSource>().enabled = false;
                    }

                }
            }


        } else if (this.transform.position.y != startPos.y )
        {
            //reset position if no target is present
            this.transform.position = startPos;
            transform.eulerAngles = startRot;
        }
        if (target == null)
        {

            if (this.transform.position.y != startPos.y && this.transform.position.x != startPos.y)
            {
                this.transform.position = startPos;
                transform.eulerAngles = startRot;
                Debug.Log("RETURN_TO " + startPos);
                this.GetComponent<AudioSource>().enabled = false;
            }
        }

    }


}

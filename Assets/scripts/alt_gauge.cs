using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class alt_gauge : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public float dips = .75f;
    public double act_alt;
    public float hit_pos;
    // Update is called once per frame



    void Update()
    {
        //   RaycastHit2D f = Physics2D.RaycastAll(gameObject.transform.position, transform.up);
        //  RaycastHit2D hit = Physics2D.Raycast(new Vector3(transform.position.x, transform.position.y - 0.1f, 0), -Vector2.up);
        Vector3 raypos = new Vector3(transform.position.x, transform.position.y - 0.1f, 0);
     //   RaycastHit2D hit = Physics2D.Raycast(raypos, -Vector2.up);
       // Debug.DrawRay(raypos, -Vector2.up, Color.green);
        //   Debug.Log(hit.collider.name);


        RaycastHit2D[] hits = Physics2D.RaycastAll(raypos, -Vector2.up);
       
        // For each object that the raycast hits.
        foreach (RaycastHit2D hit in hits)
        {

                // If it hits something...
                if (hit.collider != null)
            {
                if (hit.collider.gameObject.tag != "game")
                {
                   
                    if (hit.collider.gameObject.tag != "Player")
                    {
                        if (hit.collider.gameObject.tag != "detail")
                        {
                            if (hit.collider.gameObject.tag != "cloud")
                            {
                                if (hit.collider.gameObject.tag != "FakeGround")
                                {
                                    
                                    if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == false && hit.collider.gameObject.GetComponent<BoxCollider2D>())
                                    {
                                   //     if (hit.collider.tag == "ground")
                                        {
                                            Debug.Log("HITHIT" + hit.collider.name);
                                        
                                        // Debug.DrawRay(collision.contacts[0].point, collision.contacts[0].normal, Color.green, 2, false);
                                        Debug.DrawRay(hit.collider.transform.position, hit.normal, Color.yellow, 2, false);
                                        //4-18-2023
                                        //Updated to hopefully fix hit detection for many different types of objects. this is the altimeter using the raycaster
                                        float pos = this.transform.position.y - hit.point.y + (GameObject.Find("Player_plane").transform.position.y - this.transform.position.y);
                                        //5-21-2024 :)
                                        // float pos = this.transform.position.y - hit.point.y+ (GameObject.Find("Player_plane").GetComponent<BoxCollider2D>().transform.position.y - this.transform.position.y);
                                        //  float pos = this.transform.position.y- hit.collider.bounds.center.y;
                                        //8-2-2022
                                        //this is to smooth out the ground
                                        // if (pos<0.34f   )
                                        {
                                                Debug.Log("FIFI" + hit.point.y);
                                            if ((GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == false)) //&&(GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed>2)
                                            {
                                                this.GetComponent<general_riser>().rise(hit.collider.gameObject, hit.point.y);
                                            }
                                            else if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == true && (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > 2))
                                            {
                                                this.GetComponent<general_riser>().rise(hit.collider.gameObject, hit.point.y);
                                            }
                                            else
                                            {
                                                this.GetComponent<general_riser>().hide();
                                            }

                                        }



                                        GameObject txt_xcor = GameObject.Find("txt_xord");
                                        txt_xcor.GetComponent<Text>().text = "XCOR: " + (Math.Round(this.transform.position.x, 2));

                                        //ALTOBJ:
                                        GameObject txtAlt = GameObject.Find("txt_alt_OBJ");
                                        //    Debug.Log("CUR POSY" + pos);
                                        act_alt = Math.Round(pos, 2);
                                        hit_pos = hit.collider.gameObject.transform.position.y;
                                        txtAlt.GetComponent<Text>().text = "ALT: " + (Math.Round(pos, 2));
                                        if (pos < .65f)
                                        {
                                            GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = true;

                                        }
                                        else
                                        {
                                            GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = false;

                                        }

                                        if (pos < .30f)
                                        {
                                            GameObject aoa_gauge = GameObject.Find("sld_AOA");

                                            if (aoa_gauge.GetComponent<Slider>().value > 165)
                                            {
                                                    //5-30-2024
                                                    //this was causing the plane to move by itself after moving the altimeter closers to the player.
                                                    //it is now commented out
                                          //      GameObject.Find("Player_plane").GetComponent<Transform>().transform.position = new Vector2(GameObject.Find("Player_plane").GetComponent<Transform>().position.x, hit.collider.bounds.center.y + dips);

                                            }

                                        }
                                        }
                                        break;
                                    }




                                }
                            }
                        }
                    }


                    //     if (this.transform.position.y - .28f < hit.collider.bounds.center.y)

                }



            }
        }


    }

    private void LateUpdate()
    {
        Vector3 rayposDia = new Vector3(transform.position.x+0.9f, transform.position.y + 0.1f, 0);
        RaycastHit2D[] hits = Physics2D.RaycastAll(rayposDia, Vector2.right,1000f);
        
        Debug.DrawRay(rayposDia, Vector2.right, Color.green);
        foreach (RaycastHit2D hit in hits)
        {
            if (hit.collider.gameObject.tag == "ground")
            {

                Debug.Log("RAYRAY " + hit.collider.name);
            }
        }
    }

    /*
    void Update()
    {
        //   RaycastHit2D f = Physics2D.RaycastAll(gameObject.transform.position, transform.up);
        //  RaycastHit2D hit = Physics2D.Raycast(new Vector3(transform.position.x, transform.position.y - 0.1f, 0), -Vector2.up);
        Vector3 raypos = new Vector3(transform.position.x, transform.position.y - 0.1f, 0);
           RaycastHit2D hit = Physics2D.Raycast(raypos, -Vector2.up);
         Debug.DrawRay(raypos, -Vector2.up, Color.green);
        //   Debug.Log(hit.collider.name);



        // If it hits something...
        if (hit.collider != null)
        {
            if (hit.collider.gameObject.tag!="game")
            {
                if (hit.collider.gameObject.tag != "Player")
                {
                    if (hit.collider.gameObject.tag != "detail")
                    {
                        if (hit.collider.gameObject.tag != "cloud")
                        {
                            if (hit.collider.gameObject.tag != "FakeGround")
                            {

                                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead==false && hit.collider.gameObject.GetComponent<BoxCollider2D>())
                                {
                                   // Debug.DrawRay(collision.contacts[0].point, collision.contacts[0].normal, Color.green, 2, false);
                                    Debug.DrawRay(hit.collider.transform.position, hit.normal, Color.yellow, 2,false);
                                    //4-18-2023
                                    //Updated to hopefully fix hit detection for many different types of objects. this is the altimeter using the raycaster
                                    float pos = this.transform.position.y - hit.point.y+(GameObject.Find("Player_plane").transform.position.y-this.transform.position.y);
                                    //5-21-2024 :)
                                   // float pos = this.transform.position.y - hit.point.y+ (GameObject.Find("Player_plane").GetComponent<BoxCollider2D>().transform.position.y - this.transform.position.y);
                                    //  float pos = this.transform.position.y- hit.collider.bounds.center.y;
                                    //8-2-2022
                                    //this is to smooth out the ground
                                    // if (pos<0.34f   )
                                    {
                                        if ((GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == false)) //&&(GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed>2)
                                        {
                                            this.GetComponent<general_riser>().rise(hit.collider.gameObject,hit.point.y);
                                        }
                                        else if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject == true && (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > 2))
                                        {
                                            this.GetComponent<general_riser>().rise(hit.collider.gameObject, hit.point.y);
                                        }
                                        else
                                        {
                                            this.GetComponent<general_riser>().hide();
                                        }

                                    }



                                    GameObject txt_xcor = GameObject.Find("txt_xord");
                                    txt_xcor.GetComponent<Text>().text = "XCOR: " + (Math.Round(this.transform.position.x, 2));

                                    //ALTOBJ:
                                    GameObject txtAlt = GameObject.Find("txt_alt_OBJ");
                                    //    Debug.Log("CUR POSY" + pos);
                                    act_alt = Math.Round(pos, 2);
                                    hit_pos = hit.collider.gameObject.transform.position.y;
                                    txtAlt.GetComponent<Text>().text = "ALT: " + (Math.Round(pos, 2));
                                    if (pos < .65f)
                                    {
                                        GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = true;

                                    }
                                    else
                                    {
                                        GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = false;

                                    }

                                    if (pos < .30f)
                                    {
                                        GameObject aoa_gauge = GameObject.Find("sld_AOA");

                                        if (aoa_gauge.GetComponent<Slider>().value > 165)
                                        {
                                            GameObject.Find("Player_plane").GetComponent<Transform>().transform.position = new Vector2(GameObject.Find("Player_plane").GetComponent<Transform>().position.x, hit.collider.bounds.center.y + dips);

                                        }

                                    }
                                }    
                              



                            }
                        }
                    }
                }
          

           //     if (this.transform.position.y - .28f < hit.collider.bounds.center.y)

            }



        }
    }
    */

}

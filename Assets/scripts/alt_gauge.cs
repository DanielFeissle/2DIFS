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
    // Update is called once per frame
    void Update()
    {
        //   RaycastHit2D f = Physics2D.RaycastAll(gameObject.transform.position, transform.up);
        RaycastHit2D hit = Physics2D.Raycast(new Vector3(transform.position.x, transform.position.y - 0.1f, 0), -Vector2.up);
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
                            float pos = this.transform.position.y - hit.collider.bounds.center.y;

                        GameObject txt_xcor = GameObject.Find("txt_xord");
                        txt_xcor.GetComponent<Text>().text = "XCOR: " + (Math.Round(this.transform.position.x, 2));

                        //ALTOBJ:
                        GameObject txtAlt = GameObject.Find("txt_alt_OBJ");
                            //    Debug.Log("CUR POSY" + pos);
                            act_alt = Math.Round(pos, 2);
                        txtAlt.GetComponent<Text>().text = "ALT: " + (Math.Round(pos, 2));
                        if (pos < .5f)
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
          

           //     if (this.transform.position.y - .28f < hit.collider.bounds.center.y)

            }



        }
    }


}

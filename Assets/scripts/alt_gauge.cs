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
                float pos = this.transform.position.y - hit.collider.bounds.center.y;
                //ALTOBJ:
                GameObject txtAlt = GameObject.Find("txt_alt_OBJ");

                txtAlt.GetComponent<Text>().text = "ALT: " + (Math.Round(pos, 2));
                if (pos<.5f)
                {
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = true;
                }
                else
                {
                    GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = false;
                }

                if (pos<.25f)
                {
                    GameObject.Find("Player_plane").GetComponent<Transform>().transform.position = new Vector2(GameObject.Find("Player_plane").GetComponent<Transform>().position.x, hit.collider.bounds.center.y+0.75f);
                }

           //     if (this.transform.position.y - .28f < hit.collider.bounds.center.y)

            }



        }
    }


}

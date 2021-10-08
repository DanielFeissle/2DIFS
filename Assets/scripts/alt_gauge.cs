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
        Debug.Log(hit.collider.name);



        // If it hits something...
        if (hit.collider != null)
        {

            float pos = this.transform.position.y - hit.collider.bounds.center.y;
            //ALTOBJ:
            GameObject txtAlt = GameObject.Find("txt_alt_OBJ");

            txtAlt.GetComponent<Text>().text = "ALT: " + (pos);


        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ani_wind_affector : MonoBehaviour
{

    Vector2 startPos;
    Vector2 startScale;

    float opX;
    float opY;
    string stupName="";
    // Start is called before the first frame update
    void Start()
    {
        startPos = this.gameObject.transform.position;
        startScale = this.transform.localScale;

        transform.localScale = new Vector2(.1f, transform.localScale.y);
        transform.position = startPos;


        stupName = "fpole" + UnityEngine.Random.Range(0,9999);

        GameObject fud2 = Instantiate(Resources.Load("fpole")) as GameObject;
        fud2.name = stupName;
        fud2.transform.position = this.transform.position;
     
     //   this.transform.parent = fud2.transform; //how do I put a parent with a child prefab, this is how!


    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<Rigidbody2D>()!=null)
        {
            Debug.Log("HELLO THERE " + collision.name + collision.GetComponent<Rigidbody2D>().velocity);
            if (collision.GetComponent<Rigidbody2D>().velocity.x>this.transform.localScale.x)
            {
                this.transform.localScale = new Vector3(collision.GetComponent<Rigidbody2D>().velocity.x, this.transform.localScale.y, 0);
                this.transform.localPosition += new Vector3(0, this.transform.localPosition.y,0);
                opX = (collision.GetComponent<Rigidbody2D>().velocity.x);
                StartCoroutine(WindGust());
                transform.position = startPos;
            }

        }

    }




    IEnumerator WindGust()
    {

     //   2-10-22 kind of a cheap wind solution but for what I have/can do this is good for now. Or perhaps forever in here
        transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y,0);
        while (this.transform.localScale!=new Vector3(0,0,0)) //infinite loop or something
        {
            var renderer2 = this.GetComponent<Renderer>();
            //     GameObject.Find("flag_pole(64x64)").transform.position = new Vector3(renderer2.bounds.max.x, GameObject.Find("flag_pole(64x64)").transform.position.y, 0);
            GameObject.Find(stupName).transform.position = new Vector3(renderer2.bounds.max.x, GameObject.Find(stupName).transform.position.y, 0);
            yield return new WaitForSeconds(0.05f);

 

            transform.localScale = new Vector3(transform.localScale.x-.1f, transform.localScale.y, 0);

            if (transform.localScale.x<0)
            {
            
                break;
            }

        }

    }


    // Update is called once per frame
    void Update()
    {
        
    }
}

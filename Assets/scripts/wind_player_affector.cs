using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wind_player_affector : MonoBehaviour
{
    private Rigidbody2D rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<weather_obj>())
        {
            //this is actual wind, not the player
            if (collision.GetComponent<Rigidbody2D>().velocity.x>4)
            {
                rb.AddForce(Vector3.right* (collision.GetComponent<Rigidbody2D>().velocity.x/10) * -4);
            }
            else if (collision.GetComponent<Rigidbody2D>().velocity.x < -4)
            {
                rb.AddForce(Vector3.right * (collision.GetComponent<Rigidbody2D>().velocity.x/10) * 4);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

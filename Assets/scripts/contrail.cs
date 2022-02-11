using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class contrail : MonoBehaviour
{
    //copied from specr3 starman v7-2020
    //modified for contrail usage/fading. 1-2022
    private GameObject sphere;
    private Vector3 scaleChange;
    private Rigidbody2D rb;
    public float max = 1f;
    public float speed = 0.0005f;

    public SpriteRenderer sprite;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        sprite = this.gameObject.GetComponent<SpriteRenderer>();
        sphere = this.gameObject;
        scaleChange = new Vector3(-0.02f, +0.1f, -0.21f);
    }

    // Update is called once per frame
    void Update()
    {
        sphere.transform.localScale += scaleChange;
    //    sprite.color = new Color(1f, 1f, 1f, Mathf.PingPong(Time.time * speed, max));

        if (sphere.transform.localScale.x < .000002f ) //&& sprite.color.a < 0.15f
        {
            Destroy(this.gameObject);
        }
    }
}

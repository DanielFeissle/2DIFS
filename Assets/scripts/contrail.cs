using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class contrail : MonoBehaviour
{
    //copied from specr3 starman v7-2020
    //modified for contrail usage/fading. 1-2022
    private GameObject sphere;
    private Vector3 scaleChange;

    public float max = 1f;
    public float speed = 0.0005f;

    public SpriteRenderer sprite;
    // Start is called before the first frame update
    void Start()
    {
        sprite = this.gameObject.GetComponent<SpriteRenderer>();
        sphere = this.gameObject;
        scaleChange = new Vector3(-0.01f, +0.1f, -0.71f);
    }

    // Update is called once per frame
    void Update()
    {
        sphere.transform.localScale += scaleChange;
    //    sprite.color = new Color(1f, 1f, 1f, Mathf.PingPong(Time.time * speed, max));

        if (sphere.transform.localScale.x < .0002f ) //&& sprite.color.a < 0.15f
        {
            Destroy(this.gameObject);
        }
    }
}

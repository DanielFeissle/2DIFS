using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weather_gc : MonoBehaviour
{
    //3-1-2022 
    //the goal of the weather garbage collector is to delete stuff after it is away from the player (MAIN CAMERA)
    // Start is called before the first frame update
    Renderer m_Renderer;
    public int rendDist = 200;
    private Rigidbody2D rb;
    private Camera cam;
    void Start()
    {
        m_Renderer = GetComponent<Renderer>();
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        rb.AddForce(Vector3.right * -555 * Time.deltaTime);
        float dist = Vector3.Distance(Camera.main.transform.position, transform.position);

        if (GetComponent<Renderer>().isVisible)
        //  {
        //   if (m_Renderer.isVisible)
        {
            ////debug.log("object is visible");
        } else
        {
            if (dist> rendDist)
            {
                Destroy(this.gameObject);
            }
         
        }



    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weather_rain : MonoBehaviour
{
    public int rendDist = 200;
    Renderer m_Renderer;
    private Rigidbody2D rb;
    private Camera cam;
    // Start is called before the first frame update
    void Start()
    {
        //pretty standard stuff here right?
        rb = GetComponent<Rigidbody2D>();
        m_Renderer = GetComponent<Renderer>();
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right
    }

    // Update is called once per frame
    void Update()
    {
        rb.AddForce(Vector3.right * Camera.main.GetComponent<weather>().AirSpeed * -5 * Time.deltaTime);


        float dist = Vector3.Distance(Camera.main.transform.position, transform.position);

        if (GetComponent<Renderer>().isVisible)
        //  {
        //   if (m_Renderer.isVisible)
        {
            ////debug.log("object is visible");
        }
        else
        {
            if (dist > rendDist)
            {
                Destroy(this.gameObject);
            }

        }

    }
}

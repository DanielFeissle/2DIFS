using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weather_obj : MonoBehaviour
{


    private Camera cam;
    Renderer m_Renderer;
    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        m_Renderer = GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {

        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right


        if (Camera.main.GetComponent<weather>().AirSpeed>0)
        {
            if (this.transform.position.x < p.x)
            {
                Destroy(this.gameObject);
            }
        }
        else
        {
            if (this.transform.position.x > q.x)
            {
                Debug.Log("NOPE");
                Destroy(this.gameObject);
            }
        }


    }
}

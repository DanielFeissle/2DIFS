using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_ground_control : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
      
    }

    // Update is called once per frame
    void Update()
    {
        if (this.GetComponent<SpriteRenderer>().isVisible==true)
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().peject==true)
            {
                Camera.main.GetComponent<CameraController>().enabled = false;
                Camera.main.transform.position = this.transform.position;
                Camera.main.GetComponent<CameraController>().enabled = true;
                StartCoroutine(ZoomIn());
             
              
            }

        }
    }
     

    IEnumerator ZoomIn()
    {
     
        GameObject CameFind = GameObject.Find("Main Camera");
        // CameraController CamControl2 = CameFind2.GetComponent<CameraController>();
        Camera.main.GetComponent<CameraController>().player = this.gameObject;
        CameraController CamControl = CameFind.GetComponent<CameraController>();
        while (CameFind.GetComponent<Camera>().orthographicSize >= 2.75f)
        {
            yield return new WaitForSeconds(0.01f);
            Camera.main.orthographicSize -= 0.001f;
            Camera.main.transform.position = this.transform.position;
            //  Debug.Log("11111111111111111111111111111111111111111111111");
        }
     
    }

}

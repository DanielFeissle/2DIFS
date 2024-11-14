using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class support_obscure : MonoBehaviour
{
    public string OBJ_FINDER = "Player_plane";
    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
        this.gameObject.transform.position = GameObject.Find(OBJ_FINDER.ToString()).transform.position;
        StartCoroutine(obscurePlayer());
        
    }

    private IEnumerator obscurePlayer()
    {

        Camera cam;
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right


        YieldInstruction timedWait = new WaitForSeconds(0.01f);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;
        this.gameObject.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
        while (this.gameObject.transform.localScale.x < 1)
        {
            yield return timedWait;
            this.gameObject.transform.position = this.gameObject.transform.position+new Vector3(0,0.0175f,0);
            this.gameObject.transform.localScale += new Vector3(.01f, .01f, 0);
          
        }
        int sleepCount = 0;
        while (sleepCount<35) //a little bit of wait 
        {
            yield return timedWait;
            sleepCount++;
        }
        
        while (this.gameObject.GetComponent<SpriteRenderer>().bounds.max.x > p.x) //of the screen comp
        {
            yield return timedWait;
            this.gameObject.transform.position -= new Vector3(0.1f, 0, 0);
        }
        GameObject.Destroy(this.gameObject);
    }
}

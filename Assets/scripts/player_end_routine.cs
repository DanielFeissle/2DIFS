using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_end_routine : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        MyMethod();
    }
    public void MyMethod()
    {
        Debug.Log("PRESS EJECT PLEASE");
        StartCoroutine(EjectHint());
    }

    public Animator ani;
    bool eject_cr = false;
    private IEnumerator EjectHint()
    {
        eject_cr = true;
        Camera cam;
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right

        GameObject indeje = Instantiate(Resources.Load("player\\ind")) as GameObject;
        indeje.name = "ind_pi";
        indeje.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y + 0.35f);
        indeje.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;

        ani = indeje.GetComponent<Animator>();
        ani.SetBool("IS_NOTED", true);


        Transform camPos = indeje.GetComponent<Transform>();
        float xrun = 1.8f;
        while (camPos.GetComponent<Transform>().localScale.x < 30.77f)
        {
            if (eject_cr == false)
            {

                break;
            }
            if (camPos)
            {
                yield return new WaitForSeconds(0.05f);
                camPos.transform.localScale += new Vector3(.40f, .40f, 0);
                camPos.transform.position += new Vector3(xrun, 0, 0);
                if (camPos.GetComponent<SpriteRenderer>().bounds.max.x > q.x)
                {
                    xrun = -1.8f;
                    camPos.transform.eulerAngles = new Vector3(0, -180, 0);
                }
                else if (camPos.GetComponent<SpriteRenderer>().bounds.min.x < p.x)
                {
                    xrun = 1.8f;
                    camPos.transform.eulerAngles = new Vector3(0, 0, 0);
                }
                // GameObject.Find("PlayerShip").GetComponent<Transform>().position -= new Vector3(.1f, 0, 0);
                // Debug.Log("00000000000000000000000000000000000000000000000000");
            }

        }
        // GameObject.Find("transportShip").GetComponent<masterShipEnter>().introScene = false;
        Debug.Log("ALL DONE WITH THIS PLEASE");
      //  ani.speed = 0;
      ani.SetBool("IS_BREATHER", true);
        camPos.transform.eulerAngles = new Vector3(0, 0, 0);
        indeje.transform.position = new Vector3(q.x, indeje.transform.position.y, 0);
        eject_cr = false;
        GameObject.Find("img_discussion").GetComponent<text_chucker>().textCall = "ui_death_noeject";
        GameObject.Find("img_discussion").GetComponent<text_chucker>().readMode = 0;
        Destroy(GetComponent<player_end_routine>());
    }
}

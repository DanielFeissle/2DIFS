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
   // int vc = LayerMask.NameToLayer("vc");
  //   int DefaultLayer = LayerMask.NameToLayer("Default");
    public Animator ani;
    bool eject_cr = false;
    AudioClip _audio7;
    public int audioWaitRation = 4;
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

         indeje.GetComponent<BoxCollider2D>().enabled = false;
            Transform camPos = indeje.GetComponent<Transform>();
        float xrun = 1.8f;
        int cntAudioWait = 0;
        int curAudioWait = audioWaitRation;
       // indeje.GetComponent<BoxCollider2D>().offset = new Vector2(20, 0);
       //  indeje.gameObject.layer = vc;
        while (camPos.GetComponent<Transform>().localScale.x < 30.77f)
        {

             p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
             q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right

            //indeje.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y + 0.35f);
          //  indeje.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;

            if (eject_cr == false)
            {

                break;
            }
            if (camPos)
            {
                yield return new WaitForSeconds(0.05f);
                camPos.transform.localScale += new Vector3(.40f, .40f, 0);
                camPos.transform.position += new Vector3(xrun, 0, 0);
                Debug.Log("+++++++++++++++The XRUN value is " + xrun);
                Debug.Log("The Current position is" + camPos.transform.position);
                Debug.Log(camPos.GetComponent<SpriteRenderer>().bounds.max.x);
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
                camPos.transform.position = new Vector2(camPos.transform.position.x, transform.position.y);
                cntAudioWait++;
                if (cntAudioWait>curAudioWait)
                {
                    curAudioWait = curAudioWait + audioWaitRation;
                    string randAudio = "";
                    int randoAudioCnt = Random.Range(1, 6);
                    randAudio = "_FX\\SFX\\Ground\\Rock"+ randoAudioCnt.ToString();
                    _audio7 = Resources.Load<AudioClip>(randAudio);
                    AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                    AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                    AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                    AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                    AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                    AudioSource.PlayClipAtPoint(_audio7, this.transform.position, 100);
                }
            


                // GameObject.Find("PlayerShip").GetComponent<Transform>().position -= new Vector3(.1f, 0, 0);
                // Debug.Log("00000000000000000000000000000000000000000000000000");
            }

        }
       indeje.GetComponent<BoxCollider2D>().enabled = true;
        // GameObject.Find("transportShip").GetComponent<masterShipEnter>().introScene = false;
        Debug.Log("ALL DONE WITH THIS PLEASE");
      //  ani.speed = 0;
      ani.SetBool("IS_END_TRIGGER", true);
        camPos.transform.eulerAngles = new Vector3(0, 0, 0);
        indeje.transform.position = new Vector3(q.x, indeje.transform.position.y, 0);
        eject_cr = false;
        GameObject.Find("img_discussion").GetComponent<text_chucker>().textCall = "ui_death_noeject";
        GameObject.Find("img_discussion").GetComponent<text_chucker>().readMode = 0;
        Destroy(GetComponent<player_end_routine>());
    }
}

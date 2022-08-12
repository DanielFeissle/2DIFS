using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mplane_audio : MonoBehaviour
{

    float lpitch = 1;
    public AudioClip[] AudioLib;
    GameObject fx;
    // Start is called before the first frame update
    void Start()
    {
        fx = GameObject.Find("PSFX_AMB");
    }
    public void afx_q()
    {
       
        StartCoroutine(AudioDown());
    }
   public void afx()
    {
        fx.GetComponent<AudioSource>().enabled = true;
        lpitch = 1;
        fx.GetComponent<AudioSource>().pitch = lpitch;
        StartCoroutine(AudioUp());
    }
    public void afxPitchDown()
    {
        
        if (lpitch>0.7f)
        {
            lpitch = lpitch - .01f;
            fx.GetComponent<AudioSource>().pitch = lpitch;
        }

    }

    public void afxPitchUp()
    {
     
        if (lpitch<2.50f)
        {
            lpitch = lpitch + .01f;
            fx.GetComponent<AudioSource>().pitch = lpitch;
        }

    }
    // Update is called once per frame
    void Update()
    {
        
    }



    IEnumerator AudioDown()
    {

        while (fx.GetComponent<AudioSource>().volume>.1f)
        {
            yield return new WaitForSeconds(0.01f);
            fx.GetComponent<AudioSource>().volume = fx.GetComponent<AudioSource>().volume - .01f;
        }
        if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead==true)
        {
            fx.GetComponent<AudioSource>().enabled = false;
        }


    }

    IEnumerator AudioUp()
    {

        while (fx.GetComponent<AudioSource>().volume <1)
        {
            yield return new WaitForSeconds(0.01f);
            fx.GetComponent<AudioSource>().volume = fx.GetComponent<AudioSource>().volume + .01f;
        }

    }
}

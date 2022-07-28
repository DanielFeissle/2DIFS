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
   public void afx()
    {
        lpitch = 1;
        fx.GetComponent<AudioSource>().pitch = lpitch;
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
}

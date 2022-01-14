using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GEN_UI_Ani_Rand_Delay : MonoBehaviour
{
    //1-13-2022 general title like fx script
    public Animator ani;
    float delay = 0.5f; //only half delay
    float nextUsage;
    bool play_ani = false;
    public string masterAniName="";
    int cntWait = 2;
    int totTime = 5;
    public int randMin = 2;
    public int randMax = 3;
    // Start is called before the first frame update
    void Start()
    {
        nextUsage = Time.time + delay; //it is on display
        ani = this.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
       


        if ( play_ani==false && cntWait>totTime) //continue scrolling
        {
            totTime = UnityEngine.Random.Range(randMin, randMax);
            play_ani = true;
        
            ani.Play("Base Layer."+masterAniName, 0, UnityEngine.Random.Range(0.2f, 0.9f));

        }
        if (Time.time > nextUsage)
        { 
            cntWait++;
        nextUsage = Time.time + delay; //it is on display

        }
        if (ani.GetCurrentAnimatorStateInfo(0).IsName(masterAniName) &&
ani.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f && play_ani == true)
        {
            //we finished burp
            //    ani.speed = 0;
            ani.StopPlayback();
            cntWait = 0;
            play_ani = false;
        }
    }
}

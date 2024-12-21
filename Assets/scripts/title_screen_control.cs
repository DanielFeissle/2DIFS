using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class title_screen_control : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
       // StartCoroutine(SlowBounceOnRecover());
    }

    private void Awake()
    {
        Debug.Log("ILIVE!!");
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    private IEnumerator SlowBounceOnRecover()
    {



        YieldInstruction timedWait = new WaitForSeconds(0.5f);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;
     //   invincible = true;
     //   while (engineSpool < 10)
        {
            yield return timedWait;
            GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP = 100;
            GameObject.Find("planeSkid_front").GetComponent<wheelHealth>().wheelHP = 100;

        }

    }

}

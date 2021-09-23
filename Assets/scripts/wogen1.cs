using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wogen1 : MonoBehaviour
{
    //world generator
    // Start is called before the first frame update
    void Start()
    {
        float curPos = 0;
        for (int i=0; i<999;i++)
        {
            System.Random blarg = new System.Random();
            GameObject ExpDust = Instantiate(Resources.Load("ground\\airport")) as GameObject;
            var renderer = ExpDust.GetComponent<Renderer>();
            float width = renderer.bounds.size.x;
            ExpDust.name = "ground"+i+"FFF"+ renderer.bounds.size.x;
            ExpDust.transform.position = new Vector3 (curPos+width,0,0);
            curPos = ExpDust.transform.position.x;
        }


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

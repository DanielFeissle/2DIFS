using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ball_screen : MonoBehaviour
{
    
    //3-8-2023
    //testing not using a rb to move objects around on the screen. to do it with as few as components as needed.
    private Camera cam;
    float distance = 5;
    float ax = 0;
    float ay = 0;
    Vector3 curtar = new Vector3(0, 0, 0);
    int randoStopo = 7;
    AudioClip _audio;
    AudioSource AudSrc;
    // Start is called before the first frame update
    void Start()
    {
        Camera.main.GetComponent<AudioSource>().time = UnityEngine.Random.value * Camera.main.GetComponent<AudioSource>().clip.length;
        AudSrc = gameObject.AddComponent(typeof(AudioSource)) as AudioSource;
        AudSrc.volume = .01f;
        Time.timeScale = UnityEngine.Random.Range(5,8);
        Application.targetFrameRate = 500;
        UnityEngine.Random.InitState((int)DateTime.Now.Ticks);
        randoStopo = UnityEngine.Random.Range(5, 10);
        string cpt = UnityEngine.Random.Range(1, 4).ToString();
        string ccpt = "_FX/SFX/boing/" + cpt;
        _audio = Resources.Load<AudioClip>(ccpt);
     //                                     \_FX\SFX\boing
        cam = Camera.main;
        do //never have 0,0,0 the object will not go anywhere
        {
            curtar = new Vector3(UnityEngine.Random.Range(-1, 1), UnityEngine.Random.Range(-1, 1), 0);
        } while (curtar == new Vector3(0, 0, 0));
        ax = curtar.x;
        ay = curtar.y;
        if (ax==0)
        {
            if (UnityEngine.Random.Range(0,100)<50)
            {
                ax = 1;
            }
            else
            {
                ax = -1;
            }
        }
        if (ay == 0)
        {
            if (UnityEngine.Random.Range(0, 100) < 50)
            {
                ay = 1;
            }
            else
            {
                ay = -1;
            }
        }
       
    }
    //these are counters to give time to the ball/boundry so they are not still collliding
    int leftCol = 0;
    int wallCol = 0;
    int bouneTillNextScene = 0;
    private void LateUpdate()
    {

        CircleCollider2D myCollider = this.GetComponent<CircleCollider2D>();
        Collider2D[] otherColliders = Physics2D.OverlapAreaAll(myCollider.bounds.min, myCollider.bounds.max);



        if (otherColliders.Length > 1 && leftCol == 0)
        {
            leftCol = leftCol + 30;
            ax = ax * -1;
            if (UnityEngine.Random.Range(0,100)>50)
            {
                ay = -1;
            }
            else
            {
                ay = 1;
            }
        }
        if (leftCol>0)
        {
            leftCol--;
        }
     //   Debug.Log(wallCol);
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right

        if (this.transform.position.x < p.x || this.transform.position.x > q.x)
        {
            if (wallCol==0)
            {
                ax = ax * -1;
                wallCol = 30;
                bouneTillNextScene++;
                AudSrc.PlayOneShot(_audio);
            }
           
        }

        /////
        if (this.transform.position.y > p.y || this.transform.position.y < q.y)
        {
            if (wallCol == 0)
            {
                ay = ay * -1;
                wallCol = 30;
                bouneTillNextScene++;

                AudSrc.PlayOneShot(_audio);
            }

        }

        curtar = new Vector3(ax, ay, 0);
        transform.position = transform.position + curtar * distance * Time.deltaTime;

        if (wallCol > 0)
        {
            wallCol--;
        }

    }
    // Update is called once per frame
    void Update()
    {
        Debug.Log("FFFFFFFFFFF" + bouneTillNextScene);
        if (bouneTillNextScene> randoStopo)
        {
            SceneManager.LoadScene("title_scene");
        }

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class title_screen_control : MonoBehaviour
{
    public Canvas canvas; // Reference to the Canvas
    Font myFont; //= Resources.Load<Font>("Arial.tff");
    public Color startColor = Color.white; // Initial color
    public Color endColor = Color.red;  // Target color
    public float duration = 4f;           // Duration of the fade
    private float elapsedTime = 0f;
    private Camera cam;
    bool dialFlag = false;
    // Start is called before the first frame update
    void Start()
    {
        //   canvas = Camera.main.GetComponentInChildren<Canvas>().GetComponent<Canvas>();
        canvas = GameObject.Find("canvas_demo").GetComponent<Canvas>();

        cam = Camera.main;
        cam.backgroundColor = startColor; // Set the initial background color
        Debug.Log("MY FONT IS " + myFont);
        myFont = GameObject.Find("txt_title").GetComponent<Text>().font;
       
        
        // StartCoroutine(SlowBounceOnRecover());
    }
    public int mainMenuLocation = 0; //main menu location transition

    public Vector3 startPositio = new Vector3(10, 20, -10);
    public Vector3 endPosition = new Vector3(10, -1.2f, -10);


    public Vector3 CameraHor1_startPositio = new Vector3(10, -1.2f, -10);
    public Vector3 CameraHor1_endPosition = new Vector3(45, -1.2f, -10);

    public Vector3 CameraHor2_startPositio = new Vector3(45, -1.2f, -10);
    public Vector3 CameraHor2_endPosition = new Vector3(10, 20, -10);

    public Vector3 plane_startPositio = new Vector3(-1, -1.44f, 0);
    public Vector3 plane_endPosition = new Vector3(60, -1.44f, 0);


    public Vector3 plane2_startPositio = new Vector3(0, 20, 0);
    public Vector3 plane2_endPosition = new Vector3(30, 10, 0);

    public int RandomDelay = 5;
    public int TitleDelay = 30;
    int delayCount = 0;
    GameObject title_plane;
    //Player_plane_title
    public float speed = 1.0f;
    public float planeSpeed = 0.2f;
    float nextUsage;
    float delay = 1.0f; //only half delay
    float nextUsage_exp;
    float delay_exp = 0.1f; //only half delay
    bool triggeredGameObject = false;
    bool intro_finished = false;
    bool intro_pipeline_complete = false;

    private void Awake()
    {
        RandomDelay= Mathf.RoundToInt(UnityEngine.Random.Range(45, 75));
        TitleDelay = Mathf.RoundToInt(UnityEngine.Random.Range(30, 60));
        Debug.Log("ILIVE!!");
        mainMenuLocation = 0;
        nextUsage = Time.time + delay; //it is on display
        title_plane = GameObject.Find("Player_plane_title");
        
        this.GetComponent<AudioSource>().clip= Resources.Load<AudioClip>("_FX\\BMX\\special\\Abandoned_World_Loop");
        this.GetComponent<AudioSource>().loop = true;
        this.GetComponent<AudioSource>().Play();
    }

    void CreateTextBlock(string textContent, Vector2 position, float duration,Color text_color)
    {

        //9-29-2022 pulled below from specr2, and probab somewhere else
        //attach script during runtime
        //We have a string holding a script name
        string ScriptName = "dialog_bop_bep";
        //We need to fetch the Type
        System.Type MyScriptType = System.Type.GetType(ScriptName + ",Assembly-CSharp");
        //Now that we have the Type we can use it to Add Component
        

        // Create a new GameObject
        GameObject textObject = new GameObject("DynamicText");
        textObject.AddComponent(MyScriptType);
        // Set the parent to the Canvas
        textObject.transform.SetParent(canvas.transform);

        // Add a Text component to the GameObject
        Text textComponent = textObject.AddComponent<Text>();

        // Set the text content
        textComponent.text = textContent;

        // Set the font and size (you may need to assign a font from your project)
        // textComponent.font = myFont; //Resources.GetBuiltinResource<Font>("Arial.tff");
        textComponent.font = Resources.GetBuiltinResource(typeof(Font), "Arial.ttf") as Font;
        textComponent.resizeTextForBestFit = true;
        textComponent.resizeTextMinSize = 128;
        textComponent.resizeTextMaxSize = 128;
        textComponent.horizontalOverflow = HorizontalWrapMode.Overflow;
        textComponent.verticalOverflow = VerticalWrapMode.Overflow;
        textComponent.fontSize = 128;
        textComponent.fontStyle = FontStyle.Bold;
        textComponent.color = text_color;
        // Set the position and other properties
        RectTransform rectTransform = textObject.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = position;
        rectTransform.sizeDelta = new Vector2(200, 50); // Adjust size as needed
        GameObject.Destroy(textObject, duration);
    }

    bool fx_in_title_demo = false;
    // Update is called once per frame
    void Update()
    {
        
        if (Input.anyKey || Input.anyKeyDown ||
    Input.GetAxis("Mouse X") != 0 || Input.GetAxis("Mouse Y") != 0)
        {
            if (GameObject.Find("Canvas").GetComponent<Canvas>().enabled == false)
            {
               

                cam.backgroundColor = startColor;
                GameObject.Find("Canvas").GetComponent<Canvas>().enabled = true;
                if (fx_in_title_demo==true)
                {
                    this.GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("_FX\\BMX\\special\\Abandoned_World_Loop");
                    this.GetComponent<AudioSource>().loop = true;
                    this.GetComponent<AudioSource>().Play();
                    fx_in_title_demo = false;
                    
                }
            }
            else
            {
                Camera.main.GetComponent<title_logo_text_flow>().enabled = false;//reset the counter if movement is detected
                Camera.main.GetComponent<title_logo_text_flow>().enabled = true;
            }
            delayCount = 0;
            if (mainMenuLocation!=0|| intro_pipeline_complete==true)
            {
                //4-8-2025
                //reset main menu here back to position zero
                intro_pipeline_complete = false;
                returnToOrigPos();
            }
            TitleDelay = Mathf.RoundToInt(UnityEngine.Random.Range(45, 75));
            mainMenuLocation = 0;
            intro_finished = false;
        }


        if (mainMenuLocation==0)
        {
            if (intro_finished==true)
            {
                if (Time.time > nextUsage_exp)
                {
                    randomExp();
                    randomMis();
                 nextUsage_exp = Time.time + delay_exp; //it is on display
                                                        // SendKeys.SendWait("{SPACE}");



                }
            }
            //in title pre loop
            if (Time.time > nextUsage)
            {
                // transform.position = startPositio;
                delayCount++;
                nextUsage = Time.time + delay; //it is on display
            }
            if (delayCount > TitleDelay)
            {
                RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 5));
                mainMenuLocation = 1; //start the title screen process
                elapsedTime = 0f;
                
                delayCount = 0;

                ///////////////////////////
                if (intro_finished==true)
                {
                    if (GameObject.Find("Canvas").GetComponent<Canvas>().enabled == false)
                    {
                        cam.backgroundColor = startColor;
                        GameObject.Find("Canvas").GetComponent<Canvas>().enabled = true;
                        if (fx_in_title_demo == true)
                        {
                            this.GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("_FX\\BMX\\special\\Abandoned_World_Loop");
                            this.GetComponent<AudioSource>().loop = true;
                            this.GetComponent<AudioSource>().Play();
                            fx_in_title_demo = false;
                        }
                    }
                    delayCount = 0;
                    if (mainMenuLocation != 0 || intro_pipeline_complete == true)
                    {
                        //4-8-2025
                        //reset main menu here back to position zero
                        intro_pipeline_complete = false;
                        returnToOrigPos();
                    }
                    TitleDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 5));
                    mainMenuLocation = 0;
                    TitleDelay = Mathf.RoundToInt(UnityEngine.Random.Range(45, 75));
                    intro_finished = false;
                }

                intro_finished = false;
            }
        }
     else   if (mainMenuLocation == 1)
        {
            this.GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("_FX\\BMX\\special\\OSS_short");
            this.GetComponent<AudioSource>().loop = false;
            this.GetComponent<AudioSource>().Play();
            fx_in_title_demo = true;
            intro_pipeline_complete = false;
            cam.backgroundColor = startColor;
            GameObject.Find("Canvas").GetComponent<Canvas>().enabled=false;
            // Move the GameObject towards the end position
            //we do the first task, which is to wait a little random while
            if (Time.time > nextUsage)
            {
                transform.position = startPositio;
                delayCount++;
                nextUsage = Time.time + delay; //it is on display
            }
            if (delayCount>RandomDelay)
            {
                RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 5));
                mainMenuLocation = 2;
                delayCount = 0;
            }
        }
        else if (mainMenuLocation == 2)
        {
            //now we follow the plane down
            startPositio = new Vector3(10, 20, -10);
            this.transform.position = startPositio;
            endPosition = new Vector3(10, -1.2f, -10);
            mainMenuLocation = 3;
        }
        else if (mainMenuLocation == 3)
        {
            MoveAndFollowPlaneDown();
          
        }
        else if ( mainMenuLocation==4)
        {
            if (Time.time > nextUsage)
            {
              //  transform.position = startPositio;
                delayCount++;
                nextUsage = Time.time + delay; //it is on display
            }
            if (delayCount > RandomDelay)
            {
                RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 5));
                mainMenuLocation = 5;
                title_plane.transform.position = plane_startPositio;
                delayCount = 0;
            }

        }
        else if (mainMenuLocation==5)
        {

            PlaneMoveLeftToRight();

        }
        else if (mainMenuLocation==6)
        {
            title_plane.transform.position = plane_startPositio;
            this.transform.position = CameraHor1_startPositio;
            mainMenuLocation = 7;
        }
        else if (mainMenuLocation==7)
        {

            mainCameraMoveRightward();
        }
        else if (mainMenuLocation==8)
        {
            if (Time.time > nextUsage)
            {
                transform.position = CameraHor2_startPositio;
                delayCount++;
                nextUsage = Time.time + delay; //it is on display
            }

            if (delayCount > 1 && dialFlag==false)
            {
                dialFlag = true;
             //   RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 10));
             //  mainMenuLocation = 2;
             // delayCount = 0;
                CreateTextBlock(",,.!!", new Vector2(-350, -150), 2.0f, Color.yellow);
                this.transform.position = CameraHor2_startPositio;

            }
            if (delayCount>3)
            {
                mainMenuLocation = 9;
                dialFlag = false;
            }

        }
        else if (mainMenuLocation == 9)
        {
            if (triggeredGameObject==false)
            {
                GameObject.Find("rocket_act_1").GetComponent<missle_launch_behavior>().target = GameObject.Find("tank").transform;
                triggeredGameObject = true;
            }
           
            mainCameraMoveDiag();
        }
        else if (mainMenuLocation==10)
        {
            if (triggeredGameObject == false)
            {
                GameObject.Find("rocket_act_1 (1)").GetComponent<missle_launch_behavior>().target = GameObject.Find("Player_plane_title").transform;
                triggeredGameObject = true;
            }
            
            mainMenuLocation = 11;
            title_plane.transform.position = plane2_startPositio;
        }
        else if (mainMenuLocation == 11)
        {
            PlaneMoveAir();
            if (dialFlag==false)
            {
                CreateTextBlock("...!W!", new Vector2(550, -450), 2.0f, Color.red);
                dialFlag = true;
            }
            triggeredGameObject = false;
            if (GameObject.Find("rocket_act_1 (1)").GetComponent<missle_launch_behavior>().targetHit == true)
            {
                GameObject.Find("Player_plane_title").transform.position = new Vector2(-0.93f, -2.04f);
                mainMenuLocation = 12;
                GameObject.Find("rocket_act_1 (1)").GetComponent<missle_launch_behavior>().targetHit = false;
                dialFlag = false;
            }            
        }
        else if (mainMenuLocation==12)
        {
            intro_pipeline_complete = true;
            //reset title delay random wait
            TitleDelay = Mathf.RoundToInt(UnityEngine.Random.Range(30, 60));
            mainMenuLocation = 0;
            intro_finished = true;
            // target = GameObject.Find("Player_plane_title").transform;
            //boom
        }




    }

    [SerializeField] Transform spawnTransform;
    private void randomMis()
    {

        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right



        Camera camera = Camera.main;

        // Define random X and Y within the left and top portion of the viewport
        float randomX = p.x; //- Mathf.Abs(10);//Random.Range(-5f, -1.5f); // Left half

        float randomY = Random.Range(q.y, p.y); // Random.Range(0.5f, 1f); // Top half
        Debug.Log("The random target is: "+randomX + "," + randomY);
        // Convert viewport coordinates to world coordinates
        Vector3 randomWorldPosition = new Vector3(randomX, randomY, 0);//camera.ScreenToWorldPoint(new Vector3(randomX, randomY, 0)); //ViewportToWorldPoint //camera.nearClipPlane
        Debug.Log("Send the object here:" + randomWorldPosition);

        GameObject mx = Instantiate(Resources.Load("ground/gai/rocket/rocket_a_1")) as GameObject;
        
        spawnTransform.position = randomWorldPosition;
        
        mx.name = "mx" + randomWorldPosition;
        spawnTransform.name = mx.name;
        mx.transform.position = GameObject.Find("truck_loaded").transform.position;
        
        mx.GetComponent<missle_launch_behavior>().target = spawnTransform;

    }

    private void randomExp()
    {
        if (cam != null && elapsedTime < duration)
        {
            elapsedTime += Time.deltaTime;
            cam.backgroundColor = Color.Lerp(startColor, endColor, elapsedTime / duration);
        }
        int rando = UnityEngine.Random.Range(1, 50);
        for (int i=0;i<rando;i++)
        {
            // Get the camera's width and height in world units
            float screenX = Random.Range(0, Screen.width);
            float screenY = Random.Range(0, Screen.height);

            // Convert screen position to world position
        //    Vector3 worldPosition = Camera.main.ScreenToWorldPoint(new Vector3(screenX, screenY,0));
         Vector3 worldPosition = Camera.main.ScreenToWorldPoint(new Vector3(screenX, screenY,10));

            GameObject RepeatGround33 = Instantiate(Resources.Load("Exp2017")) as GameObject;
            RepeatGround33.name = "px" + worldPosition;
            RepeatGround33.transform.position = worldPosition;// new Vector2(transform.position.x + UnityEngine.Random.Range(-2, 2), transform.position.y - UnityEngine.Random.Range(-2, 2));
        }

    }

    private void returnToOrigPos()
    {

        this.GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("_FX\\BMX\\special\\Abandoned_World_Loop");
        this.GetComponent<AudioSource>().loop = true;
        this.GetComponent<AudioSource>().Play();
        GameObject.Find("Canvas").GetComponent<Canvas>().enabled = true;
        RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 10));
        nextUsage = Time.time + delay; //it is on display
        TitleDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 5));
        startPositio = new Vector3(10, -1.2f, -10);
        this.transform.position = startPositio;
        delayCount = 0;
        title_plane.transform.position = plane_startPositio;
        GameObject.Find("rocket_act_1 (1)").GetComponent<missle_launch_behavior>().targetHit = false;
        GameObject.Find("rocket_act_1").GetComponent<missle_launch_behavior>().targetHit = false;
        GameObject.Find("rocket_act_1").GetComponent<missle_launch_behavior>().target = null;
        GameObject.Find("rocket_act_1 (1)").GetComponent<missle_launch_behavior>().target = null;
        triggeredGameObject = false;
        //GameObject.Find("rocket_act_1 (1)").GetComponent<missle_launch_behavior>().targetHit = false;

    }

    private void boomScreen()
    {
        //timer to return to end exp
        mainMenuLocation = 0;
        GameObject.Find("Player_plane_title").transform.position = new Vector2(-0.93f, -2.04f);
    }

    private void PlaneMoveAir()
    {

        title_plane.transform.position = Vector3.Lerp(title_plane.transform.position, plane2_endPosition, 0.55f * Time.deltaTime);
        if (Mathf.Round(title_plane.transform.position.x) >= Mathf.Round(plane2_endPosition.x))
        {
            if (Mathf.Round(title_plane.transform.position.y) == Mathf.Round(plane2_endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                mainMenuLocation = 12;


            }

        }
    }


    private void mainCameraMoveDiag()
    {
        transform.position = Vector3.Lerp(transform.position, CameraHor2_endPosition, 0.5f * Time.deltaTime);
        if (Mathf.Round(transform.position.x) == Mathf.Round(CameraHor2_endPosition.x))
        {

            if (Mathf.Round(transform.position.y) == Mathf.Round(CameraHor2_endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                triggeredGameObject = false;
                mainMenuLocation = 10;


            }

        }
    }

    private void mainCameraMoveRightward()
    {
        transform.position = Vector3.Lerp(transform.position, CameraHor1_endPosition, 0.5f * Time.deltaTime);
        if (Camera.main.transform.position.x > 40)
        {
            if (dialFlag == false)
            {
                dialFlag = true;
                CreateTextBlock("!@! :<", new Vector2(-550, 150), 7.0f, Color.green);
            }
        }
        if (Mathf.Round(transform.position.x) == Mathf.Round(CameraHor1_endPosition.x))
        {
            if (Mathf.Round(transform.position.y) == Mathf.Round(CameraHor1_endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                dialFlag = false;
                mainMenuLocation = 8;


            }

        }
    }

    private void PlaneMoveLeftToRight()
    {
      
        title_plane.transform.position = Vector3.Lerp(title_plane.transform.position, plane_endPosition, planeSpeed * Time.deltaTime);
        if (Mathf.Round(title_plane.transform.position.x+20) >= Mathf.Round(plane_endPosition.x)) //+20 to help speed this transition up
        {
            if (Mathf.Round(title_plane.transform.position.y) == Mathf.Round(plane_endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                mainMenuLocation = 6;
                /*
                if (Time.time > nextUsage)
                {
                    transform.position = startPositio;
                  
                    nextUsage = Time.time + delay; //it is on display

                }
                */

            }

        }
    }

    private void MoveAndFollowPlaneDown()
    {
        transform.position = Vector3.Lerp(transform.position, endPosition, speed * Time.deltaTime);
        if (Mathf.Round(transform.position.x) == Mathf.Round(endPosition.x))
        {
            if (Mathf.Round(transform.position.y) == Mathf.Round(endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                mainMenuLocation = 4;
                /*
                if (Time.time > nextUsage)
                {
                    transform.position = startPositio;
                  
                    nextUsage = Time.time + delay; //it is on display

                }
                */

            }

        }
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

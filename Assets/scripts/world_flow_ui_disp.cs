using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class world_flow_ui_disp : MonoBehaviour
{
    //12-7-2022: modification of the worldFlowTrack script built for the UI/preview
    public int world = 0;
    public int scene = 0;
    public string flow = "flow";
    public bool resetStage = false;
    TextAsset txt;
    private Camera cam;
    // Start is called before the first frame update
    void Start()
    {
        GameObject STD_BUTT = Instantiate(Resources.Load("scene_select_ui\\scene_button")) as GameObject;
        STD_BUTT.transform.parent = GameObject.Find("Canvas").transform;
        STD_BUTT.name = "STD_BUTT";
        STD_BUTT.transform.position = new Vector3(25000.0f, 10000.0f);
        Debug.Log("WH");
        LoadButtons();
        rt = GameObject.Find("Canvas").GetComponent<RectTransform>();
        DisplayWorldCorners();
    }
    RectTransform rt;
    void DisplayWorldCorners()
    {
        Vector3[] v = new Vector3[4];
        rt.GetWorldCorners(v);
        Vector3[] corners1 = new Vector3[4];
        rt.GetWorldCorners(corners1);
        Debug.Log("World Corners");
        for (var i = 0; i < 4; i++)
        {
            //  Debug.Log("World Corner " + i + " : " + v[i]+"PLAYING AROUND:"+ rt.transform.);
            Debug.Log(rt.InverseTransformPoint(transform.position));
        }






    }

    public Canvas CanvasUIElement;//Set in editor
 private float CanvasWidth;
 private float CanvasHeight;
    void LoadButtons()
    {
        GameObject mainCanvas = GameObject.Find("Canvas");
        float maxX = mainCanvas.GetComponent<RectTransform>().position.x + mainCanvas.GetComponent<RectTransform>().rect.xMax;
        float maxY = mainCanvas.GetComponent<RectTransform>().position.y + mainCanvas.GetComponent<RectTransform>().rect.yMax;
        float z = mainCanvas.GetComponent<RectTransform>().position.z;
        Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"+mainCanvas.GetComponent<RectTransform>().rect.xMax);
        Debug.Log("MINX" + maxX + " MAX2:" + maxY);
        //    Vector3 screenPos = Camera.main.WorldToScreenPoint(this.transform.position);
        Vector3 screenPos = Camera.main.ViewportToWorldPoint(this.transform.position);

        //  Camera camera = GetComponent<Camera>();
     //   Vector3 pe = camera.ViewportToWorldPoint(new Vector3(1, 1, camera.nearClipPlane));
        Camera camera = GetComponent<Camera>();
        Vector3 pe = camera.ViewportToScreenPoint(new Vector3(1, 1, camera.nearClipPlane));
        Debug.Log("TTTTTTTTTTTTTTTTTTT" + pe.x + "," + pe.y );
        // CanvasWidth = CanvasUIElement.GetComponent<RectTransform>().rect.width;
        //  CanvasHeight = CanvasUIElement.GetComponent<RectTransform>().rect.height;
        // var renderer2 = STD_BUTT.GetComponent<CanvasRenderer>()
       // var renderer2 = STD_BUTT.GetComponent<CanvasRenderer>();
      
        CanvasHeight = CanvasUIElement.GetComponent<RectTransform>().transform.position.y;
        Debug.LogFormat("Canvas width:{0} canvas height:{1} ", CanvasWidth, CanvasHeight);
        Vector2 screenPos2D_RIGHT_TOP = new Vector2(screenPos.x, screenPos.y);
        Vector2 screenPos2D_LEFT_TOP = new Vector2(-screenPos.x, screenPos.y);
        Vector2 screenPos2D_LEFT_BOT = new Vector2(-screenPos.x, -screenPos.y);
        Vector2 screenPos2D_RIGHT_BOT = new Vector2(screenPos.x, -screenPos.y);
        Debug.Log("qqqqqqqqqqqqqqqqqqqqq" + screenPos2D_RIGHT_TOP + screenPos2D_LEFT_TOP+ screenPos2D_LEFT_BOT+ screenPos2D_RIGHT_BOT);



        txt = (TextAsset)Resources.Load("scenes\\" + flow, typeof(TextAsset));



        // var renderer2 = STD_BUTT.GetComponent<CanvasRenderer>();
        // float width2 = renderer2.bounds.size.x;
        //     float hegth2 = renderer2.bounds.size.y;
       
        string[] blar = txt.text.Split('\n');
        Debug.Log("-----------WORLD LEVELS-------------------" + blar.Length);
        string[] bkg = blar[world].Split(';'); //0 is background 1 is the world content flow
        string[] scf = bkg[1].Split(',');
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right

        //calculate how this should fit on the screen
        float sx = (q.x - p.x);
        float sy = (p.y - q.y);
        Debug.Log("FFFFFFFFFFFFFFFFFFFFF" + sx + "SSSSSSSSSSSSSSSSSSSS" + sy);
        float diff1 = -50;
        float diff2 = -50;
        //the pointers
        float poin1 = 0; // screenPos2D_LEFT_TOP.x+0   //+1800
        float poin2 = 0; // screenPos2D_LEFT_TOP.y-0//-1200

        float anc1 =.20f; //x
        float anc2 = .92f; //y
        //deposit buttons on screen
        //sdf
        for (int w = 0; w < blar.Length; w++)
        {
            for (int l = 0; l < scf.Length; l++)
            {
                GameObject UI_Button_OBJ = Instantiate(Resources.Load("scene_select_ui\\scene_button")) as GameObject;
                UI_Button_OBJ.transform.parent = GameObject.Find("Canvas").transform;
                UI_Button_OBJ.name = (w+1) + "x" + (l+1);
                UI_Button_OBJ.GetComponentInChildren<Text>().text = (w+1) + "x" + (l+1)+"\nSCORE:" + GameObject.Find("sela").GetComponent<LevelHistory>().high_score[w + 1, l + 1];
                UI_Button_OBJ.GetComponentInChildren<Text>().fontSize = 100;
                if (GameObject.Find("sela").GetComponent<LevelHistory>().world>=w+1 && GameObject.Find("sela").GetComponent<LevelHistory>().scene>l) //6-15-2023 //if issue with unlock/progression, please consult
                {
                    UI_Button_OBJ.GetComponent<Button>().interactable = true;
                }
                else if (GameObject.Find("sela").GetComponent<LevelHistory>().world > w + 1) //2-12-2024: imabck. Fix level select nott following world pri scene load
                {
                    UI_Button_OBJ.GetComponent<Button>().interactable = true;
                }
                else
                {
                    UI_Button_OBJ.GetComponent<Button>().interactable = false;
                }
                UI_Button_OBJ.transform.localPosition = new Vector3(poin1, poin2);
                //  UI_Button_OBJ.GetComponent<RectTransform>().anchoredPosition = UI_Button_OBJ.transform.localPosition;
                UI_Button_OBJ.GetComponent<RectTransform>().anchorMax = new Vector2(anc1, anc2);
                UI_Button_OBJ.GetComponent<RectTransform>().anchorMin = new Vector2(anc1, anc2);
                UI_Button_OBJ.transform.SetAsFirstSibling();  // Element is displayed last.

                // UI_Button_OBJ.transform.localScale=
                poin1 = poin1 + diff1;
                anc1 = anc1 + .20f;
            }
            poin2 = poin2 - diff2;
            poin1 = 0;// screenPos2D_LEFT_TOP.x+0; //+1800
            anc1 = .20f;
            anc2 = anc2 - .12f;
        }
    Rect blarg=    RectTransformToScreenSpace(GameObject.Find("Canvas").GetComponent<RectTransform>(), Camera.main);
        Debug.Log("f" + blarg);
    }


    public static Rect RectTransformToScreenSpace(RectTransform transform, Camera cam, bool cutDecimals = false)
    {
        var worldCorners = new Vector3[4];
        var screenCorners = new Vector3[4];

        transform.GetWorldCorners(worldCorners);

        for (int i = 0; i < 4; i++)
        {
            screenCorners[i] = cam.WorldToScreenPoint(worldCorners[i]);
            if (cutDecimals)
            {
                screenCorners[i].x = (int)screenCorners[i].x;
                screenCorners[i].y = (int)screenCorners[i].y;
            }
        }
        Debug.Log("FFFFFFFFFFFFFFFFFFFFFF"+screenCorners[2].x +","+ screenCorners[2].y);
                      //  screenCorners[2].x - screenCorners[0].x,
                       // screenCorners[2].y - screenCorners[0].y));
        return new Rect(screenCorners[0].x,
                        screenCorners[0].y,
                        screenCorners[2].x - screenCorners[0].x,
                        screenCorners[2].y - screenCorners[0].y);
    }


    int lastScreenWidth = 0;
    int lastScreenHeight = 0;

    void Update()
    {
        if (lastScreenWidth != Screen.width || lastScreenHeight != Screen.height)
        {
            lastScreenWidth = Screen.width;
            lastScreenHeight = Screen.height;
        //    deleteAll(); //<--- create this function
        }
 
    }

    void deleteAll()
    {

        txt = (TextAsset)Resources.Load("scenes\\" + flow, typeof(TextAsset));

        string[] blar = txt.text.Split('\n');
      
        string[] bkg = blar[world].Split(';'); //0 is background 1 is the world content flow
        string[] scf = bkg[1].Split(',');


        for (int w = 0; w < blar.Length+1; w++)
        {
            for (int l = 0; l < scf.Length+1; l++)
            {
                Destroy(GameObject.Find(w + "x" + l));
          
            }
           
        }



       LoadButtons();
    }
}

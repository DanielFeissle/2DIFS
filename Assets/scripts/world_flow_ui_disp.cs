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
    }

    void LoadButtons()
    {
        GameObject mainCanvas = GameObject.Find("Canvas");
        float maxX = mainCanvas.GetComponent<RectTransform>().position.x + mainCanvas.GetComponent<RectTransform>().rect.xMax;
        float maxY = mainCanvas.GetComponent<RectTransform>().position.y + mainCanvas.GetComponent<RectTransform>().rect.yMax;
        float z = mainCanvas.GetComponent<RectTransform>().position.z;
        Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"+mainCanvas.GetComponent<RectTransform>().rect.xMax);
        Debug.Log("MINX" + maxX + " MAX2:" + maxY);

        Vector3 screenPos = Camera.main.WorldToScreenPoint(this.transform.position);
      
        Vector2 screenPos2D_RIGHT_TOP = new Vector2(screenPos.x, screenPos.y);
        Vector2 screenPos2D_LEFT_TOP = new Vector2(-screenPos.x, screenPos.y);
        Vector2 screenPos2D_LEFT_BOT = new Vector2(-screenPos.x, -screenPos.y);
        Vector2 screenPos2D_RIGHT_BOT = new Vector2(screenPos.x, -screenPos.y);
        Debug.Log("qqqqqqqqqqqqqqqqqqqqq" + screenPos2D_RIGHT_TOP + screenPos2D_LEFT_TOP+ screenPos2D_LEFT_BOT+ screenPos2D_RIGHT_BOT);



        txt = (TextAsset)Resources.Load("scenes\\" + flow, typeof(TextAsset));


        //   Rect rect = STD_BUTT.GetComponent<Rect>();

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
        float diff1 = 150;
        float diff2 = 75;
        //the pointers
        float poin1 = screenPos2D_LEFT_TOP.x+50;
        float poin2 = screenPos2D_LEFT_TOP.y-180;
        //deposit buttons on screen
        //sdf
        for (int w = 0; w < blar.Length; w++)
        {
            for (int l = 0; l < scf.Length; l++)
            {
                GameObject UI_Button_OBJ = Instantiate(Resources.Load("scene_select_ui\\scene_button")) as GameObject;
                UI_Button_OBJ.transform.parent = GameObject.Find("Canvas").transform;
                UI_Button_OBJ.name = (w+1) + "x" + (l+1);
                UI_Button_OBJ.GetComponentInChildren<Text>().text = (w+1) + "x" + (l+1);
                UI_Button_OBJ.transform.localPosition = new Vector3(poin1, poin2);
               // UI_Button_OBJ.transform.localScale=
                poin1 = poin1 + diff1;
            }
            poin2 = poin2 - diff2;
            poin1 = screenPos2D_LEFT_TOP.x+50;
        }

    }

    int lastScreenWidth = 0;
    int lastScreenHeight = 0;

    void Update()
    {
        if (lastScreenWidth != Screen.width || lastScreenHeight != Screen.height)
        {
            lastScreenWidth = Screen.width;
            lastScreenHeight = Screen.height;
            deleteAll(); //<--- create this function
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class menu_runtime : MonoBehaviour
{
    public int btn_pauser = -1;
    public int specButtonStat = -1;
    public GameObject ListnerAndRuntimeOBJ;
    public GameObject playerOBJ;
    int buttonVal = -1;
    // Start is called before the first frame update
    void Start()
    {
        btn_pauser = -1;
        if (ListnerAndRuntimeOBJ==null)
        {
            Debug.Log("NULL VALUE, LOADING");
            ListnerAndRuntimeOBJ = this.gameObject;
        }

    }
    //12-8-2021
    //For this to work there are two gameobjects 
    //ListnerAndRuntimeOBJ - this can either be set ahead of time or picked up on the spot
    // This gameobject needs to have menu_runtime and the realGenericButtonListner script attached!
    //playerOBJ - Connect this to the player prefab
    //specButtonStat is a custom value- currently designed to be used to tell the player to sodoff and not allow any input or rotation

    // Update is called once per frame
    void Update()
    {

        //   Debug.Log("VALUE IS " + this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen);
       int fff= GameObject.Find(ListnerAndRuntimeOBJ.name).GetComponent<realGenericButtonListner>().buttonScreeen;
    //    Debug.Log("WHAT IS " + fff);
        if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen != 0)
        {

            if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 1)
            {
                btn_pauser = 2;
            }
            else if (this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen == 2)
            {
                btn_pauser = 1;
                //3-31-2022 This will exit or return to the main menu
                //TODO- add check to see if there is a stage in the flow or not. If not then exit the game
                EndGame();
            }
            Debug.Log("HI THERE");
           this.gameObject.GetComponent<realGenericButtonListner>().buttonScreeen = 0;
        }


        GameObject curPlay = GameObject.Find(playerOBJ.name);
        Transform lard = curPlay.GetComponent<Transform>();
        mplane_controller FFF = curPlay.GetComponent<mplane_controller>();


        //Handling the pause effects 8-25-19
        //thanks ss2 for doing the groundwork/research, but this time we will have a more extensive menu system
        if (SceneManager.GetActiveScene().name.Contains("Sample"))
        {
            if (GameObject.Find("btn_Resume")) //if it exists
            {
             //   buttonVal= GameObject.Find("btn_Resume").GetComponent<GenericButtonController>().buttonVal;
             //   buttonVal = GameObject.Find("btn_Quit").GetComponent<GenericButtonController>().buttonVal;
          //      Debug.Log("YOUR BUTTON VALUE IS " + buttonVal);
            }

                if ((btn_pauser == 1 || Input.GetButtonUp("Fire2")) && Time.timeScale != 0 && FFF.pdead == false) //StartButton , not paused and not dead
            {
                btn_pauser = -1;
                specButtonStat = 1;
                GameObject getCand = GameObject.Find("Canvas");
                // GameObject getEvent = GameObject.Find("EventSystem");

                GameObject btn_quiter = Instantiate(Resources.Load("menu\\pause\\btn_Quit")) as GameObject;
                // btn_quiter.transform.parent = getCand.transform; //this sets the prefab to the canvas, which will control the location
                btn_quiter.name = "btn_Quit";
                btn_quiter.transform.SetParent(getCand.transform, false);
                btn_quiter.transform.localPosition = new Vector2(50, -75.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                EventSystem.current.firstSelectedGameObject = btn_quiter;

                GameObject btn_Resume = Instantiate(Resources.Load("menu\\pause\\btn_Resume")) as GameObject;
                btn_Resume.name = "btn_Resume";
                btn_Resume.transform.SetParent(getCand.transform, false);
                btn_Resume.transform.localPosition = new Vector2(50, 0.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location
                EventSystem.current.SetSelectedGameObject(btn_Resume.gameObject); // Highlight the button

                GameObject txt_Pause = Instantiate(Resources.Load("menu\\pause\\txt_PAUSED")) as GameObject;
                txt_Pause.name = "txt_Pause";
                txt_Pause.transform.SetParent(getCand.transform, false);
                txt_Pause.transform.localPosition = new Vector2(50, 75.0f); ////this sets the prefab to the canvas (this is for menu objects), which will control the location

                GameObject ddd = GameObject.Find("shipBlast");
                /*  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f));
                  AudioSource.PlayClipAtPoint(beep, new Vector3(0.0f, 0.0f, 0.0f)); */
             //   AudioSource blaster = ddd.GetComponent<AudioSource>();
            //    blaster.volume = 0.0f;
                Time.timeScale = 0;
            }
            else if ((btn_pauser == 2 || Input.GetButtonUp("Fire2")) && Time.timeScale != 1 && FFF.pdead ==false) //StartButton ,  paused and not dead
            {
                btn_pauser = -1;
                DestroyPauseMenuObj();
                specButtonStat = -1;
                Time.timeScale = 1;
            }
        }
    }

    public void EndGame()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
         Application.Quit();
#endif
    }

    void DestroyPauseMenuObj()
    {
        //create a destroy method
        GameObject btn_quit = GameObject.Find("btn_Quit");
        Destroy(btn_quit);
        GameObject btn_Resume = GameObject.Find("btn_Resume");
        Destroy(btn_Resume);
        GameObject txt_Pause = GameObject.Find("txt_Pause");
        Destroy(txt_Pause);
    }
}

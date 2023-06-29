using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class btn_onhover_select : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    //6-27-2023
    //general script for buttons to follow mouse cursor
    //Detect if the Cursor starts to pass over the GameObject
    public void OnPointerEnter(PointerEventData pointerEventData)
    {
        //Output to console the GameObject's name and the following message
        Debug.Log("Cursor Entering " + name + " GameObject");
       // EventSystem.current.firstSelectedGameObject = this.gameObject;
        EventSystem.current.SetSelectedGameObject(this.gameObject);
    }

    //Detect when Cursor leaves the GameObject
    public void OnPointerExit(PointerEventData pointerEventData)
    {
        //Output the following message with the GameObject's name
  //      Debug.Log("Cursor Exiting " + name + " GameObject");
    }
}

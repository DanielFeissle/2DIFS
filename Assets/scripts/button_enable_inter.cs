using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
[RequireComponent(typeof(Button))]
//11-22-2023
//https://forum.unity.com/threads/how-do-i-detect-when-a-button-is-being-pressed-held-on-eventtype.352368/

public class button_enable_inter : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    [Range(1.0f, 10.0f)]
    public float seconds = 5.0f;
    public UnityEvent onPressedOverSeconds;


    public void OnPointerDown(PointerEventData eventData)
    {

        StartCoroutine(TrackTimePressed());
    }

    public void OnPointerUp(PointerEventData eventData)
    {

        StopAllCoroutines();
    }

    private IEnumerator TrackTimePressed()
    {
        float time = 0;


        while (time < this.seconds)
        {
            time += Time.deltaTime;
            yield return null;
        }
        Debug.Log("The time held is " + time);
        var names = FindObjectsOfType<Button>().Select(b => b.name);
        foreach (var v in names)
        {
            Debug.Log("LIST OF BUTTONS " + v);
            GameObject.Find(v).GetComponent<Button>().interactable = true;
        }
        onPressedOverSeconds.Invoke();
    }

    private void Start()
    {

       
    }




}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class general_ui_obj_move : MonoBehaviour
{
    // Start is called before the first frame update
    public Vector3 Origin;
    public Vector3 Destination;
    void Start()
    {
        StartCoroutine(moveObject());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public IEnumerator moveObject()
    {
        float totalMovementTime = 25f; //the amount of time you want the movement to take
        float currentMovementTime = 0f;//The amount of time that has passed
        while (Vector3.Distance(transform.localPosition, Destination) > 0)
        {
            currentMovementTime += Time.deltaTime;
            transform.localPosition = Vector3.Lerp(Origin, Destination, currentMovementTime / totalMovementTime);
            yield return null;
        }
    }

}

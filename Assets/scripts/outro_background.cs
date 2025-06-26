using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class outro_background : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public Transform player; // Reference to the player's transform
    public Camera mainCamera; // Reference to the main camera
     float minHeight = -3.5f; // Minimum height for color change
     float maxHeight = 5f; // Maximum height for color change
     Color lowColor = Color.black; // Color at minimum height
     Color highColor = Color.white; // Color at maximum height
    float curMaxHeight = -5.5f;
    // Update is called once per frame
    void Update()
    {
       
        if (player != null && mainCamera != null)
        {
            if (player.position.y>curMaxHeight)
            {
                curMaxHeight = player.position.y;
                // Clamp the player's height between minHeight and maxHeight
                float clampedHeight = Mathf.Clamp(player.position.y, minHeight, maxHeight);

                // Normalize the height to a 0-1 range
                float t = (clampedHeight - minHeight) / (maxHeight - minHeight);

                // Lerp between the lowColor and highColor based on the normalized height
                mainCamera.backgroundColor = Color.Lerp(lowColor, highColor, t);
            }

        }
    }
}

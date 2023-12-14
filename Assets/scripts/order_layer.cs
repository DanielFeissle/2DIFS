using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class order_layer : MonoBehaviour
{
    //ret12-14-2023
    //https://forum.unity.com/threads/3d-object-mesh-behind-a-sprite-sorting-layer.453692/
    public string sortingLayerName = string.Empty; //initialization before the methods
    public int orderInLayer = 0;
    public Renderer MyRenderer;
    // Start is called before the first frame update
    void Start()
    {
        SetSortingLayer();
    }
    void SetSortingLayer()
    {
        if (sortingLayerName != string.Empty)
        {
            MyRenderer.sortingLayerName = sortingLayerName;
            MyRenderer.sortingOrder = orderInLayer;
        }
    }


}

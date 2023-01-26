using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Example : MonoBehaviour
{
    [SerializeField] [TextArea] private string _exampleString="BLARG";
    // You can also directly configure the min and max line count here as well
    // By default it is 3 lines
    [TextArea(3, 7)] public string AnotherExampleString;
}

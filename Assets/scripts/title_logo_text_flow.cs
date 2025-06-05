using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class title_logo_text_flow : MonoBehaviour
{

    public Text uiText; // Assign your UI Text component in the Inspector
    public string starterText = "NARFS";
    public string fullText = "t e s t s a m p l e"; // The full text to cycle through
    public float cycleDelay = 5f; // Delay between word changes in seconds
    public float starterCycleDelay = 10f;


    private string[] words; // Array to hold the split words
    private int currentWordIndex = 0; // Index of the current word being displayed
    private float timer = 0f; // Timer to track delay
    private float startTimer = 0f;
    private bool starterReturn = false;
    private void OnEnable()
    {

        uiText.text = starterText;
        if (currentWordIndex>0)
        {
            currentWordIndex = -1;

        }
        
        startTimer = 0f;
        timer = 0f;
    }
    // Start is called before the first frame update
    void Start()
    {
        // Split the full text into words using spaces
        words = fullText.Split(' ');

        // Initialize the UI Text with the first word
        if (words.Length > 0)
        {
            uiText.text = words[currentWordIndex];
        }
        currentWordIndex = -1;
}
    private void OnDisable()
    {
        uiText.text = starterText;
    }
    // Update is called once per frame
    void Update()
    {
       
        if (startTimer<=starterCycleDelay)
        {
            startTimer += Time.deltaTime;
            uiText.text = starterText;
            timer = 0f;
            starterReturn = false;
            currentWordIndex = -1;
        } else
        {

            // Increment the timer
            timer += Time.deltaTime;


            // Check if it's time to cycle to the next word
            if (timer >= cycleDelay)
            {
                if (starterReturn==true)
                {
                    uiText.text = starterText;
                    startTimer = 0f;
                }    
                // Reset the timer
                timer = 0f;

                // Move to the next word
                currentWordIndex = (currentWordIndex + 1) % words.Length;

                // Update the UI Text
                uiText.text = words[currentWordIndex];

                if (currentWordIndex>= words.Length-1)
                {
                    starterReturn = true;
                }
            }
        }


    }
}

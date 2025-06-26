using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class outro_player : MonoBehaviour
{
    public string resourcePath = "ground";
    private GameObject[] resourceObjects;
    private GameObject currentInstance;
    public Canvas canvas; // Assign your Canvas in the Inspector

    private bool isFlipped = false;
    public Animator ani;

    bool begin_resource_list = false;
    bool triggered_extra = false;
    // Start is called before the first frame update
    void Start()
    {
        Object[] loadedObjects = Resources.LoadAll(resourcePath, typeof(GameObject));
        resourceObjects = new GameObject[loadedObjects.Length];
        for (int i = 0; i < loadedObjects.Length; i++)
        {
            resourceObjects[i] = (GameObject)loadedObjects[i];
        }

        

        ani = this.GetComponent<Animator>();
    }
    void CreateText(string content, Vector2 position, int fontSize, Color color)
    {
        // Create a new GameObject
        GameObject textObject = new GameObject("DynamicText");

        // Set the parent to the Canvas
        textObject.transform.SetParent(canvas.transform, false);

        // Add a Text component
        Text textComponent = textObject.AddComponent<Text>();

        // Configure the Text component
        textComponent.text = content;
        textComponent.font = Resources.GetBuiltinResource<Font>("Arial.ttf"); // Default Unity font
        textComponent.fontSize = fontSize;
        textComponent.color = color;
        textComponent.alignment = TextAnchor.MiddleCenter;

        // Set the RectTransform properties
        RectTransform rectTransform = textObject.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = position;
        rectTransform.sizeDelta = new Vector2(500, 500); // Width and height of the text block

        Destroy(textObject, 1f);
    }

    public RectTransform imageTransform;
    public float speed = 100f;

    // Update is called once per frame
    void Update()
    {

        if (Input.GetButtonUp("Fire2"))
        {
            SceneManager.LoadScene("title_scene");
        }

        if (imageTransform != null)
        {
            imageTransform.anchoredPosition += new Vector2(0, speed * Time.deltaTime);
        }

        if (imageTransform.transform.position.y>-1000)
        {
            //exit
            if (begin_resource_list==false)
            {
                SceneManager.LoadScene("title_scene");
            }
            else if (triggered_extra==false)
            {
                triggered_extra = true;
                StartCoroutine(CycleResources());
            }
        }


    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.name == "nav_outro_start")
        {
            GameObject.Destroy(GameObject.Find("nnav_outro_start"));
            GameObject.Destroy(GameObject.Find("txt_ui_start"));
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {

        if (collision.name== "nav_outro_end")
        {
            begin_resource_list = true;
            
            GameObject.Destroy(GameObject.Find("nav_outro_end"));
            FlipX();
            ani.SetBool("IS_BREATH_LONG", true);
            ani.Play("sat");
            this.GetComponent<player_ground_control>().enabled = false;
            this.GetComponent<Rigidbody2D>().bodyType= RigidbodyType2D.Static;
        }
    }



    public void FlipX()
    {
        Vector3 scale = transform.localScale;
        scale.x *= -1; // Invert the X scale
        transform.localScale = scale;

        isFlipped = !isFlipped; // Toggle the flipped state
    }





    IEnumerator CycleResources()
    {
        int index = 0;

        while (true)
        {
            // Destroy the previous instance
            if (currentInstance != null)
                Destroy(currentInstance);

            // Instantiate the next object
            if (resourceObjects.Length > 0)
                currentInstance = Instantiate(resourceObjects[index], Vector3.zero, Quaternion.identity);
            CreateText("Object \n"+currentInstance.name, new Vector2(0, 375), 48, Color.blue);

            // Remove all scripts (MonoBehaviours) from the instantiated object
            MonoBehaviour[] scripts = currentInstance.GetComponentsInChildren<MonoBehaviour>(true);
            foreach (MonoBehaviour script in scripts)
            {
                Destroy(script);
            }

            // Wait for 1 second
            yield return new WaitForSeconds(1f);
            if (index >= resourceObjects.Length - 1)
            {
                Destroy(currentInstance);
                SceneManager.LoadScene("title_scene");
                break;
            }
            Debug.Log("CURRENT INDEX" + index + " RESOURCE LIST " + resourceObjects.Length);
            // Move to next index
            index = (index + 1) % resourceObjects.Length;


        }
    }
}

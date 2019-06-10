using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalController : MonoBehaviour
{
    GameManager gameManager;
    public string scenename = "";
    public bool PressYes;

    private bool enteredTrigger, poppedUp;
	// Use this for initialization
	void Start ()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (enteredTrigger && poppedUp == false && Input.GetKey(KeyCode.W))
        {
            gameManager.ChangeScene(scenename);
        }
    }

    void OnTriggerEnter2D(Collider2D col)
    {
        enteredTrigger = true;
        Debug.Log("ENTERD");

        if (PressYes)
        {
            gameObject.GetComponent<PressSomethingController>().PlayUp();
        }
    }

    void OnTriggerExit2D(Collider2D col)
    {
        enteredTrigger = false;

        if (PressYes)
        {
            gameObject.GetComponent<PressSomethingController>().PlayDown();
        }
    }
}

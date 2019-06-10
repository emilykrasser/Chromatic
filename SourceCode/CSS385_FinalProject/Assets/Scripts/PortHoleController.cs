using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortHoleController : MonoBehaviour {
    public int toIndex;
    public bool PressYes;

    private GameObject portHoles, player, mainCamera;
    public Transform toPortHole;
    public bool enteredTrigger, passethrough;
    
    // Use this for initialization
	void Start () {
        portHoles = GameObject.Find("PortHoles");
        toPortHole = portHoles.transform.GetChild(toIndex);

        player = GameObject.FindGameObjectWithTag("Player");
        mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
	}
	
	// Update is called once per frame
	void Update ()
    {
		if (enteredTrigger && Input.GetKeyDown(KeyCode.W))
        {
            player.transform.position = toPortHole.position;
            mainCamera.transform.position = player.transform.GetChild(2).transform.position;

            if (PressYes)
            {
                gameObject.GetComponent<PressSomethingController>().DisableAnimAndSprite();
                PressYes = false;
            }
        }
	}

    protected void OnTriggerEnter2D(Collider2D col)
    {
        enteredTrigger = true;

        if (PressYes)
        {
            gameObject.GetComponent<PressSomethingController>().PlayUp();
        }
    }

    protected void OnTriggerExit2D(Collider2D col)
    {
        enteredTrigger = false;

        if (PressYes)
        {
            gameObject.GetComponent<PressSomethingController>().PlayDown();
        }
    }

    IEnumerator CheckHold()
    {
        yield return new WaitForSeconds(0.001f);
    }
}

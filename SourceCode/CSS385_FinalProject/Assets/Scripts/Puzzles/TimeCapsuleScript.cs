using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeCapsuleScript : MonoBehaviour {

    public InputField inputField;
    public GameManager gameManager;
    public string nPCName;
    public bool finishedPuzzle;
    public bool puzzleSolved {get {return finishedPuzzle;}}

	// Use this for initialization
	void Start () {
        nPCName = "DragonLady";

        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        inputField = GameObject.Find("InputField").GetComponent<InputField>();
        var s = new InputField.SubmitEvent();
        s.AddListener(SubmitPasscode);
        inputField.onEndEdit = s;
        finishedPuzzle = false;
	}

    //Public function so DragonLady can start the TimeCapsule puzzle.
    public void ToggleTimeCapsulePuzzle(bool OnOrOff) {
        if(!OnOrOff) {
            //If turning off puzzle, then set controls to be false;
            Debug.Log("Turning puzzle " + OnOrOff);
            gameManager.EnableControlls(true);
        }
        //gameObject.SetActive(OnOrOff);
    }
	
	// Update is called once per frame
	void Update () {
        //Try to solve the puzzle!

  //      //If closing or finishing the puzzle
		//if(finishedPuzzle)
  //      {
  //          //ToggleTimeCapsulePuzzle(false);
  //          if(finishedPuzzle)
  //          {
  //              //When the puzzle is finished, do extra things in here like enableBlue or a cutscene.
  //              gameManager.EnableBlue();
  //          }
  //      }
	}

    public void SubmitPasscode (string arg0)
    {
        if (arg0 == "0385")
        {
            GameObject nPC = GameObject.Find(nPCName);
            //nPC.GetComponent<NPCController>().MoveToNextInteraction();
            nPC.GetComponent<NPCController>().SetNextInteraction(4);
            GameObject.Find("Zalgo").GetComponent<NPCController>().SetNextInteraction(4);

            gameManager.ActivateTimeCapsulePanel(false);
            nPC.GetComponent<NPCController>().InititateInteraction();
        }
        else
        {
            inputField.text = "";
        }
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NPCController : MonoBehaviour
{
    protected GameManager gameManager;

    public string nPCName = "Oli";

    public Image nPCImage;

    public NPCLines nPCLines;

    public bool enteredTrigger, poppedUp, PressYes;

    // Bools to determine what lines of text for the NPC are to be displayed
    // Default lines are those that follow the first interaction after an event. 
    // Once the character comes back to the NPC after that, they just resay the 
    // default lines. 
    public bool defaultLines, moveToNextInteraction;
    public string popupMessage;

    protected void Awake()
    {
        nPCLines = gameObject.GetComponent<NPCLines>();

        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        enteredTrigger = false;
        poppedUp = false;
    }

    // Use this for initialization
    protected void Start()
    {

    }

    // Update is called once per frame
    protected void Update()
    {
        if (moveToNextInteraction)
        {
            if (defaultLines)
            {
                nPCLines.IncrementInteraction();
            }
            else
            {
                nPCLines.IncrementInteraction();
                nPCLines.IncrementInteraction();
            }

            defaultLines = false;
            moveToNextInteraction = false;
        }

        // If player initiates interaction
        if (enteredTrigger && !poppedUp && Input.GetKeyUp(KeyCode.E))
        {
            // Bring up text box
            gameManager.SetNPCImage(nPCName);
            gameManager.SetNPCInteractPopUpText(nPCLines.GetCurrentLine());
            gameManager.AcivateNPCInteractionPanel(true);
            gameManager.EnableControlls(false);
            gameManager.StartNPCInteractEffect();

            poppedUp = true;
        }
        else if (poppedUp && Input.GetKeyUp(KeyCode.E) && !gameManager.CheckNPCInteractEffect())
        {  // If the player presses 'E' again, it completes the text in the text box
            gameManager.StopNPCInteractEffect();
            gameManager.SetNPCInteractPopUpText(nPCLines.GetCurrentLine());
        }
        else if (poppedUp && Input.GetKeyUp(KeyCode.E) && gameManager.CheckNPCInteractEffect())
        {  // If the player presses 'E' again, it switches to the next text block or ends the NPC interaction
            if (nPCLines.AnotherLine())
            {
                gameManager.SetNPCInteractPopUpText(nPCLines.GetAndSetNextLine());
                gameManager.StartNPCInteractEffect();
            }
            else
            {
                // If finished non default interaction, set default interaction to the next one.
                if (!defaultLines)
                {
                    defaultLines = true;
                    nPCLines.IncrementInteraction();
                }

                gameManager.AcivateNPCInteractionPanel(false);
                poppedUp = false;
                gameManager.EnableControlls(true);
                nPCLines.ResetLine();
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

    public void MoveToNextInteraction()
    {
        moveToNextInteraction = true;
    }

    public void SetNextInteraction(int i)
    {
        nPCLines.interaction = i;
        defaultLines = false;
    }

    public void InititateInteraction()
    {
        // Bring up text box
        gameManager.SetNPCImage(nPCName);
        gameManager.SetNPCInteractPopUpText(nPCLines.GetCurrentLine());
        gameManager.AcivateNPCInteractionPanel(true);
        gameManager.EnableControlls(false);
        gameManager.StartNPCInteractEffect();

        poppedUp = true;
    }
}

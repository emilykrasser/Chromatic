using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
    public class ØyvindController : NPCController
    {

        // Use this for initialization
        void Start () {
            
        }
        
        // Update is called once per frame
        void Update () {
            //Dialogue movement script
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

            if (!gameManager.inventory.catLeftToFind)
            {
                nPCLines.interaction = 2;
                gameManager.inventory.catLeftToFind = true;
                GameObject.Find("Zalgo").GetComponent<NPCController>().SetNextInteraction(2);
            }

            // If player initiates interaction
            if (enteredTrigger && poppedUp == false && Input.GetKeyUp(KeyCode.E))
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

                    if (nPCLines.GetInteractionNum() >= 2)
                    {
                        gameManager.EnableYellow();
                        GameObject.Find("Zalgo").GetComponent<NPCController>().SetNextInteraction(4);
                    }
                }
            }
        }
    }
}
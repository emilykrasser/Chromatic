using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
    public class VoidController : NPCController {
        // Update is called once per frame
        void Update ()
        {
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
                    gameManager.AcivateNPCInteractionPanel(false);
                    poppedUp = false;
                    gameManager.EnableControlls(true);

                    // Disable the script so you cannot talk to him anymore
                    gameManager.EnableGray();
                    this.enabled = false;
                }
            }
        }
    }
}
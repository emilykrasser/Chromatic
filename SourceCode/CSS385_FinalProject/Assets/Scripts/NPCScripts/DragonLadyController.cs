using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
    public class DragonLadyController : NPCController {
        
        public GameObject timeCapsulePuzzle;
        private TimeCapsuleScript timeCapsuleScript;

        private void Start() {
            //Try to manually find the TimeCapsuleObject instead of passing it in.
            timeCapsulePuzzle = GameObject.Find("TimeCapsuleInteractionPanel");
            timeCapsuleScript = timeCapsulePuzzle.GetComponent<TimeCapsuleScript>();
            timeCapsuleScript.ToggleTimeCapsulePuzzle(false);
        }
        // Update is called once per frame
        void Update () {
            if(Input.GetKeyDown(KeyCode.X)) {
                gameManager.EnableControlls(true);
                //timeCapsuleScript.ToggleTimeCapsulePuzzle(false);
                timeCapsulePuzzle.SetActive(false);
                poppedUp = false;
            }

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

                    if ((nPCLines.GetInteractionNum() == 3))
                    {
                        gameManager.ActivateTimeCapsulePanel(true);
                        gameManager.EnableControlls(false);
                        poppedUp = true;
                    }

                    if (nPCLines.GetInteractionNum() == 4 || nPCLines.GetInteractionNum() == 5)
                    {
                        gameManager.EnableBlue();
                    }
                }
            }
            
            // //Check if conditions to play Time Capsule Puzzle is correct
            // if(poppedUp && nPCLines.GetInteractionNum() == 1 && ) {
            //     poppedUp = false;
            //     gameManager.EnableControlls(false);
            //     //timeCapsuleScript.ToggleTimeCapsulePuzzle(true);
            //     timeCapsulePuzzle.SetActive(true);
            // }
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Chromatic {
    public class InteractableObject : MonoBehaviour
    {
        //The Main GameManager
        protected GameManager gameManager;
        //A reference to the inventory object within GameManager
        protected Inventory inventory;

        //A bool to track if player is in trigger.
        public bool enteredTrigger;
        //A bool to track if
        public bool poppedUp, PressYes;
        public string popupMessage;

        private void Awake()
        {
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
            inventory = gameManager.GetComponent<Inventory>();

            enteredTrigger = false;
            poppedUp = false;
            if(popupMessage.Equals("") || popupMessage == null) 
            {
                popupMessage = "Interactable Object String is Null";
            }
        }

        /* Method:  OnTriggerEnter2D()
            Params:  Collider2D col
            Desc..:  Sets entered trigger to be true.
        */
        protected void OnTriggerEnter2D(Collider2D col)
        {   //Check if Player has entered bounds of object, and set trigger to be true
            if(col.gameObject.tag == "Player") 
            {
                enteredTrigger = true;
            }

            if (PressYes)
            {
                gameObject.GetComponent<PressSomethingController>().PlayUp();
            }
        }

        /* Method:  OnTriggerExit2D()
            Params:  Collider2D col
            Desc..:  Sets entered trigger to be false.
        */
        protected void OnTriggerExit2D(Collider2D col)
        {   //Player has exited bounds of the object
            if(col.gameObject.tag == "Player") 
            {
                enteredTrigger = false;
            }

            if (PressYes)
            {
                gameObject.GetComponent<PressSomethingController>().PlayDown();
            }
        }
        
        // Update is called once per frame
        protected void Update ()
        {
            if (enteredTrigger && !poppedUp && Input.GetKey(KeyCode.E))
            {
                PickUpObject();
                poppedUp = true;
            }
            else if (poppedUp && Input.GetKeyDown(KeyCode.E))
            {
                gameManager.AcivateObjectInteractionPanel(false);

                gameManager.objectInteractionVisible = false;
                gameManager.EnableControlls(true);

                poppedUp = false;
            }
        }

        protected void ShowPickUpText()
        {   //Set Panel text, change to active, and wait for a bit.
            gameManager.SetObjectInteractPopUpText(popupMessage);
            gameManager.AcivateObjectInteractionPanel(true);
            gameManager.EnableControlls(false);

            gameManager.objectInteractionVisible = true;

            //StartCoroutine(WaitForPopup());
        }

        protected bool PickUpObject() 
        {
            //Show Pickup Text
            //ShowPickUpText();

            //Add Item to inventory
            inventory.addToInventory(gameObject);

            //Set gameObject to inactive
            //gameObject.SetActive(false);
            return true;
        }

        protected IEnumerator WaitForPopup()
        {
            Debug.Log("Entered WaitForPopUp coroutine");
            // suspend execution for 3 seconds
            yield return new WaitForSeconds(1);
            Debug.Log("Debug past: yield return new WaitForSeconds(1);");
            gameManager.AcivateObjectInteractionPanel(false);

            gameManager.objectInteractionVisible = false;
            gameManager.EnableControlls(true);
        }
    }
}
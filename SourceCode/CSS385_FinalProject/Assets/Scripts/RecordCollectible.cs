using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
	public class RecordCollectible : MonoBehaviour {
        //-----------
        //A bool to track if player is in trigger.
        public bool inTrigger;
        private Collider2D playerCollider;
        public GameObject completedRecord;

        //-------Variables for floating up and down----------------------------
        //A bool to keep track if item is active and hasn't been picked up.
        public bool isActive;
        private Transform transform;
        //The speed to make the item float up or down..
        public float displacement = 0.02f;
        public float upperLimit;
        public float lowerLimit;

        private void Start() {
            isActive = true;
            inTrigger = false;
            transform = gameObject.GetComponent<Transform>();
            upperLimit = transform.position.y + upperLimit;
            lowerLimit = transform.position.y - lowerLimit;
        }

        /* Method:  OnTriggerEnter2D()
           Params:  Collider2D other
           Desc..:  A fucntion that stores some values if the player enters the 
                    trigger for the record.
        */
        private void OnTriggerEnter2D(Collider2D other) {
            //Player has entered bounds of the record, so we should store their collider
            if(other.gameObject.tag == "Player") {
                inTrigger = true;
                playerCollider = other;
            }
        }

        /* Method:  OnTriggerExit2D()
           Params:  Collider2D other
           Desc..:  Empties stored values in record object.
        */
        private void OnTriggerExit2D(Collider2D other) {
            //Player has exited bounds of the record, so we should no longer 
            //have access to their collider
            if(other.gameObject.tag == "Player") {
                inTrigger = false;
                playerCollider = null;
            }
        }
    
        /* Method:  Update()
           Params:  None
           Desc..:  Floats record object up and down, and picks it up if the 
                    player presses 'E'.
        */
        private void Update() {
            //If gameObject is active, make it float up and down
            if(isActive) {
                float currY = transform.position.y;
                transform.position += new Vector3(0.0f, displacement, 0);
                if(currY <= lowerLimit && displacement < 0) {
                    displacement = -displacement;
                }
                if(currY >= upperLimit && displacement > 0) {
                    displacement = -displacement;
                }
            }

            //If player is inside and has pressed 'E', add item to inv!
            if(inTrigger && Input.GetKeyDown(KeyCode.E)) {
                collectRecord();
            }
        }

        /* Method:  collectRecord()
           Params:  None
           Desc..:  Private function that adds record object to player's inventory, and deactivates record object.
        */
        private void collectRecord() {
            //Used the stored player collider to access it's inventory
            Inventory inv = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();

            if(inv != null) {
                inv.addToInventory(gameObject);
                isActive = false;
                gameObject.SetActive(false);

                if(inv.recordPieces == 0) {
                    //addCompletedRecord(inv);
                    GameManager gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
                    //gameManager.EnableRed();
                }
            }
        }

        private void addCompletedRecord(PlayerController controller) {
            controller.inv.removeByTagFromInventory("Record");
            controller.inv.addToInventory(completedRecord);
        }
	}
}
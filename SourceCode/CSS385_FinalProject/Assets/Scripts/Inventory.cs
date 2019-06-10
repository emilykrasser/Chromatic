using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
	public class Inventory : MonoBehaviour {
        //The actual list to contain the items
        private List<GameObject> itemList;
        public GameManager gameManager;
        //The instance to give the user if they need the inventory.
        private static Inventory Instance;

        private bool poppedUp;

        //-------------Count for puzzle objects-----------------------
        //The countdown for how many record pieces we have left to collect
        public int recordPiecesLeft; 
        public int recordPieces {get { return recordPiecesLeft;}}
        //The countdown for how many key pieces we have left to collect
        private int tilePiecesLeft;
        public int tilePieces {get { return tilePiecesLeft;}}

        public bool catLeftToFind;
        public bool cat { get { return catLeftToFind; } }

        /* Method:  getInstance()
           Params:  None
           Desc..:  A public static getter for the inventory.
        */
        public static Inventory getInstance() {
            if(Instance == null) {
                Instance = new Inventory();
            }
            return Instance;
        }

        /* Method:  PRIVATE CONSTRUCTOR
           Params:  None
           Desc..:  Creates an Inventory.
        */
        private void Start() {
            itemList = new List<GameObject>();
            Instance = this;
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

            //Puzzle Item Counter
            recordPiecesLeft = 4;
            tilePiecesLeft = 1;
            catLeftToFind = true;
        }

        /* Method:  addToInventory()
           Params:  GameObject item
           Desc..:  Adds item to the inventory, and prints out a debug message 
                    informing the user "Acquired [item]!".
        */
        public bool addToInventory(GameObject item) {
            //Check if null and throw error
            if(item == null) {
                Debug.Log("Could not add item because it is a NULL object.");
                return false;
            }

            //Update counters
            if(item.tag == "Record")
            {
                recordPiecesLeft--;
            }
            else if(item.tag == "Tile")
            {
                tilePiecesLeft--;
            }
            else if (item.tag == "Cat")
            {
                catLeftToFind = false;
            }

            //Add item
            itemList.Add(item);
            ShowPopUpMessage(item.GetComponent<InteractableObject>().popupMessage);
            
            return true;
        }

        private void ShowPopUpMessage(string popupMessage) {
            gameManager.SetObjectInteractPopUpText(popupMessage);
            gameManager.AcivateObjectInteractionPanel(true);
            gameManager.EnableControlls(false);

            gameManager.objectInteractionVisible = true;

            //StartCoroutine(WaitForPopup());

            poppedUp = true;
        }

        /* Method:  removeByNameFromInventory()
           Params:  string itemName
           Desc..:  Removes an item from the Inventory if it has the same name as the string passed in.
        */
        public bool removeByNameFromInventory(string itemName) {
            //NOTE TO SELF: Implement this with a while loop to make it look nicer and function better.
            //Traverse the inventory to find item name
            int removeIndex = -1;
            for(int i = 0; i < itemList.Count; i++) {
                if(itemList[i].name.Equals(itemName)) {
                    removeIndex = i;
                }
            }
            if(removeIndex != -1) {
                itemList.RemoveAt(removeIndex);
                return true;
            } else {
                return false;
            }
            
        }

        /* Method:  removeByTagFromInventory()
           Params:  string tagName
           Desc..:  Removes all items from the inventory that has the tag 
                    passed in by the string.
        */
        public bool removeByTagFromInventory(string tagName) {
            //Traverse the List 
            for(int i = 0; i < itemList.Count; i++) {
                if(itemList[i].tag.Equals(tagName)) {
                    itemList.RemoveAt(i);
                    //Decrement i so the next value can compare again
                    i--;
                }
            }
            return true;
        }

        /* Method:  printInv()
           Params:  None
           Desc..:  Prints out the inventory to debug in brackets [].
        */
        public string printInv() {
            string inv = "Inventory [";
            for(int i = 0; i < itemList.Count; i++) {
                inv += itemList[i].name + ", ";
            }
            inv += "]";
            return inv;
        }
	}
}

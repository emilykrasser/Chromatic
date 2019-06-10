using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
	public class TileCollectible : InteractableObject {
		public GameObject DragonLady, Zalgo;

		// Use this for initialization
		void Start ()
        {
            DragonLady = GameObject.Find("DragonLady");
            Zalgo = GameObject.Find("Zalgo");
		}
		
		// Update is called once per frame
		void Update ()
        {
			if (enteredTrigger && !poppedUp && Input.GetKeyDown(KeyCode.E))
            {
                PickUpObject();
                DragonLady.GetComponent<NPCController>().SetNextInteraction(2);
                Zalgo.GetComponent<NPCController>().SetNextInteraction(2);
                gameObject.GetComponent<AudioSource>().Play(0);
                poppedUp = true;
            }
            else if (poppedUp && Input.GetKeyDown(KeyCode.E))
            {
                gameManager.AcivateObjectInteractionPanel(false);

                gameManager.objectInteractionVisible = false;
                gameManager.EnableControlls(true);

                poppedUp = false;

                gameObject.SetActive(false);
            }
        }
	}
}
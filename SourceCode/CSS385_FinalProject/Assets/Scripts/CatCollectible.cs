using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
	public class CatCollectible : InteractableObject {

		// Use this for initialization
		void Start () {
			
		}
		
		// Update is called once per frame
		void Update () {
			if (enteredTrigger && !poppedUp && Input.GetKeyDown(KeyCode.E))
            {
                PickUpObject();
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
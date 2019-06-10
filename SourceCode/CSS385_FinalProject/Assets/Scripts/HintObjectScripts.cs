using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic
{
    [RequireComponent(typeof(AudioSource))]

    public class HintObjectScripts : InteractableObject
    {
        Transform transform;
        public float displacement = 0.02f;
        public float upperLimit;
        public float lowerLimit;

        // Use this for initialization
        void Start()
        {
            transform = gameObject.GetComponent<Transform>();
            upperLimit = transform.position.y + upperLimit;
            lowerLimit = transform.position.y - lowerLimit;
        }

        // Update is called once per frame
        void Update()
        {
            if (enteredTrigger && !poppedUp && Input.GetKeyDown(KeyCode.E))
            {
                gameObject.GetComponent<AudioSource>().Play(0);
                ShowPickUpText();
                poppedUp = true;
            }
            else if (poppedUp && Input.GetKeyDown(KeyCode.E))
            {
                gameManager.AcivateObjectInteractionPanel(false);

                gameManager.objectInteractionVisible = false;
                gameManager.EnableControlls(true);

                poppedUp = false;
            }

                float currY = transform.position.y;
                transform.position += new Vector3(0.0f, displacement, 0);
                if(currY <= lowerLimit && displacement < 0) {
                    displacement = -displacement;
                }
                if(currY >= upperLimit && displacement > 0) {
                    displacement = -displacement;
                }
        }
    }
}
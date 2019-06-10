using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets._2D
{
    [RequireComponent(typeof (PlatformerCharacter2D))]
    public class Platformer2DUserControl : MonoBehaviour
    {
        private PlatformerCharacter2D m_Character;
        private Animator m_Animator;
        private bool m_Jump;

        GameManager gameManager;

        private void Awake()
        {
            m_Character = GetComponent<PlatformerCharacter2D>();
        }

        void Start()
        {
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
            m_Animator = gameObject.GetComponent<Animator>();
        }

        private void Update()
        {
            if (!m_Jump)
            {
                // Read the jump input in Update so button presses aren't missed.
                m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
            }
        }


        private void FixedUpdate()
        {
            // Determine if controls are enabled
            if (gameManager.GetControls())
            {
                // Read the inputs.
                bool crouch = Input.GetKey(KeyCode.LeftControl);
                float h = CrossPlatformInputManager.GetAxis("Horizontal");
                // Pass all parameters to the character control script.
                m_Character.Move(h, crouch, m_Jump);
                m_Jump = false;
                m_Animator.enabled = true;
            }
            else
            {
                // Disable sprite movement while controls are disabled
                m_Animator.enabled = false;
            }
        }
    }
}

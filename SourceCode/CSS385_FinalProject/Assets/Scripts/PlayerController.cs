using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chromatic {
	public class PlayerController : MonoBehaviour {
 		private Rigidbody2D rigidbody;
        private Inventory inventory;
		//Unity Property for inventory
		public Inventory inv {get {return inventory;}}
        // Start is called before the first frame update
        void Start()
        {
            // QualitySettings.vSyncCount = 0;
            // Application.targetFrameRate = 10;
            rigidbody = GetComponent<Rigidbody2D>();
            inventory = Inventory.getInstance();
        }

        //public getter for inventory

        // Update is called once per frame
        void Update()
        {
            float horizontal = Input.GetAxis("Horizontal");
            float vertical = Input.GetAxis("Vertical");

            Vector2 position = rigidbody.position;
            position.x += (0.1f * horizontal);
            position.y += (0.1f * vertical);
            //transform.position = position;

            rigidbody.MovePosition(position);

            if(Input.GetKeyDown(KeyCode.I)){
                Debug.Log(inventory.printInv());
            }
        }
	}
}
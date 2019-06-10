using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallaxing : MonoBehaviour {

    public Transform[] backgrounds;
    private float[] parallaxScales;
    public float smoothing = 1f;

    private Transform cam;
    private Vector3 previousCamPos;

    //Used before Start(). Great for references!
    void Awake ()
    {
        cam = Camera.main.transform;
    }

	// Use this for initialization
	void Start ()
    {
        // The previous frame had the current frame's camera position
		previousCamPos = cam.position;

        parallaxScales = new float[backgrounds.Length];
        // assigning corresponding parallaxScales
        for(int i = 0; i < backgrounds.Length; i++) {
            parallaxScales[i] = backgrounds[i].position.z * -1;
        }
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (cam == null)
        {
            cam = Camera.main.transform;
        }

        // for each background
        for(int i = 0; i < backgrounds.Length; i++)
        {
            // the parallax is the opposite of the camera movement because the previous frame multiplied by the scale
            float parallax = (previousCamPos.x - cam.position.x) * parallaxScales[i];
        
            // set a targeet a position which is the current position plus the parallax.
            float backgroundTargetPosX = backgrounds[i].position.x + parallax; 
        
            // Create a target position which is the background's current position with it's target x position
            Vector3 backgroundTargetPos = new Vector3(backgroundTargetPosX, backgrounds[i].position.y, backgrounds[i].position.z);
        
            // Fade between current position and target position using lerp
            backgrounds[i].position = Vector3.Lerp(backgrounds[i].position, backgroundTargetPos, smoothing * Time.deltaTime);
        }
		// set the previousCamPos to the camera's position at the 
        previousCamPos = cam.position;
	}
}

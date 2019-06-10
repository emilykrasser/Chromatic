using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ØyvindLines : NPCLines {

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "My precious Gelb went into the sewers and I can’t find him.",
                                            "You’re the only one that has paid any mind to me… I was hoping that you could help.",
                                            "Oh please, oh please find my Gelb!" });
        characterLines.Add(new List<string> { "Oh please, oh please find my Gelb!" });
        // Second block
        characterLines.Add(new List<string> { "OHH GELB",
                                            "I have this to repay you. You are the only one that gave me hope that I would see my beloved Gelb again." });
        characterLines.Add(new List<string> { "Thank you so much for finding my Gelb." });

        numInteractions = 3;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

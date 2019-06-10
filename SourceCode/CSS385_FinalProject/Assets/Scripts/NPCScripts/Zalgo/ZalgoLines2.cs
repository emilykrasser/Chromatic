using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZalgoLines2 : NPCLines {

	// Use this for initialization
	void Start () {
		characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "Oh wow! You're here too! Whaaaaaaaaattt.",
                                            "It's like we're connected or something. hehehehe"});
        characterLines.Add(new List<string> { "You know, missing pet posters make me really sad.",
                                            "I always try my hardest to help when I can, ya kno.",
                                            "That kid over there might need your help though."});

        characterLines.Add(new List<string> { "AWWWWWWWWWWWWWWW",
                                            "What a cute little glowing pest. *v*"});
        characterLines.Add(new List<string> { "Thanks for bringing him over here to show me.",
                                            "Though...",
                                            "You should probably get it back to the kid.",
                                            "Poor thing looks worried out of their mind."});

        characterLines.Add(new List<string> { "Would you look at you.",
                                            "Just a mover and a shaker, helpin' out everybody.",
                                            "So... *sniff* so proud... *gross sobbing*"});
        characterLines.Add(new List<string> {"Portals are like... Kinder surprise eggs.",
                                            "Dangerous only to Americans.",
                                            "I wonder what prize you'll get!"});

        numInteractions = 3;

	}
	
}

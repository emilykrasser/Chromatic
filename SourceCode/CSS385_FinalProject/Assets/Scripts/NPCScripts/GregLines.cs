using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GregLines : NPCLines {

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "Mannn, I can’t listen to music without any music. Why would anyone do my music collection like that? I love my music.",
                                            "With the pieces stolen, let alone shattered, I don’t know how I will ever feel whole… or feel like me!",
                                            "I’m thinking that since there is this broken piece here, maybe there are others and I can put them together.",
                                            "Hey! Do you think you can help me look around? I know it’s a hassle. I love my music and I will appreciate all the help I can get." });
        characterLines.Add(new List<string> { "Hey, it’s you again. Did you find any of my record pieces?" });
        // Second block
        characterLines.Add(new List<string> { "NO WAY! You found enough pieces to make a whole record?!",
                                            "I can’t wait to play it! I love my music. Here… for your time and effort. Thank you, man." });
        characterLines.Add(new List<string> { "I can’t wait to play it! I love my music." });

        numInteractions = 3;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

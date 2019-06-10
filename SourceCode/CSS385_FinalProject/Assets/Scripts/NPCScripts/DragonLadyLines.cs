using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragonLadyLines : NPCLines {

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "I was really hoping to have a look at my old keepsakes today, stowed away in a time capsule… somewhere around here?",
                                            "Years past, when my friends were alive and well, we thought we would all return to it on this day, at 2000 years old, but alas I am the last.",
                                            "It feels as though a break is much needed before I wear out these ol’ knees.",
                                            "If you have the time to spare, can you take a look around? Wake this old bag of bones if you find where my time capsule may be." });
        characterLines.Add(new List<string> { "Did you find my time capsule?" });
        // Second block
        characterLines.Add(new List<string> { "Oh... You found my time capsule...",
                                            "... It has a passcode and... I can't remember..." });
        characterLines.Add(new List<string> { "Do you have any idea what it could be? I remember it was four digits?" });
        // Third block
        characterLines.Add(new List<string> { "Dearie, I forgot she put that in there. Hahaha...",
                                            "I don’t feel quite as sad now. I may be the last of my kind, but I will forever carry these memories.",
                                            "Here… to repay you for your compassion." });
        characterLines.Add(new List<string> { "Thank you so much. I don't feel as sad now." });

        numInteractions = 3;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoidLines2 : NPCLines {

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "Oh... it seems like you can see color again.",
                                            "How is it? After losing color, do you appreciate it more?",
                                            "Well, you've done some good if you have color back again.",
                                            "Remember not to lose it this time... or else I'll come back for you.", });
		characterLines.Add(new List<string> {"Remember not to lose your color this time..."});
        numInteractions = 3;
    }
}

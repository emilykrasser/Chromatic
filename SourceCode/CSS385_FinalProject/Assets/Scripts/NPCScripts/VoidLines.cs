using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoidLines : NPCLines {

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "What a waste of color.",
                                            "Color is a limited resource. By lottery some are given full color, some not.",
                                            "When there are those who waste their color, I take it away.",
                                            "...but we can give you the opportunity to regain your color.",
                                            "If you can bring hope, empathy, and love back to others,",
                                            "Then in exchange you can return color to your world.",
                                            "This will teach you not to put it to waste." });
        numInteractions = 3;
    }
}

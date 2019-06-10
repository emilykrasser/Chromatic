using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(NPCController))]
public class ExampleNPC : NPCLines
{

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "Hi there! My name's Zeph!",
                                            "I've lost my dog and I don't know where she went. :(",
                                            "Plz help me find her. She uh... yeah...",
                                            "... We should find her quickly." });
        characterLines.Add(new List<string> { "Hi there!fdagsdfgsdfgsdf" });
        // Second block
        characterLines.Add(new List<string> { "hmmmmmmmmmmmmmmm" });
        characterLines.Add(new List<string> { "You still haven't found her..." });

        numInteractions = 2;
    }
}

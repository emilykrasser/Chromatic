using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZalgoLines1 : NPCLines {

	// Use this for initialization
	void Start () {
		characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "Hi again.",
                                            "Totally not a coincidence that we're meeting here. Again.",
                                            "I'm not following you. >:|"});
        characterLines.Add(new List<string> { "Oh do you need help?",
                                            "It's pretty easy, I'll be honest. -_-",
                                            "Greg needs his record pieces. I think there's 4 of them."});

        characterLines.Add(new List<string> { "Oh, it looks like you've found them all.",
                                            "Go ahead and give them to that hipster elf over yonder."});
        characterLines.Add(new List<string> { "Greg's probably worrying about his heavy metal record.",
                                            "You know I found it at a thrift store and gave it to him.",
                                            "Now he treasures it. He hasn't told me that he broke it but that's ok."});

        characterLines.Add(new List<string> { "Hey good job! You did it again.",
                                            "Found another portal for you."});
        characterLines.Add(new List<string> {"Found another portal for you."});

        numInteractions = 3;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

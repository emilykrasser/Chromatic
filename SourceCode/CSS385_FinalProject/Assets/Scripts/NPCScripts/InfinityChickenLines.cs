using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfinityChickenLines : NPCLines {

	// Use this for initialization
	void Start ()
    {
        characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "B͓̬̙͚̾͛̒̅A̠̪̜̝͙̺͑̌ͨͧ͛̚W̧̦̮͇̯ͪ͆͛͂͑̚ͅK̡̼̰̄ͩͪ̔̍" });
        characterLines.Add(new List<string> { "B͔͖̬̪̰̠ͧ́̎́̍̽̚͟A̸̹̟̯͎̯̪̺͛̄̋́̔Wͮ̓ͪK̰͓̼̳͗ͅ" });

        numInteractions = 3;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

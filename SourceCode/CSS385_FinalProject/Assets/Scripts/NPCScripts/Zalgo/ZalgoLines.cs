using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZalgoLines : NPCLines {

	// Use this for initialization
	void Start () {
		characterLines = new List<List<string>>();

        // First block
        characterLines.Add(new List<string> { "H̖̮ͪͪ̽ͤ̽̀͘͢ͅe̩̭ͩ͂͒̔͐͒ͫ̑́l̢̤̗͈̰̣̪͈͚̂͂̾̅͗͗͗l̶̛̥͍͉͙̳̤̩͍̔̓̌̈́̎̒͑͡ȯ̑͆ͧ̇̅̒̿͞҉̣͇̯ ̨̲͕̻̹̣͈̼̥̥͐̕m̷͕̫̹̌ͤ̄ͫͭy̩̻͔͖͕͗̿͌ ̶͔̮͓̅ͧͨ͆̊̿ͫ͐͞n͔͚̻̗̞̓͆͡aͪ̈̍́͏̛̜̮͞ͅm̹̝͙̩̠͍͍̲ͨ͗̍̎ͅê̷̸͚̫̲̖̳͔̰͌ͪ͂̾͆ͪ̆́ ̖͙̫̏ͫ͢͠į̜͉̳̙̬̦͕ͨ̾ͧ͛̀͝s̸̺͓͇̟̼͖̬͎̍̑̈́ͣ̌ͮͤ̿́́̚ ̴̣̌͒͌̀̚͜Oͯ͑͒̓͐̕҉̰̫r̝͎ͨ̓̒ͩ̈ͨ̚o͇̳͍͉̻̰͓̤̘ͮ̋b̘̳̮̮͈̯ͪ́͝aͫ̏̈̐͊̽҉̡̣̯̱͔͕͕͖̼̺̀š̨̫͕̗̭͇̼̯̜͒ͦ͑̓̊̓̚͘͝ ̝͗ͯ̈̕!̠̹͚͚ͫ̅̆̓̉̾͟͢",
                                            "Oh! I'm sorry! You can't understand that.",
                                            "My name is O̞̙̥̺̘̲͓ͮ͐ͪ͒̇͆ͦ̕͢r̲͉̜̉ͧ̏̆̎͊̅ͬ͒ŏ͓̜̳̪͌̒ͤ̐̽̚b̫̙̖̻͖̞͖̼̾̓̅̉̽͌̉ͣ̀̚͜͡a̱͖̤̺͕͛́͡s͔͎̃ͦͨͭ̒, but you can call me Zalgo.",
                                            "Hey, if you need any help with anything, let me know."});
        characterLines.Add(new List<string> { "Hey, if you're looking for a hint, check out that football lookin' thing over there.",
                                            "That old dragon lady might be looking for it, but who knows ;)"});

        characterLines.Add(new List<string> { "Oh nice job; you found it! Have you talked to her yet?",
                                            "Things like that usualy have a passcode too. Hmmmmmm."});
        characterLines.Add(new List<string> { "Look for the code in order of how you found it from where you started.",
                                            "Also,",
                                            "a baker's dozen is 13. Just an FYI."});

        characterLines.Add(new List<string> { "Heh. You solved it. Good job.",
                                            "You might wanna head through this portal here. Up to you."});
        characterLines.Add(new List<string> { "You might wanna head through this portal here. Up to you."});

        numInteractions = 3;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

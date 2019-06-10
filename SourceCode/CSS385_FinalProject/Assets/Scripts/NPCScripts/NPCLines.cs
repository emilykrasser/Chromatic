using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCLines : MonoBehaviour
{
    public List<List<string>> characterLines;
    public int interaction, line;
    public int numInteractions;

	// Use this for initialization
	void Start ()
    {
        interaction = 0;
        line = 0;
    }

    public void ResetLine()
    {
        line = 0;
    }

    public void IncrementInteraction()
    {
        interaction++;
    }

    public bool AnotherLine()
    {
        return !(line + 1 == characterLines[interaction].Count);
    }

    public string GetCurrentLine()
    {
        return characterLines[interaction][line];
    }

    public string GetAndSetNextLine()
    {
        line++;
        return characterLines[interaction][line];
    }

    public int GetInteractionNum()
    {
        return interaction;
    }

    public int GetLineNum()
    {
        return line;
    }
}

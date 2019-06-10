using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BluePuzzleController : MonoBehaviour
{
    private bool aquiredRecord, playedRecord, finishedPuzzle;

	// Use this for initialization
	void Start ()
    {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    public void AquiredRecord() { aquiredRecord = true; }

    public void PlayedRecord() { playedRecord = true; }

    public void FinishedPuzzle() { }
}

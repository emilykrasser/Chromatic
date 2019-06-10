using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour {
    GameManager gameManager;

    string prevScene, currentScene;
    bool enabledBlue;
    Object[] audioClips;
    AudioSource audioSource;

    public Slider musicVolume;
    public Text musicVolumeLabel;

	// Use this for initialization
	void Start () {
        DontDestroyOnLoad(gameObject);
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        currentScene = "MainMenu";
        prevScene = currentScene;

        audioSource = gameObject.GetComponent<AudioSource>();
        audioSource.volume = 0.8f;
        audioClips = Resources.LoadAll("Music", typeof(AudioClip));

        musicVolume.minValue = 0;
        musicVolume.maxValue = 1.0f;
        musicVolume.onValueChanged.AddListener(delegate {SliderValueChangeCheck(); });
        musicVolumeLabel.text = "" + Mathf.RoundToInt(musicVolume.value * 100) + "%";
    }
	
	// Update is called once per frame
	void Update () {
        currentScene = SceneManager.GetActiveScene().name;

		if (currentScene == "MainMenu")
        {
            audioSource.clip = (AudioClip)audioClips[0];
        }

        if (currentScene == "Start")
        {
            audioSource.clip = (AudioClip)audioClips[1];
        }

        if (currentScene == "BluePuzzle" && !gameManager.GetBlue())
        {
            audioSource.clip = (AudioClip)audioClips[2];
        }

        if (currentScene == "BluePuzzle" && gameManager.GetBlue())
        {
            audioSource.clip = (AudioClip)audioClips[3];
        }

        if (currentScene == "RedPuzzle")
        {
            audioSource.clip = (AudioClip)audioClips[4];
        }

        if (currentScene == "YellowPuzzle")
        {
            audioSource.clip = (AudioClip)audioClips[5];
        }

        if (currentScene == "End")
        {
            audioSource.clip = (AudioClip)audioClips[6];
        }

        if (prevScene != currentScene)
        {
            if(prevScene != "End")
            {
                audioSource.Play();
            }
            prevScene = currentScene;
        }
        else if(gameManager.GetBlue() != enabledBlue)
        {
            audioSource.Play();
            enabledBlue = !enabledBlue;
        }
    }

    public void SliderValueChangeCheck()
    {
        audioSource.volume = musicVolume.value;
        musicVolumeLabel.text = "" + Mathf.RoundToInt(musicVolume.value * 100) + "%";
    }
}

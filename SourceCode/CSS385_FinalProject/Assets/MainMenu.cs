using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {
    public GameObject main, controls, settings;


    void Start()
    {

    }

    void Update()
    {

    }

    public void onControlsButtonClick()
    {
        main.SetActive(false);
        controls.SetActive(true);
    }

    public void onBackButtonClick()
    {
        controls.SetActive(false);
        settings.SetActive(false);
        main.SetActive(true);
    }

    public void PlayGame ()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}

//using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using Chromatic;

public class GameManager : MonoBehaviour
{
    public Dictionary<string, Object> nPCSprites_Gray, nPCSprites_Blue, nPCSprites_BlueRed, nPCSprites_FullColor;

    //Reference to mainCamera to edit the culling masks
    public Camera mainCamera;
    //The two main UI panels to interact with NPCs and Objects
    public GameObject objectInterationPanel, nPCInteractionPanel;
    // UI panel only for BluePuzzle that holds the Time Capsule interaction
    public GameObject timeCapsuleInteractionPanel;
    //The two text references for the previous panels
    private Text objectInteratPopUpText, nPCInteractionText;

    public bool objectInteractionVisible, nPCInteractionVisible;

    //A boolean to control whether player can move their character
    private bool controls;
    //A boolean to determine whether game has ended
    private bool gameEnd;

    //--------Test Variables----------
    public Inventory inventory;

    private static GameManager Instance; //The instance of the GameManager that the user has access to.

    //-----------------------Color Variables-----------------------------------
    private bool showBlue, showRed, showYellow, showGray;

    public GameObject portalNext;

    void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    // Use this for initialization
    void Start ()
    {
        DontDestroyOnLoad(gameObject);

        mainCamera = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();

        // Gray NPC sprites
        nPCSprites_Gray = new Dictionary<string, Object>();
        Object[] temp0 = Resources.LoadAll("GrayNPCSprites", typeof(Sprite));
        foreach (Object o in temp0)
        {
            nPCSprites_Gray.Add(o.name, o);
        }

        // Blue NPC sprites
        nPCSprites_Blue = new Dictionary<string, Object>();
        Object[] temp1 = Resources.LoadAll("BlueNPCSprites", typeof(Sprite));
        foreach (Object o in temp1)
        {
            nPCSprites_Blue.Add(o.name, o);
        }

        // Purple NPC sprites
        nPCSprites_BlueRed = new Dictionary<string, Object>();
        Object[] temp2 = Resources.LoadAll("RedAndBlueNPCSprites", typeof(Sprite));
        foreach (Object o in temp2)
        {
            nPCSprites_BlueRed.Add(o.name, o);
        }

        // Full color NPC sprites
        nPCSprites_FullColor = new Dictionary<string, Object>();
        Object[] temp3 = Resources.LoadAll("NPCSprites", typeof(Sprite));
        foreach (Object o in temp3)
        {
            nPCSprites_FullColor.Add(o.name, o);
        }

        //objectInterationPanel = GameObject.Find("ObjectInteractionPanel");
        //objectInterationPanel.SetActive(false);
        //objectInteratPopUpText = objectInterationPanel.transform.GetChild(0).transform.GetChild(0).GetComponent<Text>();

        //nPCInteractionPanel = GameObject.Find("NPCPopupInteractionPanel");
        //nPCInteractionPanel.SetActive(false);
        //nPCInteractionText = nPCInteractionPanel.transform.GetChild(1).GetChild(0).GetComponent<Text>();\

        //Delete after testing is done
        inventory = gameObject.GetComponent<Inventory>();

        this.gameEnd = false;

        // Bool for keyboard input
        controls = true;
    }

    //void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    //{
    //    mainCamera = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();
    //}

    public GameManager GetInstance()
    {
		if(Instance == null)
        {
			Instance = new GameManager();
		}
		return Instance;
	}

    // Update is called once per frame
    void Update ()
    {
        if (SceneManager.GetActiveScene().name != "MainMenu")
        {
            if (portalNext == null)
            {
                portalNext = GameObject.FindGameObjectWithTag("PortalNext");
                portalNext.SetActive(false);
            }

            if (mainCamera == null)
            {
                mainCamera = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();
            }

            if (objectInterationPanel == null)
            {
                objectInterationPanel = GameObject.Find("ObjectInteractionPanel");
                objectInterationPanel.SetActive(false);
                objectInteratPopUpText = objectInterationPanel.transform.GetChild(0).transform.GetChild(0).GetComponent<Text>();
            }

            if (nPCInteractionPanel == null)
            {
                nPCInteractionPanel = GameObject.Find("NPCPopupInteractionPanel");
                nPCInteractionPanel.SetActive(false);
                nPCInteractionText = nPCInteractionPanel.transform.GetChild(1).GetChild(0).GetComponent<Text>();
            }
        }

        if (SceneManager.GetActiveScene().name == "BluePuzzle" && timeCapsuleInteractionPanel == null)
        {
            timeCapsuleInteractionPanel = GameObject.Find("TimeCapsuleInteractionPanel");
            timeCapsuleInteractionPanel.SetActive(false);
        }

        if (showGray)
        {
            mainCamera.cullingMask &= ~(1 << LayerMask.NameToLayer("FullColor"));
            mainCamera.cullingMask |= (1 << LayerMask.NameToLayer("Gray"));
        }

        if (showBlue)
        {
            mainCamera.cullingMask &= ~(1 << LayerMask.NameToLayer("Gray"));
            mainCamera.cullingMask |= (1 << LayerMask.NameToLayer("Blue"));
        }

        if (showRed)
        {
            mainCamera.cullingMask &= ~(1 << LayerMask.NameToLayer("Gray"));
            mainCamera.cullingMask &= ~(1 << LayerMask.NameToLayer("Blue"));
            mainCamera.cullingMask |= (1 << LayerMask.NameToLayer("Purple"));
        }

        if (showYellow)
        {
            mainCamera.cullingMask &= ~(1 << LayerMask.NameToLayer("Purple"));
            mainCamera.cullingMask |= (1 << LayerMask.NameToLayer("FullColor"));
        }

        if(Input.GetKeyDown(KeyCode.I)) 
        {
            Debug.Log(inventory.printInv() + " Tile pieces left: " + inventory.tilePieces);
        }
    }

    public void SetObjectInteractPopUpText(string str)
    {
        objectInteratPopUpText.text = str;
    }

    public void AcivateObjectInteractionPanel(bool set)
    {
        objectInterationPanel.SetActive(set);
    }

    public void SetNPCInteractPopUpText(string str)
    {
        nPCInteractionText.GetComponent<DialogueController>().fullText = str;
        nPCInteractionText.text = str;
    }

    public void AcivateNPCInteractionPanel(bool set)
    {
        nPCInteractionPanel.SetActive(set);
    }

    public void StartNPCInteractEffect()
    {
        nPCInteractionText.GetComponent<DialogueController>().StartEffect();
    }

    public void StopNPCInteractEffect()
    {
        nPCInteractionText.GetComponent<DialogueController>().StopEffect();
    }

    public bool CheckNPCInteractEffect()
    {
        return nPCInteractionText.GetComponent<DialogueController>().TextEffectDone();
    }

    public void SetNPCImage(string spriteName)
    {
        Sprite sprite;

        if (showYellow)
        {
            sprite = (Sprite)nPCSprites_FullColor[spriteName];
        }
        else if (showRed)
        {
            sprite = (Sprite)nPCSprites_BlueRed[spriteName];
        }
        else if (showBlue)
        {
            sprite = (Sprite)nPCSprites_Blue[spriteName];
        }
        else
        {
            sprite = (Sprite)nPCSprites_Gray[spriteName];
        }

        nPCInteractionPanel.transform.GetChild(0).GetComponent<Image>().sprite = sprite;

        nPCInteractionPanel.transform.GetChild(2).GetChild(0).GetComponent<Text>().text = spriteName;
    }

    public void ActivateTimeCapsulePanel(bool set)
    {
        if (SceneManager.GetActiveScene().name == "BluePuzzle")
        {
            timeCapsuleInteractionPanel.SetActive(set);
        }
    }

    public void EnableControlls(bool set) { controls = set; }
    public bool GetControls() { return controls; }

    public void ChangeScene(string scenename)
    {
        SceneManager.LoadScene(scenename);
    }

    public void EnableGray()
    {
        showGray = true;
        portalNext.SetActive(true);
    }

    public void EnableBlue()
    {
        showBlue = true;
        portalNext.SetActive(true);
    }

    public void EnableRed()
    {
        showRed = true;
        portalNext.SetActive(true);
    }

    public void EnableYellow()
    {
        showYellow = true;
        portalNext.SetActive(true);
    }

    public bool GetBlue() { return showBlue;  }

    public void ShowEndPortal() { portalNext.SetActive(true); }
}
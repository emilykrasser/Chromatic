using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PressSomethingController : MonoBehaviour {
    Animator anim;
    public SpriteRenderer sprite;
    
    // Use this for initialization
	void Start ()
    {
        sprite = gameObject.transform.GetChild(0).GetComponent<SpriteRenderer>();
        sprite.enabled = false;
        anim = gameObject.transform.GetChild(0).GetComponent<Animator>();
        anim.enabled = false;
    }
	
	// Update is called once per frame
	void Update ()
    {

    }

    public void PlayUp()
    {
        sprite.enabled = true;
        anim.enabled = true;

        gameObject.transform.GetChild(0).GetComponent<Animator>().Play("PressSomething");
    }

    public void PlayDown()
    {
        anim.enabled = true;

        gameObject.transform.GetChild(0).GetComponent<Animator>().Play("PressSomething_down");

        StartCoroutine(WaitForAnimation());
    }

    IEnumerator WaitForAnimation()
    {
        yield return new WaitForSeconds(0.4f);
        anim.enabled = false;
        sprite.enabled = false;
    }

    public void DisableAnimAndSprite()
    {
        anim.enabled = false;
        sprite.enabled = false;
    }
}

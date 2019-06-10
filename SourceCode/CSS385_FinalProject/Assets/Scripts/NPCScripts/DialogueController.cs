using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DialogueController : MonoBehaviour
{
	public float delay;
	public string fullText;
	private string currentText = "";
    private IEnumerator coroutine;
    public bool textEffectDone;

    // Use this for initialization
    void Start ()
    {
        delay = 0.05f;
        fullText = gameObject.GetComponent<Text>().text;
    }

    public void StartEffect()
    {
        textEffectDone = false;
        coroutine = ShowText();
        StartCoroutine(coroutine);
    }

    public void StopEffect()
    {
        textEffectDone = true;
        StopCoroutine(coroutine);
    }

    IEnumerator ShowText()
    {
        gameObject.GetComponent<Text>().text = "";

		for(int i = 0; i < fullText.Length + 1; i++){
            gameObject.GetComponent<AudioSource>().Play(0);
            currentText = fullText.Substring(0,i);
			this.GetComponent<Text>().text = currentText;
			yield return new WaitForSeconds(delay);
        }

        textEffectDone = true;
	}

    public bool TextEffectDone()
    {
        return textEffectDone;
    }
}

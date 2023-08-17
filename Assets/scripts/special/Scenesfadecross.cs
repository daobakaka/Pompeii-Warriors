using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using UnityEngine.SceneManagement;

public class Scenesfadecross : MonoBehaviour
{
    // Start is called before the first frame update
   // public static bool changescenes = true;
    void Start()
    {
        StartCoroutine(startscenes());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator startscenes()
    {
        yield return new WaitForSeconds(0);
        for (float tc = 0; tc < 2; tc += Time.fixedDeltaTime)
        {
            this.GetComponent<RectTransform>().localScale = Vector3.Lerp(new Vector3(2, 10, 0), new Vector3(2, 0, 0),tc);
            yield return new WaitForSeconds(Time.fixedDeltaTime);
        }
        this.gameObject.SetActive(false);
    }
    IEnumerator exitscenes()
    {
        this.gameObject.SetActive(true);
        yield return null;
        for (float tc = 0; tc < 2; tc += Time.fixedDeltaTime)
        {
            this.GetComponent<RectTransform>().localScale = Vector3.Lerp(new Vector3(2, 0, 0), new Vector3(2, 10, 0), tc);
            yield return new WaitForSeconds(Time.fixedDeltaTime);
        }
    }
    public void exitscenes_call()
    {
        StartCoroutine(exitscenes());
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;

public class Textclone : MonoBehaviour
{
    // Start is called before the first frame update
    public float po = 0.1f;
    void Start()
    {
        StartCoroutine(textprompteffects());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator textprompteffects()
    {
        yield return new WaitForSeconds(0.3f);
        //GameObject root = GameObject.FindWithTag("textprompt");
        float tc = 0;
        float duration = 1;
        this.GetComponent<Text>().color = new Color(1, 1, 1, 1);
        for (; this.GetComponent<Text>().color.a > 0; tc += Time.deltaTime / duration)
        {
            this.GetComponent<Text>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(1, 1, 1, 0), tc);//颜色渐变函数
            this.transform.Translate(0, po, 0);

            yield return null;

        }
        Destroy(this.gameObject);
        // Debug.Log("完成");
    }
}

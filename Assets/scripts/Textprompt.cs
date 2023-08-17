using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class  Textprompt : MonoBehaviour
{
    // Start is called before the first frame update
    public float tc = 0;
    public float duration = 3;
    private int i;
    private string s, s1;
    private TMP_Text kaka;
    private int ikey;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        testxblack();

    }
    public void texteffects()//提示框效果，搭配使用

    {
        //this.GetComponent<Text>().color = new Color(1, 1, 1, 1);
         tc = 0;
        this.GetComponent<Text>().color = new Color(1, 1, 1, 1);
       // StartCoroutine("Testkak",1);
    }

    void testxblack()
    {
        {

            if (this.GetComponent<Text>().text != "" && this.GetComponent<Text>().color.a != 0)
            {
                s = this.GetComponent<Text>().text;
                tc += Time.deltaTime / duration;
                this.GetComponent<Text>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(1, 1, 1, 0), tc);

            }

            //Debug.Log("已调整");
        }
    }




    //IEnumerable Testkak(int a)
    //{
    //    //this.GetComponent<Text>().color = new Color(1, 1, 1, 1);
    //    if (this.GetComponent<Text>().text != "" && this.GetComponent<Text>().color.a != 0)
    //    {
    //        tc += Time.deltaTime / duration;
    //        this.GetComponent<Text>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(1, 1, 1, 0), tc);
    //        yield return null;
    //    }

    //    Debug.Log("已调整");
    //}
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Textbullethurt : MonoBehaviour
{
    // Start is called before the first frame update
    public float duration = 0.5f;
    private float tc = 0;
    public float speed = 1;
    private int i = 0;
    public float hurtefficent;
    private float color_ef;

    void Start()
    {

    }
    //void Awake()
    //{ 

    //    tc = 0;
    //}



    // Update is called once per frame
    void Update()
    {
        texteffects();
    }
    void texteffects()
    {
        if (gameObject != null)

        {
            if (i == 0)
            {
                this.GetComponent<TextMeshProUGUI>().text = Mathf.Floor(hurtefficent).ToString();
                color_ef = 0.1f+Mathf.Abs(1f - hurtefficent / 80);
                this.GetComponent<TextMeshProUGUI>().color = new Color(color_ef, 0.1f, 0.1f, 1);
                i++;
            }
            else
            {
                tc += Time.deltaTime / duration;
                this.GetComponent<TextMeshProUGUI>().color = Color.Lerp(new Color(color_ef, 0.1f, 0.1f, 1), new Color(color_ef, 0.1f, 0.1f, 0), tc);//颜色渐变函数   
                this.transform.Translate(0, speed * Time.deltaTime, 0, Space.World);//文字位移
            }
        }

    }

}

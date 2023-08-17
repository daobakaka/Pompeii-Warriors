using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Texthurtmagic : MonoBehaviour
{
    // Start is called before the first frame update
    public float durationkaka = 0.5f;
    private float tc = 0;
    public float speed = 1;
    private int i = 0;
    public float hurtcoefficient;
    private float    color_ef;

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
                this.GetComponent<TextMeshProUGUI>().text = Mathf.Ceil(hurtcoefficient).ToString();
                color_ef = Mathf.Abs(1f - hurtcoefficient / 100);
                this.GetComponent<TextMeshProUGUI>().color = new Color(0, color_ef, 0.9f, 1);
                i++;
            }
            else
            {
                tc += Time.deltaTime / durationkaka;
                this.GetComponent<TextMeshProUGUI>().color = Color.Lerp(new Color(0, color_ef, 0.9f, 1), new Color(0, color_ef, 0.9f, 0), tc);//颜色渐变函数  // Debug.Log("颜色为" + this.GetComponent<TextMeshProUGUI>().color);
                this.transform.Translate(0, 1.5f*speed * Time.deltaTime, 0, Space.World);//文字位移
            }
        }

    }

  
}

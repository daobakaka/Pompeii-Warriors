using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.TestTools;
using TMPro;

public class Maincontrol : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject panlesetmusic;
    public GameObject lightsorce;
    private float sound_ef = 1;
    public static bool music_lerp = false;
    void Start()
    {
     
   

    }

    // Update is called once per frame
    void Update()
    {
       adjust();
    }
    void adjust()
    {
        if (Actor1.actorhealth > 0)
        { lightsorce.GetComponent<UnityEngine.Rendering.Universal.Light2D>().intensity = panlesetmusic.transform.GetChild(5).GetComponent<Slider>().value; }
        musicbutton();
        musicmain();

    }
    void musicmain()
    { 
        
            sound_ef= panlesetmusic.transform.GetChild(4).GetComponent<Slider>().value;//���������ڵ�
        
    }
    void musicbutton()

    {

        for (int i = 0; i < this.transform.GetChild(2).GetChild(0).childCount; i++)
        {
            this.transform.GetChild(2).GetChild(0).GetChild(i).GetComponent<AudioSource>().volume = panlesetmusic.transform.GetChild(0).GetComponent<Slider>().value * sound_ef;//�ӵ��������0-0.3
        }
       //--------------------------------------------------------------------------------------------------
        for (int i = 0; i <this.transform.GetChild(2).GetChild(2).childCount; i++)//UI������0-0.8
        {
            this.transform.GetChild(2).GetChild(2).GetChild(i).GetComponent<AudioSource>().volume= panlesetmusic.transform.GetChild(2).GetComponent<Slider>().value* sound_ef;
        }
        //-------------------------------------

        for (int i = 0; i < this.transform.GetChild(2).GetChild(3).childCount; i++)//���������ڰ�������0.8
        {
            this.transform.GetChild(2).GetChild(3).GetChild(i).GetComponent<AudioSource>().volume = panlesetmusic.transform.GetChild(2).GetComponent<Slider>().value * sound_ef;
        }
//--------------------------

        for (int i = 0; i < this.transform.GetChild(2).GetChild(6).childCount; i++)//��ϻ�����ڰ�������0.8
        {
            this.transform.GetChild(2).GetChild(6).GetChild(i).GetComponent<AudioSource>().volume = panlesetmusic.transform.GetChild(2).GetComponent<Slider>().value * sound_ef;
        }
//---------------------------------

        for (int i = 0; i < this.transform.GetChild(2).GetChild(7).childCount; i++)//���������������ڻ�������0.4
        {
            this.transform.GetChild(2).GetChild(7).GetChild(i).GetComponent<AudioSource>().volume = panlesetmusic.transform.GetChild(3).GetComponent<Slider>().value * sound_ef;
        }
        //---------------------------------------

        if (music_lerp == false)//���뵭��Լ��
        {
            for (int i = 0; i < this.transform.GetChild(2).GetChild(1).GetChild(0).childCount; i++)//��������0.5
            {
                this.transform.GetChild(2).GetChild(1).GetChild(0).GetChild(i).GetComponent<AudioSource>().volume = panlesetmusic.transform.GetChild(1).GetComponent<Slider>().value * sound_ef;
            }
        }
        if (Input.GetKey(KeyCode.M))
        {
            Debug.Log("���������Ƿ�ɵ���false=" + music_lerp);
        }
        //---------------------------------------------------------------------

        for (int i = 0; i < this.transform.GetChild(2).GetChild(4).childCount; i++)//�����������������=0.3����������
        {
            for (int j = 0; j < this.transform.GetChild(2).GetChild(4).GetChild(i).childCount; j++)
            {

                this.transform.GetChild(2).GetChild(4).GetChild(i).GetChild(j).GetComponent<AudioSource>().volume = 0.15f * sound_ef;
            }
        }

    }
}

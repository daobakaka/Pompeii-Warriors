using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Dataread : MonoBehaviour
{
    // Start is called before the first frame update

    private void Awake()
    {
        getfightgold();
        getplayercrossnum();
        signdaysystem();
    }

    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void getfightgold()
    { if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            Panelcontrol.getgold = PlayerPrefs.GetInt("gold");//ȡ���ܻ�������
            PlayerPrefs.SetInt("gold", Panelcontrol.getgold);//��õ�ǹ�ֱҴ���̳�
           
           
        
        }
    }
    void getplayercrossnum()
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            Panelcontrol.player_corssnum = PlayerPrefs.GetInt("player_crossnum");
            
        }
    }
    void signdaysystem()//��ȡǩ�����ڣ�����ֵ
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            PlayerPrefs.SetString("daysign", DateTime.Now.ToString("yyyy-MM-dd"));
            if (PlayerPrefs.GetString("hadsign").Equals(PlayerPrefs.GetString("daysign")))
            {
                GameObject son = GameObject.Find("Panelmain");//�Ҹ��ڵ�
                GameObject son2 = son.transform.Find("panelgold").gameObject;//�ӽڵ�����ֻ��һ��һ������
                GameObject theone = son2.transform.Find("Buttonsign").gameObject;
                theone.GetComponent<Button>().interactable = false;
            }
            else
            {
                PlayerPrefs.SetInt("stamina", 10);
                Panelcontrol.stamina_num = PlayerPrefs.GetInt("stamina");
            }
        }

    }
}

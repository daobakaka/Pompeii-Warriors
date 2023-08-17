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
            Panelcontrol.getgold = PlayerPrefs.GetInt("gold");//取出总货币数量
            PlayerPrefs.SetInt("gold", Panelcontrol.getgold);//获得的枪手币存入碧池
           
           
        
        }
    }
    void getplayercrossnum()
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            Panelcontrol.player_corssnum = PlayerPrefs.GetInt("player_crossnum");
            
        }
    }
    void signdaysystem()//读取签到日期，体力值
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            PlayerPrefs.SetString("daysign", DateTime.Now.ToString("yyyy-MM-dd"));
            if (PlayerPrefs.GetString("hadsign").Equals(PlayerPrefs.GetString("daysign")))
            {
                GameObject son = GameObject.Find("Panelmain");//找根节点
                GameObject son2 = son.transform.Find("panelgold").gameObject;//子节点物体只能一级一级查找
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

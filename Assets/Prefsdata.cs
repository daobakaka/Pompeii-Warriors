using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;


public class Prefsdata : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject paneltalent_path;
    public GameObject dicsave_path;

    private void Awake()
    {
        read_honorlevel();
    }
    void Start()
    {
     
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void prefs_weapon()//�������������keyֵ
        
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            {
                for (int i = 0; i < paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).childCount; i++)



                    if (paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(i).GetChild(2).GetComponent<Toggle>().isOn == true)
                    {
                        PlayerPrefs.SetInt("weapon_type", i);
                        Debug.Log("��ѡ������.." + i);
                        break;
                    }
            }
        }
    }
    public void prefs_honor_level()//���������ȼ���ֵ
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {

            PlayerPrefs.SetInt("honor_level", Panelcontrol.honorlevel);
            Debug.Log("�����ȼ�..." + Panelcontrol.honorlevel);
        }

    }
    void read_honorlevel()
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {

            Panelcontrol.honorlevel = PlayerPrefs.GetInt("honor_level");

        }

    }
    



}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;


public class Dicsave : MonoBehaviour
{
    // Start is called before the first frame update

    public Dictionary<int, Sprite> actorchoose_data;
    public float[,] weapon_data;
    public float[] weapon_attack;
    public float[] weapon_interval;
    public float[] weapon_maganizecap;
    public float[] weapon_magatime;
    public Sprite[] weapon_picture;
    public int weapon_type_num;
    //���ݳ�ʼ��
    public GameObject paneltalent_path;


    private void Awake()
    {
        actorchoose_data = new Dictionary<int, Sprite>();
        weapon_data = new float[weapon_attack.Length, 5];


        for (int i = 0; i < weapon_attack.Length; i++)
        {
            {
                weapon_data[i, 0] = i;
                weapon_data[i, 1] = weapon_attack[i];
                weapon_data[i, 2] = weapon_interval[i];
                weapon_data[i, 3] = weapon_maganizecap[i];
                weapon_data[i, 4] = weapon_magatime[i];
            }

            actorchoose_data.Add(i, weapon_picture[i]);

        }
    }
    void Start()
    {
        togglecheack();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

   public  void actor_tooglechoose(int i)//tggleѡ��
    {

        for (int j = 0; j < paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).childCount; j++)
        {
            if (j != i)
            {
                paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(j).GetChild(2).GetComponent<Toggle>().isOn = false;
            }
        }

        if (paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(i).GetChild(2).GetComponent<Toggle>().isOn == true)

        {     paneltalent_path.transform.GetChild(3).GetComponent<Image>().sprite = actorchoose_data[i];//ͨ����ֵ�����ֵ�
              paneltalent_path.transform.GetChild(3).GetComponent<Image>().color = new Color(1, 1, 1, 1);
              //weapon_type_num =(int) (weapon_data[i, 0]);//����ǿת��INT
              paneltalent_path.transform.GetChild(3).GetChild(1).GetChild(0).GetComponent<TextMeshProUGUI>().text = weapon_data[i, 1].ToString()+"-"+ (weapon_data[i, 1]+4).ToString();//�ӵ�������
              paneltalent_path.transform.GetChild(3).GetChild(2).GetChild(0).GetComponent<TextMeshProUGUI>().text = weapon_data[i, 2].ToString();
              paneltalent_path.transform.GetChild(3).GetChild(3).GetChild(0).GetComponent<TextMeshProUGUI>().text = weapon_data[i, 3].ToString();
              paneltalent_path.transform.GetChild(3).GetChild(4).GetChild(0).GetComponent<TextMeshProUGUI>().text = weapon_data[i, 4].ToString();
        }
        else
        {
            paneltalent_path.transform.GetChild(3).GetComponent<Image>().color = new Color(1, 1, 1, 0);
            paneltalent_path.transform.GetChild(3).GetChild(1).GetChild(0).GetComponent<TextMeshProUGUI>().text = null;
            paneltalent_path.transform.GetChild(3).GetChild(2).GetChild(0).GetComponent<TextMeshProUGUI>().text = null;
            paneltalent_path.transform.GetChild(3).GetChild(3).GetChild(0).GetComponent<TextMeshProUGUI>().text = null;
            paneltalent_path.transform.GetChild(3).GetChild(4).GetChild(0).GetComponent<TextMeshProUGUI>().text = null;
        }
        weapon_type_num = i;//����ǿת��INT

    }


    void togglecheack()
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            for (int i = 0; i < paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).childCount; i++)
            {
                int key = i;

                paneltalent_path.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(i).GetChild(2).GetComponent<Toggle>().onValueChanged.AddListener(delegate { actor_tooglechoose(key); });


            }
        }
        Debug.Log("��ǰ����������" + SceneManager.GetActiveScene().buildIndex);
    }
}

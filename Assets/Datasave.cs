using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Datasave : MonoBehaviour
{
    // Start is called before the first frame update
    private int gold_fight;
   public GameObject beatcross_path;
    //���뻺�����
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

  public  void hasgold()//�ؿ���ʹ��
    {

        gold_fight =(int)( beatcross_path.GetComponent<Beatthegame>().cachegold);
      //  PlayerPrefs.SetInt("gold_fight", gold_fight);
        PlayerPrefs.SetInt("gold",( PlayerPrefs.GetInt("gold")+gold_fight));//��ȡ��Ҵ����ܱ̳�
        gold_fight = 0;
    }
    public void player_crossnum()//ͨ�ش���
    {

        PlayerPrefs.SetInt("player_crossnum", SceneManager.GetActiveScene().buildIndex);
    
    }
}

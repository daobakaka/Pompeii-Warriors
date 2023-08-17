using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Datasave : MonoBehaviour
{
    // Start is called before the first frame update
    private int gold_fight;
   public GameObject beatcross_path;
    //进入缓存入口
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

  public  void hasgold()//关卡中使用
    {

        gold_fight =(int)( beatcross_path.GetComponent<Beatthegame>().cachegold);
      //  PlayerPrefs.SetInt("gold_fight", gold_fight);
        PlayerPrefs.SetInt("gold",( PlayerPrefs.GetInt("gold")+gold_fight));//获取金币存入总碧池
        gold_fight = 0;
    }
    public void player_crossnum()//通关次数
    {

        PlayerPrefs.SetInt("player_crossnum", SceneManager.GetActiveScene().buildIndex);
    
    }
}

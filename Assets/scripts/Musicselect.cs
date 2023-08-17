using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Musicselect : MonoBehaviour
{
    // Start is called before the first frame update
    public AudioClip music;//添加音乐监听器
    private AudioSource player;//声明组件

    void Start()
    {
        player = GetComponent<AudioSource>();
        player.clip = music;
        player.playOnAwake = true;
        // player.volume = 0.01f;
        // Debug.Log("播放音乐");
        //Invoke("playmusic", 3);
    }
    public void startplay()

    {
        if (Panelcontrol.story >= 1)
        {
            player.Play();
        }
       else
        { GameObject son = GameObject.Find("musicalcontrol");//找根节点
        GameObject son1 = son.transform.Find("musicselect3").gameObject;//子节点物体只能一级一级查找
            son1.gameObject.GetComponent<AudioSource>().Play();
                                                                      }

    }
}
   


using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Musicselect : MonoBehaviour
{
    // Start is called before the first frame update
    public AudioClip music;//������ּ�����
    private AudioSource player;//�������

    void Start()
    {
        player = GetComponent<AudioSource>();
        player.clip = music;
        player.playOnAwake = true;
        // player.volume = 0.01f;
        // Debug.Log("��������");
        //Invoke("playmusic", 3);
    }
    public void startplay()

    {
        if (Panelcontrol.story >= 1)
        {
            player.Play();
        }
       else
        { GameObject son = GameObject.Find("musicalcontrol");//�Ҹ��ڵ�
        GameObject son1 = son.transform.Find("musicselect3").gameObject;//�ӽڵ�����ֻ��һ��һ������
            son1.gameObject.GetComponent<AudioSource>().Play();
                                                                      }

    }
}
   


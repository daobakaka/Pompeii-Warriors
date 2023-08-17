using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Musicmain : MonoBehaviour
{
    // Start is called before the first frame update
    private AudioSource player;//ÉùÃ÷×é¼þ
    public float fadespeed;
    private int key;
    void Start()
    {
        player = GetComponent<AudioSource>();
        Invoke("playmusic", 3);
    }
    public void playmusic()
    {
        player.Play();
        

    }
    void Update()
    {
        fadein();
        fadeout();
    }
    void fadein()
    {
        if (player.volume < 0.5f)
        {
            player.volume = player.volume + 4*fadespeed * Time.deltaTime;
            // Debug.Log("");
        }
    }
    void fadeout()
    { if (key == 1)
        {
            if (player.volume > 0.01f)
            {
                player.volume = player.volume -25*fadespeed * Time.deltaTime;
                // Debug.Log("");
            }
        }
    }
    public void musichange()
    {
        key = 1;
        fadeout();
    }
}

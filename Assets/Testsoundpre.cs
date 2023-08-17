using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Testsoundpre : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject atmusci;
    void Start()
    {
       // this.GetComponent<AudioSource>().Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.P))
        {
            for (int i = 0; i < 4; i++)
            {
                atmusci.transform.GetChild(i).GetComponent<AudioSource>().Pause();
                this.GetComponent<AudioSource>().Play();
            }

        }
    }
    
        
    
}

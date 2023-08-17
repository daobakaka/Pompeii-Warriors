using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Baobao : MonoBehaviour
{
    public float rotatespeed;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        per();
    }
   
    void per()
        {
            if (GameObject.FindWithTag("player")!=null)
            {
                GameObject root = GameObject.FindWithTag("player");
                this.transform.position = root.transform.position;
                this.transform.GetChild(1).RotateAround(this.transform.position, Vector3.forward, -0.1f * rotatespeed * Time.deltaTime);
                this.transform.GetChild(0).RotateAround(this.transform.position, Vector3.forward, 0.1f * rotatespeed * Time.deltaTime);

            }
        }
}

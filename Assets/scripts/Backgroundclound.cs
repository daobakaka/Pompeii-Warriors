using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Backgroundclound : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    private int i;
    private float t;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speed * Time.deltaTime, 0, 0);
        if (transform.position.x >= 17.3f && i == 0)
        {
            transform.position = new Vector3(-27.94f, 0.5f, 0);
            i++;
            t = Time.fixedTime;
        }
        if (Time.fixedTime-t > 2)
        {
            i = 0;
            t = 0;
        }
    }

    }

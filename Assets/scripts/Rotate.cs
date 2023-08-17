using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    // Start is called before the first frame update
    public float rotatespeed;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        rayrotate();
    }
 void rayrotate()
    {
      
        this.transform.RotateAround(this.transform.parent.position, Vector3.forward, rotatespeed * Time.deltaTime);
       // Debug.DrawLine(this.transform.position, this.transform.parent.position, Color.yellow);
    }
    private void LateUpdate()
    {
       // rayrotate();
    }
}

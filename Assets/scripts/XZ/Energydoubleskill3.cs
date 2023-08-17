using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Energydoubleskill3 : MonoBehaviour
{
    // Start is called before the first frame update
    public float rotatespeed = 0.01f;
    public Transform transer;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        rayrotate();
      // radiusrotato();
        per();
    }
    void rayrotate()
    {

        this.transform.GetChild(0).RotateAround(this.transform.position, Vector3.forward, -0.1f*rotatespeed* Time.deltaTime);
        this.transform.GetChild(1).RotateAround(this.transform.position, Vector3.forward, 0.1f*rotatespeed* Time.deltaTime);
        // Debug.DrawLine(this.transform.position, this.transform.parent.position, Color.yellow);
    }
    private void LateUpdate()
    {
    
    }
    void radiusrotato()
    {
        this.transform.GetChild(0).transform.position = this.transform.GetChild(0).transform.position+ new Vector3(0, 0.01f, 0);
        this.transform.GetChild(1).transform.position = this.transform.GetChild(0).transform.position + new Vector3(0,0.01f , 0);
    }
    void per()
    {
        if (GameObject.FindWithTag("player") != null)
        {
            GameObject root = GameObject.FindWithTag("player");
            this.transform.position = root.transform.position;
            rotatespeed += 0.5f;
        }
    }
    
}

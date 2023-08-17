using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;


public class LightGlobal : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    public Light2D lightgl;
    void Start()
    {
        StartCoroutine("Lightchange");

    }

    // Update is called once per frame
    void Update()
    {

       
    }
    IEnumerator Lightchange()//����Э�̺���
    {
        
        for (lightgl.GetComponent<Light2D>().intensity = 0.1f; lightgl.GetComponent<Light2D>().intensity < 1; lightgl.GetComponent<Light2D>().intensity = lightgl.GetComponent<Light2D>().intensity + speed * Time.deltaTime)
        {
            lightgl.GetComponent<Light2D>().intensity = lightgl.GetComponent<Light2D>().intensity + speed * Time.deltaTime;
  yield return null;    
        }
       Debug.Log("�ѵ���");
       StopCoroutine("Lightchange");
    }

    
}

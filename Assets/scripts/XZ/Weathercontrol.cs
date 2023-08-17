using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Weathercontrol : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    public UnityEngine.Rendering.Universal.Light2D lightgl;
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
        lightgl.intensity = 0;
        yield return null;
        for (float i = 0f; i<2; i += Time.deltaTime)
        {
            lightgl.intensity = lightgl.intensity + Time.deltaTime/2;
            yield return new WaitForSeconds(Time.deltaTime);

        }
        Debug.Log("�ѵ���");
        
    }
    IEnumerator Lightclose()
    { 
        for (float i = 1f; i < 3; i -=0.05f)
        {
            lightgl.intensity = lightgl.intensity - 0.05f/3;
            yield return new WaitForSeconds(0.05f);

        }
        yield return null;
        Debug.Log("�رս���");
    }

    public void startlighrclose()
    {
        StartCoroutine(Lightclose());

    }

}

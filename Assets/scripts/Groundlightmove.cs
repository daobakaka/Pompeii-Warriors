using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Groundlightmove : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    void Start()
    {
        StartCoroutine(lightcontrol());
    }

    // Update is called once per frame
    void Update()
    {
        GetComponent<UnityEngine.Rendering.Universal.Light2D>().intensity += speed*Time.deltaTime;
    }
    IEnumerator lightcontrol()//����Э�̺���
    {

        while (true)//���Сѭ��

        {

            for (float tt = 0; tt < 2; tt += Time.deltaTime)
            {
                yield return null;//���½���forСѭ����
            }
            yield return new WaitForSeconds(1);

            speed = -speed;


        }

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Backgroundstone : MonoBehaviour
{
    // Start is called before the first frame update
    public float speedx;
    public float speedy;
    public float rotate;
    private float t1, t2, t3;
    private int i;
    private Vector3 s1;

    void Start()
    {
        //StartCoroutine(CountSeconds());
        StartCoroutine("hptest", 2);
      

    }

    // Update is called once per frame
    void Update()
    {

        this.transform.Translate(speedx * Time.deltaTime, speedy * Time.deltaTime, 0, Space.World);

        transform.Rotate(new Vector3(0, 0, rotate * Time.deltaTime), Space.Self);//�Ƕ���ת


    }


    IEnumerator hptest(int a)//����Э�̺���
    {

        while (true)//���Сѭ��

        {

            for (float tt = 0; tt <40; tt += Time.deltaTime)
            {
                yield return null;//���½���forСѭ����
            }
            yield return new WaitForSeconds(1);
            speedx = -speedx;
            speedy = -speedy;
            

        }

    }
}
//IEnumerator CountSeconds()

    //{

//    int seconds = 0;

//    while (true)

//    {

//        for (float timer = 0; timer < 1; timer += Time.deltaTime)

//        {

//            yield return null;

//        }

//        seconds++;

//        Debug.Log("��Э�����������Ѿ�����" + seconds + "��");

//    }

//}




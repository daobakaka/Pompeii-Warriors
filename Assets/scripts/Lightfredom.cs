using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lightfredom : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    public float speechange;
    public float rotate;
    void Start()
    {
        //StartCoroutine(CountSeconds());
        StartCoroutine("hptest", 2);

    }

    // Update is called once per frame
    void Update()
    {

        this.transform.Translate(speed * Time.deltaTime, speechange * Time.deltaTime, 0);
        transform.Rotate(new Vector3(0, 0, rotate * Time.deltaTime), Space.World);//�Ƕ���ת



    }
    IEnumerator hptest(int a)//����Э�̺���
    {

        while (true)//���Сѭ��

        {

            for (float tt = 0; tt < 2; tt += Time.deltaTime)
            {
                yield return null;//���½���forСѭ����
            }
            yield return new WaitForSeconds(5);
            speed = -speed;
            rotate = -rotate;

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

}

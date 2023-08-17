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

        transform.Rotate(new Vector3(0, 0, rotate * Time.deltaTime), Space.Self);//角度旋转


    }


    IEnumerator hptest(int a)//声明协程函数
    {

        while (true)//设计小循环

        {

            for (float tt = 0; tt <40; tt += Time.deltaTime)
            {
                yield return null;//重新进行for小循环；
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

//        Debug.Log("自协程启动以来已经过了" + seconds + "秒");

//    }

//}




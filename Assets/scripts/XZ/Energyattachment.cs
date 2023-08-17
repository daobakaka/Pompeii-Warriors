using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Energyattachment : MonoBehaviour
{
    // Start is called before the first frame update
    private Vector3 direction;
    public float speed = 2;
    private float min;
    private GameObject aim;
    void Start()
    {
        aim = GameObject.FindWithTag("aim");
        findmonsters();
        controlfind();
      
        this.GetComponent<CircleCollider2D>().radius = this.GetComponent<CircleCollider2D>().radius * Skillcontrol.skillbounds_ef[6];


    }

    // Update is called once per frame
    void Update()
    {
       
    }
    private void FixedUpdate()
    {
        engerbulletmove();


    }
    void engerbulletmove()
    {
        transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//����Ŀ���ƶ�,ע������Ҫ����������ϵ��
                                                                                        // transform.forward = direction;
                                                                                        //�Ƕ�
    //    float x;
    //    if (direction.normalized.x > 0)
    //    {
    //        //��Z��Ϊ���� ʹ��������������Ƕ�  
    //        x = -Vector3.Angle(Vector3.forward, direction.normalized);
    //    }
    //    else
    //    {
    //        x = Vector3.Angle(Vector3.forward, direction.normalized);
    //    }
    //    //��Ϸ����ͻ�ת����
    //    this.transform.localEulerAngles = new Vector3(x-90, 0, 0);
    //}
    }
  
    void findmonsters()
    {
        if (GameObject.FindWithTag("monster") != null)

        {
            if (GameObject.FindGameObjectsWithTag("monster") != null&& aim.GetComponent<Joystick>().Direction.magnitude == 0)
            {
                GameObject[] targets = GameObject.FindGameObjectsWithTag("monster");
                //foreach (GameObject traget in targets
                min = Vector3.Distance(targets[0].transform.position, gameObject.transform.position);
                direction = (targets[0].transform.position - this.transform.position);
                for (int i = 1; i < targets.Length; i++)
                {
                    if (targets[i].TryGetComponent<Monster2move>(out Monster2move monster1health))
                    {
                        if (min > Vector3.Distance(targets[i].transform.position, this.transform.position) && (targets[i].GetComponent<Monster2move>().monster1health > 0))

                        {
                            min = Vector3.Distance(targets[i].transform.position, this.transform.position);
                            direction = (targets[i].transform.position - this.transform.position);
                        }
                    }
                    else
                              if (min > Vector3.Distance(targets[i].transform.position, this.transform.position) && (targets[i].GetComponent<Monster1move>().monster1health > 0))
                    {
                        min = Vector3.Distance(targets[i].transform.position, this.transform.position);
                        direction = (targets[i].transform.position - this.transform.position);

                    }
                }
            }
            else
            {
                direction = (this.transform.position);
            }
        }
        else
        { direction = (this.transform.position); }
    }
    void controlfind()//�ֿ�����
    {
        if (aim.GetComponent<Joystick>().Direction.magnitude!=0)
        {
            direction = aim.GetComponent<Joystick>().Direction;
        }
    }
}

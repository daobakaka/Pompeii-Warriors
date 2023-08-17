using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using System.Collections;
//using System.Collections.Generic;

public class Bullet1 : MonoBehaviour
{
    private Vector3 direction;
    private Rigidbody2D bullet;
    public GameObject[] monsters;
    private float min;
    private GameObject joystickaim;
   //private int i;

    // Start is called before the first frame update
    void Start()
    {
        bullet = this.GetComponent<Rigidbody2D>();
        joystickaim = GameObject.FindWithTag("aim");
      // rotateangel();
        findmonsters();
        controlfind();
        StartCoroutine(bulletpic());
    }

    // Update is called once per frame
    void Update()
    {
        FixedUpdate();

    }


    void findmonsters()
    {
        if (GameObject.FindWithTag("monster") != null)

        {
            if (GameObject.FindGameObjectsWithTag("monster") != null && joystickaim.GetComponent<Joystick>().Direction.magnitude==0)
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
    private void FixedUpdate()
    {

     bulletmove();
    }
    void bulletcontro()//ʵ����ָ�ƶ��ӵ������������� 
    {
        if (Input.GetMouseButton(1) && Input.GetMouseButtonUp(1) == false)
        {
            direction = (Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 1) - this.transform.position);
        }
    }
    void controlfind()//�ֿ�����
    {

        if (joystickaim.GetComponent<Joystick>().Direction.magnitude != 0)
        {
            this.direction = joystickaim.GetComponent<Joystick>().Direction;
        }


    }
    void bulletmove()
    {
        transform.Translate(direction.normalized * Firecontrol.bulletmovespeed * Time.deltaTime, Space.World);//����Ŀ���ƶ�,ע������Ҫ����������ϵ��
                                                                                        // transform.forward = direction;

        //�Ƕ�
        float z;
        if (direction.normalized.x > 0)
        {
            //��Z��Ϊ���� ʹ��������������Ƕ�  
            z = -Vector3.Angle(Vector3.up, direction.normalized);
        }
        else
        {
            z = Vector3.Angle(Vector3.up, direction.normalized);
        }
        //��Ϸ����ͻ�ת����
        this.transform.localEulerAngles = new Vector3(0, 0, z - 90);
    }
    //private void OnTriggerEnter2D(Collider2D other)//��ײ���
    //{
    //    // Debug.Log(this.name + "��" + other.gameObject.name + "��ײ��");
    //    for (int i = 0; i < monsters.Length; i++)
    //    {

    //        if (other.gameObject.tag == "monster")
    //        {

    //            monsters[i].GetComponent<Monster1move>().monster1health -= Firecontrol.bulletrealhurt;

    //         Destroy(this.gameObject);
    //        Debug.Log("......" + monsters[i].GetComponent<Monster1move>().monster1health);
    //        }    
    //    }
    //}
    void weaponrotate()
    {
        GameObject weapon = GameObject.FindWithTag("weapon");

    }
    void rotateangel()
    {
        float z;
        if (direction.normalized.x > 0)
        {
            //��Z��Ϊ���� ʹ��������������Ƕ�  
            z = -Vector3.Angle(Vector3.up, direction.normalized);
        }
        else
        {
            z = Vector3.Angle(Vector3.up, direction.normalized);
        }
        //��Ϸ����ͻ�ת����
        this.transform.localEulerAngles = new Vector3(0, 0, z - 90);
    }

    IEnumerator bulletpic()
    {
       
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);
    }
}

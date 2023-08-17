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
    void bulletcontro()//实现手指移动子弹！可用作技能 
    {
        if (Input.GetMouseButton(1) && Input.GetMouseButtonUp(1) == false)
        {
            direction = (Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 1) - this.transform.position);
        }
    }
    void controlfind()//手控射线
    {

        if (joystickaim.GetComponent<Joystick>().Direction.magnitude != 0)
        {
            this.direction = joystickaim.GetComponent<Joystick>().Direction;
        }


    }
    void bulletmove()
    {
        transform.Translate(direction.normalized * Firecontrol.bulletmovespeed * Time.deltaTime, Space.World);//朝向目标移动,注意这里要用世界坐标系。
                                                                                        // transform.forward = direction;

        //角度
        float z;
        if (direction.normalized.x > 0)
        {
            //以Z轴为坐标 使用向量计算出来角度  
            z = -Vector3.Angle(Vector3.up, direction.normalized);
        }
        else
        {
            z = Vector3.Angle(Vector3.up, direction.normalized);
        }
        //游戏物体就会转动了
        this.transform.localEulerAngles = new Vector3(0, 0, z - 90);
    }
    //private void OnTriggerEnter2D(Collider2D other)//碰撞检测
    //{
    //    // Debug.Log(this.name + "被" + other.gameObject.name + "碰撞了");
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
            //以Z轴为坐标 使用向量计算出来角度  
            z = -Vector3.Angle(Vector3.up, direction.normalized);
        }
        else
        {
            z = Vector3.Angle(Vector3.up, direction.normalized);
        }
        //游戏物体就会转动了
        this.transform.localEulerAngles = new Vector3(0, 0, z - 90);
    }

    IEnumerator bulletpic()
    {
       
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);
    }
}

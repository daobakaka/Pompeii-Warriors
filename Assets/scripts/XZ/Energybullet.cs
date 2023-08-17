using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Energybullet : MonoBehaviour
{
    // Start is called before the first frame update
    private Vector3 direction;
    public float speed = 2;
    private float min;
    private int raynum;
    private GameObject aim;
    void Start()
    {
        aim = GameObject.FindWithTag("aim");
        findmonsters();
        this.GetComponent<CircleCollider2D>().radius = this.GetComponent<CircleCollider2D>().radius * Skillcontrol.skillbounds_ef[1];
    }

    // Update is called once per frame
    void Update()
    {
        //controlfind();
        fingertest();
    }
    private void FixedUpdate()
    {
        engerbulletmove();
    }
    void engerbulletmove()
    {
        transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//朝向目标移动,注意这里要用世界坐标系。
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
    void controlfind()//手控射线
    {
        if (aim.GetComponent<Joystick>().Direction.magnitude != 0)
        {
            direction = aim.GetComponent<Joystick>().Direction;
            raynum ++;
        }
    }

    void fingertest()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Moved && (touch.position.x > 0.5 * Screen.width || touch.position.y > 0.6 * Screen.height))
            {
                direction = Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 1) - this.transform.position;
            }
            if (Input.touchCount == 2)
            {
                touch = Input.GetTouch(1);
                if (touch.phase == TouchPhase.Moved && touch.position.x > 0.5 * Screen.width)
                {

                    direction = Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 1) - this.transform.position;
                }
            }
            
        }

    }
    void findmonsters()
    {
        if (GameObject.FindWithTag("monster") != null)
        {
            if (GameObject.FindGameObjectsWithTag("monster") != null&& aim.GetComponent<Joystick>().Direction.magnitude== 0)
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
}

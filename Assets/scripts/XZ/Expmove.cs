using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Expmove : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed=3;
    public float Exp_distance=2f;
    public float exp_value = 10f;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        Expmoveto();
    }
    void Expmoveto()
    {
        
        if (GameObject.FindWithTag("player") != null)
        {
            GameObject target = GameObject.FindWithTag("player");
            float s = (target.transform.position - this.transform.position).sqrMagnitude;//向量模
            var direction = (target.transform.position - this.transform.position);//两点方向向量

            if (s < Exp_distance)
            {
                transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//朝向目标移动,注意这里要用世界坐标系。 // animator.Play("Walk");



            }
        }
        
            if (GameObject.FindWithTag("playerexpassist") != null)
            {
                GameObject target = GameObject.FindWithTag("playerexpassist");
                float s = (target.transform.position - this.transform.position).sqrMagnitude;//向量模
                var direction = (target.transform.position - this.transform.position);//两点方向向量

                if (s < Exp_distance*2f)
                {
                    transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//朝向目标移动,注意这里要用世界坐标系。 // animator.Play("Walk");



                }
            }


      
    }
    private void OnTriggerEnter2D(Collider2D other)//碰撞检测,以鸭儿视角
    {
        // Debug.Log(this.name + "被" + other.gameObject.name + "碰撞了");



        if (other.gameObject.tag == "player")
        {

            Actor1.expactor += this.exp_value;

            Destroy(this.gameObject, 0.1f);

        }
       
       if (other.gameObject.tag == "playerexpassist")
            {

                Actor1.expactor += this.exp_value;

                Destroy(this.gameObject, 0.1f);

            }
       

    }
}

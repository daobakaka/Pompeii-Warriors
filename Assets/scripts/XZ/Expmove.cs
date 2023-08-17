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
            float s = (target.transform.position - this.transform.position).sqrMagnitude;//����ģ
            var direction = (target.transform.position - this.transform.position);//���㷽������

            if (s < Exp_distance)
            {
                transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//����Ŀ���ƶ�,ע������Ҫ����������ϵ�� // animator.Play("Walk");



            }
        }
        
            if (GameObject.FindWithTag("playerexpassist") != null)
            {
                GameObject target = GameObject.FindWithTag("playerexpassist");
                float s = (target.transform.position - this.transform.position).sqrMagnitude;//����ģ
                var direction = (target.transform.position - this.transform.position);//���㷽������

                if (s < Exp_distance*2f)
                {
                    transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//����Ŀ���ƶ�,ע������Ҫ����������ϵ�� // animator.Play("Walk");



                }
            }


      
    }
    private void OnTriggerEnter2D(Collider2D other)//��ײ���,��Ѽ���ӽ�
    {
        // Debug.Log(this.name + "��" + other.gameObject.name + "��ײ��");



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

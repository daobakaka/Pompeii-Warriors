using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monsterwrombullet : MonoBehaviour
{
    private Vector3 direction;
    public float speed = 2;
    private GameObject target;
    public float attack_power;
    // Start is called before the first frame update
    void Start()
    {
        findplayer();
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);
    }

    void findplayer()
    {
        if (GameObject.FindWithTag("player") != null)
        {
             target = GameObject.FindWithTag("player");

            direction = (target.transform.position - this.transform.position);//两点方向向量
        }
        else
            direction = new Vector3(Random.Range(-3, 3), Random.Range(-3, 3));

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
       
        
        if (collision.gameObject.tag.Equals("player"))
        {
            Actor1.actorhealth -= attack_power * Random.Range(5, 10);
            Destroy(this.gameObject);
          //  Debug.Log("命中玩家");
            
            }

        
        
        
        
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Treasure : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    private GameObject findplayer;
    private Vector3 dir;
    void Start()
    {
       if(GameObject.FindWithTag("player")!=null)
        findplayer = GameObject.FindWithTag("player");
      
    
            
    
    }

    // Update is called once per frame
    void Update()
    {
        animaation_play();
    }
    void animaation_play()
    { if (this.gameObject != null)
        {
            this.transform.GetChild(0).transform.localEulerAngles = this.transform.GetChild(0).transform.localEulerAngles+  new Vector3(0, 0, speed * Time.fixedDeltaTime);
            this.transform.GetChild(1).GetComponent<SpriteRenderer>().color = new Color(Random.Range(0, 1f), Random.Range(0, 1f), Random.Range(0, 1f), Mathf.Sin(Random.Range(0, 90)));
        }
    }
    public void finallymove()
    {
        if (GameObject.FindWithTag("player") != null)
        {
            findplayer = GameObject.FindWithTag("player");
            StartCoroutine(t_move());

        }      
    }
    IEnumerator t_move()
    { 
        
        for (; (this.transform.position - findplayer.transform.position).sqrMagnitude >0.01f;)
        {
            this.transform.Translate((findplayer.transform.position -this.transform.position).normalized * speed * 0.01f, Space.World);
            yield return new WaitForFixedUpdate();
        
        
        }
    
    
    
    
    
    }

























}
    
   
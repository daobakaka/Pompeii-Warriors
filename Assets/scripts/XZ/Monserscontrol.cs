using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monserscontrol : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject[] target;
    public Transform adress;
    public float[] interval;
    public float[] appear;
    public GameObject clonetree;
    void Start()
    {
        for (int i = 0; i < appear.Length; i++)
        {
            if (interval[i] == 0)
            {
                interval[i] = 9999;
                appear[i] = 9999;
                target[i] = clonetree.transform.GetChild(0).gameObject;
            }
            else
            StartCoroutine("monstertest", i);

        }

        
        
        


        // StartCoroutine( hurttest());
    }

    // Update is called once per frame
    void Update()
    {
       
    }

  
    IEnumerator monstertest(int a)
    {
        
        yield return new WaitForSeconds(appear[a]);
        for (; ; )
        {
            GameObject clone = Instantiate(target[a], adress);//null 为节点的世界坐标，transform parants
            clone.transform.position = adress.transform.position;
            clone.transform.eulerAngles = adress.eulerAngles;//为克隆体赋予初值
                                                             //clone.transform.DetachChildren();//以父节点视角解除父节点关系
            clone.transform.parent = null;//以子节点视角解除父节点关系
            GameObject root = GameObject.FindWithTag("clonetree");
            clone.transform.parent = root.transform;
            this.transform.position = new Vector3(Random.Range(3, 5), transform.position.y, 0);
            yield return new WaitForSeconds(interval[a]);
        }




    }
    }



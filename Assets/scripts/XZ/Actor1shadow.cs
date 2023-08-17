using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Actor1shadow : MonoBehaviour
{
    public float interval;//克隆频率
    public GameObject clonetarget;
    public GameObject[] skills;
    private float shootf=1;
   // private float playmusic_assist=1;
    // Start is called before the first frame update
    void Start()
    {
        GameObject root = GameObject.FindWithTag("actorshadowassist");
        if (root.GetComponent<Firecontrol>().isshot_assist==1)
        {
            shootf = 0.5f;
        }
        if (root.GetComponent<Firecontrol>().isshot_assist == 0)
        {
            shootf = 1f / ((root.GetComponent<Firecontrol>().blaze_assist+1) );
        }

            InvokeRepeating("clone", 1, shootf);
            StartCoroutine(useskills());
    }

    // Update is called once per frame
    void Update()
    {

    }
    void clone()
    {


        if (GameObject.FindWithTag("monster") != null)
        {
            GameObject target = GameObject.FindWithTag("monster");
            if ((target.transform.position - this.transform.position).sqrMagnitude < 300f)
            {
                //direction = (target.transform.position - adress.transform.position);
                GameObject clone = Instantiate(clonetarget, null);//null 为节点的世界坐标，transform parants
                clone.transform.position = this.transform.position;
                clone.transform.parent = null;//以子节点视角解除父节点关系
                //if (playmusic_assist == 1)
                //{
                //    GameObject shoot = GameObject.FindWithTag("musicshoot");
                //    shoot.GetComponent<AudioSource>().Play();
                //    playmusic_assist = 0;
                //    StartCoroutine(playmusictime());
                //}
            
                Destroy(clone, 3);//销毁}

            }

        }
    }
    IEnumerator useskills()
    {
        yield return new WaitForSeconds(5);
        for (int i = 0; i < 5; i++)
        {
            GameObject clone = Instantiate(skills[Random.Range(0, skills.Length)], this.transform);//null 为节点的世界坐标，transform parants
            clone.transform.position = this.transform.position + new Vector3(Random.Range(-3, 3f), Random.Range(-3, 3f));
            yield return new WaitForSeconds(5);
        }
    }
    IEnumerator playmusictime()
    {
       
        yield return new WaitForSeconds(0.5f);
       // playmusic_assist = 1;
    }
}

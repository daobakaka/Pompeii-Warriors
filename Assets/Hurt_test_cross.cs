using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hurt_test_cross : MonoBehaviour
{ public GameObject target;
    public float tctime = 100;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(exp_find());
    }

    // Update is called once per frame
    void Update()
    {
        
    }



    IEnumerator exp_find()
    { WaitForSeconds looptime = new WaitForSeconds(1);
        for (int tc=0;tc<tctime;tc++ )
        {
            GameObject clone = Instantiate(target, this.transform);
            clone.transform.position = this.transform.position + new Vector3(Random.Range(-3, 3), Random.Range(-3, 3));
            clone.GetComponent<Expmove>().exp_value += tc;
            yield return looptime;
        
        }
        yield return null;

        if (GameObject.FindWithTag("treasure") != null)
        {
            GameObject cross = GameObject.FindWithTag("treasure");
            cross.GetComponent<Treasure>().finallymove();
        }
    
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Exp_assist : MonoBehaviour
{
    private float min;
    private Vector3 direction;
    public float speed = 1;
    private GameObject actor;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(findexppo());
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void FixedUpdate()
    {
        move();

    }


    void move()
    {
        this.transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);
    }

    IEnumerator findexppo()
    {
        if (GameObject.FindWithTag("player") != null|| GameObject.FindWithTag("puppetexplosion")!=null|| GameObject.FindWithTag("skill") != null)

        {
           if(GameObject.FindWithTag("player") != null)
            actor = GameObject.FindWithTag("player");
           else if (GameObject.FindWithTag("puppetexplosion") != null)
                actor = GameObject.FindWithTag("puppetexplosion");
           else
                actor = GameObject.FindWithTag("skill");

            for (; ; )
            {
                yield return new WaitForSeconds(1);

                if (Vector3.Distance(actor.transform.position, transform.position) < 10f)

                {
                    if (GameObject.FindWithTag("exp") != null)

                    {
                        if (GameObject.FindGameObjectsWithTag("exp") != null)
                        {
                            GameObject[] targets = GameObject.FindGameObjectsWithTag("exp");
                            //foreach (GameObject traget in targets
                            min = Vector3.Distance(targets[0].transform.position, this.transform.position);
                            direction = (targets[0].transform.position - this.transform.position);
                            for (int i = 1; i < targets.Length; i++)
                            {
                                if (min > Vector3.Distance(targets[i].transform.position, this.transform.position))
                                {
                                    min = Vector3.Distance(targets[i].transform.position, this.transform.position);
                                    direction = (targets[i].transform.position - this.transform.position);
                                }

                            }
                        }

                    }
                    else
                    {
                        if (Vector3.Distance(actor.transform.position, transform.position) > 1f)
                        { direction = (actor.transform.position - transform.position) * Random.Range(1, 2f); }
                    }
                }
                else
                { direction = (actor.transform.position - transform.position) * Random.Range(1, 2f); }
                yield return null;
            }
        }
        else
        {
            yield return new WaitForSeconds(1f);

            StartCoroutine(wait_find_actor());

        }

    }

    IEnumerator wait_find_actor()
    {
        yield return new WaitForSeconds(1f);
       for (; GameObject.FindWithTag("player")==null;)
          
        {
            yield return new WaitForSeconds(2f);
         
        }
        yield return new WaitForSeconds(1f);
        StartCoroutine(findexppo());
    
    }
}

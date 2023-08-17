using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Energyballskill1 : MonoBehaviour
{ public float time = 3;
    public float radius = 3;
    private GameObject soundexplosion;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(skilltime());
        soundexplosion = GameObject.FindWithTag("soundexplosion");

    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator skilltime()
    {
        this.GetComponent<CircleCollider2D>().isTrigger =true;
        yield return new WaitForSeconds(0.5f);
       this.GetComponent<CircleCollider2D>().isTrigger = false;
        yield return new WaitForSeconds(time-0.5f);
        this.GetComponent<CircleCollider2D>().radius = radius*Skillcontrol.skillbounds_ef[0];
        int i = Random.Range(0, soundexplosion.transform.childCount);
        soundexplosion.transform.GetChild(i).GetComponent<AudioSource>().Play();

       
        
    }
}

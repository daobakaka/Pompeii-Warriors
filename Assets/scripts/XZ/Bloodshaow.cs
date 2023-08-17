using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bloodshaow : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject monstet;
    public float duration=15;
    private float tc;
    void Start()
    {
        StartCoroutine(bloodsdestory());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        shadoweffcts();
    }



    void shadoweffcts()
    {
        if (gameObject != null)

        {
                tc += Time.deltaTime / duration;
               this.gameObject.GetComponent<SpriteRenderer>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(0.5f, 1, 1, 0), tc);
            }
     }
    IEnumerator bloodsdestory()
    {
        yield return new WaitForSeconds(8);
        Destroy(this.gameObject);
    }
}

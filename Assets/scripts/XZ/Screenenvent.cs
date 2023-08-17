using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;


public class Screenenvent : MonoBehaviour
{
    // Start is called before the first frame update
    public Sprite[] bloods;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator screenblood()
    {
        yield return new WaitForSeconds(0.5f);
        this.GetComponent<Image>().sprite = bloods[Random.Range(0, bloods.Length)];
        for (float tc = 0; tc < 0.5; tc += Time.fixedDeltaTime)
        {
            yield return new WaitForSeconds(Time.fixedDeltaTime);
            this.GetComponent<Image>().color = Color.Lerp(new Color(1, 1, 1, 0), new Color(1, 1, 1, 1), tc);
        }
    }

}

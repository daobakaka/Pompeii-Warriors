using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Bossbloodmontior : MonoBehaviour
{
    // Start is called before the first frame update
    private Slider slider;
    void Start()
    {
        slider = this.transform.GetChild(0).GetComponent<Slider>();
    }

    // Update is called once per frame
    void Update()
    {
        if (slider.value <= 0)
        {
            Destroy(this.gameObject);
        
        }
    }
}

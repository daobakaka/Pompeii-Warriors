using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;

public class Oneclickcheack : MonoBehaviour
{ 
    // Start is called before the first frame update
    void Start()
    {
        this.GetComponent<Button>().onClick.AddListener(oneclick_check);
       // StartCoroutine(oneclicktime_check());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void oneclick_check()
    {

      
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;

public class Oneclick : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        this.GetComponent<Button>().onClick.AddListener(oneclick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
     void oneclick()
    {
        this.transform.parent.gameObject.SetActive(false);
        Time.timeScale = 1;
       // StartCoroutine(oneclicktime());
    
    }
    public void oneclickrecover()
    {
        this.GetComponent<Button>().interactable = true;

    }
    //IEnumerator oneclicktime()
    //{
    //    yield return new WaitForEndOfFrame();
    //    if (this.transform.parent.gameObject.activeSelf == false)
    //    {
    //        this.GetComponent<Button>().interactable = true;
    //        yield return null;
    //    }
      

    //}


}

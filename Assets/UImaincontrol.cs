using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;

public class UImaincontrol : MonoBehaviour
{
    // Start is called before the first frame update

    public Toggle[] toggles;
   public List<Toggle> toggles_assist;
    private int toggle_key, toggle_assit;
    public GameObject paneltalent;
    private bool toggle_use;
    void Start()
    {
        toggle_interactable();
    }

    // Update is called once per frame
    void Update()
    {
       


    }


    void toggle_interactable()//初始化，所有toggle为false
    { for (int i = 0; i < toggles.Length; i++)
        {
            toggles[i].isOn = false;
            
            
            if (toggles[i].interactable == true)
            {
                toggles_assist.Add(toggles[i]);
            }       
        }
    
    }

}

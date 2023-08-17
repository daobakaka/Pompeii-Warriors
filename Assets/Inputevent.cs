
using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Inputevent : MonoBehaviour
{
    [DllImport("User32.dll", EntryPoint = "keybd_event")]
 static extern void keybd_event(
        byte bVk, //虚拟键值 对应按键的ascll码十进制值  
        byte bScan, //0
        int dwFlags, //0 为按下，1按住，2为释放 
        int dwExtraInfo //0
    );


    void Update()
    {
       
    }

    public void input_enter()
    {
        Debug.Log("已输入回车1");
        keybd_event(35, 0, 1, 0);
        Debug.Log("已输入回车2" );
    }
}


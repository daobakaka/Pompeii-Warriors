
using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Inputevent : MonoBehaviour
{
    [DllImport("User32.dll", EntryPoint = "keybd_event")]
 static extern void keybd_event(
        byte bVk, //�����ֵ ��Ӧ������ascll��ʮ����ֵ  
        byte bScan, //0
        int dwFlags, //0 Ϊ���£�1��ס��2Ϊ�ͷ� 
        int dwExtraInfo //0
    );


    void Update()
    {
       
    }

    public void input_enter()
    {
        Debug.Log("������س�1");
        keybd_event(35, 0, 1, 0);
        Debug.Log("������س�2" );
    }
}


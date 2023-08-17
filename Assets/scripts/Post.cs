using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.IO;

public class Post : MonoBehaviour
{
    // Start is called before the first frame update


    void Start()
    { 
        //StartCoroutine(getinternet());
    }
    
    
    IEnumerator getinternet()
    {
        var url = "https://www.baidu.com";
        var www = UnityWebRequest.Get(url);
        yield return www.SendWebRequest();

        if (www.result== UnityWebRequest.Result.ProtocolError || www.result== UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log(www.downloadHandler.text);
        }
    }
   public void internetpost()
    {
        var url = "https://www.qq.com";
        var www = UnityWebRequest.Get(url);
         www.SendWebRequest();
        if (www.result == UnityWebRequest.Result.ProtocolError || www.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log(www.downloadHandler.text);
        }
       
    }
}

using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;

public class Beatthegame : MonoBehaviour
{
    // Start is called before the first frame update
    public TMP_Text[] records;//1奖励 2、用时 3、得分
    public GameObject trans;
    public GameObject UIpath;
    public GameObject Scenesfadecross_path;
    public GameObject scrollview_path;
    public GameObject hurtstatitics_path;
    //
    public float cachegold;
    public GameObject datacontrol;
    void Start()
    {
        addbuttonlistener();
        StartCoroutine("statistics");
    
    }

    // Update is called once per frame
    void Update()
    {
       
    }
    void getrewards()
    {
        cachegold += int.Parse(records[0].text);
        trans.transform.GetChild(0).GetComponent<Button>().interactable = false;
        datacontrol.transform.GetChild(1).GetComponent<Datasave>().hasgold();
        StopCoroutine("statistics");
        UIpath.GetComponent<UIcontrol>().textprompt("获得枪手币  " + records[0].text);
        records[0].text = "0";

    }
    void nextlevel()
    {
        trans.SetActive(false);
        Scenesfadecross_path.SetActive(true);

        StartCoroutine(nextlevel_assist());

    }
    IEnumerator nextlevel_assist()
    {
        if (Panelcontrol.stamina_num > 0)
        {
            Scenesfadecross_path.GetComponent<Scenesfadecross>().exitscenes_call();
            yield return new WaitForSeconds(2);
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            PlayerPrefs.SetInt("stamina", PlayerPrefs.GetInt("stamina") - 1);
            Panelcontrol.stamina_num--;
        }
        else
        { UIpath.GetComponent<UIcontrol>().textprompt("体力已耗尽，请休息一会再开始冒险吧");
            SceneManager.LoadScene(0);
        }

    }
    void returunmainmenu()
    {
        trans.SetActive(false);
        Scenesfadecross_path.SetActive(true);
        StartCoroutine(returunmainmenu_assist());

    }


    IEnumerator returunmainmenu_assist()
    {
        Scenesfadecross_path.GetComponent<Scenesfadecross>().exitscenes_call();
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(0);
    }
    void addbuttonlistener()
    {
        trans.transform.GetChild(0).GetComponent<Button>().onClick.AddListener(getrewards);
        trans.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(nextlevel);
        trans.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(returunmainmenu);
        trans.transform.GetChild(6).GetComponent<Button>().onClick.AddListener(hurtstatitics);
        hurtstatitics_path.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(closestatistic);

    }
    IEnumerator statistics()
    { for (; Actor1.actorhealth > 0;)
        {
            yield return new WaitForSeconds(3);
            trans.transform.GetChild(4).GetChild(0).GetComponent<TMP_Text>().text = scrollview_path.transform.GetChild(9).GetComponent<TMP_Text>().text;
            trans.transform.GetChild(5).GetChild(0).GetComponent<TMP_Text>().text = Mathf.Floor(UIpath.GetComponent<UIcontrol>().sta).ToString();
            trans.transform.GetChild(3).GetChild(0).GetComponent<TMP_Text>().text = Mathf.Floor((UIpath.GetComponent<UIcontrol>().sta/3000)+UIpath.GetComponent<UIcontrol>().times_record/60+(SceneManager.GetActiveScene().buildIndex-1)*5).ToString();
        }
    }
    void hurtstatitics()//打开统计面板，传输伤害统计数值
    {
        hurtstatitics_path.SetActive(true);
        UIpath.GetComponent<UIcontrol>().stasitccopy();
    }
    void closestatistic()//关闭统计面板
    {
        hurtstatitics_path.SetActive(false);
    }


}

using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;
using WeChatWASM;

public class UIcontrol : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject fireclone;
    public GameObject startobj;
    public GameObject pauseobj;
    public GameObject panleset;
    public TMP_Text textbul;
    public Slider[] sliders;
    //public TMP_Text textbullethurt;
    public TMP_Text exp_level;
    public GameObject actor;
    //
    public GameObject panlechoose;
    public GameObject panlechoose_2b;
    public GameObject panlechoose_2z;
    public GameObject panlechoose_3z;
    public GameObject panlechoose_3b;
    private string[] textarray = new string[100];
   public float sta;
    //����ѡ��
    public TMP_Text[] statisticshurts;
    public GameObject statiscopy_assisit;
    public static int timemanage = 0;
    public Toggle toggletime;
    //
    public GameObject exp_assistbody;
   // private bool exp_assit_bool = false;
   // public GameObject panletest;
    private bool exp_assit_bool = false;
    //
    public GameObject gascontrol;
    public int times_record;//��ʱ��ʱ����������
    public GameObject beatgame;
    //�����ͣ����
    public GameObject textprompt_clone;
    //��ʾ���ֶ���
    public GameObject environmentset_panle;
    //
    private bool rewardgets = false;
    private WXRewardedVideoAd RewardedVideoAd;
    private bool exp_key = true;
    void Start()
    {
        StartCoroutine(timerecord());
        ///.....΢�Ź�����
        WXBase.InitSDK((code) =>
        {
            CreateRewardedVideoAd();
           
        });//��Ӽ�����Ƶ�ؼ�
        adrewardgets(); ;//��ӹ����
        ///..



    }

    // Update is called once per frame
    private void Awake()
    {
        textarray[0] = "�ӵ�����˺�����5 % ";
        textarray[1] = "�ӵ������ٶ�����15 %  ";
        textarray[2] = "�ӵ�������������5 %  ";
        textarray[3] = "�ӵ���ǰ�����˺�����10 % ";
        textarray[4] = "�ӵ������ٶ�����10 %  ";
        textarray[5] = "�ӵ���ϻ��������15 %  ";
        textarray[6] = "�ӵ�����ʱ�����15 %  ";
        textarray[7] = "Ԫ�ش���˺�����10 %  ";
        textarray[97] = "��ѡ����Ĺ���";
        textarray[11] = "����������";
        textarray[12] = "������������";
        textarray[15] = "���滻Ϊ����";
        textarray[99] = "δ֪��ѡ��";

        textarray[21] = "�ӵ���͸������10 % ";
        textarray[22] = "�ӵ������˺�����2��  ";
        textarray[23] = "�ӵ��ӳ��˺�����10 % ";
        textarray[24] = "Ԫ�ػ����˺�����3��  ";
        textarray[25] = "Ԫ�ؼӳ��˺�����15 %  ";
        textarray[26] = "��ը����˺�����20 %����Χ����10 % ";
        textarray[27] = "��ǹ�����˺�����40 % ";
        textarray[28] = "����1ö�ӵ� ";

        textarray[31] = "�����˺�����30%����ը��Χ����10%����ȴʱ������5��";
        textarray[32] = "�����˺�����30%����Χ����10%����ȴʱ������5��";
        textarray[33] = "�����˺�����30%����ȴʱ������5��";
        textarray[34] = "�����˺�����40%����Χ����20%����ȴʱ������5��";
        textarray[35] = "�����ָ�����10%������˺�����20%������ʱ������5�룬��ȴʱ������6��  ";
        textarray[36] = "��������ʱ������2�룬������������3%����ȴʱ������5��";
        textarray[37] = "�����˺�����15%����Χ����10%�� ";
        textarray[38] = "�����˺�����50%����ȴʱ������3��";
        textarray[39] = "��λ����ʱ������2�룬������������3%����ȴʱ������8�� ";

        textarray[41] = "һ�����������忪ʼΧ����";
        textarray[42] = "�ڰ�����꼤�������Ǳ��";
        textarray[43] = "����ܵ���ʥ��ıӻ�";
        textarray[44] = "а���ѪҺ����������ӿ��";
        textarray[45] = "��Ӱ������,���п�����ɶ����ƻ�";
        textarray[46] = "ը��VS�ӵ���˭������";
        textarray[47] = "Ԫ��Χ������";

        textarray[51] = "��ü�������";
        textarray[52] = "��ü�������";
        textarray[53] = "��ü��ܱ���";
        textarray[54] = "��ü�������";
        textarray[55] = "��ü��ָܻ� ";
        textarray[56] = "��ü��ܽ���";
        textarray[57] = "��ü��ܺ���";
        textarray[58] = "��ü��ܺ���";
        textarray[59] = "��ü�����λ ";



    }
    void Update()
    {
        textbullet();
        chagemaganizett();
        slidermaganizemum();
        sliderhealth();
        textlevel();
        expmonitor();
        StartCoroutine(statisticshurtcom());
        rechoosenum_recover();//���ܼ�����
      //  exp_assist();//��������
    }

    public void pause()
    {
        pauseobj.SetActive(false);
        startobj.SetActive(true);
        Time.timeScale = 0;
    }
    public void start()
    {
        pauseobj.SetActive(true);
        startobj.SetActive(false);
        Time.timeScale = 1;
    }
   public void panlesetopen()
    {
        panleset.SetActive(true);
    }
    public void panlesetclose()
    {
        panleset.SetActive(false);
    }
    void sliderhealth()
    {

        sliders[0].value = Actor1.actorhealth;
    }
    void slidermaganizemum()
    {
        
        sliders[1].value = fireclone.GetComponent<Firecontrol>().magazinenum;
    }
    void chagemaganizett()
    {

        sliders[2].value = fireclone.GetComponent<Firecontrol>().ind_changemagazne;
    }
    void textbullet()
    {
        
        textbul.text = fireclone.GetComponent<Firecontrol>().magazinenum.ToString();
    }
    void textlevel()
    {
        exp_level.text =actor.GetComponent<Actor1>().level.ToString();
    }
    void expmonitor()
    {
        sliders[3].value = Actor1.expactor;
    }
   public void textprompt(int a)//��ʾ��������buythings,daysign����ʹ��
    {
        int i = a;
        GameObject root = GameObject.FindWithTag("textprompt");//�Ҹ��ڵ� 
        GameObject clone = Instantiate(textprompt_clone, root.transform);
        clone.transform.position = root.transform.position + new Vector3(0, 1, 0);
        clone.gameObject.GetComponent<Text>().text = textarray[i];
       // root.GetComponent<Text>().color = new Color(1, 1, 1, 1);
      //  StartCoroutine(textprompteffects());

    }
    public void textprompt(string a)
    {
        GameObject root = GameObject.FindWithTag("textprompt");//�Ҹ��ڵ� 
        GameObject clone = Instantiate(textprompt_clone, root.transform);
        clone.transform.position = root.transform.position + new Vector3(0, 1, 0);
        clone.gameObject.GetComponent<Text>().text = a;
        // root.GetComponent<Text>().color = new Color(1, 1, 1, 1);
      //  StartCoroutine(textprompteffects());

    }

    IEnumerator textprompteffects()
    {
        yield return new WaitForSeconds(0.5f);
        GameObject root = GameObject.FindWithTag("textprompt");
        float tc = 0;
        float duration = 3;
        root.GetComponent<Text>().color = new Color(1, 1, 1, 1);
        for (; root.GetComponent<Text>().color.a > 0; tc += Time.deltaTime / duration )
        { root.GetComponent<Text>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(1, 1, 1, 0), tc);//��ɫ���亯��

            
            yield return null;
        
        }       
           // Debug.Log("���");
    }
    IEnumerator statisticshurtcom()//�˺�ͳ��
    {;
        yield return new WaitForSeconds(3f);
        statisticshurts[0].text = Mathf.Floor(Firecontrol.physicshurt).ToString()+ " \n" + Mathf.Floor(Mathf.Floor(Firecontrol.physicshurt) * 100 / sta) + " %";
        statisticshurts[1].text = Mathf.Floor(Firecontrol.magichurt).ToString() + " \n" + Mathf.Floor((Firecontrol.magichurt) * 100 / sta) + " %";
        statisticshurts[2].text = Mathf.Floor(Firecontrol.magicballhurt_skill1).ToString() + " \n" + Mathf.Floor((Firecontrol.magicballhurt_skill1) * 100 / sta) + " %";
        statisticshurts[3].text = Mathf.Floor(Firecontrol.magicbullethurt_skill2).ToString() + " \n" + Mathf.Floor((Firecontrol.magicbullethurt_skill2) * 100 / sta) + " %";
        statisticshurts[4].text = Mathf.Floor(Firecontrol.magiciceandfire_skill3).ToString() + " \n" + Mathf.Floor((Firecontrol.magiciceandfire_skill3) * 100 / sta) + " %";
        statisticshurts[5].text = Mathf.Floor(Firecontrol.magicthunder_skill4).ToString() + " \n" + Mathf.Floor((Firecontrol.magicthunder_skill4) * 100 / sta) + " %";
        statisticshurts[6].text = Mathf.Floor(Firecontrol.magicrecover_skill5).ToString() + " \n" + Mathf.Floor((Firecontrol.magicrecover_skill5) * 100 / sta) + " %";
        statisticshurts[7].text = Mathf.Floor(Firecontrol.magiciceball_skill7).ToString() + " \n" + Mathf.Floor((Firecontrol.magiciceball_skill7) * 100 / sta) + " %";
        statisticshurts[8].text = Mathf.Floor(Firecontrol.magicblackfire_skill8).ToString() + " \n" + Mathf.Floor((Firecontrol.magicblackfire_skill8) * 100 / sta) + " %";
        statisticshurts[9].text = Mathf.Floor(Firecontrol.explosinshoot_2b).ToString() + " \n" + Mathf.Floor((Firecontrol.explosinshoot_2b) * 100 / sta) + " %";
        statisticshurts[10].text = Mathf.Floor(Firecontrol.blackfire_2b).ToString() + " \n" + Mathf.Floor((Firecontrol.blackfire_2b) * 100 / sta) + " %";
        statisticshurts[11].text = Mathf.Floor(Firecontrol.puppet_3z).ToString() + " \n" + Mathf.Floor((Firecontrol.puppet_3z) * 100 / sta) + " %";
        stastic();





    }
    void stastic()//�ܼ�
    {
        sta = Firecontrol.physicshurt + Firecontrol.magichurt + Firecontrol.magicballhurt_skill1 + Firecontrol.magicbullethurt_skill2 + Firecontrol.magiciceandfire_skill3 + Firecontrol.magicthunder_skill4 + Firecontrol.magicrecover_skill5;
        sta = sta + Firecontrol.magiciceball_skill7 + Firecontrol.magicblackfire_skill8 + Firecontrol.explosinshoot_2b + Firecontrol.blackfire_2b + Firecontrol.puppet_3z;
        statisticshurts[12].text = Mathf.Floor(sta).ToString()+ " \n" +   "100 %";

    }
    public void stasitccopy()
    { for (int i = 0; i < statisticshurts.Length; i++)
        {
            statiscopy_assisit.transform.GetChild(i).GetChild(0).GetComponent<TMP_Text>().text = statisticshurts[i].text;       
        }
    }
    public void toogeltimemanage()
    {
        if (toggletime.isOn == true)

            timemanage = 0;
        else
        {
            timemanage = 1;
        }

    }
    public void exp_assist()
    {
        if (exp_assit_bool == true&& exp_key==true)
        {
            GameObject clone = Instantiate(exp_assistbody, null);
            clone.transform.position = actor.transform.position + new Vector3(Random.Range(-3, 3), Random.Range(-3, 3));
            clone.transform.parent = null;
            exp_assit_bool = false;
            exp_key = false;
            GameObject panletest = GameObject.FindWithTag("expbutton");
            panletest.gameObject.SetActive(false);
        }
       
    }
    public void gameexit()

    {
        SceneManager.LoadScene(0);
        Time.timeScale = 1;
    
    }

    IEnumerator timerecord()
    {

        int times=0, timem = 0;
        for (; Actor1.actorhealth > 0;)
        {
            yield return new WaitForSeconds(1);
            times++;
            if (times - 59 > 0)
            {
                timem += 1;
                times -= 60;
            }
            times_record++;
            panleset.transform.GetChild(9).GetComponent<TMP_Text>().text = timem.ToString() + ": " + times.ToString();
        } 
    }
    public void beatthegame()
    { 
    
       beatgame.SetActive(true);

    }
    /// <summary>
    /// ��������Ϸͳ�����
    /// </summary>
    public void environmentset()
    {

        environmentset_panle.SetActive(true);
    }
    public void realhurtstatistic()
    {

        environmentset_panle.SetActive(false);

    }

    /// <summary>
    /// //��������
    /// </summary>
    void rechoosenum_recover()//������ѡ���
    {
        if (rewardgets == true)
        {
            rewardgets = false;
            Panleskilltest.skill_rechoose_num++;

        }
    }
    private void CreateRewardedVideoAd()
    {
        RewardedVideoAd = WXBase.CreateRewardedVideoAd(new WXCreateRewardedVideoAdParam()
        {
            adUnitId = "adunit-afb7c1cc9c260088",
        });
        RewardedVideoAd.OnLoad((res) =>
        {
            Debug.Log("RewardedVideoAd.OnLoad:" + JsonUtility.ToJson(res));
            var reportShareBehaviorRes = RewardedVideoAd.ReportShareBehavior(new RequestAdReportShareBehaviorParam()
            {
                operation = 1,
                currentShow = 1,
                strategy = 0,
                shareValue = res.shareValue,
                rewardValue = res.rewardValue,
                depositAmount = 100,
            });
            Debug.Log("ReportShareBehavior.Res:" + JsonUtility.ToJson(reportShareBehaviorRes));
        });
        RewardedVideoAd.OnError((err) =>
        {
            Debug.Log("RewardedVideoAd.OnError:" + JsonUtility.ToJson(err));
        });
        RewardedVideoAd.OnClose((res) =>
        {
            Debug.Log("RewardedVideoAd.OnClose:" + JsonUtility.ToJson(res));
        });
        RewardedVideoAd.Load();
    }
    public void ShowRewardedVideoAd()
    {
        RewardedVideoAd.Show();
        Time.timeScale = 0;
        //
    }

    public void DestroyRewardedVideoAd()
    {
        RewardedVideoAd.Destroy();
    }
    public void showexpassit()//�������ֹ��
    {
        if (exp_key == true)
        { RewardedVideoAd.Show();
            Time.timeScale = 0;
        }


    }
    private void adrewardgets()
    {
        RewardedVideoAd.OnClose(res =>
        {
            // �û�����ˡ��رչ�桿��ť
            // С�� 2.1.0 �Ļ�����汾��res ��һ�� undefined
            if (res.isEnded || res == null)
            {
                // �������Ž����������·���Ϸ����
                rewardgets = true;
                exp_assit_bool = true;
                Time.timeScale = 1;

            }
            else
            {
                // ������;�˳������·���Ϸ����
                Time.timeScale = 1;
            }
        });
    }

    ///����ء���������
    ///����
    public void sharetime()
    {
        WX.InitSDK((code) => { });

        WX.OnTouchStart((res) =>
        {
            WXCanvas.ToTempFilePath(new WXToTempFilePathParam()
            {
                x = 0,
                y = 0,
                width = 375,
                height = 300,
                destWidth = 375,
                destHeight = 300,
                success = (result) =>
                {
                    Debug.Log("ToTempFilePath success" + JsonUtility.ToJson(result));
                    WX.ShareAppMessage(new ShareAppMessageOption()
                    {
                        title = "һ��ս����",
                        imageUrl = result.tempFilePath,
                    });
                },
                fail = (result) =>
                {
                    Debug.Log("ToTempFilePath fail" + JsonUtility.ToJson(result));
                },
                complete = (result) =>
                {
                    Debug.Log("ToTempFilePath complete" + JsonUtility.ToJson(result));
                },
            });
        });
    }
}

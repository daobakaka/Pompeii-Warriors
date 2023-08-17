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
    //技能选择
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
    public int times_record;//计时器时间秒数管理
    public GameObject beatgame;
    //面板暂停管理
    public GameObject textprompt_clone;
    //提示文字定义
    public GameObject environmentset_panle;
    //
    private bool rewardgets = false;
    private WXRewardedVideoAd RewardedVideoAd;
    private bool exp_key = true;
    void Start()
    {
        StartCoroutine(timerecord());
        ///.....微信广告组件
        WXBase.InitSDK((code) =>
        {
            CreateRewardedVideoAd();
           
        });//添加激励视频控件
        adrewardgets(); ;//添加广告监控
        ///..



    }

    // Update is called once per frame
    private void Awake()
    {
        textarray[0] = "子弹打击伤害增加5 % ";
        textarray[1] = "子弹飞行速度增加15 %  ";
        textarray[2] = "子弹暴击机率增加5 %  ";
        textarray[3] = "子弹当前暴击伤害增加10 % ";
        textarray[4] = "子弹发射速度增加10 %  ";
        textarray[5] = "子弹弹匣容量增加15 %  ";
        textarray[6] = "子弹换弹时间减少15 %  ";
        textarray[7] = "元素打击伤害增加10 %  ";
        textarray[97] = "请选择你的故事";
        textarray[11] = "技能已满级";
        textarray[12] = "请先提升暴击";
        textarray[15] = "已替换为暴击";
        textarray[99] = "未知的选择";

        textarray[21] = "子弹穿透率提升10 % ";
        textarray[22] = "子弹基础伤害提升2点  ";
        textarray[23] = "子弹加成伤害提升10 % ";
        textarray[24] = "元素基础伤害提升3点  ";
        textarray[25] = "元素加成伤害提升15 %  ";
        textarray[26] = "爆炸射击伤害提升20 %，范围提升10 % ";
        textarray[27] = "黑枪持续伤害提升40 % ";
        textarray[28] = "增加1枚子弹 ";

        textarray[31] = "脉冲伤害提升30%，爆炸范围增加10%，冷却时间缩减5秒";
        textarray[32] = "能量伤害提升30%，范围增加10%，冷却时间缩减5秒";
        textarray[33] = "冰火伤害提升30%，冷却时间缩减5秒";
        textarray[34] = "落雷伤害提升40%，范围增加20%，冷却时间缩减5秒";
        textarray[35] = "生命恢复增加10%，造成伤害增加20%，持续时间增加5秒，冷却时间缩减6秒  ";
        textarray[36] = "进击持续时间增加2秒，永久免伤提升3%，冷却时间缩减5秒";
        textarray[37] = "寒冰伤害增加15%，范围增加10%。 ";
        textarray[38] = "黑炎伤害增加50%，冷却时间缩减3秒";
        textarray[39] = "相位持续时间增加2秒，永久免伤提升3%，冷却时间缩减8秒 ";

        textarray[41] = "一个永恒能量体开始围绕你";
        textarray[42] = "黑暗的灵魂激发了你的潜能";
        textarray[43] = "你感受到了圣光的庇护";
        textarray[44] = "邪恶的血液在你身体里涌动";
        textarray[45] = "绝影虽无踪,但有可能造成短暂哑火";
        textarray[46] = "炸弹VS子弹，谁更厉害";
        textarray[47] = "元素围绕着你";

        textarray[51] = "获得技能脉冲";
        textarray[52] = "获得技能能量";
        textarray[53] = "获得技能冰火";
        textarray[54] = "获得技能落雷";
        textarray[55] = "获得技能恢复 ";
        textarray[56] = "获得技能进击";
        textarray[57] = "获得技能寒冰";
        textarray[58] = "获得技能黑炎";
        textarray[59] = "获得技能相位 ";



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
        rechoosenum_recover();//技能监控组件
      //  exp_assist();//经验助手
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
   public void textprompt(int a)//提示方法，与buythings,daysign搭配使用
    {
        int i = a;
        GameObject root = GameObject.FindWithTag("textprompt");//找根节点 
        GameObject clone = Instantiate(textprompt_clone, root.transform);
        clone.transform.position = root.transform.position + new Vector3(0, 1, 0);
        clone.gameObject.GetComponent<Text>().text = textarray[i];
       // root.GetComponent<Text>().color = new Color(1, 1, 1, 1);
      //  StartCoroutine(textprompteffects());

    }
    public void textprompt(string a)
    {
        GameObject root = GameObject.FindWithTag("textprompt");//找根节点 
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
        { root.GetComponent<Text>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(1, 1, 1, 0), tc);//颜色渐变函数

            
            yield return null;
        
        }       
           // Debug.Log("完成");
    }
    IEnumerator statisticshurtcom()//伤害统计
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
    void stastic()//总计
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
    /// 结束游游戏统计面板
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
    /// //广告监控组件
    /// </summary>
    void rechoosenum_recover()//技能重选监控
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
    public void showexpassit()//经验助手广告
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
            // 用户点击了【关闭广告】按钮
            // 小于 2.1.0 的基础库版本，res 是一个 undefined
            if (res.isEnded || res == null)
            {
                // 正常播放结束，可以下发游戏奖励
                rewardgets = true;
                exp_assit_bool = true;
                Time.timeScale = 1;

            }
            else
            {
                // 播放中途退出，不下发游戏奖励
                Time.timeScale = 1;
            }
        });
    }

    ///广告监控。。。。。
    ///分享
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
                        title = "一起战斗吧",
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

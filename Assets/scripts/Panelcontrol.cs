using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using System;
using WeChatWASM;
using UnityEngine.Rendering.Universal;



public class Panelcontrol : MonoBehaviour
{
    // Start is called before the first frame update
    public static int story;//�ؿ�
    public static int getgold;//���
    public static int honorlevel;//�����ȼ�
    public static int player_corssnum;//��ɫͨ����
    public static string cheatcode;

    //��ǰΪ��ȡ������׼��
    public GameObject paneltemp, goodscar, achieve, post, paneltalent, dysignobj, backmusic, fadecross, panelshoop, rule, stamina, stamina_panle, cheatpanle;
    public Slider myslider, mysliderlight;
    public Toggle Toggle;
    public Light2D lightgl;
    private int numgold;
    public TMP_Text text;//�����ʾ��
    private float uniqetime;
    private int pkey;
    public static int stamina_num;
    public Dropdown dropdown;
    public GameObject UImaincontrol_path, honor_word, music_path;
    public Sprite[][] sprites;
    //public TMP_Text[] texts;
    //
    //  public int[] goods_num;
    public GameObject datacontrol;
    public GameObject inputpath;
    //
    public Sprite[] contentpicture;
    //
    private WXRewardedVideoAd RewardedVideoAd;
    private bool rewardgets = false;
    //
    private int extractkey;
    void Start()
    {
        // StartCoroutine("scenceLightchange",pkey);

        //    for (int i = 0; i < goodscar.transform.childCount; i++)
        //    {
        //        goods_num[i] = int.Parse(goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshPro>().text.ToString());

        //    }
        //}
        contontshopimage();//good �̵��ʼ��
        StartCoroutine(goldnum_visal());
        buybutton();//��ʼ�������������
        UIstarted();
        post_listener();//Ϊ��������Ӽ���
        //Debug.Log("sdasdasdsadsadsad           ....=" + goodscar.transform.childCount);
        stamina_num = PlayerPrefs.GetInt("stamina");

      {
            WXBase.InitSDK((code) =>
        {
            CreateRewardedVideoAd();
            ;
        });//添加激励视频控件
            adrewardgets(); ;//添加广告监控
            Debug.Log("网页条件编译");
        }
    }


    // Update is called once per frame
    void Update()
    {
        uniqetime = Time.fixedTime;
        staminamonitor();
        input_monitor();
        //texteffects();
        rewardsmonitor();//激励奖励监控



    }
    /// <summary>
    /// UI ������ʼ��
    /// </summary>
    void UIstarted()
    {
        for (int i = 0; i < goodscar.transform.childCount; i++)
        {
            if (i != honorlevel)
            {
                goodscar.transform.GetChild(i).GetChild(0).GetComponent<Button>().interactable = false;
            }
            if (i == honorlevel)
            {
                goodscar.transform.GetChild(i).GetChild(0).GetComponent<Button>().interactable = true;
                honor_word.GetComponent<Text>().text = "当前等级:" + goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text;
                goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().color = new Color(1, 1, 0, 1);//��ǰ�����ɫ���
                paneltalent.transform.GetChild(2).GetChild(0).GetComponent<Text>().text = honor_word.GetComponent<Text>().text;//��ɫ����������
                paneltalent.transform.GetChild(2).GetChild(2).GetComponent<TextMeshProUGUI>().text = (honorlevel * 3).ToString() + " %";//�˺��ӳ�
            }
            if (i < honorlevel)
            {
                goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().color = new Color(0, 0, 0, 1);//shop��幺�����α��

            }



        }
    }
    void input_monitor()
    {
        inputpath.GetComponent<TMP_InputField>().text = cheatcode;
    }
    public void openpanel()
    {
        //opnclosewindows.SetActive(true);
        GameObject son = GameObject.Find("Panelmain");//�Ҹ��ڵ�
        GameObject son1 = son.transform.Find("Scrollshop").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son2 = son.transform.Find("paneltemp").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son3 = son.transform.Find("panelgold").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son4 = son.transform.Find("paneltalent").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son5 = son.transform.Find("Dropdown").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son6 = son.transform.Find("panelachieve").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son7 = son.transform.Find("panelpost").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject son8 = son.transform.Find("panelrule").gameObject;//�ӽڵ�����ֻ��һ��һ����
        GameObject son9 = son.transform.Find("panelstamina").gameObject;//�ӽڵ�����ֻ��һ��һ����
        GameObject[] sons = { son1, son2, son3, son4, son5, son6, son7, son8, son9 };
        for (int i = 0; i < sons.Length; i++)
        {

            sons[i].gameObject.SetActive(false);

        }


    }
    public void closepanel_shop()
    {
        panelshoop.gameObject.SetActive(false);
    }

    public void openpanel_shop()
    {
        panelshoop.gameObject.SetActive(true);
    }
    //���ﳵ
    //
    public void closepanel_gold()
    {
        dysignobj.gameObject.SetActive(false);
    }

    public void openpanel_gold()
    {
        dysignobj.gameObject.SetActive(true);
    }
    //ǩ��
    //

    public void openpanel_talent()
    {
        paneltalent.gameObject.SetActive(true);
    }

    public void closepanel_talent()
    {
        paneltalent.gameObject.SetActive(false);
    }
    //�����ɫѡ��
    public void openpanel_set()
    {
        paneltemp.gameObject.SetActive(true);
    }
    public void closepanel_set()
    {
        paneltemp.gameObject.SetActive(false);
    }
    /// <summary>
    /// //��������
    /// </summary>
    /// 

    public void openpanel_achieve()
    {
        achieve.gameObject.SetActive(true);
    }
    public void closepanel_achieve()
    {
        achieve.gameObject.SetActive(false);
    }
    /// <summary>
    /// �ɾ�ϵͳ
    /// 
    /// 
    /// </summary>
    /// 
    public void openpanel_post()
    {
        post.gameObject.SetActive(true);
        cheatcode = null;
        inputpath.GetComponent<TMP_InputField>().text = null;
    }
    public void closepanel_post()
    {
        post.gameObject.SetActive(false);
        cheatcode = null;
        inputpath.GetComponent<TMP_InputField>().text = null;
    }
    /// <summary>
    /// �ʼ�ϵͳ
    /// </summary>
    /// 
    public void openpanel_rule()
    {
        rule.gameObject.SetActive(true);
    }
    public void closepanel_rule()
    {
        rule.gameObject.SetActive(false);
    }
    /// <summary>
    /// ����ϵͳ
    /// 

    public void openpanel_drop()
    {
        dropdown.gameObject.SetActive(true);
    }
    public void closepanel_drop()
    {
        dropdown.gameObject.SetActive(false);
    }
    public void openpanel_staminapanle()
    {
        stamina_panle.gameObject.SetActive(true);
    }
    public void closepanel_staminapanle()
    {
        stamina_panle.gameObject.SetActive(false);
    }
    /// <summary>
    /// �����˵�
    public void setmusicslider()
    {
        float volume = myslider.value;
        backmusic.GetComponent<AudioSource>().volume = volume;//����������
    }
    public void setlightslider()
    {
        float indsity = mysliderlight.value;
       lightgl.GetComponent<Light2D>().intensity = indsity;//����������
    }
    /// <summary>
    /// ������
    /// </summary>
    public void toggleopen()
    {
        if (Toggle.isOn == true)
        {
            dropdown.gameObject.SetActive(true);
        }
        else
        {
            dropdown.gameObject.SetActive(false);
        }
    }
    void staminamonitor()
    {
        stamina.GetComponent<Slider>().value = stamina_num;
    }
    public void getstamina()
    {
        if (PlayerPrefs.GetInt("stamina") < 10)
        { stamina_num++;
            rewardgets = false;
            PlayerPrefs.SetInt("stamina", PlayerPrefs.GetInt("stamina") + 1);

        }
        else
            Debug.Log("体力值已满+" + PlayerPrefs.GetInt("stamina"));
    }
    /// <summary>
    /// �ؿ�ѡ��
    /// </summary>
    public void daysgin()
    {
        GameObject son = GameObject.Find("Panelmain");//�Ҹ��ڵ�
        GameObject son2 = son.transform.Find("panelgold").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject theone = son2.transform.Find("Buttonsign").gameObject;
        if (PlayerPrefs.GetString("hadsign").Equals(PlayerPrefs.GetString("daysign")))//�Ƚ��Ƿ�ǩ��
        {
            theone.GetComponent<Button>().interactable = false;
            textprompt(8);
        }
        else
        {
            getgold += 30;
            PlayerPrefs.SetInt("gold", getgold);//����̳�
            text.text = getgold.ToString();
            PlayerPrefs.SetString("hadsign", DateTime.Now.ToString("yyyy-MM-dd"));
            numgold++;
            textprompt(0);
            theone.GetComponent<Button>().interactable = false;
        }


    }

    public void resgin()
    {
        PlayerPrefs.SetString("hadsign", null);
        GameObject son = GameObject.Find("Panelmain");//�Ҹ��ڵ�
        GameObject son2 = son.transform.Find("panelgold").gameObject;//�ӽڵ�����ֻ��һ��һ������
        GameObject theone = son2.transform.Find("Buttonsign").gameObject;
        theone.GetComponent<Button>().interactable = true;


    }
    public void buythings(int i)
    {
        if (getgold - int.Parse(goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text) >= 0)
        {
            getgold = getgold - int.Parse(goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text);
            PlayerPrefs.SetInt("gold", getgold);//����֮��ıҴ���̳�
            GameObject son = GameObject.Find("Panelmain");//�Ҹ��ڵ�
            GameObject son2 = son.transform.Find("panelgold").gameObject;//�ӽڵ�����ֻ��һ��һ������
            GameObject son3 = son2.transform.Find("Buttongold").gameObject;
            GameObject theone = son3.transform.Find("goldTEXTuniqe").gameObject;
            theone.gameObject.GetComponent<TextMeshProUGUI>().text = getgold.ToString();
            Debug.Log("�ѹ���ɹ�,���ʣ��" + getgold);
            textprompt(1);
            GameObject buysecuss = GameObject.Find("musicselect2");
            buysecuss.GetComponent<AudioSource>().Play();
            goodscar.transform.GetChild(i).GetChild(0).GetComponent<Button>().interactable = false;
            honorlevel++;
            datacontrol.transform.GetChild(1).GetComponent<Prefsdata>().prefs_honor_level();//���������ȼ�
            UIstarted();
        }
        else
        {
            textprompt(2);
            GameObject buysecuss = GameObject.Find("musicselect6");
            buysecuss.GetComponent<AudioSource>().Play();

        }

    }
    //////////////////////        


    void textprompt(int a)//��ʾ��������buythings,daysign����ʹ��
    {
        int i = a;
        GameObject root = GameObject.Find("Panelmain");//�Ҹ��ڵ�
        GameObject prompt = root.transform.Find("Textprompt").gameObject;//�ӽڵ�����ֻ��һ��һ������
        string[] textarray = new string[11];
        textarray[0] = "获得枪手币30，当前剩余" + getgold.ToString();
        textarray[1] = "购买成功，枪手币剩余" + getgold.ToString();
        textarray[2] = "货币不足";
        textarray[3] = "请选择你的故事";
        textarray[4] = "请选择你的角色";
        textarray[5] = "你还不能进入当前故事，请完成前要";
        textarray[6] = "无效的验证码";
        textarray[7] = "兑换成功";
        textarray[8] = "已签到";
        textarray[9] = "体力值不足";
        textarray[10] = "获得枪手币  " + extractkey.ToString();
        prompt.gameObject.GetComponent<Text>().text = textarray[i];
        GameObject son = GameObject.Find("Panelmain");//�Ҹ��ڵ�
        GameObject son2 = son.transform.Find("Textprompt").gameObject;//�ӽڵ�����ֻ��һ��һ������
        son2.gameObject.GetComponent<Textprompt>().texteffects();


    }

    void texteffects()//��ʾ��Ч��������ʹ��,װ�������ֽű�����

    {

        float tc = 0;
        float duration = 3;
        if (gameObject != null)
        {

            tc += Time.deltaTime / duration;
            this.GetComponent<Text>().color = Color.Lerp(new Color(1, 1, 1, 1), new Color(1, 1, 1, 0), tc);//��ɫ���亯��
                                                                                                           // Debug.Log("��ɫΪ" + this.GetComponent<TextMeshProUGUI>().color);
                                                                                                           //this.transform.Translate(0, speed * Time.deltaTime, 0);//����λ��
        }
    }
    public void choosestory()
    {
        story = dropdown.GetComponent<Dropdown>().value + 1;
        Debug.Log("ѡ�񳡾�" + story);
        Debug.Log("��ҹؿ�" + (player_corssnum + 1));

        if (story <= (player_corssnum + 1))
        {
            dropdown.transform.GetChild(1).GetComponent<Image>().color = new Color(0, 1, 0, 1);
        }
        if (story > (player_corssnum + 1))
        {
            dropdown.transform.GetChild(1).GetComponent<Image>().color = new Color(1, 0, 0, 1);

        }

    }
    public void choosesence()

    {
        if (story >= 1)
        {

            if (story <= (player_corssnum + 1))
            {
                if (stamina_num > 0)
                {
                    for (int i = 0; i < UImaincontrol_path.GetComponent<UImaincontrol>().toggles.Length; i++)
                    {
                        if (UImaincontrol_path.GetComponent<UImaincontrol>().toggles[i].isOn == true)
                        {
                            pkey = 1;
                            GameObject son = GameObject.Find("musicalcontrol");//�Ҹ��ڵ�
                            son.gameObject.GetComponent<Musicmain>().musichange();//�ӽڵ�����ֻ��һ��һ������
                            StartCoroutine("ScenceLightchange", pkey);
                            fadecross.SetActive(true);
                            fadecross.GetComponent<Scenesfadecross>().exitscenes_call();
                            //this.Start();
                            Debug.Log("pkey=" + pkey);
                            music_path.transform.GetChild(3).GetComponent<AudioSource>().Play();
                            PlayerPrefs.SetInt("stamina", PlayerPrefs.GetInt("stamina") - 1);
                            stamina_num--;
                            break;

                        }
                        else
                        {
                            textprompt(4);
                            music_path.transform.GetChild(5).GetComponent<AudioSource>().Play();


                        }

                    }


                }


                else
                {
                    textprompt(9);
                    music_path.transform.GetChild(5).GetComponent<AudioSource>().Play();
                }
            }

            else
            {


                textprompt(5);
                music_path.transform.GetChild(5).GetComponent<AudioSource>().Play();

            }
        }
        else
        {
            textprompt(3);
            music_path.transform.GetChild(5).GetComponent<AudioSource>().Play();
        }

    }

    IEnumerator ScenceLightchange(int key)//����Э�̺���
    {
        Debug.Log("key=" + key);
        if (key == 1)
        {
            for (lightgl.intensity = 1f; lightgl.intensity > 0.01f; lightgl.intensity = lightgl.intensity - 0.6f * Time.deltaTime)
            {
                lightgl.intensity = lightgl.intensity + 0.01f * Time.deltaTime;
                yield return null;
            }
            Debug.Log("�ѹر�");
            SceneManager.LoadScene(story);
        }

    }
    void buybutton()//Ϊ��������ί��
    {
        for (int i = 0; i < goodscar.transform.childCount; i++)
        {

            int key = i;
            goodscar.transform.GetChild(i).GetChild(0).GetComponent<Button>().onClick.AddListener(delegate ()
            {
                buythings(key);
            });
        }

    }
    IEnumerator goldnum_visal()//2���رҵı仯
    {
        WaitForSeconds delay = new WaitForSeconds(2);
        yield return null;
        for (; ; )
        {
            getgold = PlayerPrefs.GetInt("gold");
            text.text = getgold.ToString();
            PlayerPrefs.SetInt("gold", getgold);//ǹ�ֱ�2��仯һ��
            yield return delay;


        }
    }

    public void psot_code()
    {
        Input.GetKey(KeyCode.Return);


        textprompt(6);
    }
    void buttonconfer()


    {
        TMP_InputField input = post.transform.GetChild(2).GetComponent<TMP_InputField>();

        if (input.text.Equals("code0clearall") || input.text.Equals("code1givemegold") || input.text.Equals("code2givemehonor") || input.text.Equals("code3givemecrossnum") || input.text.Equals("code4givemestamina") || input.text.Equals("codetempcheat"))

        {
            if (input.text.Equals("code0clearall"))
            {
                PlayerPrefs.SetInt("gold", 0);
                PlayerPrefs.SetInt("honor_level", 0);
                PlayerPrefs.SetInt("player_crossnum", 0);
                PlayerPrefs.SetString("hadsign", null);
                // PlayerPrefs.SetInt("stamina", 10);
                getgold = 0;
                honorlevel = 0;
                player_corssnum = 0;
                textprompt(7);
                post.gameObject.SetActive(false);
            }
            if (input.text.Equals("code1givemegold"))
            {
                PlayerPrefs.SetInt("gold", (PlayerPrefs.GetInt("gold") + 1000));
                textprompt(7);
                post.gameObject.SetActive(false);
            }
            if (input.text.Equals("code2givemehonor"))
            {
                PlayerPrefs.SetInt("honor_level", (PlayerPrefs.GetInt("honor_level") + 5));
                textprompt(7);
                post.gameObject.SetActive(false);
            }
            if (input.text.Equals("code3givemecrossnum"))
            {
                PlayerPrefs.SetInt("player_crossnum", (PlayerPrefs.GetInt("player_crossnum") + 2));
                textprompt(7);
                post.gameObject.SetActive(false);
            }
            if (input.text.Equals("code4givemestamina"))
            { if (stamina_num < 7)
                {
                    stamina_num += 3;
                    textprompt(7);
                }
                post.gameObject.SetActive(false);

            }
            if (input.text.Equals("codetempcheat"))
            {
                cheatpanle.SetActive(true);
                textprompt(7);

            }
            post.transform.GetChild(2).GetComponent<TMP_InputField>().text = null;
        }
        else
        {
            textprompt(6);
            post.transform.GetChild(2).GetComponent<TMP_InputField>().text = null;
        }

    }
    void post_listener()
    {
        post.transform.GetChild(2).GetComponent<TMP_InputField>().onEndEdit.AddListener(delegate { buttonconfer(); });

        // post.transform.GetChild(2).GetComponent<TMP_InputField>().onSubmit.AddListener(delegate { buttonconfer(); });

    }
    void contontshopimage()
    { for (int i = 0; i < 9; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[0];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1 - 0.11f * i, 1, 1, 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "新兵" + (i + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (60 + 5 * i).ToString();
        }
        for (int i = 9; i < 18; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[1];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1, 1 - 0.11f * (i - 9), 1, 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "老兵" + (i - 9 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (100 + 5 * i).ToString();
        }
        for (int i = 18; i < 27; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[2];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1, 1, 1 - 0.11f * (i - 18), 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "守卫" + (i - 18 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (140 + 5 * i).ToString();
        }
        for (int i = 27; i < 36; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[3];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1 - 0.11f * (i - 27), 1, 1, 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "卫士" + (i - 27 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (180 + 5 * i).ToString();
        }
        for (int i = 36; i < 45; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[4];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1, 1 - 0.11f * (i - 36), 1, 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "中将" + (i - 36 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (220 + 5 * i).ToString();
        }
        for (int i = 45; i < 54; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[5];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1, 1, 1 - 0.11f * (i - 45), 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "督军" + (i - 45 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (240 + 5 * i).ToString();
        }
        for (int i = 54; i < 63; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[6];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1 - 0.11f * (i - 54), 1, 1, 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "统领" + (i - 54 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (280 + 5 * i).ToString();
        }
        for (int i = 63; i < 72; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[7];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1, 1 - 0.11f * (i - 63), 1, 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "无名" + (i - 63 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (320 + 5 * i).ToString();
        }
        for (int i = 72; i < 81; i++)
        {
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().sprite = this.contentpicture[8];
            goodscar.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<Image>().color = new Color(1, 1, 1 - 0.11f * (i - 72), 1);
            goodscar.transform.GetChild(i).GetChild(0).GetChild(1).GetComponent<Text>().text = "龙槃" + (i - 72 + 1).ToString();
            goodscar.transform.GetChild(i).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = (360 + 5 * i).ToString();
        }
    }
    public void quitgame()
    {
#if UNITY_EDITOR


        UnityEditor.EditorApplication.isPlaying = false;


#elif UNITY_WEBGL

        UnityEngine.Application.Quit();
#else
UnityEngine.Application.Quit();

#endif

    }
    /// <summary>
    /// /cheat....
    /// </summary>
    public void cheatcross_num()
    {
        player_corssnum++;


    }
    public void cheatgold_num()
    {
        honorlevel += 1;
        UIstarted();

    }

    public void closecheatpanle()
    {

        cheatpanle.SetActive(false);

    }
    //////////.........................作弊界面
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

        {
            RewardedVideoAd.Show();
            
        }
        //

    }

    public void DestroyRewardedVideoAd()
    {
        RewardedVideoAd.Destroy();
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

            }
            else
            {
                // 播放中途退出，不下发游戏奖励
            }
        });
    }
    void rewardsmonitor()
    {
        if (rewardgets == true)

        { stamina_panle.transform.GetChild(2).GetComponent<Button>().interactable = true;
            dysignobj.transform.GetChild(5).GetComponent<Button>().interactable = true;
        }
        else
        { stamina_panle.transform.GetChild(2).GetComponent<Button>().interactable = false;
            dysignobj.transform.GetChild(5).GetComponent<Button>().interactable = false;
        }
    }
    public void extractgold()
    {
        float key = UnityEngine.Random.Range(0, 1f);
        if (key > 0.9f)
        {
            getgold += 30;
            extractkey = 30;
            PlayerPrefs.SetInt("gold", getgold);//����̳�
            text.text = getgold.ToString();
            textprompt(10);
        }
        else if (key > 0.7f && key <= 0.9)
        {
            getgold += 20;
            extractkey = 20;
            PlayerPrefs.SetInt("gold", getgold);//����̳�
            text.text = getgold.ToString();
            textprompt(10);
        }
        else if (key > 0.5f && key <= 0.7)
        {
            getgold += 15;
            extractkey = 15;
            PlayerPrefs.SetInt("gold", getgold);//����̳�
            text.text = getgold.ToString();
            textprompt(10);
        }
        else
        {
            int a = UnityEngine.Random.Range(5, 10);
            getgold += a;
            extractkey = a;
            PlayerPrefs.SetInt("gold", getgold);//����̳�
            text.text = getgold.ToString();
            textprompt(10);
        }
        rewardgets = false;


    }
    ////...............
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
    ////...
}

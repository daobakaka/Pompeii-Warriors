using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using WeChatWASM;

public class Panleskilltest : MonoBehaviour
{
    // Start is called before the first frame update
    //������ɾ����
    public GameObject fircontrol;
    public GameObject panlechoose;
    public GameObject UIpath;
    //
    public List<int> images_real;
    private string[] texts = new string[8];
    private int skill1, skill2, skill3, skillkey;
    public List<Sprite> key;
    private int[] pointer_value = new int[8];
    private int[] skillfixed_assist = new int[8];
    public GameObject scrollviewpath;
    private int exit1, exit2, exit3, exit4, exit5, exit6;
    public List<string> textlist;
    private int key_random;
    //һ�ױ�����
    //public GameObject UIpath_savelist_skillone;
    public GameObject goldenskill_2b_path;
    private string[] texts_2b = new string[8];
   // private int skill1_2b, skill2_2b, skill3_2b, skillkey_2b;
    public List<Sprite> key_2b;
    private int[] pointer_value_2b = new int[8];
    private int[] skillfixed_assist_2b = new int[8];
    private int exit0_2b, exit1_2b, exit2_2b, exit3_2b, exit4_2b, exit5_2b, exit6_2b, exit7_2b;
    public List<string> textlist_2b;
    public GameObject panlechoose_2b;
    //���ױ�����
    public TMP_Text skillcharging;
    public int skillcharging_key;
    public GameObject skillcontrol_2z_path;
    private string[] texts_2z = new string[9];
    public List<Sprite> key_2z;
    public int[] pointer_value_2z = new int[9];
    private int[] skillfixed_assist_2z = new int[9];
    private int exit0_2z, exit1_2z, exit2_2z, exit3_2z, exit4_2z, exit5_2z, exit6_2z, exit7_2z, exit8_2z;
    public List<string> textlist_2z;
    public GameObject panlechoose_2z;
    public GameObject panleskillbutton_path;
    private int testkey, panleskillnum_test;
    public int[] panleskillnum_assist, panleskillnum_assist_index;//����ӳ�似�������֣����ܱ������
    private int panle_2z_i;
    public int panle_2z_pictureCD = 0;
    public List<int> panlechoose_2z_skillindex;
    private int[] panlechoose_2z_skill_array = new int[9];
    //private bool levelup_2z_assist = false;
    //������������
    public GameObject skillcontrol_3z_path, glodenskill_3zpath;
    private string[] texts_3z = new string[3];
    public List<Sprite> key_3z;
    public int[] pointer_value_3z = new int[3];
    private int[] skillfixed_assist_3z = new int[3];
    public List<string> textlist_3z;
    public GameObject panlechoose_3z;
    public GameObject panlefinally_z;
    public bool[] level_3z;
    //������������
    public GameObject goldenskill_3b_path;
    private string[] texts_3b = new string[4];
    public List<Sprite> key_3b;
    public int[] pointer_value_3b = new int[4];
    private int[] skillfixed_assist_3b = new int[4];
    public List<string> textlist_3b;
    public GameObject panlechoose_3b;
    private int exit0_3b, exit1_3b, exit2_3b, exit3_3b;
    //���ױ���
    public static int skill_rechoose_num = 1;
    /// <summary>
   
    void Start()

    {
        for (int i = 0; i < pointer_value.Length; i++)
        {
            pointer_value[i] = 15;
            skillfixed_assist[i] = 0;
            // Debug.Log("++++++++++++++++++++++++++++++++++++"+texts[i]);
            textlist.Add(texts[i]);
            //  Debug.Log("-------------------------------------------"+ this.GetComponent<CacheList>().skillone[i]);
            key.Add(this.GetComponent<CacheList>().skillone[i]);
        }

        for (int i = 0; i < pointer_value_2b.Length; i++)
        {
            pointer_value_2b[i] = 20;
            skillfixed_assist_2b[i] = 0;
            textlist_2b.Add(texts_2b[i]);
            key_2b.Add(this.GetComponent<CacheList>().skilltwo_b[i]);
        }
        for (int i = 0; i < pointer_value_2z.Length; i++)//�����б���ʾ�ַ�
        {
            pointer_value_2z[i] = 20;
            skillfixed_assist_2z[i] = 0;
            textlist_2z.Add(texts_2z[i]);
            key_2z.Add(this.GetComponent<CacheList>().skilltwo_z[i]);
        }
        finallyfunction_2z();//�����ί����
        ///....................................................................................
        for (int i = 0; i < pointer_value_3z.Length; i++)//������������
        {
            pointer_value_3z[i] = 20;
            skillfixed_assist_3z[i] = 0;
            textlist_3z.Add(texts_3z[i]);
            key_3z.Add(this.GetComponent<CacheList>().skillthree_z[i]);
        }
        choosebutton_3z();//ί��
        chooseskill_3z();//ί��
        ///....................................................................................................                     
        for (int i = 0; i < pointer_value_3b.Length; i++)//���ױ������ܳ�ʼ��
        {
            pointer_value_3b[i] = 20;
            skillfixed_assist_3b[i] = 0;//if ����Լ��
            textlist_3b.Add(texts_3b[i]);
            key_3b.Add(this.GetComponent<CacheList>().skillthree_b[i]);
        }
        StartCoroutine("rechoosenum_add");

    }
    void Awake()
    {
        texts[0] = "�ͻ�\n�ӵ�����˺�\n����5 % ";
        texts[1] = "����\n�ӵ������ٶ�\n����15 % ";
        texts[2] = "����\n�ӵ���������\n����5 % ";
        texts[3] = "����\n��ǰ�����˺�\n����5 % ";
        texts[4] = "����\n�ӵ������ٶ�\n����15 % ";
        texts[5] = "����\n�ӵ���ϻ����\n����10 % ";
        texts[6] = "װ��\n�ӵ�����ʱ��\n����20 % ";
        texts[7] = "Ԫ��\nԪ�ش���˺�\n����10 % ";


        texts_2b[0] = "��͸\n�ӵ���͸��\n����10 % ";
        texts_2b[1] = "������ʦ\n�ӵ������˺�\n����2��  ";
        texts_2b[2] = "������ͨ\n�ӵ��ӳ��˺�\n����10 % ";
        texts_2b[3] = "Ԫ�ش�ʦ\nԪ�ػ����˺�\n����3��";
        texts_2b[4] = "Ԫ�ؾ�ͨ\nԪ�ؼӳ��˺�\n����15 % ";
        texts_2b[5] = "����\n�ӵ���������ʱ\n����С��Χ��ը ";
        texts_2b[6] = "��ǹ\n�ӵ����ź���\nȼ����������ɢ ";
        texts_2b[7] = "����\n�ӵ��˺�����\n�ӵ�������1 ";

        //texts_2z[0] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "����һö���ƶ������嵯����ɴ�ΧԪ���˺�������4��";
        //texts_2z[1] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "����ɳ���3�ε������򣬶�;��������ɷ�Χ�˺�������5��  ";
        //texts_2z[2] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "�ٻ�����Ԫ��Χ��������ת���Դ����ĵ�������˺�������20�� ";
        //texts_2z[3] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "ÿ��1������ٻ��ۼ�12ö���ף���ɷ�Χ�˺�������2.5��";
        //texts_2z[4] = "\u3000\u3000\u3000\u3000" + "�ָ�\n " + "\u3000\u3000" + "�ٻ�һ��ÿ��ɳ����ظ�10%Ԫ��ϵ������ֵ�ķ��󣬷����еĵ��˳�����ʧ����ֵ������20�� ";
        //texts_2z[5] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "�ܵ��˺�����70%������˺�����30%��ÿ��ظ�3%Ԫ��ϵ������ֵ,����10�� ";
        //texts_2z[6] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "�ӵ�����ʱ��������ˮ���ĺ����򣬺������������У�����˺�������5�� ";
        //texts_2z[7] = "\u3000\u3000\u3000\u3000" + "����\n " + "\u3000\u3000" + "�ٻ����ף�ͨ�����׵ĵ��˻��ܵ��������˺���ֱ������������20�� ";
        //texts_2z[8] = "\u3000\u3000\u3000\u3000" + "��λ\n " + "\u3000\u3000" + "���򲽷����裬�����ڶ����޵�״̬������5�룬�����ظ�һ������ֵ";

        //texts_3z[0] = "\u3000\u3000\u3000\u3000" + "��Ӱ\n" + "\u3000\u3000" + "�ٻ�һ������30���Ӱ�ӣ��ɼ̳н�ɫ�󲿷����ԣ����������ͷ�Ԫ�ؼ���";
        //texts_3z[1] = "\u3000\u3000\u3000\u3000" + "�۱�\n" + "\u3000\u3000" + "�ٻ�һö�����˵���������Χ������γ�6�δ�Χǿ����ը";
        //texts_3z[2] = "\u3000\u3000\u3000\u3000" + "��ʦ\n" + "\u3000\u3000" + "�����������з��սἼ����ȴʱ�� ";

        //texts_3b[0] = "\u3000\u3000\u3000" + "�޾��ٻ�\n " + "\u3000\u3000" + "���û��һ��������ɫ�������壬�������ͷ����ס�����������";
        //texts_3b[1] = "\u3000\u3000\u3000" + "�ڰ����\n " + "\u3000\u3000" + "���û���˺�����15%���ӵ��˺�����15%��Ԫ���˺�����25%";
        //texts_3b[2] = "\u3000\u3000\u3000" + "����֮��\n " + "\u3000\u3000" + "��������40%��ÿ��ظ�1%Ԫ��ϵ������ֵ";
        //texts_3b[3] = "\u3000\u3000\u3000" + "а��Ѫͳ\n " + "\u3000\u3000" + "33%�������33�������˺� ";

        //texts_2z[0] = "\u3000\u3000" + "����\n " + "\u3000" + "����һö���ƶ������嵯����ɴ�ΧԪ���˺�������4��";
        //texts_2z[1] = "\u3000\u3000" + "����\n " + "\u3000" + "����ɳ���3�ε������򣬶�;��������ɷ�Χ�˺�������5��  ";
        //texts_2z[2] = "\u3000\u3000" + "����\n " + "\u3000" + "�ٻ�����Ԫ��Χ��������ת���Դ����ĵ�������˺�������20�� ";
        //texts_2z[3] = "\u3000\u3000" + "����\n " + "\u3000" + "ÿ��1������ٻ��ۼ�12ö���ף���ɷ�Χ�˺�������2.5��";
        //texts_2z[4] = "\u3000\u3000" + "�ָ�\n " + "\u3000" + "�ٻ�һ��ÿ��ɳ����ظ�10%Ԫ��ϵ������ֵ�ķ��󣬷����еĵ��˳�����ʧ����ֵ������20�� ";
        //texts_2z[5] = "\u3000\u3000" + "����\n " + "\u3000" + "�ܵ��˺�����70%������˺�����30%��ÿ��ظ�3%Ԫ��ϵ������ֵ,����10�� ";
        //texts_2z[6] = "\u3000\u3000" + "����\n " + "\u3000" + "�ӵ�����ʱ��������ˮ���ĺ����򣬺������������У�����˺�������5�� ";
        //texts_2z[7] = "\u3000\u3000" + "����\n " + "\u3000" + "�ٻ����ף�ͨ�����׵ĵ��˻��ܵ��������˺���ֱ������������20�� ";
        //texts_2z[8] = "\u3000\u3000" + "��λ\n " + "\u3000" + "���򲽷����裬�����ڶ����޵�״̬������5�룬�����ظ�һ������ֵ";

        //texts_3z[0] = "\u3000\u3000" + "��Ӱ\n" + "\u3000" + "�ٻ�һ������30���Ӱ�ӣ��ɼ̳н�ɫ�󲿷����ԣ����������ͷ�Ԫ�ؼ���";
        //texts_3z[1] = "\u3000\u3000" + "�۱�\n" + "\u3000" + "�ٻ�һö�����˵���������Χ������γ�6�δ�Χǿ����ը";
        //texts_3z[2] = "\u3000\u3000" + "��ʦ\n" + "\u3000" + "�����������з��սἼ����ȴʱ�� ";

        //texts_3b[0] = "\u3000" + "�޾��ٻ�\n " + "\u3000" + "���û��һ��������ɫ�������壬�������ͷ����ס�����������";
        //texts_3b[1] = "\u3000" + "�ڰ����\n " + "\u3000" + "���û���˺�����15%���ӵ��˺�����15%��Ԫ���˺�����25%";
        //texts_3b[2] = "\u3000" + "����֮��\n " + "\u3000" + "��������40%��ÿ��ظ�1%Ԫ��ϵ������ֵ";
        //texts_3b[3] = "\u3000" + "а��Ѫͳ\n " + "\u3000" + "33%�������33�������˺� ";


        texts_2z[0] = "����\n����һö���ƶ������嵯����ɴ�ΧԪ���˺�������4��";
        texts_2z[1] = "����\n����ɳ���3�ε������򣬶�;��������ɷ�Χ�˺�������5��";
        texts_2z[2] = "����\n�ٻ�����Ԫ��Χ��������ת���Դ����ĵ�������˺�������20��";
        texts_2z[3] = "����\nÿ��1������ٻ��ۼ�12ö���ף���ɷ�Χ�˺�������2.5��";
        texts_2z[4] = "�ָ�\n�ٻ�һ��ÿ��ɳ����ظ�10%Ԫ��ϵ������ֵ�ķ��󣬷����еĵ��˳�����ʧ����ֵ������20��";
        texts_2z[5] = "����\n�ܵ��˺�����70%������˺�����30%��ÿ��ظ�3%Ԫ��ϵ������ֵ,����10��";
        texts_2z[6] = "����\n�ӵ�����ʱ��������ˮ���ĺ����򣬺������������У�����˺�������5��";
        texts_2z[7] = "����\n�ٻ����ף�ͨ�����׵ĵ��˻��ܵ��������˺���ֱ������������20��,���ӿ���";
        texts_2z[8] = "��λ\n���򲽷����裬�����ڶ����޵�״̬������5�룬�����ظ�һ������ֵ";

        texts_3z[0] = "��Ӱ\n�ٻ�һ������30��ĺ�Ӱ���ɼ̳н�ɫ�󲿷����ԣ����������ͷ�Ԫ�ؼ���";
        texts_3z[1] = "�۱�\n�ٻ�һö�����˵���������Χ������γ�6�δ�Χǿ����ը�����ӿ���";
        texts_3z[2] = "��ʦ\n�����������з��սἼ����ȴʱ�� ";

        texts_3b[0] = "�޾��ٻ�\n���û��һ��������ɫ�������壬�������ͷ����ס�����������";
        texts_3b[1] = "�ڰ����\n���û���˺�����10%���ӵ��˺�����15%��Ԫ���˺�����25%";
        texts_3b[2] = "����֮��\n��������30%��ÿ��ظ�1%Ԫ��ϵ������ֵ";
        texts_3b[3] = "а��Ѫͳ\n33%�������33�������˺� ";


    }
    // Update is called once per frame
    void Update()
    {
       
    }
    void choosenum(int a)
    {
        switch (a)
        {
            case 0:
                fircontrol.GetComponent<Firecontrol>().bullethurt();
                break;
            case 1:
                fircontrol.GetComponent<Firecontrol>().bulletspeed();
                break;
            case 2:
                fircontrol.GetComponent<Firecontrol>().criticalhit();
                break;
            case 3:
                fircontrol.GetComponent<Firecontrol>().criticalhitadd();
                break;
            case 4:
                fircontrol.GetComponent<Firecontrol>().shootspeed();
                break;
            case 5:
                fircontrol.GetComponent<Firecontrol>().magazinecapacity();
                break;
            case 6:
                fircontrol.GetComponent<Firecontrol>().changemagazinetime();
                break;
            case 7:
                fircontrol.GetComponent<Firecontrol>().elementlevel();
                break;
        }

    }
    void choosenum_2b(int a)
    {
        switch (a)
        {
            case 0:
                goldenskill_2b_path.GetComponent<Glodenskill>().bulletpenetaete();
                break;
            case 1:
                goldenskill_2b_path.GetComponent<Glodenskill>().weaponmaster();
                break;
            case 2:
                goldenskill_2b_path.GetComponent<Glodenskill>().weaponproffciency();
                break;
            case 3:
                goldenskill_2b_path.GetComponent<Glodenskill>().elementmaster();
                break;
            case 4:
                goldenskill_2b_path.GetComponent<Glodenskill>().elementproffciency();
                break;
            case 5:
                goldenskill_2b_path.GetComponent<Glodenskill>().addspecialeffect1_unreal();//��ը���
                break;
            case 6:
                goldenskill_2b_path.GetComponent<Glodenskill>().addspecialeffect2_unreal();//����ǹ
                break;
            case 7:
                goldenskill_2b_path.GetComponent<Glodenskill>().bulletdivison();//�������
                break;
        }

    }
    void choosenum_3b(int a)
    {
        switch (a)
        {
            case 0:
                goldenskill_3b_path.GetComponent<Glodenskill>().endlisscall();
                break;
            case 1:
                goldenskill_3b_path.GetComponent<Glodenskill>().blacksoul();
                break;
            case 2:
                goldenskill_3b_path.GetComponent<Glodenskill>().endlessshield();
                break;
            case 3:
                goldenskill_3b_path.GetComponent<Glodenskill>().useevilbloodline();
                break;


        }
    }

    /// <summary>
    /// һ�׶α�������ѡ�񡣡�������������������������������������������������������������
    /// </summary>
    public void chooseimage()
    {
        //List<Sprite> images_real = new List<Sprite>();
        if (key.Count > 3)
        { chooseimage_assist(); }
        for (int i = 0; i < key.Count; i++)
        {
            images_real.Add(i);

        }

        // Debug.Log(".....0..." + skill1 + skill2 + skill3 + ".............." + images_real.Count);
        // images_real = this.GetComponent<CacheList>().skillone; //this.GetComponents<CacheList>().
        skill1 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima1 = panlechoose.transform.GetChild(0).gameObject;
        GameObject text1 = panlechoose.transform.GetChild(0).GetChild(0).gameObject;
        //ͼƬ�滻�������滻��ʹ�÷���
        ima1.GetComponent<Image>().sprite = key[skill1];
        text1.GetComponent<Text>().text = textlist[skill1];
        images_real.Remove(skill1);
        //��һ�γ�ȡ
        skill2 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima2 = panlechoose.transform.GetChild(1).gameObject;
        GameObject text2 = panlechoose.transform.GetChild(1).GetChild(0).gameObject;
        ima2.GetComponent<Image>().sprite = key[skill2];
        text2.GetComponent<Text>().text = textlist[skill2];
        images_real.Remove(skill2);
        //ͼƬ�滻�������滻��ʹ�÷���
        //�ڶ��γ�ȡ
        skill3 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima3 = panlechoose.transform.GetChild(2).gameObject;
        GameObject text3 = panlechoose.transform.GetChild(2).GetChild(0).gameObject;
        ima3.GetComponent<Image>().sprite = key[skill3];
        text3.GetComponent<Text>().text = textlist[skill3];
        Debug.Log(".....3...." + skill1 + skill2 + skill3 + "....." + skillkey + ".............." + images_real.Count);
        images_real.RemoveRange(0, images_real.Count);

    }
    public void chossebutton1()
    {
        choosebutton_assist1();
        choosenum(skill1);
        for (int i = 0; i < 8; i++)
        {
            if (i == skill1)
            {
                fircontrol.GetComponent<Firecontrol>().chooseskilllevel(skill1);
                scrollviewpath.transform.GetChild(i).GetChild(0).GetComponent<Text>().text = fircontrol.GetComponent<Firecontrol>().skilltext.ToString();
                break;
            }
        }

    }
    //����ѡ����ӳ�䵽 ����˵����ϣ�
    public void chossebutton2()
    {
        choosebutton_assist2();
        choosenum(skill2);
        for (int i = 0; i < 8; i++)
        {
            if (i == skill2)
            {
                fircontrol.GetComponent<Firecontrol>().chooseskilllevel(skill2);
                scrollviewpath.transform.GetChild(i).GetChild(0).GetComponent<Text>().text = fircontrol.GetComponent<Firecontrol>().skilltext.ToString();
                break;
            }
        }
    }

    public void chossebutton3()
    {
        choosebutton_assist3();
        choosenum(skill3);
        for (int i = 0; i < 8; i++)
        {
            if (i == skill3)
            {
                fircontrol.GetComponent<Firecontrol>().chooseskilllevel(skill3);
                scrollviewpath.transform.GetChild(i).GetChild(0).GetComponent<Text>().text = fircontrol.GetComponent<Firecontrol>().skilltext.ToString();
                break;
            }
        }
    }
    public void choosenum_auto1()//�Զ�ѡ�����һ�׼���
    {
        int i;
        int ic = 0;
        int[] charge = fircontrol.GetComponent<Firecontrol>().skilllevelfixed;
        for (; ic == 0;)
        {
            i = Random.Range(0, 8);
            switch (i)
            {
                case 0:
                    if (charge[0] < 100)
                    {
                        choosenum(0);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 1:
                    if (charge[1] < 10)
                    {
                        choosenum(1);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 2:
                    if (charge[2] < 20)
                    {
                        choosenum(2);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 3:
                    if (charge[3] < 100)
                    {
                        choosenum(3);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 4:
                    if (charge[4] < 10)
                    {
                        choosenum(4);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 5:
                    if (charge[5] < 10)
                    {
                        choosenum(5);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 6:
                    if (charge[6] < 10)
                    {
                        choosenum(6);
                        ic++;
                        key_random = i;
                    }
                    break;
                case 7:
                    if (charge[7] < 100)
                    {
                        choosenum(7);
                        ic++;
                        key_random = i;
                    }
                    break;
            }
        }
        Debug.Log("ѡ���ܺ���=����������������������������������" + key_random);
        fircontrol.GetComponent<Firecontrol>().chooseskilllevel(key_random);
        scrollviewpath.transform.GetChild(key_random).GetChild(0).GetComponent<Text>().text = fircontrol.GetComponent<Firecontrol>().skilltext.ToString();

    }

    void choosebutton_assist1()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill1; i++)

        {
            if (skill1 > pointer_value[i])
                skill1++;
            // Debug.Log("skill1=..." + skill1+"pointer=...."+ pointer_value[i]);
        }
    }
    void choosebutton_assist2()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill2; i++)

        {
            if (skill2 > pointer_value[i])
                skill2++;
            // Debug.Log("skill2=..." + skill2 + "pointer=...." + pointer_value[i]);
        }
    }
    void choosebutton_assist3()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill3; i++)

        {
            if (skill3 > pointer_value[i])
                skill3++;
            // Debug.Log("skill3=..." + skill3 + "pointer=...." + pointer_value[i]);
        }
    }

    void chooseimage_assist()//�ж����� �Ƴ���������
    {
        if (fircontrol.GetComponent<Firecontrol>().skilllevelfixed[1] >= 10 && skillfixed_assist[1] == 0)
        {
            key.RemoveAt(1);
            textlist.RemoveAt(1);
            pointer_value[1] = 0;
            exit1 = 1;
            skillfixed_assist[1] = 1;
            Debug.Log("............�Ƴ����䡣������.........");
        }
        if (fircontrol.GetComponent<Firecontrol>().skilllevelfixed[2] >= 20 && skillfixed_assist[2] == 0)
        {
            key.RemoveAt(2 - exit1);
            textlist.RemoveAt(2 - exit1);
            pointer_value[2] = 0;
            exit2 = 1;
            skillfixed_assist[2] = 1;
            Debug.Log("............�Ƴ�������������.........");
        }
        if (fircontrol.GetComponent<Firecontrol>().skilllevelfixed[3] >= 100 && skillfixed_assist[3] == 0)
        {
            key.RemoveAt(3 - exit2 - exit1);
            textlist.RemoveAt(3 - exit2 - exit1);
            pointer_value[3] = 0;
            exit3 = 1;
            skillfixed_assist[3] = 1;
            Debug.Log("............�Ƴ����ˡ�������.........");
        }
        if (fircontrol.GetComponent<Firecontrol>().skilllevelfixed[4] >= 10 && skillfixed_assist[4] == 0)
        {
            key.RemoveAt(4 - exit3 - exit2 - exit1);
            textlist.RemoveAt(4 - exit3 - exit2 - exit1);
            pointer_value[4] = 0;
            exit4 = 1;
            skillfixed_assist[4] = 1;
            Debug.Log("............�Ƴ����١�������.........");
        }
        if (fircontrol.GetComponent<Firecontrol>().skilllevelfixed[5] >= 10 && skillfixed_assist[5] == 0)
        {
            key.RemoveAt(5 - exit4 - exit3 - exit2 - exit1);
            textlist.RemoveAt(5 - exit4 - exit3 - exit2 - exit1);
            pointer_value[5] = 0;
            exit5 = 1;
            skillfixed_assist[5] = 1;
            Debug.Log("............�Ƴ���ϻ��������.........");
        }
        if (fircontrol.GetComponent<Firecontrol>().skilllevelfixed[6] >= 10 && skillfixed_assist[6] == 0)
        {
            key.RemoveAt(6 - exit5 - exit4 - exit3 - exit2 - exit1);
            textlist.RemoveAt(6 - exit5 - exit4 - exit3 - exit2 - exit1);
            pointer_value[6] = 0;
           // exit6 = 1;
            skillfixed_assist[6] = 1;
            Debug.Log("............�Ƴ�������������.........");
        }
    }
    /// <summary>
    /// ���ױ�������ѡ�񡣡�������������������������������������������������������������������������������������������������������������������������������
    /// </summary>
    public void chooseimage_2b()
    {
        if (key_2b.Count > 3)
        {

            chooseimage_assist_2b();
        }
        for (int i = 0; i < key_2b.Count; i++)
        {
            images_real.Add(i);

        }
        skill1 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima1 = panlechoose_2b.transform.GetChild(0).gameObject;
        GameObject text1 = panlechoose_2b.transform.GetChild(0).GetChild(0).gameObject;
        //ͼƬ�滻�������滻��ʹ�÷���
        ima1.GetComponent<Image>().sprite = key_2b[skill1];
        text1.GetComponent<Text>().text = textlist_2b[skill1];
        images_real.Remove(skill1);
        //��һ�γ�ȡ
        skill2 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima2 = panlechoose_2b.transform.GetChild(1).gameObject;
        GameObject text2 = panlechoose_2b.transform.GetChild(1).GetChild(0).gameObject;
        ima2.GetComponent<Image>().sprite = key_2b[skill2];
        text2.GetComponent<Text>().text = textlist_2b[skill2];
        images_real.Remove(skill2);
        //ͼƬ�滻�������滻��ʹ�÷���
        //�ڶ��γ�ȡ
        skill3 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima3 = panlechoose_2b.transform.GetChild(2).gameObject;
        GameObject text3 = panlechoose_2b.transform.GetChild(2).GetChild(0).gameObject;
        ima3.GetComponent<Image>().sprite = key_2b[skill3];
        text3.GetComponent<Text>().text = textlist_2b[skill3];
        Debug.Log(".....3...." + skill1 + skill2 + skill3 + "....." + skillkey + ".............." + images_real.Count);
        images_real.RemoveRange(0, images_real.Count);
    }
    public void chossebutton1_2b()
    {
        choosebutton_assist1_2b();
        choosenum_2b(skill1);
        for (int i = 0; i < 8; i++)
        {
            if (i == skill1)
            {
                goldenskill_2b_path.GetComponent<Glodenskill>().chooseskilllevel_2b(skill1);
                scrollviewpath.transform.GetChild(i + 8).GetChild(0).GetComponent<Text>().text = goldenskill_2b_path.GetComponent<Glodenskill>().skilltext.ToString();
                break;
            }
        }
    }
    //����ѡ����ӳ�䵽 ����˵����ϣ�
    public void chossebutton2_2b()
    {
        choosebutton_assist2_2b();
        choosenum_2b(skill2);
        for (int i = 0; i < 8; i++)
        {
            if (i == skill2)
            {
                goldenskill_2b_path.GetComponent<Glodenskill>().chooseskilllevel_2b(skill2);
                scrollviewpath.transform.GetChild(i + 8).GetChild(0).GetComponent<Text>().text = goldenskill_2b_path.GetComponent<Glodenskill>().skilltext.ToString();
                break;
            }
        }

    }
    public void chossebutton3_2b()
    {
        choosebutton_assist3_2b();
        choosenum_2b(skill3);
        for (int i = 0; i < 8; i++)
        {
            if (i == skill3)
            {
                goldenskill_2b_path.GetComponent<Glodenskill>().chooseskilllevel_2b(skill3);
                scrollviewpath.transform.GetChild(i + 8).GetChild(0).GetComponent<Text>().text = goldenskill_2b_path.GetComponent<Glodenskill>().skilltext.ToString();
                break;
            }
        }

    }
    void chooseimage_assist_2b()//�ж����� �Ƴ���������
    {
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[0] >= 4 && skillfixed_assist_2b[0] == 0)
        {
            key_2b.RemoveAt(0);
            textlist_2b.RemoveAt(0);
            pointer_value_2b[0] = 0;
            exit0_2b = 1;
            skillfixed_assist_2b[0] = 1;
            Debug.Log("............�Ƴ���͸��������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[1] >= 4 && skillfixed_assist_2b[1] == 0)
        {
            key_2b.RemoveAt(1 - exit0_2b);
            textlist_2b.RemoveAt(1 - exit0_2b);
            pointer_value_2b[1] = 0;
            exit1_2b = 1;
            skillfixed_assist_2b[1] = 1;
            Debug.Log("............�Ƴ�������ʦ��������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[2] >= 4 && skillfixed_assist_2b[2] == 0)
        {
            key_2b.RemoveAt(2 - exit1_2b - exit0_2b);
            textlist_2b.RemoveAt(2 - exit1_2b - exit0_2b);
            pointer_value_2b[2] = 0;
            exit2_2b = 1;
            skillfixed_assist_2b[2] = 1;
            Debug.Log("............�Ƴ�������ͨ��������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[3] >= 4 && skillfixed_assist_2b[3] == 0)
        {
            key_2b.RemoveAt(3 - exit2_2b - exit1_2b - exit0_2b);
            textlist_2b.RemoveAt(3 - exit2_2b - exit1_2b - exit0_2b);
            pointer_value_2b[3] = 0;
            exit3_2b = 1;
            skillfixed_assist_2b[3] = 1;
            Debug.Log("............�Ƴ�Ԫ�ش�ʦ��������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[4] >= 4 && skillfixed_assist_2b[4] == 0)
        {
            key_2b.RemoveAt(4 - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            textlist_2b.RemoveAt(4 - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            pointer_value_2b[4] = 0;
            exit4_2b = 1;
            skillfixed_assist_2b[4] = 1;
            Debug.Log("............�Ƴ�Ԫ�ؾ�ͨ��������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[5] >= 4 && skillfixed_assist_2b[5] == 0)
        {
            key_2b.RemoveAt(5 - exit4_2b - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            textlist_2b.RemoveAt(5 - exit4_2b - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            pointer_value_2b[5] = 0;
            exit5_2b = 1;
            skillfixed_assist_2b[5] = 1;
            Debug.Log("............�Ƴ���ը�����������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[6] >= 4 && skillfixed_assist_2b[6] == 0)
        {
            key_2b.RemoveAt(6 - exit5_2b - exit4_2b - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            textlist_2b.RemoveAt(6 - exit5_2b - exit4_2b - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            pointer_value_2b[6] = 0;
            exit6_2b = 1;
            skillfixed_assist_2b[6] = 1;
            Debug.Log("............�Ƴ�����ǹ��������.........");
        }
        if (goldenskill_2b_path.GetComponent<Glodenskill>().skilllevelfixed[7] >= 4 && skillfixed_assist_2b[7] == 0)
        {
            key_2b.RemoveAt(7 - exit6_2b - exit5_2b - exit4_2b - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            textlist_2b.RemoveAt(7 - exit6_2b - exit5_2b - exit4_2b - exit3_2b - exit2_2b - exit1_2b - exit0_2b);
            pointer_value_2b[7] = 0;
           // exit7_2b = 1;
            skillfixed_assist_2b[7] = 1;
            Debug.Log("............�Ƴ����������������.........");
        }
    }
    void choosebutton_assist1_2b()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill1; i++)

        {
            if (skill1 >= pointer_value_2b[i])
                skill1++;
        }
    }
    void choosebutton_assist2_2b()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill2; i++)
        {
            if (skill2 >= pointer_value_2b[i])
                skill2++;
        }
    }
    void choosebutton_assist3_2b()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill3; i++)
        {
            if (skill3 >= pointer_value_2b[i])
                skill3++;
        }
    }
    /// <summary>
    ///������������ѡ�񡣡�����������������������������������������������������
    /// </summary>
    public void chooseimage_2z()
    {
        if (key_2z.Count > 3)
        {

            chooseimage_assist_2z();
        }
        for (int i = 0; i < key_2z.Count; i++)
        {
            images_real.Add(i);

        }
        skill1 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima1 = panlechoose_2z.transform.GetChild(0).gameObject;
        GameObject text1 = panlechoose_2z.transform.GetChild(0).GetChild(0).gameObject;
        //ͼƬ�滻�������滻��ʹ�÷���
        ima1.GetComponent<Image>().sprite = key_2z[skill1];
        text1.GetComponent<Text>().text = textlist_2z[skill1];
        images_real.Remove(skill1);
        //��һ�γ�ȡ
        skill2 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima2 = panlechoose_2z.transform.GetChild(1).gameObject;
        GameObject text2 = panlechoose_2z.transform.GetChild(1).GetChild(0).gameObject;
        ima2.GetComponent<Image>().sprite = key_2z[skill2];
        text2.GetComponent<Text>().text = textlist_2z[skill2];
        images_real.Remove(skill2);
        //ͼƬ�滻�������滻��ʹ�÷���
        //�ڶ��γ�ȡ
        skill3 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima3 = panlechoose_2z.transform.GetChild(2).gameObject;
        GameObject text3 = panlechoose_2z.transform.GetChild(2).GetChild(0).gameObject;
        ima3.GetComponent<Image>().sprite = key_2z[skill3];
        text3.GetComponent<Text>().text = textlist_2z[skill3];
        Debug.Log(".....3...." + skill1 + skill2 + skill3 + "....." + skillkey + ".............." + images_real.Count);
        images_real.RemoveRange(0, images_real.Count);

    }
    public void chossebutton1_2z()
    {
        choosebutton_assist1_2z();
        for (panle_2z_i = 0; panle_2z_i <= 8; panle_2z_i++)
        {
            if (panleskillbutton_path.transform.GetChild(panle_2z_i).GetComponent<Image>().sprite == this.GetComponent<CacheList>().skilltwo_z[skill1] && panleskillnum_assist[panle_2z_i] < 4)
            {
                panleskillnum_assist[panle_2z_i] += 1;
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(1).GetComponent<TMP_Text>().text = (panleskillnum_assist[panle_2z_i]).ToString();
                panleskillnum_test = panle_2z_i;
                panleskillnum_assist_index[skill1] = panleskillnum_assist[panle_2z_i];
                panlechoose_2zcolor(panleskillnum_assist[panle_2z_i]);
                levelup_2z(skill1);
                UIpath.GetComponent<UIcontrol>().textprompt(31 + skill1);
                break;
            }
            panleskillnum_test = panle_2z_i;
        }
        // Debug.Log("testkey=......................" + panleskillnum_test);
        for (int i = 0; i <= 8; i++)
        {
            if (panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().sprite == null && i <= panleskillnum_test)
            {
                panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().sprite = this.GetComponent<CacheList>().skilltwo_z[skill1];
                panleskillbutton_path.transform.GetChild(i).GetComponent<Button>().interactable = true; 
                panleskillbutton_path.transform.GetChild(i).GetChild(1).GetComponent<TMP_Text>().text = panleskillnum_assist[i].ToString();
                panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                panlechoose_2z_skillindex.Add(skill1);
                change_finallyfunction_2z();
                finallyfunction_2z();
                addCDpicture(skill1);
                panle_2z_pictureCD++;
                if (skill1 == 1)
                {
                    GameObject clone = Instantiate(skillcharging.transform.gameObject, panleskillbutton_path.transform.GetChild(i).transform);
                    clone.transform.parent = panleskillbutton_path.transform.GetChild(i).transform;
                    clone.GetComponent<TMP_Text>().color = new Color(1, 1, 1, 1);
                    skillcharging_key = i;
                    Debug.Log("���Ƴ��ܴ�����������������������������");
                }
                UIpath.GetComponent<UIcontrol>().textprompt(51 + skill1);
                break;
            }
        }
        Time.timeScale = 1;
        panlechoose_2z.gameObject.SetActive(false);
        panleskillnum_test = 0;

    }
    //����ѡ����ӳ�䵽 UI �������ϣ�
    public void chossebutton2_2z()
    {
        choosebutton_assist2_2z();
        for (panle_2z_i = 0; panle_2z_i <= 8; panle_2z_i++)
        {
            if (panleskillbutton_path.transform.GetChild(panle_2z_i).GetComponent<Image>().sprite == this.GetComponent<CacheList>().skilltwo_z[skill2] && panleskillnum_assist[panle_2z_i] < 4)
            {
                panleskillnum_assist[panle_2z_i] += 1;
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(1).GetComponent<TMP_Text>().text = (panleskillnum_assist[panle_2z_i]).ToString();
                panleskillnum_test = panle_2z_i;
                panleskillnum_assist_index[skill2] = panleskillnum_assist[panle_2z_i];
                panlechoose_2zcolor(panleskillnum_assist[panle_2z_i]);
                levelup_2z(skill2);
                UIpath.GetComponent<UIcontrol>().textprompt(31 + skill2);
                break;
            }
            panleskillnum_test = panle_2z_i;
        }
        // Debug.Log("testkey=......................" + panleskillnum_test);
        for (int i = 0; i <= 8; i++)
        {
            if (panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().sprite == null && i <= panleskillnum_test)
            {
                panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().sprite = this.GetComponent<CacheList>().skilltwo_z[skill2];
                panleskillbutton_path.transform.GetChild(i).GetComponent<Button>().interactable = true;
                panleskillbutton_path.transform.GetChild(i).GetChild(1).GetComponent<TMP_Text>().text = panleskillnum_assist[i].ToString();
                panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                panlechoose_2z_skillindex.Add(skill2);
                change_finallyfunction_2z();
                finallyfunction_2z();
                addCDpicture(skill2);
                panle_2z_pictureCD++;
                if (skill2 == 1)
                {
                    GameObject clone = Instantiate(skillcharging.transform.gameObject, panleskillbutton_path.transform.GetChild(i).transform);
                    clone.transform.parent = panleskillbutton_path.transform.GetChild(i).transform;
                    clone.GetComponent<TMP_Text>().color = new Color(1, 1, 1, 1);
                    skillcharging_key = i;
                    Debug.Log("���Ƴ��ܴ�����������������������������");
                }
                UIpath.GetComponent<UIcontrol>().textprompt(51 + skill2);
                break;
            }
        }
        Time.timeScale = 1;
        panlechoose_2z.gameObject.SetActive(false);
        panleskillnum_test = 0;

    }
    public void chossebutton3_2z()
    {
        choosebutton_assist3_2z();
        for (panle_2z_i = 0; panle_2z_i <= 8; panle_2z_i++)
        {
            if (panleskillbutton_path.transform.GetChild(panle_2z_i).GetComponent<Image>().sprite == this.GetComponent<CacheList>().skilltwo_z[skill3] && panleskillnum_assist[panle_2z_i] < 4)
            {
                panleskillnum_assist[panle_2z_i] += 1;
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(1).GetComponent<TMP_Text>().text = (panleskillnum_assist[panle_2z_i]).ToString();
                panleskillnum_test = panle_2z_i;
                panleskillnum_assist_index[skill3] = panleskillnum_assist[panle_2z_i];
                panlechoose_2zcolor(panleskillnum_assist[panle_2z_i]);
                levelup_2z(skill3);
                UIpath.GetComponent<UIcontrol>().textprompt(31 + skill3);
                break;
            }
            panleskillnum_test = panle_2z_i;
        }

        //  Debug.Log("testkey=......................" + panleskillnum_test);
        for (int i = 0; i <= 8; i++)
        {
            if (panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().sprite == null && i <= panleskillnum_test)
            {
                panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().sprite = this.GetComponent<CacheList>().skilltwo_z[skill3];
                panleskillbutton_path.transform.GetChild(i).GetComponent<Button>().interactable = true;
                panleskillbutton_path.transform.GetChild(i).GetChild(1).GetComponent<TMP_Text>().text = panleskillnum_assist[i].ToString();
                panleskillbutton_path.transform.GetChild(i).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                panlechoose_2z_skillindex.Add(skill3);
                change_finallyfunction_2z();
                finallyfunction_2z();
                addCDpicture(skill3);
                panle_2z_pictureCD++;
                if (skill3 == 1)
                {
                    GameObject clone = Instantiate(skillcharging.transform.gameObject, panleskillbutton_path.transform.GetChild(i).transform);
                    clone.transform.parent = panleskillbutton_path.transform.GetChild(i).transform;
                    clone.GetComponent<TMP_Text>().color = new Color(1, 1, 1, 1);
                    skillcharging_key = i;
                    Debug.Log("���Ƴ��ܴ�����������������������������");
                }
                UIpath.GetComponent<UIcontrol>().textprompt(51 + skill3);
                break;
            }
        }
        Time.timeScale = 1;
        panlechoose_2z.gameObject.SetActive(false);
        panleskillnum_test = 0;
    }
    void choosebutton_assist1_2z()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill1; i++)
        {
            if (skill1 >= pointer_value_2z[i])
                skill1++;
        }
    }
    void choosebutton_assist2_2z()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill2; i++)
        {
            if (skill2 >= pointer_value_2z[i])
                skill2++;
        }
    }
    void choosebutton_assist3_2z()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill3; i++)
        {
            if (skill3 >= pointer_value_2z[i])
                skill3++;
        }
    }
    void chooseimage_assist_2z()//�ж����� �Ƴ���������
    {
        if (panleskillnum_assist_index[0] >= 4 && skillfixed_assist_2z[0] == 0)
        {
            key_2z.RemoveAt(0);
            textlist_2z.RemoveAt(0);
            pointer_value_2z[0] = 0;//�����Ƴ�Ϊ�㣬�ж�skill����ȡֵ
            exit0_2z = 1;
            skillfixed_assist_2z[0] = 1;//�ж�Լ��ֵ
            Debug.Log("............�Ƴ����嵯��������.........");
        }
        if (panleskillnum_assist_index[1] >= 4 && skillfixed_assist_2z[1] == 0)
        {
            key_2z.RemoveAt(1 - exit0_2z);
            textlist_2z.RemoveAt(1 - exit0_2z);
            pointer_value_2z[1] = 0;
            exit1_2z = 1;
            skillfixed_assist_2z[1] = 1;
            Debug.Log("............�Ƴ������򡣡�����.........");
        }
        if (panleskillnum_assist_index[2] >= 4 && skillfixed_assist_2z[2] == 0)
        {
            key_2z.RemoveAt(2 - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(2 - exit1_2z - exit0_2z);
            pointer_value_2z[2] = 0;
            exit2_2z = 1;
            skillfixed_assist_2z[2] = 1;
            Debug.Log("............�Ƴ����𡣡�����.........");
        }
        if (panleskillnum_assist_index[3] >= 4 && skillfixed_assist_2z[3] == 0)
        {
            key_2z.RemoveAt(3 - exit2_2z - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(3 - exit2_2z - exit1_2z - exit0_2z);
            pointer_value_2z[3] = 0;
            exit3_2z = 1;
            skillfixed_assist_2z[3] = 1;
            Debug.Log("............�Ƴ����ס�������.........");
        }
        if (panleskillnum_assist_index[4] >= 4 && skillfixed_assist_2z[4] == 0)
        {
            key_2z.RemoveAt(4 - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(4 - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            pointer_value_2z[4] = 0;
            exit4_2z = 1;
            skillfixed_assist_2z[4] = 1;
            Debug.Log("............�Ƴ������ָ���������.........");
        }
        if (panleskillnum_assist_index[5] >= 4 && skillfixed_assist_2z[5] == 0)
        {
            key_2z.RemoveAt(5 - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(5 - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            pointer_value_2z[5] = 0;
            exit5_2z = 1;
            skillfixed_assist_2z[5] = 1;
            Debug.Log("............�Ƴ����塣������.........");
        }
        if (panleskillnum_assist_index[6] >= 4 && skillfixed_assist_2z[6] == 0)
        {
            key_2z.RemoveAt(6 - exit5_2z - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(6 - exit5_2z - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            pointer_value_2z[6] = 0;
            exit6_2z = 1;
            skillfixed_assist_2z[6] = 1;
            Debug.Log("............�Ƴ���������������.........");
        }
        if (panleskillnum_assist_index[7] >= 4 && skillfixed_assist_2z[7] == 0)
        {
            key_2z.RemoveAt(7 - exit6_2z - exit5_2z - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(7 - exit6_2z - exit5_2z - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            pointer_value_2z[7] = 0;
            exit7_2z = 1;
            skillfixed_assist_2z[7] = 1;
            Debug.Log("............�Ƴ��������ס�������.........");
        }
        if (panleskillnum_assist_index[8] >= 4 && skillfixed_assist_2z[8] == 0)
        {
            key_2z.RemoveAt(8 - exit7_2z - exit6_2z - exit5_2z - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            textlist_2z.RemoveAt(8 - exit7_2z - exit6_2z - exit5_2z - exit4_2z - exit3_2z - exit2_2z - exit1_2z - exit0_2z);
            pointer_value_2z[8] = 0;
            //exit8_2z = 1;
            skillfixed_assist_2z[8] = 1;
            Debug.Log("............�Ƴ���λ��������.........");
        }
    }
    ///������������ѡ�񡣡���������������������������������������������������
    ///������������ͼ����ơ�������
    void panlechoose_2zcolor(int a)//����ͼ����ɫ
    {
        switch (a)
        {
            case 1:
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(2).GetComponent<Image>().color = new Color(0, 0, 0, 0);
                break;
            case 2:
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(2).GetComponent<Image>().color = new Color(0, 0, 0, 1);
                break;
            case 3:
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(2).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                break;
            case 4:
                panleskillbutton_path.transform.GetChild(panle_2z_i).GetChild(2).GetComponent<Image>().color = new Color(1, 0, 0, 1);
                break;



        }
    }
    void panlechoose_2zfunction_assist(int a)
    {
        switch (a)
        {
            case 0:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energyballskill1();
                break;
            case 1:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energybulletskill2();
                break;
            case 2:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energydoubletskill3();
                break;
            case 3:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energythunderskill4();
                break;
            case 4:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energyrestorerskill5();
                break;
            case 5:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energyrprotectskill6();
                break;
            case 6:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energyattachmentskill7_assist();
                break;
            case 7:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().energyrblackfireskill8();
                break;
            case 8:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().phase9();
                break;



        }
    }
    void finallyfunction_2z()//s����ί������
    {
        for (int i = 0; i < 9; i++)
        {
            int a = i;
            panleskillbutton_path.transform.GetChild(i).GetComponent<Button>().onClick.AddListener(delegate ()
             {
                 panlechoose_2zfunction_assist(panlechoose_2z_skill_array[a]);

             });
            //Debug.Log("a=......." + i);
            // Debug.Log("aaaa=......." + panlechoose_2z_skill_array[a]);
        }
    }
    void change_finallyfunction_2z()//����ί������
    {
        for (int i = 0; i < panlechoose_2z_skillindex.Count; i++)
            panlechoose_2z_skill_array[i] = panlechoose_2z_skillindex[i];
    }
    void addCDpicture(int i)
    {
        switch (i)
        {
            case 0:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skill1CDmoniter1");
                // Debug.Log("��������Я��....................................." + 1);
                break;
            case 1:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skill1CDmoniter2");
                // Debug.Log("��������Я��....................................." + 2);
                break;
            case 2:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skill1CDmoniter3");
                //  Debug.Log("��������Я��....................................." + 3);
                break;
            case 3:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skillCDmoniter4");
                //   Debug.Log("��������Я��....................................." + 4);
                break;
            case 4:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skillCDmoniter5");
                //  Debug.Log("��������Я��....................................." + 5);
                break;
            case 5:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skillCDmoniter6");
                //  Debug.Log("��������Я��....................................." + 6);
                break;
            case 6:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skillCDmoniter7");
                // Debug.Log("��������Я��....................................." + 7);
                break;
            case 7:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skillCDmoniter8");
                //  Debug.Log("��������Я��....................................." + 8);
                break;
            case 8:
                skillcontrol_2z_path.GetComponent<Skillcontrol>().StartCoroutine("skillCDmoniter8_1");
                //   Debug.Log("��������Я��....................................." + 9);
                break;

        }

    }
    void levelup_2z(int a)//����������������ϵͳ
    {

        {
            switch (a)
            {
                case 0:
                    Skillcontrol.skillhurt_ef[0] += 0.3f;
                    Skillcontrol.skillbounds_ef[0] += 0.2f;
                    Skillcontrol.skillCD_ef[0] -= 0.1f;
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[0] -= 5;
                    Debug.Log("����+����������������������������������������������������������������������");

                    break;
                case 1:
                    Skillcontrol.skillhurt_ef[1] += 0.3f;
                    Skillcontrol.skillbounds_ef[1] += 0.1f;
                    Skillcontrol.skillCD_ef[1] -= 0.1f;
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[1] -= 6;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
                case 2:
                    Skillcontrol.skillhurt_ef[2] += 0.4f;
                    // Skillcontrol.skillbounds_ef[2] += 0.1f;
                    Skillcontrol.skillCD_ef[2] -= 0.15f;
                    Skillcontrol.skilltime_ef[2] += 5f;
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[2] -= 5;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
                case 3:
                    Skillcontrol.skillhurt_ef[3] += 0.4f;
                    //Skillcontrol.skillbounds_ef[3] += 0.15f;
                    Skillcontrol.skillCD_ef[3] -= 0.2f;
                    Skillcontrol.skilltime_ef[3] += 1.5f;
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[3] -= 5;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
                case 4:
                    Skillcontrol.skillhurt_ef[4] += 0.2f;
                    Skillcontrol.skillbounds_ef[4] += 0.10f;//�˴���Ϊ�ظ�ϵ��
                    Skillcontrol.skillCD_ef[4] -= 0.1f;
                    Skillcontrol.skilltime_ef[4] += 5f;
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[4] -= 6;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
                case 5:
                    // Skillcontrol.skillhurt_ef[4] += 0.2f;
                    //Skillcontrol.skillbounds_ef[3] += 0.15f;
                    Skillcontrol.skillCD_ef[5] -= 0.15f;
                    Skillcontrol.skilltime_ef[5] += 2f;
                    Actor1.actordamagereduction_forever += 0.03f;
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[5] -= 5;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
                case 6:
                    Skillcontrol.skillhurt_ef[6] += 0.3f;
                    Skillcontrol.skillbounds_ef[6] += 0.10f;
                    // skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[6] -= 8;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
                case 7:
                    Skillcontrol.skillhurt_ef[7] += 0.5f;
                    Debug.Log("����+����������������������������������������������������������������������");
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[7] -= 3;
                    break;
                case 8:
                    // Skillcontrol.skillhurt_ef[4] += 0.2f;
                    //Skillcontrol.skillbounds_ef[3] += 0.15f;
                    Skillcontrol.skillCD_ef[8] -= 0.15f;
                    Skillcontrol.skilltime_ef[8] += 3f;
                    Actor1.actordamagereduction_forever += 0.03f;//
                    skillcontrol_2z_path.GetComponent<Skillcontrol>().skillCD[7] -= 8;
                    Debug.Log("����+����������������������������������������������������������������������");
                    break;
            }

        }
    }
    /// <summary>
    /// ������������ѡ�񡣡���������������������������������������������������������������������������������������������������������������������
    /// </summary>
    public void chooseimage_3z()
    {
        for (int i = 0; i < key_3z.Count; i++)
        {
            images_real.Add(i);

        }
        skill1 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima1 = panlechoose_3z.transform.GetChild(0).gameObject;
        GameObject text1 = panlechoose_3z.transform.GetChild(0).GetChild(0).gameObject;
        //ͼƬ�滻�������滻��ʹ�÷���
        ima1.GetComponent<Image>().sprite = key_3z[skill1];
        text1.GetComponent<Text>().text = textlist_3z[skill1];
        pointer_value_3z[0] = skill1;
        images_real.Remove(skill1);
        //��һ�γ�ȡ
        skill2 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima2 = panlechoose_3z.transform.GetChild(1).gameObject;
        GameObject text2 = panlechoose_3z.transform.GetChild(1).GetChild(0).gameObject;
        ima2.GetComponent<Image>().sprite = key_3z[skill2];
        text2.GetComponent<Text>().text = textlist_3z[skill2];
        pointer_value_3z[1] = skill2;
        images_real.Remove(skill2);
        //ͼƬ�滻�������滻��ʹ�÷���
        //�ڶ��γ�ȡ
        skill3 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima3 = panlechoose_3z.transform.GetChild(2).gameObject;
        GameObject text3 = panlechoose_3z.transform.GetChild(2).GetChild(0).gameObject;
        ima3.GetComponent<Image>().sprite = key_3z[skill3];
        text3.GetComponent<Text>().text = textlist_3z[skill3];
        pointer_value_3z[2] = skill3;
        images_real.RemoveRange(0, images_real.Count);
        //
    }
    void choosebutton_3z()
    {

        for (int i = 0; i < 3; i++)

        {
            int a = i;

            panlechoose_3z.transform.GetChild(i).GetComponent<Button>().onClick.AddListener(delegate ()
        {
            choosebutton_3z_assist(pointer_value_3z[a]);
        });
        }

    }

    void choosebutton_3z_assist(int a)
    {
        switch (a)
        {
            case 0:
                if (level_3z[0] == true)
                {
                    panlefinally_z.transform.GetChild(0).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                    panlefinally_z.transform.GetChild(0).GetComponent<Button>().interactable = true;
                    panlefinally_z.transform.GetChild(0).GetChild(1).GetComponent<Image>().color += new Color(0.5f, 0.5f, 0.5f, 0.5f);
                    skillcontrol_3z_path.transform.GetComponent<Skillcontrol>().skillCD[9] -= 30;
                    panlechoose_3z.gameObject.SetActive(false);
                    Time.timeScale = 1;
                    if (glodenskill_3zpath.GetComponent<Glodenskill>().textcharge[6] == true)
                    {
                        UIpath.GetComponent<UIcontrol>().textprompt("ǹ��֮��");
                        glodenskill_3zpath.GetComponent<Glodenskill>().textcharge[6] = false;
                    }
                    else
                    {
                        UIpath.GetComponent<UIcontrol>().textprompt("��Ӱ��ȴʱ�����30��");
                        level_3z[0] = false;
                    }

                }
                else
                    UIpath.GetComponent<UIcontrol>().textprompt(11);
                break;
            case 1:
                if (level_3z[1] == true)
                {
                    panlefinally_z.transform.GetChild(1).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                    panlefinally_z.transform.GetChild(1).GetComponent<Button>().interactable = true;
                    panlefinally_z.transform.GetChild(1).GetChild(1).GetComponent<Image>().color += new Color(0.5f, 0.5f, 0.5f, 0.5f);
                    skillcontrol_3z_path.transform.GetComponent<Skillcontrol>().skillCD[10] -= 30;
                    panlechoose_3z.gameObject.SetActive(false);
                    Time.timeScale = 1;
                    if (glodenskill_3zpath.GetComponent<Glodenskill>().textcharge[7] == true)
                    {
                        UIpath.GetComponent<UIcontrol>().textprompt("�⵽����ʲô�Ƽ�");
                        glodenskill_3zpath.GetComponent<Glodenskill>().textcharge[7] = false;
                    }
                    else
                    {
                        UIpath.GetComponent<UIcontrol>().textprompt("�۱���ȴʱ�����30��");
                        level_3z[1] = false;
                    }
                }
                else
                    UIpath.GetComponent<UIcontrol>().textprompt(11);
                break;
            case 2:
                if (level_3z[2] == true)
                {
                    panlefinally_z.transform.GetChild(2).GetComponent<Image>().color = new Color(1, 1, 1, 1);
                    panlefinally_z.transform.GetChild(2).GetComponent<Button>().interactable = true;
                    panlefinally_z.transform.GetChild(2).GetChild(1).GetComponent<Image>().color += new Color(0.5f, 0.5f, 0.5f, 0.5f);
                    skillcontrol_3z_path.transform.GetComponent<Skillcontrol>().skillCD[11] -= 30;
                    panlechoose_3z.gameObject.SetActive(false);
                    Time.timeScale = 1;
                    if (glodenskill_3zpath.GetComponent<Glodenskill>().textcharge[8] == true)
                    {
                        UIpath.GetComponent<UIcontrol>().textprompt("������������");
                        glodenskill_3zpath.GetComponent<Glodenskill>().textcharge[8] = false;
                    }
                    else
                    {
                        UIpath.GetComponent<UIcontrol>().textprompt("��ʦ��ȴʱ�����30��"); ;
                        level_3z[2] = false;
                    }

                }
                else
                    UIpath.GetComponent<UIcontrol>().textprompt(11);

                break;
        }

    }
    void chooseskill_3z()
    {

        for (int i = 0; i < 3; i++)

        {
            int a = i;

            panlefinally_z.transform.GetChild(i).GetComponent<Button>().onClick.AddListener(delegate ()
            {
                chooseskill3z_assist(a);
            });
        }

    }

    void chooseskill3z_assist(int a)
    {
        switch (a)
        {
            case 0:
                skillcontrol_3z_path.GetComponent<Skillcontrol>().energycloneselfskill9();
                break;
            case 1:
                skillcontrol_3z_path.GetComponent<Skillcontrol>().energypuppetskill11();
                break;
            case 2:
                skillcontrol_3z_path.GetComponent<Skillcontrol>().elementcontrolr_real();
                break;
        }

    }
    ///���ױ�������ѡ��
    ///����������������������������������������������������
    public void chooseimage_3b()
    {
        if (key_3b.Count > 3)
        {

            chooseimage_assist_3b();
        }
        for (int i = 0; i < key_3b.Count; i++)
        {
            images_real.Add(i);

        }
        skill1 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima1 = panlechoose_3b.transform.GetChild(0).gameObject;
        GameObject text1 = panlechoose_3b.transform.GetChild(0).GetChild(0).gameObject;
        //ͼƬ�滻�������滻��ʹ�÷���
        ima1.GetComponent<Image>().sprite = key_3b[skill1];
        text1.GetComponent<Text>().text = textlist_3b[skill1];
        images_real.Remove(skill1);
        //��һ�γ�ȡ
        skill2 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima2 = panlechoose_3b.transform.GetChild(1).gameObject;
        GameObject text2 = panlechoose_3b.transform.GetChild(1).GetChild(0).gameObject;
        ima2.GetComponent<Image>().sprite = key_3b[skill2];
        text2.GetComponent<Text>().text = textlist_3b[skill2];
        images_real.Remove(skill2);
        //ͼƬ�滻�������滻��ʹ�÷���
        //�ڶ��γ�ȡ
        skill3 = images_real[Random.Range(0, images_real.Count)];
        GameObject ima3 = panlechoose_3b.transform.GetChild(2).gameObject;
        GameObject text3 = panlechoose_3b.transform.GetChild(2).GetChild(0).gameObject;
        ima3.GetComponent<Image>().sprite = key_3b[skill3];
        text3.GetComponent<Text>().text = textlist_3b[skill3];
        Debug.Log(".....3...." + skill1 + skill2 + skill3 + "....." + skillkey + ".............." + images_real.Count);
        images_real.RemoveRange(0, images_real.Count);

    }
    public void chossebutton1_3b()
    {
        choosebutton_assist1_3b();//skill ֵ��������
        choosenum_3b(skill1);//�������е�ֵ����ѡ����
        for (int i = 0; i < 4; i++)//ӳ�似����
        {
            if (i == skill1)
            {
                goldenskill_3b_path.GetComponent<Glodenskill>().chooseskilllevel_3b(skill1);
                scrollviewpath.transform.GetChild(i + 16).GetChild(0).GetComponent<Text>().text = goldenskill_3b_path.GetComponent<Glodenskill>().skilltext_3b.ToString();
                break;
            }
        }
    }
    //����ѡ����ӳ�䵽 ����˵����ϣ�
    public void chossebutton2_3b()
    {
        choosebutton_assist2_3b();
        choosenum_3b(skill2);
        for (int i = 0; i < 4; i++)
        {
            if (i == skill2)
            {
                goldenskill_3b_path.GetComponent<Glodenskill>().chooseskilllevel_3b(skill2);
                scrollviewpath.transform.GetChild(i + 16).GetChild(0).GetComponent<Text>().text = goldenskill_3b_path.GetComponent<Glodenskill>().skilltext_3b.ToString();
                break;
            }
        }

    }
    public void chossebutton3_3b()
    {
        choosebutton_assist3_3b();
        choosenum_3b(skill3);
        for (int i = 0; i < 4; i++)
        {
            if (i == skill3)
            {
                goldenskill_3b_path.GetComponent<Glodenskill>().chooseskilllevel_3b(skill3);
                scrollviewpath.transform.GetChild(i + 16).GetChild(0).GetComponent<Text>().text = goldenskill_3b_path.GetComponent<Glodenskill>().skilltext_3b.ToString();
                break;
            }
        }

    }
    void chooseimage_assist_3b()//�ж����� �Ƴ���������
    {
        if (goldenskill_3b_path.GetComponent<Glodenskill>().skilllevelfixed_3b[0] >= 2 && skillfixed_assist_3b[0] == 0)
        {
            key_3b.RemoveAt(0);
            textlist_3b.RemoveAt(0);
            pointer_value_3b[0] = 0;
            exit0_3b = 1;
            skillfixed_assist_3b[0] = 1;
            Debug.Log("............�Ƴ��޾��ٻ���������.........");
        }
        if (goldenskill_3b_path.GetComponent<Glodenskill>().skilllevelfixed_3b[1] >= 2 && skillfixed_assist_3b[1] == 0)
        {
            key_3b.RemoveAt(1 - exit0_3b);
            textlist_3b.RemoveAt(1 - exit0_3b);
            pointer_value_3b[1] = 0;
            exit1_3b = 1;
            skillfixed_assist_3b[1] = 1;
            Debug.Log("............�Ƴ��ڰ���ꡣ������.........");
        }
        if (goldenskill_3b_path.GetComponent<Glodenskill>().skilllevelfixed_3b[2] >= 2 && skillfixed_assist_3b[2] == 0)
        {
            key_3b.RemoveAt(2 - exit1_3b - exit0_3b);
            textlist_3b.RemoveAt(2 - exit1_3b - exit0_3b);
            pointer_value_3b[2] = 0;
            exit2_3b = 1;
            skillfixed_assist_3b[2] = 1;
            Debug.Log("............�Ƴ�����֮�ܡ�������.........");
        }
        if (goldenskill_3b_path.GetComponent<Glodenskill>().skilllevelfixed_3b[3] >= 2 && skillfixed_assist_3b[3] == 0)
        {
            key_3b.RemoveAt(3 - exit2_3b - exit1_3b - exit0_3b);
            textlist_3b.RemoveAt(3 - exit2_3b - exit1_3b - exit0_3b);
            pointer_value_3b[3] = 0;
           // exit3_3b = 1;
            skillfixed_assist_3b[3] = 1;
            Debug.Log("............�Ƴ�а��Ѫͳ��������.........");
        }
    }
    void choosebutton_assist1_3b()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill1; i++)

        {
            if (skill1 >= pointer_value_3b[i])
                skill1++;
        }
    }
    void choosebutton_assist2_3b()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill2; i++)
        {
            if (skill2 >= pointer_value_3b[i])
                skill2++;
        }
    }
    void choosebutton_assist3_3b()//ȷ����ѡ�����Ƴ�����
    {
        for (int i = 0; i <= skill3; i++)
        {
            if (skill3 >= pointer_value_3b[i])
                skill3++;
        }
    }

    ///������Ҫ�������ѡ�����
    ///
    public void actorenhance()
    {
       
        
            int i = Random.Range(0, 3);
            if (i == 0)
                fircontrol.GetComponent<Firecontrol>().bullethurt();
            if (i == 1)
                fircontrol.GetComponent<Firecontrol>().criticalhitadd();
            if (i == 2)
                fircontrol.GetComponent<Firecontrol>().elementlevel();
            StopCoroutine("actorenhance_assit");
            StartCoroutine("actorenhance_assit");//���1��ڶ���ѡȡ
        
      

    }
    IEnumerator actorenhance_assit()
    {

        yield return new WaitForSeconds(1f);
        int i = Random.Range(0, 6);
        if (i == 0)
            fircontrol.GetComponent<Firecontrol>().bullethurt();
        if (i == 1)
            fircontrol.GetComponent<Firecontrol>().criticalhitadd();
        if (i == 2)
            fircontrol.GetComponent<Firecontrol>().elementlevel();
        if (i>=3)
            UIpath.GetComponent<UIcontrol>().textprompt("���Ӳ�������˷���");

    }
    public void rechooseskill_2b()
    { if (skill_rechoose_num>0)
        {
            chooseimage_2b();
            skill_rechoose_num--;

        }
        else
        {
            UIpath.GetComponent<UIcontrol>().textprompt("��ѡ����������");
        }
    }
    public void rechooseskill_2z()
    {
        if (skill_rechoose_num > 0)
        {
            chooseimage_2z();
            skill_rechoose_num--;

        }
        else
        {
            UIpath.GetComponent<UIcontrol>().textprompt("��ѡ����������");
        }
    }
    public void rechooseskill_3b()
    {
        if (skill_rechoose_num > 0)
        {
            chooseimage_3b();
            skill_rechoose_num--;

        }
        else
        {
            UIpath.GetComponent<UIcontrol>().textprompt("��ѡ����������");
        }
    }
    public void rechooseskill_3z()
    {
        if (skill_rechoose_num > 0)
        {
            chooseimage_3z();
            skill_rechoose_num--;

        }
        else
        {
            UIpath.GetComponent<UIcontrol>().textprompt("��ѡ����������");
        }
    }
    IEnumerator rechoosenum_add()
    {
        for (int tc = 0; ; tc++)
        {
            yield return new WaitForSeconds(1);
            if (tc - 180 > 0)
            {
                tc = 0;
                yield return skill_rechoose_num++;
                UIpath.GetComponent<UIcontrol>().textprompt("��ѡ�������� 1");
            }
        
        }
    }

}
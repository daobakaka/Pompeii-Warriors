using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;


public class Skillcontrol : MonoBehaviour

{
    // Start is called before the first frame update
    public GameObject panleskilltest_path;
    public GameObject[] skilleffects;
    public GameObject UIpath;
    public Transform trans;
    public float[] skillCD;
    public Transform[] skillpicture;
    public int[] skillCD_assist;
    private int skillcallbaobao_num = 0;
    private int magicbulletnum, magicmoniternum = 0;//魔法子弹辅助射击系统
    private int thunderskill = 10;//落雷技能辅助次数
    private int energyattachment_assist = 12;//附着弹攻击次数
    private int[] skillpictureCD_assist = new int[9];
    private bool skillcharging_energy = false;//充能判定
    //升级白光
    private float baobaoattackf = 3f;
    public GameObject[] engerbaobao_son;
    private GameObject baobaopredel;
    //宝宝招换释放技能
    public static float skillmagichurt;
    public static float skillmagichurt_effcient = 1;
    public static float skillmagichurt_effcient_forever = 1;
    public float[] magichurts = new float[100];
    public float[] magichurtsbase = new float[5];
    private float magichurtmin = 10;
    //
   // private int elementmaternum_assist = 1;
    private int[] pictureCD_key = new int[9];
    //
    //public GameObject puppets_prefeb;
    //
    public static float[] skillhurt_ef = new float[9];
    public static float[] skillbounds_ef = new float[9];
    public static float[] skillCD_ef = new float[9];
   // public float[] skillCD_ef_key = new float[9];
    public static float[] skilltime_ef = new float[9];
    //伤害及CD数组
    public GameObject musiccontrol;
    public GameObject screeneffects;
    void Start()
    {
        for (int i = 0; i < magichurts.Length; i++)
        {
            magichurts[i] = 1;

        }//元素伤害数组
        for (int j = 0; j < magichurtsbase.Length; j++)
        {
            magichurtsbase[j] = j + magichurtmin;
            // Debug.Log(bullethitrange[j]);
        }//元素基础伤害数组
    }
    private void Awake()
    {


        for (int i = 0; i < skillpictureCD_assist.Length; i++)
        {
            skillpictureCD_assist[i] = 0;
            pictureCD_key[i] = 0;
        }
        for (int i = 0; i < 9; i++)//初始化主动技能等级参数
        {
            skillhurt_ef[i] = 1;
            skillbounds_ef[i] = 1;
            skillCD_ef[i] = 1;
            skilltime_ef[i] = 0;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        magichurttimely();
    }

    void magichurttimely()
    {
        skillmagichurt = magichurts[Random.Range(0, magichurts.Length)] * magichurtsbase[Random.Range(0, magichurtsbase.Length)] * skillmagichurt_effcient * skillmagichurt_effcient_forever;//取出基本值，乘以基础值范围
    }
    public void levelupskill()//升级保护
    {


        GameObject clone = Instantiate(skilleffects[0], null);
        clone.transform.position = trans.transform.position;
        clone.transform.parent = null;
        Destroy(clone.gameObject, 1f);


    }
    public void energyballskill1()//脉冲弹1
    {
        if (skillCD_assist[0] == 1)
        {
            GameObject clone = Instantiate(skilleffects[1], null);
            clone.transform.position = trans.transform.position + new Vector3(Random.Range(-2, 2), Random.Range(-2, 2));
            clone.transform.parent = null;
            StartCoroutine("skill1CDmoniter1");
            skillCD_assist[0] = 0;
            Destroy(clone.gameObject, 5f);
            musiccontrol.transform.GetChild(3).GetChild(1).GetComponent<AudioSource>().Play();
        }
    }
    public void energybulletskill2()//子弹能量球2
    {
        if (skillCD_assist[1] > 0 && magicbulletnum == 0)
        {
            GameObject clone = Instantiate(skilleffects[2], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = null;
            magicbulletnum = 1;
            StartCoroutine("skillCDmoniter2assist");//手指间隔响应
            if (skillcharging_energy == false)//充能数字判定，移动到相应技能条位置
            { StartCoroutine("skillCDmoniter2_skillcharging");
                skillcharging_energy = true;
            }
            if (magicmoniternum == 0)
            {
                StartCoroutine("skill1CDmoniter2");//冷却
                magicmoniternum = 1;
            }
            skillCD_assist[1] = skillCD_assist[1] - 1;
            Destroy(clone.gameObject, 8f);
            musiccontrol.transform.GetChild(3).GetChild(3).GetComponent<AudioSource>().Play();

        }
    }
    public void energydoubletskill3()//冰火球3
    {
        if (skillCD_assist[2] == 1)
        {
            GameObject clone = Instantiate(skilleffects[3], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = null;
            StartCoroutine("skill1CDmoniter3");
            skillCD_assist[2] = 0;
            Destroy(clone.gameObject, 20f+skilltime_ef[2]);
            musiccontrol.transform.GetChild(3).GetChild(8).GetComponent<AudioSource>().Play();

        }
    }
    public void energythunderskill4()//地面落雷4
    {
        if (skillCD_assist[3] == 1)
        {
            GameObject clone = Instantiate(skilleffects[4], null);
            clone.transform.position = trans.transform.position + new Vector3(Random.Range(-3, 3), Random.Range(-2, 2));
            clone.transform.parent = null;
            StartCoroutine("skillCDmoniter4");
            StartCoroutine("skillCDmoniter4assist");
            skillCD_assist[3] = 0;
            Destroy(clone.gameObject, 5f+skilltime_ef[3]);
            musiccontrol.transform.GetChild(3).GetChild(2).GetComponent<AudioSource>().Play();

        }
    }
    public void energyrestorerskill5()//恢复+灼烧5
    {
        if (skillCD_assist[4] == 1)
        {
            GameObject clone = Instantiate(skilleffects[5], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = null;
            StartCoroutine("skillCDmoniter5");
            skillCD_assist[4] = 0;
            Destroy(clone.gameObject, 20f+skilltime_ef[4]);
            musiccontrol.transform.GetChild(3).GetChild(6).GetComponent<AudioSource>().Play();

        }

    }
    public void energyrprotectskill6()//免伤 增伤 恢复生命 6
    {
        if (skillCD_assist[5] == 1)
        {

            GameObject clone = Instantiate(skilleffects[6], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = trans;
            clone.transform.localPosition = new Vector3(0, -1);
            StartCoroutine("skillCDmoniter6");
            StartCoroutine("skillCDmoniter6assist");
            skillCD_assist[5] = 0;
            Destroy(clone.gameObject, 10f+skilltime_ef[5]);
            musiccontrol.transform.GetChild(3).GetChild(5).GetComponent<AudioSource>().Play();
        }

    }


    public void energyattachmentskill7()//附着弹—被firecontrol持续引用
    {
        if (skillCD_assist[6] == 1)
        {
            if (energyattachment_assist > 0)
            {
                GameObject clone = Instantiate(skilleffects[7], null);
                clone.transform.position = trans.transform.position;
                clone.transform.parent = null;
                energyattachment_assist--;
                Destroy(clone.gameObject, 3f);
            }
            else
            {
                skillCD_assist[6] = 0;
            }
        }

    }
    public void energyattachmentskill7_assist()//点击触发函数#
    {
        if (energyattachment_assist == 12)
        {
            skillCD_assist[6] = 1;
            StartCoroutine("skillCDmoniter7");
        }

    }
    public void energyrblackfireskill8()//召唤黑炎
    {
        if (skillCD_assist[7] == 1)
        {

            GameObject clone = Instantiate(skilleffects[8], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = null;
            //clone.transform.localPosition = new Vector3(0, -1);
            StartCoroutine("skillCDmoniter8");
            skillCD_assist[7] = 0;
            Destroy(clone.gameObject, 20f+skilltime_ef[7]);
            musiccontrol.transform.GetChild(3).GetChild(6).GetComponent<AudioSource>().Play();

        }

    }
    public void phase9()//相位
    {
        if (skillCD_assist[8] == 1)
        {

            trans.transform.gameObject.tag = "skill";
            trans.transform.GetChild(0).GetChild(0).GetChild(3).GetChild(0).GetChild(0).gameObject.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, 1);
            //clone.transform.localPosition = new Vector3(0, -1);
            StartCoroutine("skillCDmoniter8_1");
            StartCoroutine("skillCDmoniter8_1_assist");
            skillCD_assist[8] = 0;
            musiccontrol.transform.GetChild(3).GetChild(7).GetComponent<AudioSource>().Play();
            // Destroy(clone.gameObject, 15f);

        }
    }
   /// <summary>
   /// 二阶主动技能。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。
   /// </summary>
    public void energycloneselfskill9()//召唤自己
    {
        if (skillCD_assist[9] == 1)
        {

            GameObject clone = Instantiate(skilleffects[9], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = null;
            //clone.transform.localPosition = new Vector3(0, -1);
            StartCoroutine(skillCDmoniter9());
            StartCoroutine("engerycloneselfskill9_effects");
            skillCD_assist[9]=0;
            Destroy(clone.gameObject, 30f);
            UIpath.GetComponent<UIcontrol>().textprompt(45);
        }

    }
    IEnumerator engerycloneselfskill9_effects()//召唤自己特效
    {
        //screeneffects.GetComponent<Volume>().profile.TryGet(out FilmGrain filmGrain);
        screeneffects.GetComponent<Volume>().profile.TryGet(out ChromaticAberration chromaticAberration);   //屏幕色差特效
        chromaticAberration.intensity.value = 0.2f;//取出配置里的参数用try get out

        yield return new WaitForEndOfFrame();
        
        yield return new WaitForSeconds(30);
        chromaticAberration.intensity.value = 0;
    }
    public void energybaobaoskill9_1()//召唤宝宝
    {
        if (skillcallbaobao_num <2)
        {
            baobaoattackf -= 1f;
            GameObject clone = Instantiate(skilleffects[10], null);
            clone.transform.position = trans.transform.position;
            clone.transform.parent = null;
            if (baobaoattackf > 1.5)
                baobaopredel = clone;
            if (baobaoattackf < 1.5)
                Destroy(baobaopredel, 1);
            //clone.transform.localPosition = new Vector3(0, -1);
            StopCoroutine("skillCDmoniter9_1");
            StartCoroutine("skillCDmoniter9_1");
            skillcallbaobao_num ++;
            //Destroy(clone.gameObject, 30f);

        }

    }
    IEnumerator skill3b_effects_b()//3b 被动技能特效
    {
        screeneffects.GetComponent<Volume>().profile.TryGet(out LensDistortion lensDistortion);
        if(Random.Range(0,1f)>=0.5f)
            lensDistortion.yMultiplier.value = 0;
        else
            lensDistortion.xMultiplier.value = 0;
        yield return new WaitForEndOfFrame();
        for (float tc = 0; tc > -1; tc -= Time.deltaTime)
        {
            lensDistortion.intensity.value = tc;
            yield return new WaitForSeconds(Time.deltaTime * 1);
        }
        for (float tc = -1; tc < 0; tc += Time.deltaTime)
        {
            lensDistortion.intensity.value = tc;
            yield return new WaitForSeconds(Time.deltaTime * 1);

        }
        yield return new WaitForEndOfFrame();
        lensDistortion.yMultiplier.value = 1;
        lensDistortion.xMultiplier.value = 1;
    }
    public void skill3b_effect_in()
    {
        
        
        StartCoroutine("skill3b_effects_b");
    
    
    }

    public void energypuppetskill11()//召唤傀儡
    {
        if (skillCD_assist[10] == 1)
        {


            //clone.transform.localPosition = new Vector3(0, -1);

            StartCoroutine(skillCDmoniter11());
            StartCoroutine(skillCDmoniter11_assist());
            skillCD_assist[10] = 0;
            UIpath.GetComponent<UIcontrol>().textprompt(46);

        }
    }
    public void elementcontrolr_real()//召唤大师
    {
        if (skillCD_assist[11] == 1)
        {
            // skillCD_assist = new int[] { 1, 3, 1, 1, 1, 1, 0, 1};//不能重置大师级技能
            for (int i = 0; i <= 8; i++)
            {
                skillCD_assist[i] = 1;
            }
            skillCD_assist[1] = 3;
            skillCD_assist[6] = 0;
            energyattachment_assist = 12;
            thunderskill = 12;
            skillCD_assist[11] = 0;
            StartCoroutine(elementcontrol_effects());
            StopCoroutine("skill1CDmoniter1");
            StopCoroutine("skill1CDmoniter2");
            StopCoroutine("skill1CDmoniter3");
            StopCoroutine("skillCDmoniter4"); 
            StopCoroutine("skillCDmoniter5");
            StopCoroutine("skillCDmoniter6");
            StopCoroutine("skillCDmoniter7");
            StopCoroutine("skillCDmoniter8");
            StopCoroutine("skillCDmoniter8_1");
            StopCoroutine("skillCDmoniter2_skillcharging");
            for (int i = 0; i < this.skillpicture.Length - 3; i++)
            {
                skillpicture[i].localScale = new Vector3(0, 0);
            }
            StartCoroutine(elementmasterrecover12());
            skillCD_assist[11]=0;
            //
            skillcharging_energy = false;
            //
            //skillpicture[pictureCD_key[1]].transform.parent.GetChild(3).GetComponent<TMP_Text>().text = "3";
            if (skillpicture[pictureCD_key[1]].transform.parent.childCount > 3)
                skillpicture[pictureCD_key[1]].transform.parent.GetChild(3).GetComponent<TMP_Text>().text = "3";
              magicmoniternum = 0;
            //恢复充能次数
            UIpath.GetComponent<UIcontrol>().textprompt(47);
        }

       IEnumerator elementcontrol_effects()//元素宗师 特效
        {
            screeneffects.GetComponent<Volume>().profile.TryGet(out LensDistortion lensDistortion);
            yield return new WaitForEndOfFrame();
            for (float tc = 0; tc > -1; tc -= Time.deltaTime)
            {
                lensDistortion.intensity.value = tc;
                yield return new WaitForSeconds(Time.deltaTime * 1);
            }
            for (float tc = -1; tc < 0; tc += Time.deltaTime)
            {
                lensDistortion.intensity.value = tc;
                yield return new WaitForSeconds(Time.deltaTime * 1);

            }
            yield return new WaitForEndOfFrame();
        }
    
 /////////
 ///三阶主动技能
    }
    IEnumerator skill1CDmoniter1()      
    {
        if (skillpictureCD_assist[0] == 0)
        {
            pictureCD_key[0] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[0]++;
            yield return null;
            
        }
        else
        {
            skillpicture[pictureCD_key[0]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[0]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[0] ; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[0]].localScale = new Vector3(1 - tc / skillCD[0], 1 );
                }
            }
            yield return null;
            skillpicture[pictureCD_key[0]].localScale = new Vector3(0, 1);
            skillCD_assist[0] = 1;
        }

    }
    IEnumerator skill1CDmoniter2()
    {
        if (skillpictureCD_assist[1] == 0)
        {
            pictureCD_key[1] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[1]++;
            yield return null;
            
        }
        else
        {

            skillpicture[pictureCD_key[1]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[1]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[1]; tc += 1)
                { 
                    // Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale + "skillCD_assist[0]=" + skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[1]].localScale = new Vector3(1 - tc / skillCD[1],1);
                }
            }
            yield return null;
            skillpicture[pictureCD_key[1]].localScale = new Vector3(0, 1);
            magicmoniternum = 0;
            if (skillCD_assist[1] <= 3)
            { skillCD_assist[1] += 1; }
        }
    }
    IEnumerator skillCDmoniter2assist()//手指延迟响应
    {
        yield return new WaitForSeconds(1f);
        magicbulletnum = 0;
    }


    IEnumerator skillCDmoniter2_skillcharging()//充能次数记录skillCDmoniter2_skillcharging
    {
        yield return null;
      // int key= panleskilltest_path.GetComponent<Panleskilltest>().skillcharging_key;
        for (; ; )
        {
            yield return new WaitForSeconds(0.5f);        
                skillpicture[pictureCD_key[1]].transform.parent.GetChild(3).GetComponent<TMP_Text>().text = skillCD_assist[1].ToString();    
           
        }
    
    }
    IEnumerator skill1CDmoniter3()
    {
        if (skillpictureCD_assist[2] == 0)
        {
            pictureCD_key[2] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[2]++;
            yield return null;
           
        }
        else
        {
            skillpicture[pictureCD_key[2]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[2]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[2]; tc +=1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[2]].localScale = new Vector3(1 - tc / skillCD[2], 1 );
                }
            }
            yield return null;
            skillpicture[pictureCD_key[2]].localScale = new Vector3(0, 1);
            skillCD_assist[2] = 1;
        }
    }
    IEnumerator skillCDmoniter4()
    {

        if (skillpictureCD_assist[3] == 0)
        {
            pictureCD_key[3] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[3]++;
            yield return null;
            
        }
        else
        {
            skillpicture[pictureCD_key[3]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[3]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[3]; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[3]].localScale = new Vector3(1 - tc / skillCD[3], 1 );
                }
            }
            yield return null;
            skillpicture[pictureCD_key[3]].localScale = new Vector3(0, 1);
            skillCD_assist[3] = 1;
        }
    }
    IEnumerator skillCDmoniter4assist()//连续雷击
    {
        yield return new WaitForSeconds(1f);
        if (thunderskill <= 12 && thunderskill > 0)
        {
            for (int i = 0; i < 12; i++)
            {
                GameObject clone = Instantiate(skilleffects[4], trans);
                clone.transform.position = trans.transform.position + new Vector3(Random.Range(-3, 3), Random.Range(-2, 2));
                clone.transform.parent = null;
                thunderskill--;
                musiccontrol.transform.GetChild(3).GetChild(2).GetComponent<AudioSource>().Play();
                Destroy(clone.gameObject, 2.7f+ skilltime_ef[3]);
                yield return new WaitForSeconds(1);
            }
        }
        yield return null;
        thunderskill = 12;

    }
    IEnumerator skillCDmoniter5()

    {

        if (skillpictureCD_assist[4] == 0)
        {
            pictureCD_key[4] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[4]++;
            yield return null;
          
        }
        else
        {
            skillpicture[pictureCD_key[4]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[4]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[4]; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[4]].localScale = new Vector3(1 - tc / skillCD[4], 1);
                }
            }
            yield return null;
            skillpicture[pictureCD_key[4]].localScale = new Vector3(0, 1);
            skillCD_assist[4] = 1;
        }
    }
    IEnumerator skillCDmoniter6()

    {

        if (skillpictureCD_assist[5] == 0)
        {
            pictureCD_key[5] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[5]++;
            yield return null;
           
        }
        else
        {
            skillpicture[pictureCD_key[5]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[5]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[5]; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[5]].localScale = new Vector3(1 - tc / skillCD[5], 1);
                }
            }
            yield return null;
            skillpicture[pictureCD_key[5]].localScale = new Vector3(0, 1);
            skillCD_assist[5] = 1;
        }
    }
    IEnumerator skillCDmoniter6assist()
    {
        Actor1.actordamagereduction = 0.7f;
        Firecontrol.bullerealhut_effcrent = 1.3f;
        skillmagichurt_effcient = 1.3f;
        for (int i = 0; i < 11+skilltime_ef[5]; i++)
        {if (Actor1.actorhealth < 100)
            { Actor1.actorhealth = Actor1.actorhealth + 0.03f * skillmagichurt; }
            yield return new WaitForSeconds(1);
        }
        yield return null;
        Actor1.actordamagereduction = 0;
        Firecontrol.bullerealhut_effcrent = 1;
        skillmagichurt_effcient = 1;
    }
    IEnumerator skillCDmoniter7()
    {

        if (skillpictureCD_assist[6] == 0)
        {
            pictureCD_key[6] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[6]++;
            yield return null;
           
        }
        else
        {
            skillpicture[pictureCD_key[6]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[6]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[6] ; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[6]].localScale = new Vector3(1 - tc / skillCD[6] , 1);
                }
            }
            yield return null;
            skillpicture[pictureCD_key[6]].localScale = new Vector3(0, 1);
            energyattachment_assist = 12;
        }

    }
    IEnumerator skillCDmoniter8()
    {

        if (skillpictureCD_assist[7] == 0)
        {
            pictureCD_key[7] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[7]++;
            yield return null;
            
        }
        else
        {
            skillpicture[pictureCD_key[7]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[7]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[7]; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[7]].localScale = new Vector3(1 - tc / skillCD[7], 1);
                }
            }
            yield return null;
            skillpicture[pictureCD_key[7]].localScale = new Vector3(0, 1);
            skillCD_assist[7] = 1;
        }

    }
    IEnumerator skillCDmoniter8_1()//注意排序。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。
    {

        if (skillpictureCD_assist[8] == 0)
        {
            pictureCD_key[8] = panleskilltest_path.GetComponent<Panleskilltest>().panle_2z_pictureCD;
            skillpictureCD_assist[8]++;
            yield return null;
           
        }
        else
        {
            skillpicture[pictureCD_key[8]].localScale = new Vector3(1, 1);
            if (skillpicture[pictureCD_key[8]].localScale.x > 0)
            {

                for (float tc = 0; tc <= skillCD[8]; tc += 1)
                {
                    //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                    yield return new WaitForSeconds(1);
                    skillpicture[pictureCD_key[8]].localScale = new Vector3(1 - tc / skillCD[8], 1);
                }
            }
            yield return null;
            skillpicture[pictureCD_key[8]].localScale = new Vector3(0, 1);
            skillCD_assist[8] = 1;

        }

    }
    IEnumerator skillCDmoniter8_1_assist()//相位技能方法
    {
        
        yield return new WaitForSeconds(3+skilltime_ef[8]);
        trans.transform.gameObject.tag = "player";
        trans.transform.GetChild(0).GetChild(0).GetChild(3).GetChild(0).GetChild(0).gameObject.GetComponent<SpriteRenderer>().color = new Color(0, 0,0, 0);
        Actor1.actorhealth = Actor1.actorhealth+0.8f * skillmagichurt;
      

    }
    /// <summary>
    /// 二阶主动技能
    /// </summary>
    /// <returns></returns>
    IEnumerator skillCDmoniter9()//绝影
    {
        skillpicture[9].localScale = new Vector3(1, 1);
        if (skillpicture[9].localScale.x > 0)
        {

            for (float tc = 0; tc <= skillCD[9]; tc += 1f)
            {
                //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                yield return new WaitForSeconds(1f);
                skillpicture[9].localScale = new Vector3(1 - tc / skillCD[9], 1);
            }
        }
        yield return null;
        skillCD_assist[9] = 1;

    }
    IEnumerator skillCDmoniter9_1()//召唤宝宝
    {
        yield return new WaitForSeconds(1);
        for (; Actor1.actorhealth > 0;)
        {
            yield return new WaitForSeconds(baobaoattackf);
            GameObject root = GameObject.FindWithTag("baobao");
            Transform son = root.transform.GetChild(0).transform;
            GameObject clone = Instantiate(engerbaobao_son[Random.Range(0, engerbaobao_son.Length)],son);
            clone.transform.position = son.transform.position;
            clone.transform.parent = null;
            Destroy(clone.gameObject, 4);



        }
        yield return null;

    }
    IEnumerator skillCDmoniter11()//核弹
    {
        skillpicture[10].localScale = new Vector3(1, 1);
        if (skillpicture[10].localScale.x > 0)
        {

            for (float tc = 0; tc <= skillCD[10]; tc += 1f)
            {
                //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                yield return new WaitForSeconds(1f);
                skillpicture[10].localScale = new Vector3(1 - tc / skillCD[10], 1);
            }
        }
        yield return null;
        skillCD_assist[10] = 1;

    }
    IEnumerator skillCDmoniter11_assist()//为爆炸赋予音效
    {
       // screeneffects.GetComponent<Volume>().profile.TryGet(out ChromaticAberration chromaticAberration);   //屏幕色差特效
        screeneffects.GetComponent<Volume>().profile.TryGet(out FilmGrain filmGrain);
        // chromaticAberration.intensity.value = 1;//取出配置里的参数用try get out
        GameObject clone = Instantiate(skilleffects[11], null);
        clone.transform.position = trans.transform.position;
        clone.transform.parent = null;
        yield return new WaitForSeconds(4f);
        filmGrain.intensity.value = 0.7f;
        musiccontrol.transform.GetChild(10).GetChild(0).GetComponent<AudioSource>().Play();//旋涡音效
        yield return new WaitForSeconds(4f);
        GameObject son1 = clone.transform.GetChild(3).transform.Find("energy1").gameObject;
        son1.gameObject.SetActive(true);
        yield return new WaitForSeconds(6f);
        clone.transform.GetChild(3).GetChild(1).gameObject.SetActive(true);
        GameObject boom = GameObject.FindWithTag("soundexplosion");
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount )).GetComponent<AudioSource>().Play();//爆炸音效
        yield return new WaitForSeconds(1);
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount )).GetComponent<AudioSource>().Play();
        yield return new WaitForSeconds(1);
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount )).GetComponent<AudioSource>().Play();
        yield return new WaitForSeconds(1);
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount )).GetComponent<AudioSource>().Play();
        musiccontrol.transform.GetChild(10).GetChild(0).GetComponent<AudioSource>().Stop();
        yield return new WaitForSeconds(1);
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount)).GetComponent<AudioSource>().Play();
        yield return new WaitForSeconds(1);
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount)).GetComponent<AudioSource>().Play();
        yield return new WaitForSeconds(1);
        boom.transform.GetChild(Random.Range(0, boom.transform.childCount)).GetComponent<AudioSource>().Play();
        Destroy(clone.gameObject, 0.5f);
        yield return null;
       // chromaticAberration.intensity.value = 0;
        filmGrain.intensity.value = 0f;



    }
    IEnumerator elementmasterrecover12()//召唤大师，暂定2分钟冷却
    {
        skillpicture[11].localScale = new Vector3(1, 1);
        if (skillpicture[11].localScale.x > 0)
        {

            for (float tc = 0; tc <= skillCD[11]; tc += 1f)
            {
                //Debug.Log("TC=..." + tc + "scale.." + skillpicture[0].localScale+ "skillCD_assist[0]="+ skillCD_assist[0]);
                yield return new WaitForSeconds(1f);
                skillpicture[11].localScale = new Vector3(1 - tc / skillCD[11], 1);
            }
        }
        yield return null;
        skillCD_assist[11] = 1;

    }
}

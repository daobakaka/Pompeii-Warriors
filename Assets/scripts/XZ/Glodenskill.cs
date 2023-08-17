using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;

public class Glodenskill : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject skillcontrol_path;
    public GameObject firecontrol_path;
    public GameObject UIpath;
    public GameObject skilltree_2b;
    public GameObject skilltree_3b;
    public static int[] addskillnum = new int[] { 0, 0 };
    //
    public static float shootblackfire = 0.2f;
    public static float shootexplosion = 1f;
    public static float shootexplosionradius = 1;
    public int skilltext, skilltext_3b;
    public int[] skilllevel, skilllevel_3b;
    public int[] skilllevelfixed;
    public int[] skilllevelfixed_3b;
    public bool[] textcharge;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void blacksoul()//被动技能黑暗之魂，永久提升属性 2
    {
        if (skilllevelfixed_3b[1] < 2)
        {
            Firecontrol.bullerealhut_effcrent_forever += 0.15f;
            Skillcontrol.skillmagichurt_effcient_forever += 0.25f;
            Actor1.actordamagereduction_forever += 0.10f;
            skilllevel_3b[1] += 1;
            skilllevelfixed_3b[1] += 1;
            Time.timeScale = 1;
            skilltree_3b.gameObject.SetActive(false);
            if (textcharge[2] == true)
            {    UIpath.GetComponent<UIcontrol>().textprompt(42);
                 textcharge[2] = false;
                }
            else
         UIpath.GetComponent<UIcontrol>().textprompt("你将无情的嘲讽这个世界");
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void endlessshield()//永久减伤35% 3
    {
        if (skilllevelfixed_3b[2] < 2)
        {
            Actor1.actordamagereduction_forever+= 0.35f;
            skilllevel_3b[2] += 1;
            skilllevelfixed_3b[2] += 1;
            Time.timeScale = 1;
            skilltree_3b.gameObject.SetActive(false);
            if (textcharge[3] == true)
            {
                UIpath.GetComponent<UIcontrol>().textprompt(43);
                textcharge[3] = false;
            }
            else
                UIpath.GetComponent<UIcontrol>().textprompt("你驾驭了圣光");
            StopCoroutine("endlessshield_recover");
            StartCoroutine("endlessshield_recover");
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);

    }
    IEnumerator endlessshield_recover()
    {
        yield return null;
        for (; Actor1.actorhealth <100;)
        {
            Actor1.actorhealth += 0.01f*Skillcontrol.skillmagichurt;

            yield return new WaitForSeconds(1);

        }
    
    
    
    }

    public void endlisscall()//无尽召唤 1
    {
        if (skilllevelfixed_3b[0] < 2)
        {
            skillcontrol_path.GetComponent<Skillcontrol>().energybaobaoskill9_1();
            skilllevel_3b[0] += 1;
            skilllevelfixed_3b[0] += 1;
            Time.timeScale = 1;
            skilltree_3b.gameObject.SetActive(false);
            if (textcharge[4] == true)
            {
                UIpath.GetComponent<UIcontrol>().textprompt(41);
                textcharge[4] = false;
            }
            else
                UIpath.GetComponent<UIcontrol>().textprompt("永恒的能量体开始涌动");
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void useevilbloodline()//黑暗血统 4
    {

        if (skilllevelfixed_3b[3] < 2)
        {
            firecontrol_path.GetComponent<Firecontrol>().evilbloodline();
            skilllevel_3b[3] += 1;
            skilllevelfixed_3b[3] += 1;
            Time.timeScale = 1;
            skilltree_3b.gameObject.SetActive(false);
            if (textcharge[5] == true)
            {
                UIpath.GetComponent<UIcontrol>().textprompt(44);
                textcharge[5] = false;
            }
            else
                UIpath.GetComponent<UIcontrol>().textprompt("邪恶的力量将会摧毁一切");
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);

    }
    /// <summary>
    /// 三阶被动技能结束
    /// </summary>
    //二阶段被动技能

    public void bulletpenetaete()//子弹穿透  1
    {
        if (skilllevelfixed[0] < 4)
        {
            Firecontrol.bulletpenetrate = Firecontrol.bulletpenetrate + 0.1f;
            UIpath.GetComponent<UIcontrol>().textprompt(21);
            skilltree_2b.gameObject.SetActive(false);
                   Time.timeScale = 1;
                   skilllevel[0] += 1;
                  skilllevelfixed[0] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void weaponmaster()//武器大师，子弹基础伤害提升2点
    {
        if (skilllevelfixed[1] < 4)
        {
            for (int i = 0; i < firecontrol_path.GetComponent<Firecontrol>().bullethitrange.Length; i++)
            {
                firecontrol_path.GetComponent<Firecontrol>().bullethitrange[i] += 2;
            }
            UIpath.GetComponent<UIcontrol>().textprompt(22);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[1] += 1;
            skilllevelfixed[1] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void weaponproffciency()//武器精通
    {
        if (skilllevelfixed[2] < 4)
        {
            Firecontrol.bullerealhut_effcrent_forever = Firecontrol.bullerealhut_effcrent_forever + 0.10f;
            UIpath.GetComponent<UIcontrol>().textprompt(23);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[2] += 1;
            skilllevelfixed[2] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void elementmaster()//元素大师

    {
        if (skilllevelfixed[3] < 4)
        {
            for (int i = 0; i < skillcontrol_path.GetComponent<Skillcontrol>().magichurtsbase.Length; i++)
            {
                skillcontrol_path.GetComponent<Skillcontrol>().magichurtsbase[i] += 3;
            }
            UIpath.GetComponent<UIcontrol>().textprompt(24);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[3] += 1;
            skilllevelfixed[3] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void elementproffciency()//元素精通

    {
        if (skilllevelfixed[4] < 4)
        { Skillcontrol.skillmagichurt_effcient_forever = Skillcontrol.skillmagichurt_effcient_forever + 0.15f;
            UIpath.GetComponent<UIcontrol>().textprompt(25);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[4] += 1;
            skilllevelfixed[4] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void addspecialeffect1_unreal()//子弹爆炸，触发怪物脚本入口

    {
        if (skilllevelfixed[5] < 4)
        {
            addskillnum[0] = 1;
            shootexplosion +=  0.1f;
            shootexplosionradius += 0.1f;
            if (textcharge[0] == true)
            {
                UIpath.GetComponent<UIcontrol>().textprompt("子弹获得爆炸效果");
                textcharge[0] = false;
            }
            else
            UIpath.GetComponent<UIcontrol>().textprompt(26);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[5] += 1;
            skilllevelfixed[5] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void addspecialeffect2_unreal()//子弹黑炎，触发怪物脚本入口
    {
        if (skilllevelfixed[6] < 4)
        {
            addskillnum[1] = 1;
            shootblackfire = shootblackfire + 0.2f * 0.4f;
            if (textcharge[1] == true)
            {
                UIpath.GetComponent<UIcontrol>().textprompt("子弹已附魔黑炎");
                textcharge[1] = false;
            }
            else
                UIpath.GetComponent<UIcontrol>().textprompt(27);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[6] += 1;
            skilllevelfixed[6] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void bulletdivison()//连续射击

    {
        if (skilllevelfixed[7] < 4)
        {
            skilllevelfixed[7] += 1;
            firecontrol_path.GetComponent<Firecontrol>().blaze_assist = 1+skilllevelfixed[7];
            firecontrol_path.GetComponent<Firecontrol>().startdivision();
            UIpath.GetComponent<UIcontrol>().textprompt(28);
            skilltree_2b.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[7] += 1;
            
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void chooseskilllevel_3b(int a)
    {
        switch (a)
        {
            case 0:
                skilltext_3b = skilllevel_3b[0];
                break;
            case 1:
                skilltext_3b = skilllevel_3b[1];
                break;
            case 2:
                skilltext_3b = skilllevel_3b[2];
                break;
            case 3:
                skilltext_3b = skilllevel_3b[3];
                break;
        }
    }



    public void chooseskilllevel_2b(int a)
    {
        switch (a)
        {
            case 0:
                skilltext = skilllevel[0];
                break;
            case 1:
                skilltext = skilllevel[1];
                break;
            case 2:
                skilltext = skilllevel[2];
                break;
            case 3:
                skilltext = skilllevel[3];
                break;
            case 4:
                skilltext = skilllevel[4];
                break;
            case 5:
                skilltext = skilllevel[5];
                break;
            case 6:
                skilltext = skilllevel[6];
                break;
            case 7:
                skilltext = skilllevel[7];
                break;
        }
    }
} //public void shootspeed()//子弹射速增加15%,非线性
        //{
        //    if (skilllevelfixed[4] < 10)
        //    {
        //        interval = interval - interval * 0.15f;
        //        UIpath.GetComponent<UIcontrol>().textprompt(4);
        //        skilltree.gameObject.SetActive(false);
        //        Time.timeScale = 1;
        //        skilllevel[4] += 1;
        //        skilllevelfixed[4] += 1;
        //    }
        //}

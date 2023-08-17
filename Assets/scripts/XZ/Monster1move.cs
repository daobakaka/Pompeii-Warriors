using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class Monster1move : MonoBehaviour
{
    // Start is called before the first frame update
    public float disance = 0.5f;
    public float speed;
    private Rigidbody2D rigidbody2d;
    private Animator animator;
    public float monster1health = 50;
    public float monsterattackmin = 1;
    public GameObject[] bloods;
    public GameObject[] textbullethurts;
    //
    public GameObject exp_ball;
    public int exp_ball_assistant = 0;
    public float exp_ball_value = 30;
    //
    float t;
    float recordtime;
    int recordtime_aux;
    //
    public GameObject[] bloodsshadow;
    private int bloodshadow_assist = 0;
    //持续伤害道具助手
    public int[] props;
    //地面流血效果
    //伤害统计
    public GameObject[] addskilldffects;
    private bool addblackfire_assist = true;
    //黑枪与爆射特效
    public float[] resistance;
    //抗性数组 0 真实抗性 1、 物理抗性 2、魔法抗性
    public GameObject treasure;//宝物
    public bool treasure_bool = false;
    public GameObject monsterblood;
    public Vector3 positioncorrect = new Vector3(0, 1, -1);
    private bool monsterblood_assisit = false;
    private GameObject bloodmove;
    private Vector3 bloodderecton;
    public int sortingorder;
    //
    //boss 控宝组合
    // public GameObject[] phyhurt_music;
    // public GameObject[] maghurt_music;
    //
    private GameObject monsterhurt;
    private GameObject postprocessing;
    private GameObject monstercontrol;
    private GameObject actor;
    //结束控制
    public int monster_actnum;
    /// <summary>
    /// 性能调优
    /// </summary>
    private Vector3 pre1, pre2;
    void Start()
    {
        rigidbody2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        this.gameObject.GetComponent<SortingGroup>().sortingOrder = sortingorder;
        changeexpvalue();
        StartCoroutine("bossskill");
        monsterbloodprojection();//血条映射
        monsterhurt = GameObject.FindWithTag("monsterhurt");
        postprocessing = GameObject.FindWithTag("postprocessing");
        monstercontrol = GameObject.FindWithTag("monstercontrol");
        monsterrandomsound(monster_actnum);
        //..性能调优
        pre1 = new Vector3(0, 180, 0);
        pre2 = new Vector3(0, 0, 0);



    }

    // Update is called once per frame
    void Update()
    {
        monsterbloodprojection();//血条映射



    }
    private void FixedUpdate()
    {
        monstermove();
        canceltriggerwithbullet();

        //timerecord();
    }
    void monstermove()
    {
        if (monster1health > 0)
        {
            if (GameObject.FindWithTag("puppet") != null)//优先寻找傀儡
            {
                GameObject target = GameObject.FindWithTag("puppet");
                float s = (target.transform.position - this.transform.position).sqrMagnitude;//向量模
                var direction = (target.transform.position - this.transform.position);//两点方向向量
                if (s > 0.1f)
                {
                    transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//朝向目标移动,注意这里要用世界坐标系。 // animator.Play("Walk");
                    if (s > disance)
                    {
                        

                        if (target.transform.position.x - this.transform.position.x > 0.3f)
                        { //transform.localRotation = Quaternion.Euler(0, 180, 0);
                            transform.localEulerAngles = pre1;//旋转自己坐标方向
                            monserbloodrotate(1);                                                    //  transform.Rotate(0, 180, 0, Space.Self);
                        }
                        if (target.transform.position.x - this.transform.position.x < -0.3f)
                        { //transform.localRotation = Quaternion.Euler(0, 0, 0);
                            transform.localEulerAngles = pre2;
                            monserbloodrotate(0);
                            // transform.Rotate(0, 0, 0, Space.Self);
                        }
                        if (Time.fixedTime - t > 0.3)
                        { animator.Play("Walk"); }
                    }
                    else
                    {
                        if (Actor1.actorhealth > 0)
                        {
                            animator.SetTrigger("Attack");
                            t = Time.fixedTime;
                        }
                    }
                }
            }
            else
            {
                if (GameObject.FindWithTag("player") != null)
                {
                    GameObject target = GameObject.FindWithTag("player");
                    float s = (target.transform.position - this.transform.position).sqrMagnitude;//向量模
                    var direction = (target.transform.position - this.transform.position);//两点方向向量
                    if (s > 0.1f)
                    {
                        transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//朝向目标移动,注意这里要用世界坐标系。 // animator.Play("Walk");
                        if (s > disance)
                        {

                            if (target.transform.position.x - this.transform.position.x > 0.3f)
                            { //transform.localRotation = Quaternion.Euler(0, 180, 0);
                                transform.localEulerAngles = pre1;//旋转自己坐标方向
                                monserbloodrotate(1);                                                    //  transform.Rotate(0, 180, 0, Space.Self);
                            }
                            if (target.transform.position.x - this.transform.position.x < -0.3f)
                            { //transform.localRotation = Quaternion.Euler(0, 0, 0);
                                transform.localEulerAngles = pre2;
                                monserbloodrotate(0);
                                // transform.Rotate(0, 0, 0, Space.Self);
                            }
                            if (Time.fixedTime - t > 0.3)
                            { animator.Play("Walk"); }
                        }
                        else
                        {
                            if (Actor1.actorhealth > 0)
                            {
                                animator.SetTrigger("Attack");
                                t = Time.fixedTime;
                            }
                        }
                    }
                }
            }

        }
        else
        {
            animator.Play("Death");
            Destroy(this.gameObject, 5);
            Destroy(bloodmove);//摧毁血条
            if (exp_ball_assistant == 0)
            {
                GameObject clone = Instantiate(exp_ball, this.transform);
                GameObject root = GameObject.FindWithTag("clonetree");
                clone.transform.parent = root.transform;
                clone.transform.position = this.transform.position + new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                monsterrandomsound(monster_actnum + 1);
                exp_ball_assistant++;
            }
            if (treasure_bool == true)
            {
               StopCoroutine("bossskill");
                GameObject clone = Instantiate(treasure, null);
                GameObject root = GameObject.FindWithTag("clonetree");
                clone.transform.parent = root.transform;
                clone.transform.position = this.transform.position + new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                actor = GameObject.FindWithTag("player");
                actor.GetComponent<Actor1>().fuckingmusic_change(20);
                Actor1.expactor = -10000;//改变经验值大小，禁止升级
                monsterhurt.transform.parent.transform.GetChild(5).GetChild(0).GetComponent<AudioSource>().Play();//播放BOSS 死亡音乐
                monsterrandomsound(monster_actnum + 1);
                treasure_bool = false;
                StartCoroutine("deathanimation");//开启屏幕特效,主死亡
            }
        }
    }


    IEnumerator deathanimation()//主怪死亡调控节点
    {
        yield return new WaitForEndOfFrame();

        if (monstercontrol.TryGetComponent<Monstercontrol1>(out Monstercontrol1 monstercontrol1))
            monstercontrol.GetComponent<Monstercontrol1>().StopAllCoroutines();
        else
        monstercontrol.GetComponent<Monserscontrol>().StopAllCoroutines();//取消刷怪
        actor.gameObject.tag = "skill";
        postprocessing.GetComponent<Volume>().profile.TryGet(out Vignette vignette);
        for (float tc = 0; tc < 1; tc += Time.deltaTime)
        {
            vignette.intensity.value = tc;
            yield return new WaitForSeconds(Time.deltaTime * 1);

        }
        for (float tc = 1; tc > 0; tc -= Time.deltaTime)
        {
            vignette.intensity.value = tc;
            yield return new WaitForSeconds(Time.deltaTime * 1);

        }
        yield return null;
    }


    void monsterrandomsound(int monster_actnum)//怪物出生死亡声音
    {
        int ran = Random.Range(0, monsterhurt.transform.parent.transform.GetChild(4).GetChild(monster_actnum).childCount);
        if ((monster_actnum & 1) == 0)//偶数
        {
            if (Random.Range(0, 1f) > 0.8f)
                monsterhurt.transform.parent.transform.GetChild(4).GetChild(monster_actnum).GetChild(ran).GetComponent<AudioSource>().Play();
        }
        else
        {    if (Random.Range(0, 1f) > 0.7f )
            {
                monsterhurt.transform.parent.transform.GetChild(4).GetChild(monster_actnum).GetChild(ran).GetComponent<AudioSource>().Play();
               
            }
       }
}
    private void OnTriggerEnter2D(Collider2D other)//碰撞检测,以鸭儿视角
    {
        if (other.gameObject.tag == "bullet")
        {
            float hurtkey;
            hurtkey= Firecontrol.bulletrealhurt * (1 - resistance[1]) - resistance[0];
            this.monster1health -= hurtkey;//物理抗性1，真实抗性0
            Firecontrol.physicshurt += hurtkey;
            if (Random.Range(0, 1f) > Firecontrol.bulletpenetrate)
            { Destroy(other.gameObject); }
            bloodeffects();
            texthurt(hurtkey);
            addskillspecialeffets1();
            StartCoroutine("addskillspecialeffets2");//致命黑炎启动器
            addblackfire_assist = false;
            soundsphy();
            // Debug.Log("......" + monster1health);

        }
        if (other.gameObject.tag == "player")//怪物攻击
        {

            monsterhit();

        }
        if (other.gameObject.tag == "skill")//通用技能伤害
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.6f * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;//元素抗性2，真实抗性0
            Firecontrol.magichurt += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "puppetexplosion")//傀儡爆炸伤害，直至傀儡消失
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 2.5f;
            this.monster1health -= hurtkey;
            Firecontrol.puppet_3z += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            StartCoroutine(puppeteffects());
            soundsmag();
        }
        if (other.gameObject.tag == "bulletexplosion")//子弹爆炸伤害，吃元素伤害属性
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.1f * Glodenskill.shootexplosion * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.explosinshoot_2b += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsphy();
        }
        if (other.gameObject.tag == "skill1energyball")//通用技能1
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 1.5f * Skillcontrol.skillhurt_ef[0] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicballhurt_skill1 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill2energybullet")//通用技能2
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 1f * Skillcontrol.skillhurt_ef[1] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicbullethurt_skill2 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill3energyiceandfire")//通用技能3
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.5f * Skillcontrol.skillhurt_ef[2] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magiciceandfire_skill3 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill4energythunder")//通用技能4
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 1.2f * Skillcontrol.skillhurt_ef[3] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicthunder_skill4 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill5energyrecover" && props[0] == 0)//通用技能5
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.15f * Skillcontrol.skillhurt_ef[4] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicrecover_skill5 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            StartCoroutine(prop1effects());
            soundsmag();
        }
        if (other.gameObject.tag == "skill7energyice")//通用技能7
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.4f * Skillcontrol.skillhurt_ef[6] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magiciceball_skill7 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsphy();
        }
        if (other.gameObject.tag == "propblackfire")//黑炎永久伤害，直至死亡，无视抗性
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.2f * Skillcontrol.skillhurt_ef[7];
            this.monster1health -= hurtkey;
            Firecontrol.magicblackfire_skill8 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            StartCoroutine(prop2effects());
            soundsmag();


        }
    }
        void OnTriggerExit2D(Collider2D other)//出恢复圈，伤害消失
        {
            if (other.gameObject.tag == "skill5energyrecover" && props[0] == 0)
            {

                props[0] = 1;

            }
        }
        void bloodshadoweffcts()
        {
            GameObject clone = Instantiate(bloodsshadow[Random.Range(0, bloodsshadow.Length)], this.transform);
            clone.transform.position = this.transform.position + new Vector3(Random.Range(0.1f, 0.5f), Random.Range(0.1f, 0.5f));
            clone.transform.parent = null;//以子节点视角解除父节点关系
            GameObject root = GameObject.FindWithTag("clonetree");
            clone.transform.parent = root.transform;
           // Debug.Log("克隆");

        }
        void bloodeffects()
        {
            GameObject clone = Instantiate(bloods[Random.Range(0, bloods.Length)], this.transform);
            clone.transform.position = this.transform.position + new Vector3(Random.Range(0.01f, 0.05f), Random.Range(0.01f, 0.05f));
            Destroy(clone.gameObject, 0.8f);
        }
        void texthurt(float a)
        {
            GameObject clone = Instantiate(textbullethurts[0], null);
            GameObject root = GameObject.FindWithTag("UIclone");
        clone.GetComponent<Textbullethurt>().hurtefficent = a;
        clone.transform.SetParent(root.transform);
            clone.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, 0, -1)); //new Vector3(Random.Range(0.01f, 0.05f), 0.1f,1)); 
                                                                                                                        //Debug.Log("坐标" + clone.transform.position+"已克隆");
            Destroy(clone.gameObject, 2f);
        }
        void texthurtmagic(float a)
        {
            GameObject clone = Instantiate(textbullethurts[1], null);
            GameObject root = GameObject.FindWithTag("UIclone");
            clone.GetComponent<Texthurtmagic>().hurtcoefficient = a;
            clone.transform.SetParent(root.transform);
            clone.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, 0, -1)); //new Vector3(Random.Range(0.01f, 0.05f), 0.1f,1)); 
                                                                                                                        //Debug.Log("坐标" + clone.transform.position+"已克隆");
            Destroy(clone.gameObject, 2f);
        }
    void textactor(float a)
    {
        GameObject clone = Instantiate(textbullethurts[2], null);
        GameObject root = GameObject.FindWithTag("UIclone");
        clone.GetComponent<TextActor>().hurtcoefficient = a;
        clone.transform.SetParent(root.transform);
        clone.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, 0, -1)); //new Vector3(Random.Range(0.01f, 0.05f), 0.1f,1)); //Debug.Log("坐标" + clone.transform.position+"已克隆");
        Destroy(clone.gameObject, 2f);



    }
        void canceltriggerwithbullet()//生命值为零，销毁碰撞检测
        {
            if (this.monster1health <= 0 && bloodshadow_assist == 0)
            {
                bloodshadoweffcts();
                Destroy(this.gameObject.GetComponent<CapsuleCollider2D>());
                bloodshadow_assist++;
            }
        }
        void monsterhit()//碰撞主角，生命值降低，人物变红
        {
       
        Actor1.actorhealth = Actor1.actorhealth - monsterattackmin * Random.Range(5, 10) * (1 - Actor1.actordamagereduction) * (1 - Actor1.actordamagereduction_forever);
            // Debug.Log("hurt...." + monsterattackmin * Random.Range(1, 2) * (1 - Actor1.actordamagereduction));
            GameObject root = GameObject.FindWithTag("player");
            root.GetComponent<Actor1>().starthurtanimaition();
        if (Actor1.actorhealth > 0)
        {
            root.GetComponent<Animator>().Play("Hit", 2);
            textactor( -monsterattackmin * Random.Range(5, 10) * (1 - Actor1.actordamagereduction) * (1 - Actor1.actordamagereduction_forever));
        }
        //  canceltriggerwithactor();
        StartCoroutine("invalidattack", 1f);

        }
        void addskillspecialeffets1()//爆炸子弹
        {
        float random = Random.Range(0, 1f);
        
        if (Glodenskill.addskillnum[0] == 1&&random>0.5)
            {
                GameObject clone = Instantiate(addskilldffects[0], null);
                clone.transform.position = this.transform.position;
                clone.transform.parent = null;
                clone.GetComponent<CircleCollider2D>().radius = 1.2f * Glodenskill.shootexplosionradius;
                Destroy(clone.gameObject, 0.1f);
            }

            //Debug.Log("爆炸");
        }
        IEnumerator addskillspecialeffets2()//黑炎枪
        {
            if (Glodenskill.addskillnum[1] == 1 && addblackfire_assist == true)
            {
                GameObject clone = Instantiate(addskilldffects[1], this.transform);
                clone.transform.position = this.transform.position;
                clone.transform.parent = this.transform;
               clone.GetComponent<SortingGroup>().sortingOrder = -30;
                yield return new WaitForSeconds(2f);
                for (; this.monster1health > 0;)
                {
                    yield return new WaitForSeconds(2f);
                    this.monster1health -= Skillcontrol.skillmagichurt * Glodenskill.shootblackfire;
                    Firecontrol.blackfire_2b += Skillcontrol.skillmagichurt * Glodenskill.shootblackfire;
                    texthurtmagic(Skillcontrol.skillmagichurt * Glodenskill.shootblackfire);
                    // bloodeffects();
                }

                yield return null;
                Destroy(clone.gameObject, 1f);
            }
        }

        IEnumerator invalidattack(float time)

        {
            
            if (this.gameObject.GetComponent<CapsuleCollider2D>() != null)
            {
                this.gameObject.GetComponent<CapsuleCollider2D>().enabled = false;
            }
            yield return new WaitForSeconds(time);
            if (this.gameObject.GetComponent<CapsuleCollider2D>() != null)
            {
                this.gameObject.GetComponent<CapsuleCollider2D>().enabled = true;
            }
           
        }
        void changeexpvalue()
        {
            exp_ball.GetComponent<Expmove>().exp_value = exp_ball_value;
        }
        IEnumerator prop1effects()
        {


            for (; props[0] == 0;)
            {
                GameObject prop = GameObject.FindWithTag("skill5energyrecover");
                if (prop != null)
                {
                    yield return new WaitForSeconds(1f);
                    this.monster1health -= Skillcontrol.skillmagichurt * 0.15f * Skillcontrol.skillhurt_ef[4] * (1 - resistance[2]) - resistance[0];
                Firecontrol.magicrecover_skill5 += Skillcontrol.skillmagichurt * 0.15f * Skillcontrol.skillhurt_ef[4] * (1 - resistance[2]) - resistance[0];
                texthurtmagic(Skillcontrol.skillmagichurt * 0.15f * Skillcontrol.skillhurt_ef[4] * (1 - resistance[2]) - resistance[0]);
                    bloodeffects();
                }
                else
                {
                    break;
                }
            }
            yield return null;
            props[0] = 0;
        }
        IEnumerator prop2effects()
        {
           GameObject clone = Instantiate(addskilldffects[1], this.transform);
           clone.transform.position = this.transform.position;
           clone.transform.parent = this.transform;
           clone.GetComponent<SortingGroup>().sortingOrder = -30;
        for (; this.monster1health > 0;)
            {
          
            
            yield return new WaitForSeconds(2f);
                this.monster1health -= Skillcontrol.skillmagichurt * 0.2f* Skillcontrol.skillhurt_ef[7];
            Firecontrol.magicblackfire_skill8 += Skillcontrol.skillmagichurt * 0.2f* Skillcontrol.skillhurt_ef[7];
            texthurtmagic(Skillcontrol.skillmagichurt * 0.2f * Skillcontrol.skillhurt_ef[7]);
                // bloodeffects();
            }

            yield return null;
         Destroy(clone, 1);

    }
        IEnumerator puppeteffects()
        {
            yield return new WaitForSeconds(1f);

            for (; monster1health > 0;)
            {
                GameObject puppet = GameObject.FindWithTag("puppet");
                if (puppet != null)
                {
                    yield return new WaitForSeconds(1f);
                    this.monster1health -= Skillcontrol.skillmagichurt * 2.5f;
                    Firecontrol.magichurt += Skillcontrol.skillmagichurt * 2.5f;
                    texthurtmagic(Skillcontrol.skillmagichurt * 2.5f);
                    bloodeffects();
                }
                else
                {
                    break;
                }
            }
            yield return null;

        }
    IEnumerator bossskill()//守底boss 鸡公
    { if (treasure_bool == true&&this.monster1health>0)
       { for (; ; )
            {
                yield return new WaitForSeconds(10);
                this.speed *= 2;
                yield return new WaitForSeconds(10);
                this.speed /= 2;
                this.monster1health += 50;
            
            }        
        }
    }

    void monsterbloodprojection()//teeasure判断是否复制，monserblood_assist 限定次数
    { if (treasure_bool == true)
        {
            if (monsterblood_assisit == false)//初始值复制一次
            {
                bloodmove = Instantiate(monsterblood, null);
                GameObject root = GameObject.FindWithTag("UIclone");
                bloodmove.transform.parent = root.transform;//投射到UI 栏目上
                bloodmove.transform.GetChild(0).GetComponent<Slider>().maxValue = this.monster1health;//为血条总量赋予初值
                monsterblood_assisit = true;
            }
            if (monsterblood_assisit== true&&monster1health>0)//持续跟踪
            {
                bloodmove.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + positioncorrect);
                bloodmove.transform.GetChild(0).GetComponent<Slider>().value = this.monster1health;
            }
       }
    }
    void monserbloodrotate(int a)//BOSS血条翻转
    { if (treasure_bool == true)
        { if (a == 0)
                bloodmove.transform.eulerAngles =new Vector3(0, 180, 0);
        if(a==1)
                bloodmove.transform.eulerAngles = new Vector3(0, 0, 0);
        }
    }
    ///
    //声音播放
    void soundsphy()
    { if (Random.Range(0, 1f) > 0.7f)
        {
            int i = Random.Range(0, 9);
            monsterhurt.transform.GetChild(i).GetComponent<AudioSource>().Play();
          
        }
    }
    void soundsmag()
    {
        if(Random.Range(0, 1f) > 0.9f)
        {
            int i = Random.Range(9, 15);
            monsterhurt.transform.GetChild(i).GetComponent<AudioSource>().Play();
           
        }

    }
  }

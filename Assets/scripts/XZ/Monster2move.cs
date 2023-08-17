using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.TestTools;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class Monster2move : MonoBehaviour
{
    // Start is called before the first frame update
    public float disance = 0.5f;
    public float speed;
    private Rigidbody2D rigidbody2d;
    private Animator animator;
    public float monster1health = 50;
    public float monsterattackmin = 1;
    //
    public GameObject exp_ball;
    public int exp_ball_assistant = 0;
    public float exp_ball_value = 30;
    //
    public GameObject[] bloods;
    //
    public GameObject[] bloodsshadow;
    private int bloodshadow_assist = 0;
    //�����˺���������
    public GameObject[] textbullethurts;
    //�˺�ͳ��
    public GameObject[] addskilldffects;
    private bool addblackfire_assist = true;
    //��ǹ�뱬����Ч
    //
    //
    float t;
    float recordtime;
    int recordtime_aux;
    //
    public int[] props;
    public float[] resistance;
    //�������� 0 ��ʵ���� 1�� ������ 2��ħ������
    public GameObject treasure;//����
    public bool treasure_bool = false;
    public bool boss_bool = false;
    public GameObject monsterblood;
    public Vector3 positioncorrect = new Vector3(0, 1, -1);
    private bool monsterblood_assisit = false;
    private GameObject bloodmove;
    private Vector3 bloodderecton;
    public int sortingorder = -120;
    public int skillnum = 100;
    //
    //boss �ر����
    // public GameObject[] phyhurt_music;
    // public GameObject[] maghurt_music;
    //
    private GameObject monsterhurt;
    private GameObject postprocessing;
    private GameObject monstercontrol;
    private GameObject clonetree;
    private GameObject actor;
    //��������
    public int monster_actnum;//�����������
    //
    public GameObject[] boss_skilleffcts;
    public GameObject[] boss_skilleffcts_trans;
    void Start()
    {
        rigidbody2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        this.gameObject.GetComponent<SortingGroup>().sortingOrder = sortingorder;
        changeexpvalue();
        bossskillnum(skillnum);
        monsterbloodprojection();//Ѫ��ӳ��
        monsterhurt = GameObject.FindWithTag("monsterhurt");
        postprocessing = GameObject.FindWithTag("postprocessing");
        monstercontrol = GameObject.FindWithTag("monstercontrol");
        clonetree = GameObject.FindWithTag("clonetree");
        monsterrandomsound(monster_actnum);


    }

    // Update is called once per frame
    void Update()
    {
        monsterbloodprojection();//Ѫ��ӳ��



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
            if (GameObject.FindWithTag("puppet") != null)//����Ѱ�ҿ���
            {
                GameObject target = GameObject.FindWithTag("puppet");
                float s = (target.transform.position - this.transform.position).sqrMagnitude;//����ģ
                var direction = (target.transform.position - this.transform.position);//���㷽������
                if (s > 0.1f)
                {
                    transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//����Ŀ���ƶ�,ע������Ҫ����������ϵ�� // animator.Play("Walk");
                    if (s > disance)
                    {


                        if (target.transform.position.x - this.transform.position.x > 0.3f)
                        { //transform.localRotation = Quaternion.Euler(0, 180, 0);
                            transform.localEulerAngles = new Vector3(0, 180, 0);//��ת�Լ����귽��
                            monserbloodrotate(1);                                                    //  transform.Rotate(0, 180, 0, Space.Self);
                        }
                        if (target.transform.position.x - this.transform.position.x < -0.3f)
                        { //transform.localRotation = Quaternion.Euler(0, 0, 0);
                            transform.localEulerAngles = new Vector3(0, 0, 0);
                            monserbloodrotate(0);
                            // transform.Rotate(0, 0, 0, Space.Self);
                        }
                       // if (Time.fixedTime - t > 0.3)
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
                    float s = (target.transform.position - this.transform.position).sqrMagnitude;//����ģ
                    var direction = (target.transform.position - this.transform.position);//���㷽������
                    if (s > 0.1f)
                    {
                        transform.Translate(direction.normalized * speed * Time.deltaTime, Space.World);//����Ŀ���ƶ�,ע������Ҫ����������ϵ�� // animator.Play("Walk");
                        if (s > disance)
                        {

                            if (target.transform.position.x - this.transform.position.x > 0.3f)
                            { //transform.localRotation = Quaternion.Euler(0, 180, 0);
                                transform.localEulerAngles = new Vector3(0, 180, 0);//��ת�Լ����귽��
                                monserbloodrotate(1);                                                    //  transform.Rotate(0, 180, 0, Space.Self);
                            }
                            if (target.transform.position.x - this.transform.position.x < -0.3f)
                            { //transform.localRotation = Quaternion.Euler(0, 0, 0);
                                transform.localEulerAngles = new Vector3(0, 0, 0);
                                monserbloodrotate(0);
                                // transform.Rotate(0, 0, 0, Space.Self);
                            }
                          //  if (Time.fixedTime - t > 0.3)
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
            animator.SetInteger("State", 9);
            Destroy(this.gameObject, 5);
            Destroy(bloodmove);//�ݻ�Ѫ��
            stopbossskillnum(skillnum);//���boss�����ָ�Я�� ����թʬ���
            if (exp_ball_assistant == 0)
            {
                GameObject clone = Instantiate(exp_ball, this.transform);
                clone.transform.parent = clonetree.transform;
                clone.transform.position = this.transform.position + new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                monsterrandomsound(monster_actnum + 1);
                exp_ball_assistant++;
            }
            if (treasure_bool == true&&boss_bool==true)
            {
                GameObject clone = Instantiate(treasure, null);
                clone.transform.parent = clonetree.transform;
                clone.transform.position = this.transform.position + new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                Actor1.expactor = -10000;//�ı侭��ֵ��С����ֹ����
                monsterhurt.transform.parent.transform.GetChild(5).GetChild(0).GetComponent<AudioSource>().Play();//����BOSS ��������
                monsterrandomsound(monster_actnum + 1);
                StartCoroutine("deathanimation");//������Ļ��Ч,������
                actor = GameObject.FindWithTag("player");
                actor.GetComponent<Actor1>().fuckingmusic_change(20);
                treasure_bool = false;
                boss_bool = false;
            }
        }
    }


    IEnumerator deathanimation()//�����������ؽڵ�
    {
        yield return new WaitForEndOfFrame();
        monstercontrol.GetComponent<Monserscontrol>().StopAllCoroutines();//ȡ��ˢ��
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
        //GameObject[] destorynum = GameObject.FindGameObjectsWithTag("monster");
        //for (int i = 0; i < destorynum.Length; i++)
        //{
        //    Destroy(destorynum[i]);
        //}
    }


    void monsterrandomsound(int monster_actnum)//���������������
    {
        int ran = Random.Range(0, monsterhurt.transform.parent.transform.GetChild(4).GetChild(monster_actnum).childCount);
        if ((monster_actnum & 1) == 0)//ż��
        {
            if (Random.Range(0, 1f) > 0.8f)
                monsterhurt.transform.parent.transform.GetChild(4).GetChild(monster_actnum).GetChild(ran).GetComponent<AudioSource>().Play();
        }
        else
        {
            if (Random.Range(0, 1f) > 0.7f)
            {
                monsterhurt.transform.parent.transform.GetChild(4).GetChild(monster_actnum).GetChild(ran).GetComponent<AudioSource>().Play();

            }
        }
    }
    private void OnTriggerEnter2D(Collider2D other)//��ײ���,��Ѽ���ӽ�
    {
        if (other.gameObject.tag == "bullet")
        {
            float hurtkey;
            hurtkey = Firecontrol.bulletrealhurt * (1 - resistance[1]) - resistance[0];
            this.monster1health -= hurtkey;//������1����ʵ����0
            Firecontrol.physicshurt += hurtkey;
            if (Random.Range(0, 1f) > Firecontrol.bulletpenetrate)
            { Destroy(other.gameObject); }
            bloodeffects();
            texthurt(hurtkey);
            addskillspecialeffets1();
            StartCoroutine("addskillspecialeffets2");//��������������
            addblackfire_assist = false;
            soundsphy();
            // Debug.Log("......" + monster1health);

        }
        if (other.gameObject.tag == "player")//���﹥��
        {

            monsterhit();

        }
        if (other.gameObject.tag == "skill")//ͨ�ü����˺�
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.5f * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;//Ԫ�ؿ���2����ʵ����0
            Firecontrol.magichurt += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "puppetexplosion")//���ܱ�ը�˺���ֱ��������ʧ
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
        if (other.gameObject.tag == "bulletexplosion")//�ӵ���ը�˺�����Ԫ���˺�����
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.1f * Glodenskill.shootexplosion * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.explosinshoot_2b += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsphy();
        }
        if (other.gameObject.tag == "skill1energyball")//ͨ�ü���1
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 1.5f * Skillcontrol.skillhurt_ef[0] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicballhurt_skill1 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill2energybullet")//ͨ�ü���2
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 1f * Skillcontrol.skillhurt_ef[1] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicbullethurt_skill2 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill3energyiceandfire")//ͨ�ü���3
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.5f * Skillcontrol.skillhurt_ef[2] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magiciceandfire_skill3 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill4energythunder")//ͨ�ü���4
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 1.2f * Skillcontrol.skillhurt_ef[3] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magicthunder_skill4 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsmag();
        }
        if (other.gameObject.tag == "skill5energyrecover" && props[0] == 0)//ͨ�ü���5
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
        if (other.gameObject.tag == "skill7energyice")//ͨ�ü���7
        {
            float hurtkey;
            hurtkey = Skillcontrol.skillmagichurt * 0.4f * Skillcontrol.skillhurt_ef[6] * (1 - resistance[2]) - resistance[0];
            this.monster1health -= hurtkey;
            Firecontrol.magiciceball_skill7 += hurtkey;
            texthurtmagic(hurtkey);
            bloodeffects();
            soundsphy();
        }
        if (other.gameObject.tag == "propblackfire")//���������˺���ֱ�����������ӿ���
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
    void OnTriggerExit2D(Collider2D other)//���ָ�Ȧ���˺���ʧ
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
        clone.transform.parent = null;//���ӽڵ��ӽǽ�����ڵ��ϵ
        GameObject root = GameObject.FindWithTag("clonetree");
        clone.transform.parent = root.transform;
        // Debug.Log("��¡");

    }
    void bloodeffects()
    {
        GameObject clone = Instantiate(bloods[Random.Range(0, bloods.Length)], this.transform);
       // clone.transform.parent = clonetree.transform;
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
                                                                                                                    //Debug.Log("����" + clone.transform.position+"�ѿ�¡");
        Destroy(clone.gameObject, 2f);
    }
    void texthurtmagic(float a)
    {
        GameObject clone = Instantiate(textbullethurts[1], null);
        GameObject root = GameObject.FindWithTag("UIclone");
        clone.GetComponent<Texthurtmagic>().hurtcoefficient = a;
        clone.transform.SetParent(root.transform);
        clone.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, 0, -1)); //new Vector3(Random.Range(0.01f, 0.05f), 0.1f,1)); 
                                                                                                                    //Debug.Log("����" + clone.transform.position+"�ѿ�¡");
        Destroy(clone.gameObject, 2f);
    }
    void textactor(float a)
    {
        GameObject clone = Instantiate(textbullethurts[2], null);
        GameObject root = GameObject.FindWithTag("UIclone");
        clone.GetComponent<TextActor>().hurtcoefficient = a;
        clone.transform.SetParent(root.transform);
        clone.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, 0, -1)); //new Vector3(Random.Range(0.01f, 0.05f), 0.1f,1)); //Debug.Log("����" + clone.transform.position+"�ѿ�¡");
        Destroy(clone.gameObject, 2f);



    }
    void canceltriggerwithbullet()//����ֵΪ�㣬������ײ���
    {
        if (this.monster1health <= 0 && bloodshadow_assist == 0)
        {
            bloodshadoweffcts();
            Destroy(this.gameObject.GetComponent<CapsuleCollider2D>());
            bloodshadow_assist++;
        }
    }
    void monsterhit()//��ײ���ǣ�����ֵ���ͣ�������
    {

        Actor1.actorhealth = Actor1.actorhealth - monsterattackmin * Random.Range(5, 10) * (1 - Actor1.actordamagereduction) * (1 - Actor1.actordamagereduction_forever);
        // Debug.Log("hurt...." + monsterattackmin * Random.Range(1, 2) * (1 - Actor1.actordamagereduction));
        GameObject root = GameObject.FindWithTag("player");
        root.GetComponent<Actor1>().starthurtanimaition();
        if (Actor1.actorhealth > 0)
        {
            root.GetComponent<Animator>().Play("Hit", 2);
            textactor(-monsterattackmin * Random.Range(5, 10) * (1 - Actor1.actordamagereduction) * (1 - Actor1.actordamagereduction_forever));
        }
        //  canceltriggerwithactor();
        StartCoroutine("invalidattack", 1f);

    }
    void addskillspecialeffets1()//��ը�ӵ�
    {
        float random = Random.Range(0, 1f);

        if (Glodenskill.addskillnum[0] == 1 && random > 0.5)
        {
            GameObject clone = Instantiate(addskilldffects[0], null);
            clone.transform.position = this.transform.position;
            clone.transform.parent = null;
            clone.GetComponent<CircleCollider2D>().radius = 1.2f * Glodenskill.shootexplosionradius;
            Destroy(clone.gameObject, 0.1f);
        }

        //Debug.Log("��ը");
    }
    IEnumerator addskillspecialeffets2()//����ǹ
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
            this.monster1health -= Skillcontrol.skillmagichurt * 0.2f * Skillcontrol.skillhurt_ef[7];
            Firecontrol.magicblackfire_skill8 += Skillcontrol.skillmagichurt * 0.2f * Skillcontrol.skillhurt_ef[7];
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
    IEnumerator bossskill1()//�ص�boss 1����
    {
        if (treasure_bool == true && this.monster1health > 0)
        {
            for (; ; )
            {
                yield return new WaitForSeconds(10);
                this.speed *= 2;
                yield return new WaitForSeconds(10);
                this.speed /= 2;
                this.monster1health += 50;

            }
        }
    }
    IEnumerator bossskill2()//�ص�boss ����
    {
        if (treasure_bool == true && this.monster1health > 0)
        {
            for (; ; )
            {
                yield return new WaitForSeconds(8);
                this.speed *= 2;
                yield return new WaitForSeconds(8);
                this.speed /= 2;
                this.monster1health += 70;

            }
        }
    }
    IEnumerator bossskill3()//�����
    { yield return new WaitForSeconds(30);
        GameObject root = GameObject.FindWithTag("clonetree");
        WaitForSeconds loop = new WaitForSeconds(0.5f);
        if (treasure_bool == true && this.monster1health > 0)
        { for (; ; )
            {
                yield return new WaitForSeconds(5);
                for (int i = 0; i < 30; i++)
                {
                    GameObject clone = Instantiate(boss_skilleffcts[0], boss_skilleffcts_trans[0].transform.position, boss_skilleffcts_trans[0].transform.rotation, boss_skilleffcts_trans[0].transform.parent);
                    clone.transform.SetParent(root.transform);
                    monsterhurt.transform.parent.transform.GetChild(11).GetChild(0).GetComponent<AudioSource>().Play();
                    Destroy(clone, 10);
                    yield return loop;  
                }
                this.speed = 2.7f;
                yield return new WaitForSeconds(3);
                for (int i = 0; i < 10; i++)
                {
                    this.monster1health += 20;
                }
                yield return new WaitForSeconds(3);
                this.speed = 0;

            }
        
        
        
        }
    
    
    
    
    
    }

    void bossskillnum( int skillmun)
    { switch (skillmun)
        { case 0:
                StartCoroutine("bossskill1");
                break;
            case 1:
                StartCoroutine("bossskill2");
                break;
            case 2:
                StartCoroutine("bossskill3");
                break;

            case 100:
                break;
        
        }   
    }
    void stopbossskillnum(int skillnum)
    {if (treasure_bool == false)
        {
            switch (skillnum)
            {
                case 0:
                   StopCoroutine("bossskill1");
                    break;
                case 1:
                    StopCoroutine("bossskill2");
                    break;
                case 2:
                    StopCoroutine("bossskill3");
                    break;

                case 100:
                    break;

            }
        }






    }

    void monsterbloodprojection()//teeasure�ж��Ƿ��ƣ�monserblood_assist �޶�����
    {
        if (treasure_bool == true)
        {
            if (monsterblood_assisit == false)//��ʼֵ����һ��
            {
                bloodmove = Instantiate(monsterblood, null);
                GameObject root = GameObject.FindWithTag("UIclone");
                bloodmove.transform.parent = root.transform;//Ͷ�䵽UI ��Ŀ��
                bloodmove.transform.GetChild(0).GetComponent<Slider>().maxValue = this.monster1health;//ΪѪ�����������ֵ
                monsterblood_assisit = true;
            }
            if (monsterblood_assisit == true&&monster1health>0)//��������
            {
                bloodmove.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + positioncorrect);
                bloodmove.transform.GetChild(0).GetComponent<Slider>().value = this.monster1health;
            }
        }
    }
    void monserbloodrotate(int a)//BOSSѪ����ת
    {
        if (treasure_bool == true)
        {
            if (a == 0)
                bloodmove.transform.eulerAngles = new Vector3(0, 180, 0);
            if (a == 1)
                bloodmove.transform.eulerAngles = new Vector3(0, 0, 0);
        }
    }
    ///
    //��������
    void soundsphy()
    {
        if (Random.Range(0, 1f) > 0.7f)
        {
            int i = Random.Range(0, 9);
            monsterhurt.transform.GetChild(i).GetComponent<AudioSource>().Play();

        }
    }
    void soundsmag()
    {
        if (Random.Range(0, 1f) > 0.9f)
        {
            int i = Random.Range(9, 15);
            monsterhurt.transform.GetChild(i).GetComponent<AudioSource>().Play();

        }

    }
}


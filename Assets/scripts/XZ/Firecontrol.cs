using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Firecontrol : MonoBehaviour
{
    public GameObject clonetarget;//��¡Ŀ��
    public float destorytime;
    public float interval;//��¡Ƶ��
    public Transform adress;//������ַ
    public float sp;//
    public static float bulletmovespeed = 3f;//�ӵ�����
    //
    private float[] bullethit = new float[100];//�ӵ������˺�����
    public float[] bullethitrange = new float[5];//�ӵ��˺���Χ����
    public float bullethitrangemin=0 ;
    public static float bulletrealhurt;//�ӵ��˺�
    public static float bullerealhut_effcrent = 1f;
    public static float bullerealhut_effcrent_forever = 1f;
    public static float bulletpenetrate = 0;//�ӵ���͸��
    private float bullethit_assist = 1f;
    private float[] bullethit_assist_key = new float[4];
    private int bullethit_assit_int = 0;
    public  float isshot_assist = 1;//Ϊ��Ӱ�ṩ����ο�
    //
    private float addbullethit;
    private int savecriticalnum;//���汩����������
    private int handfire;//�ֶ��������
    public float magazinenum;//��ʼ������
    private float mafazinekey;
    public float changemagazine;//����ʱ��
    public float ind_changemagazne=0;
    private float timefire;
    private int time_changemagazine=0;
    public int  skilltext;
    public int[] skilllevel;
    public int[] skilllevelfixed;
    public GameObject changemaga;
    //
    public GameObject skilltree;
    public GameObject UIpath;
    public GameObject skillcontrol_path;
    public GameObject actor_path;
    private Vector3 clone_ris;//��¡λ������ϵ��
    //
    public Toggle toggle;
    public static float physicshurt, magichurt, magicballhurt_skill1, magicbullethurt_skill2, magiciceandfire_skill3, magicthunder_skill4, magicrecover_skill5, magiciceball_skill7, magicblackfire_skill8, explosinshoot_2b, blackfire_2b, puppet_3z;
    //
    public int blaze_assist = 1;
    //�˺�ͳ�����
    private GameObject data_read;
    private int weapon_specail ;//�����س��������������л���������
                                //
    public Joystick joystickaim;
    public GameObject aimray;
    void Start()
    {//...
      
        ////��̬������ʼ��



      //InvokeRepeating("clone", 5, interval);//ѭ������
      StartCoroutine(clonedivision());
///----------------------------------------------------------------------
        clone_ris = new Vector3(0.1f, 0.1f, 0);
        bullethit_assist_key[0] = 0.45f;
        bullethit_assist_key[1] = 0.35f;
        bullethit_assist_key[2] = 0.3f;
        bullethit_assist_key[3] = 0.26f;
///--------------------------------------------------------------------
        for (int i = 0; i < bullethit.Length; i++)
        {
            bullethit[i] = 1;

        }//�ӵ��˺�����
        for (int j = 0; j < bullethitrange.Length; j++)
        {
            bullethitrange[j] = j + bullethitrangemin;
        }//�ӵ������˺�����
        Debug.Log( "............" + bullethitrangemin);
        mafazinekey = magazinenum;
        //--------------------------
        weapon_specailskill(weapon_specail);
        //
        
    }
    private void Awake()
    {
        data_read = GameObject.FindWithTag("dicsave");
        prefsget();




    }
    // Update is called once per frame
    void prefsget()//���������ȡ
    {
        //...
        bulletmovespeed = 3f;
        bullerealhut_effcrent = 1f;
        bullerealhut_effcrent_forever = 1f;
        bulletpenetrate = 0;
        Skillcontrol.skillmagichurt_effcient = 1f;
        Skillcontrol.skillmagichurt_effcient_forever = 1f;
        Glodenskill.addskillnum[0] = 0;
        Glodenskill.addskillnum[1] = 0;
        Glodenskill. shootblackfire = 0.2f;
        Glodenskill.shootexplosion = 1f;
        Glodenskill.shootexplosionradius = 1;
        Actor1.actordamagereduction = 0;
        Actor1.actordamagereduction_forever = 0;
        Actor1.actorhealth = 100;
        Actor1.expactor = 0;
        Maincontrol.music_lerp = false;
        physicshurt = 0;
        magichurt = 0; 
        magicballhurt_skill1 = 0; 
        magicbullethurt_skill2 = 0; 
        magiciceandfire_skill3 = 0; 
        magicthunder_skill4 = 0;
        magicrecover_skill5= 0;
        magiciceball_skill7 = 0;
        magicblackfire_skill8 = 0; 
        explosinshoot_2b = 0; 
        blackfire_2b = 0;
        puppet_3z = 0;
        Panleskilltest.skill_rechoose_num = 1;
        ////��̬������ʼ��    
            int key1 = PlayerPrefs.GetInt("weapon_type");
            int key2 = PlayerPrefs.GetInt("honor_level");
            weapon_specail = key1;
            bullethitrangemin = data_read.GetComponent<Dicsave>().weapon_attack[key1];//ǹе�����˺�ֵ
            bullerealhut_effcrent_forever += 0.03f * key2;//�����ȼ�����˺���ֵ
            Skillcontrol.skillmagichurt_effcient_forever += 0.03f * key2;//�����ȼ����Ԫ���˺���ֵ
            magazinenum = data_read.GetComponent<Dicsave>().weapon_maganizecap[key1];//�ӵ�����
            interval = data_read.GetComponent<Dicsave>().weapon_interval[key1];//������
            changemagazine = data_read.GetComponent<Dicsave>().weapon_magatime[key1];//����ʱ��
    }


    void weapon_specailskill(int a)
    { switch (a)
        { 
            case 0:
                for (int i = 0; i < 10; i++)
                {
                    bullethit[i] += 1;
                    
                }
                Debug.Log("�����س���ԭʼ��������10%");
                break;
            case 1:
                actor_path.GetComponent<Actor1>().speed *= 1.15f;
                Debug.Log("�����س����ƶ��ٶ�����15%");
                break;
              
            case 2:
                Skillcontrol.skillmagichurt_effcient_forever += 0.1f;
                Debug.Log("�����س���Ԫ���˺�����10%");
                break;



        }
  
    }
    void Update()
    {
     // isshoot();
      magamonitor();//��ϻ���
   raymonitor();//��׼���߼��
        //this.transform.position = new Vector3(Random.Range(0, 20), transform.parent.position.y, 0);
        //  FixedUpdate();
        // Flip();
    }
    void bullettimehurt()
    {
        bulletrealhurt = bullethit[Random.Range(0, bullethit.Length)] * bullethitrange[Random.Range(0, bullethitrange.Length)]*bullerealhut_effcrent* bullerealhut_effcrent_forever* bullethit_assist;//ȡ������ֵ�����Ի���ֵ��Χ
    }
    private void FixedUpdate()
    {
        bullettimehurt();//�ӵ��˺�ʵʱ����
       // isshoot();
    }
    //�ӵ�����.................................................
    void fingertest()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            // Move the cube if the screen has the finger moving.
            //if (Input.touchCount == 1&&touch.position.x <= 0.3f * Screen.width)
            //{
            //    Debug.DrawLine(this.transform.position, (Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 10)), Color.red);

            //    Debug.Log("x��ֵ" + touch.position.x + "��ָ����" + Input.touchCount);
            //}

            if (touch.phase == TouchPhase.Moved && (touch.position.x > 0.6 * Screen.width || touch.position.y > 0.6 * Screen.height))
            {

                Debug.DrawLine(this.transform.position, (Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 10)), Color.red);
                //Debug.Log("x��ֵ" + touch.position.x + "��ָ����" + Input.touchCount);
            }
            if (Input.touchCount == 2)
            {
                touch = Input.GetTouch(1);
                if (touch.phase == TouchPhase.Moved && touch.position.x > 0.5 * Screen.width)
                {

                    Debug.DrawLine(this.transform.position, (Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 10)), Color.red);
                  //  Debug.Log("x��ֵ" + touch.position.x + "��ָ����" + Input.touchCount);
                }
            }
        }

    }
    /// <summary>
    /// ///��ָ�ٿ�
    /// </summary>
    void clone()
    {
        if (toggle.isOn == true&&Actor1.actorhealth>0)
        {
            if (GameObject.FindWithTag("monster") != null && magazinenum > 0 && joystickaim.Direction.magnitude==0)
            {
                GameObject target = GameObject.FindWithTag("monster");
                if ((target.transform.position - adress.transform.position).sqrMagnitude < 300f)
                {
                    //direction = (target.transform.position - adress.transform.position);
                    GameObject clone = Instantiate(clonetarget, null);//null Ϊ�ڵ���������꣬transform parants
                    clone.transform.position = adress.transform.position + clone_ris;
                    clone.transform.parent = null;//���ӽڵ��ӽǽ�����ڵ��ϵ
                    actor_path.GetComponent<Animator>().SetTrigger("Fire");
                    magazinenum--;
                    GameObject shoot = GameObject.FindWithTag("musicshoot");
                    shoot.transform.GetChild(weapon_specail) .GetComponent<AudioSource>().Play();
                    Destroy(clone, destorytime);//����}
                    skillcontrol_path.GetComponent<Skillcontrol>().energyattachmentskill7();//���ø��ŵ�

                }
            }

        }//���㷽������,�ж��Ƿ�ǹ
            if (  magazinenum > 0 &&   joystickaim.Direction.magnitude != 0)
        {
            GameObject clone = Instantiate(clonetarget, null);//null Ϊ�ڵ���������꣬transform parants
            clone.transform.position = adress.transform.position + clone_ris;
            clone.transform.parent = null;
            actor_path.GetComponent<Animator>().SetTrigger("Fire");
            magazinenum--;
            GameObject shoot = GameObject.FindWithTag("musicshoot");
            shoot.transform.GetChild(weapon_specail).GetComponent<AudioSource>().Play();
            Destroy(clone, destorytime);//����}
            skillcontrol_path.GetComponent<Skillcontrol>().energyattachmentskill7();//���ø��ŵ�
            }
        
        //����ӵ��� ʵ��������׼��

    }
    void isshoot()
    {
        if (isshot_assist == 1)
        {
            if (Input.GetMouseButtonDown(0) && magazinenum > 0)
            {
                if (handfire == 0 && toggle.isOn == false)
                {
                    GameObject clone = Instantiate(clonetarget, null);//null Ϊ�ڵ���������꣬transform parants
                    clone.transform.position = adress.transform.position;
                    clone.transform.parent = null;//���ӽڵ��ӽǽ�����ڵ��ϵ
                    magazinenum--;
                    GameObject shoot = GameObject.FindWithTag("musicshoot");
                    shoot.transform.GetChild(weapon_specail).GetComponent<AudioSource>().Play();
                    handfire = 1;
                    StartCoroutine("handfirecontrol", interval);
                    Destroy(clone, destorytime);//����}
                    skillcontrol_path.GetComponent<Skillcontrol>().energyattachmentskill7();//���ø��ŵ�


                }


            }
        }
        else
        {
            if (isshot_assist == 0)
            {
                if (Input.GetMouseButtonDown(0) && magazinenum > 0 && handfire == 0 && toggle.isOn == false)
                {         
                    StartCoroutine("blaze");
                    magazinenum--;
                    handfire = 1;
                    StartCoroutine("handfirecontrol", interval);
                    GameObject shoot = GameObject.FindWithTag("musicshoot");
                    shoot.transform.GetChild(weapon_specail).GetComponent<AudioSource>().Play();
                    skillcontrol_path.GetComponent<Skillcontrol>().energyattachmentskill7();//���ø��ŵ�

                }
            }
        }
        
    }


    IEnumerator clonedivision()
    {
        yield return new WaitForSeconds(5);
        for (; ; )
        {
            yield return new WaitForSeconds(interval);
            if (toggle.isOn == true&&Actor1.actorhealth>0)
            {
                if (GameObject.FindWithTag("monster") != null && joystickaim.Direction.magnitude == 0 &&magazinenum > 0)
                {
                    GameObject target = GameObject.FindWithTag("monster");
                    if ((target.transform.position - adress.transform.position).sqrMagnitude < 300f)
                    {
                       // StopCoroutine("blaze");
                        StartCoroutine("blaze");
                        actor_path.GetComponent<Animator>().SetTrigger("Fire");
                        magazinenum--;
                        GameObject shoot = GameObject.FindWithTag("musicshoot");
                        shoot.transform.GetChild(weapon_specail).GetComponent<AudioSource>().Play();//�л��ӵ�����
                        skillcontrol_path.GetComponent<Skillcontrol>().energyattachmentskill7();//���ø��ŵ�

                    }
                }
        
        }//���㷽������,�ж��Ƿ�ǹ
        if ( magazinenum > 0 && joystickaim.Direction.magnitude != 0)
            {
               // StopCoroutine("blaze");
                StartCoroutine("blaze");
                actor_path.GetComponent<Animator>().SetTrigger("Fire");
                magazinenum--;
                GameObject shoot = GameObject.FindWithTag("musicshoot");
                shoot.transform.GetChild(weapon_specail).GetComponent<AudioSource>().Play();
                skillcontrol_path.GetComponent<Skillcontrol>().energyattachmentskill7();//���ø��ŵ�
        }
    }
        //����ӵ��� ʵ��������׼��

  }


    void raymonitor()//��׼���߼��
    { if (joystickaim.Direction.sqrMagnitude != 0&&magazinenum>0)
            aimray.transform.GetChild(0).GetComponent<SpriteRenderer>().color   = new Color(1, 0, 0, 0.5f);
    else
            aimray.transform.GetChild(0).GetComponent<SpriteRenderer>().color = new Color(1, 0, 0, 0f);




    }
  public  void startdivision()
    {
        //CancelInvoke("clone");
        //StopCoroutine("clonedivision");
        //StartCoroutine("clonedivision");
        bullethit_assist = bullethit_assist_key[bullethit_assit_int];
        bullethit_assit_int++;
        isshot_assist = 0;
    }



    IEnumerator blaze()
    { for (int i = 0; i < blaze_assist; i++)
        {
            GameObject clone = Instantiate(clonetarget, null);
            clone.transform.position = adress.transform.position + clone_ris;
            // clone.transform.localEulerAngles = adress.transform.localEulerAngles + new Vector3(0, 0, 20*(i-1));
            clone.transform.parent = null;//���ӽڵ��ӽǽ�����ڵ��ϵ
            Destroy(clone, destorytime);//����}
            yield return new WaitForSeconds(0.1f * interval);
           // Debug.Log(".............." + i+"................"+blaze_assist);
        }
        yield return null;
    
    
    }

    //�ӵ�����...............................
    IEnumerator handfirecontrol(float tc)
    {
        yield return new WaitForSeconds(tc);
        handfire = 0;
    }

    void magamonitor()
    {
        if (magazinenum <= 0&& time_changemagazine==0)
        {
            StartCoroutine(monitormagazine());
          //  Debug.Log("����Э��");
            time_changemagazine++;
        }
    }
    IEnumerator monitormagazine()
    {
        yield return new WaitForSeconds(1f);
        for ( ind_changemagazne = changemagazine; ind_changemagazne > 0; ind_changemagazne -= Time.deltaTime)
            
        {
            yield return null;
        }
        magazinenum = mafazinekey;
        time_changemagazine = 0;
        if (Random.Range(0, 1f) > 0.5f)
            changemaga.transform.GetChild(0).GetComponent<AudioSource>().Play();
        else
            changemaga.transform.GetChild(1).GetComponent<AudioSource>().Play();
    }

    public void bullethurt()//�ӵ��˺�+5%
    {
        
            for (int i = 0; i < bullethit.Length; i++)
            {
                bullethit[i] += 0.05f;
            }
            skilltree.gameObject.SetActive(false);
            Time.timeScale = 1;
            UIpath.GetComponent<UIcontrol>().textprompt(0);
            skilllevel[0] += 1;
            skilllevelfixed[0] += 1;
        



    }

    public void bulletspeed()//�ӵ�����+15%�������ԣ�
    {
        if (skilllevelfixed[1] <10)
        {
           bulletmovespeed *= (1 + 0.15f);
           // Debug.Log("�ٶ�����" + Bullet1.speed);
            skilltree.gameObject.SetActive(false);
            Time.timeScale = 1;
            UIpath.GetComponent<UIcontrol>().textprompt(1);
            skilllevel[1] += 1;
            skilllevelfixed[1] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);

    }
    public void criticalhit()//�ӵ�������+5%
    {
        if (skilllevelfixed[2] < 20)
        {

            for (int i = skilllevelfixed[2] * 5; i < (skilllevelfixed[2] + 1)*5; i++)
            {
                bullethit[i] = 2;
            }
            // Fireclone1.bhurt = critalhit[Random.Range(0, 99)];
            UIpath.GetComponent<UIcontrol>().textprompt(2);
            skilltree.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[2] += 1;
            skilllevelfixed[2] += 1;
        }
        else
        {
            UIpath.GetComponent<UIcontrol>().textprompt(11);
        }

    }
    public void criticalhitadd()//�ӵ���ǰ�����˺�+10%
    {
        if (skilllevelfixed[3] < 100)
        {
            if (skilllevelfixed[2] > 0)
            {
                for (int j = 0; j < 5 * skilllevelfixed[2]; j++)
                {
                    bullethit[j] = bullethit[j] + bullethit[j] * 0.1f;
                }
                // fireclone1.bhurt = critalhit[random.range(0, 99)];
                UIpath.GetComponent<UIcontrol>().textprompt(3);
                skilltree.gameObject.SetActive(false);
                Time.timeScale = 1;
                skilllevel[3] += 1;
                skilllevelfixed[3] += 1;
            }
            else
            {
                for (int i = skilllevelfixed[2] * 5; i < (skilllevelfixed[2] + 1) * 5; i++)
                {
                    bullethit[i] = 2;
                }
                // Fireclone1.bhurt = critalhit[Random.Range(0, 99)];
              //  UIpath.GetComponent<UIcontrol>().textprompt(2);
                skilltree.gameObject.SetActive(false);
                Time.timeScale = 1;
                skilllevel[2] += 1;
                skilllevelfixed[2] += 1;
                UIpath.GetComponent<UIcontrol>().textprompt(15);
            }
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void shootspeed()//�ӵ���������10%,������
    {
        if (skilllevelfixed[4] < 10)
        { 
        interval -=  interval * 0.10f;
        UIpath.GetComponent<UIcontrol>().textprompt(4);
        skilltree.gameObject.SetActive(false);
        Time.timeScale = 1;
        skilllevel[4] += 1;
        skilllevelfixed[4] += 1;
     }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void magazinecapacity()//��ϻ��������15%
    {
        if (skilllevelfixed[5] < 10)
        {
            mafazinekey = mafazinekey + Mathf.Ceil(0.15f * mafazinekey);
            //mafazinekey = magazinenum;
            UIpath.GetComponent<UIcontrol>().textprompt(5);
            skilltree.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[5] += 1;
            skilllevelfixed[5] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void changemagazinetime()//����ʱ���С20%������
    {
        if (skilllevelfixed[6] < 10)
        {
            changemagazine = changemagazine - 0.15f * changemagazine;
            UIpath.GetComponent<UIcontrol>().textprompt(6);
            skilltree.gameObject.SetActive(false);
            Time.timeScale = 1;
            skilllevel[6] += 1;
            skilllevelfixed[6] += 1;
        }
        else
            UIpath.GetComponent<UIcontrol>().textprompt(11);
    }
    public void elementlevel()//Ԫ������
    {
        for (int i = 0; i < skillcontrol_path.GetComponent<Skillcontrol>().magichurts.Length; i++)
        {
            skillcontrol_path.GetComponent<Skillcontrol>().magichurts[i] += 0.1f;

        }
        skilltree.gameObject.SetActive(false);
        Time.timeScale = 1;
        UIpath.GetComponent<UIcontrol>().textprompt(7);
        skilllevel[7] += 1;
        skilllevelfixed[7]++;
    }
    public void evilbloodline()//а��Ѫͳ
    {
        bullethit[33] += 33;
        bullethit[66] += 33;
        bullethit[99] += 33;

    }
    public void chooseskilllevel(int a)
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

}        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        


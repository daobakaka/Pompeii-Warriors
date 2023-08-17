using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Actor1 : MonoBehaviour
{
    private Rigidbody2D rigidbody2d;
    private Animator animator;
    public float speed;
    private bool run = true;
    private bool death = false;
   //
    public static float actorhealth = 100;
    public static float actordamagereduction;
    public static float actordamagereduction_forever = 0;
    //
    float horizontal;
    float vertical;
    private bool playerspeed;
    int atime=0;
    float a;
    private float duration = 0f;
    private float tc = 0;
    //
    public static float expactor;
    private int expactor_assist=0;
    private int expactor_num = 0;
    private float[] exps = new float[200];
    public  int level=1;
    public TMP_Text textlevel;
    public Toggle chooseskill1b_auto;
    //经验监控 技能升级系统
    public GameObject UIpath;
    public GameObject firecontrol_path;

    //
    public GameObject panelchoosepath;//技能选择主控节点
    //
    public GameObject skilleffects_path;
    //
    private int skillrecordheath_assist;
    //
    private bool healthmonitor_bool = true;
    public GameObject gamevoer,weather_control;
    //
    private bool filp;
    private Vector3 useful;
    public Transform weapon;
    public static Vector3 direction;
    private float min;
    private bool cast=true;
    //主角动画控制体系
    public GameObject actorhealthadd;
    //主角生命回复文字
    public GameObject nextgamelevel_path;
    public GameObject[] setexit;
    public GameObject musiccontrol;
    public GameObject[] fuckingmusic;
    private int music_key = 100;
    private bool music_hasstarted;
    //通关节点判断
    public Joystick joystick;
    public Joystick joystickaim;
    //摇杆 手机操作
    void Start()
    {
        //获得当前游戏对象的刚体组件，动画组件
        //rigidbody2d = GetComponent<Rigidbody2D>();
        //animator = GetComponent<Animator>();
        Actor1 input = new Actor1();
        Debug.Log("dengji..."+level);
        Debug.Log("jingyan...." + exps[97]);
        Debug.Log("等级经验...." + exps[0]);
        StartCoroutine(healthyrecmonitor());

        //  Actor kk = new Actor();
        // kk.Flip();
       // StartCoroutine(findmo());

    }
    private void Awake()
    {
        rigidbody2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        for (int i = 0; i < exps.Length; i++)
        {
            exps[i] = i;
        }
        for (int i = 0; i < exps.Length-2; i++)
        {
            exps[i] = exps[i] + exps[i + 1] + exps[i + 2];
        }
        exps[198] = exps[197];
        exps[199] = exps[197];
        for (int i = 0; i < exps.Length ; i++)
        {
            exps[i] = Mathf.Sqrt(exps[i] * exps[i] * exps[i]);
        }
    }
    IEnumerator animatorwait(float tc)//换弹动作
    {

        yield return new WaitForSeconds(0.5f);
      //  animator.Play("Cast");
        animator.SetTrigger("Cast");
        yield return new WaitForSeconds(tc);
        cast = true;
        animator.SetBool("Bool", true);
    }

    void Getput()//动画播放
    {
        if (run==true)
        {

            if (firecontrol_path.GetComponent<Firecontrol>().magazinenum <= 0 && cast == false)
            {
                StartCoroutine("animatorwait", 0.5f);



            }

            else if (firecontrol_path.GetComponent<Firecontrol>().magazinenum > 0 && cast == true)
            {
                animator.SetBool("Bool", false);
                animator.SetInteger("WeaponType", 6);
                animator.SetTrigger("Fire");
                cast = false;


            }
            else if (Input.GetMouseButtonDown(0))
            {

                if (Random.Range(0, 1f) > -1f)
                {
                    animator.SetTrigger("Fire");
                    animator.SetInteger("WeaponType", 6);
                }
                //else
                //{
                //    animator.Play("Fire1H", 1);
                //    animator.SetInteger("WeaponType", 5);
                //}
            }

            //else if (((Input.GetKey(KeyCode.A)) || (Input.GetKey(KeyCode.S)) || (Input.GetKey(KeyCode.D)) || (Input.GetKey(KeyCode.W))) && (Input.GetMouseButtonDown(0)) == false)
            else if(Mathf.Abs(horizontal)>0.05)
                
                {
                    animator.SetInteger("State", 3);
                }
          
        }
    }
    void findmonsters()
    {
        if (joystickaim.Direction.magnitude == 0)
        {
            if (GameObject.FindWithTag("monster") != null)

            {
                if (GameObject.FindGameObjectsWithTag("monster") != null && joystickaim.Direction.magnitude == 0) //(Input.touchCount > 0 && !(Input.GetTouch(0).position.x >= 0.5f * Screen.width)) || (Input.touchCount == 2 && (!(Input.GetTouch(1).position.x >= 0.7f * Screen.width))))
                {
                    GameObject[] targets = GameObject.FindGameObjectsWithTag("monster");
                    //foreach (GameObject traget in targets
                    min = Vector3.Distance(targets[0].transform.position, gameObject.transform.position);
                    direction = (targets[0].transform.position - this.transform.position);
                    for (int i = 1; i < targets.Length; i++)
                    {

                        if (targets[i].TryGetComponent<Monster2move>(out Monster2move monster1health))
                        {
                            if (min > Vector3.Distance(targets[i].transform.position, this.transform.position) && (targets[i].GetComponent<Monster2move>().monster1health > 0))

                            {
                                min = Vector3.Distance(targets[i].transform.position, this.transform.position);
                                direction = (targets[i].transform.position - this.transform.position);
                            }
                        }
                        else
                            if (min > Vector3.Distance(targets[i].transform.position, this.transform.position) && (targets[i].GetComponent<Monster1move>().monster1health > 0))
                        {
                            min = Vector3.Distance(targets[i].transform.position, this.transform.position);
                            direction = (targets[i].transform.position - this.transform.position);

                        }
                    }
                }
                else
                {
                    direction = (this.transform.position);
                }
            }
            else
            { direction = (this.transform.position); }
        }
    }

    void weaponcontrol()
    {
        if (cast == false)
        {
            if (filp == true)
            {
                if (animator.GetInteger("WeaponType") == 5 || animator.GetInteger("WeaponType") == 6)
                {
                    useful = RotationMatrix(-direction, 0);
                    weapon.transform.right = useful;
                }

                else
                {
                    useful = RotationMatrix(-direction, 25);
                    weapon.transform.right = useful;
                }
            }
            if (filp == false)
            {
                weapon.transform.rotation = Quaternion.Euler(180, 0, 0);
                if (animator.GetInteger("WeaponType") == 5 || animator.GetInteger("WeaponType") == 6)
                {
                    useful = RotationMatrix(-direction, 0);
                  if(Mathf.Abs(useful.normalized.y)<=0.86f)
                    weapon.transform.eulerAngles = new Vector3(0, 180, 90 * useful.normalized.y - 30* useful.normalized.y); 
                  if(Mathf.Abs(useful.normalized.y) > 0.86f&& Mathf.Abs(useful.normalized.y) < 0.95f)
                        weapon.transform.eulerAngles = new Vector3(0, 180, 90 * useful.normalized.y - 18 * useful.normalized.y);
                    if (Mathf.Abs(useful.normalized.y) >=0.95f)
                        weapon.transform.eulerAngles = new Vector3(0, 180, 90 * useful.normalized.y - 8 * useful.normalized.y);
                   // Debug.Log("useful=............................................." + useful.normalized.y);
                }
                else
                {
                    useful = RotationMatrix(-direction, 25);
                    weapon.transform.eulerAngles = new Vector3(0, 180, 90 * useful.normalized.y - 65);
                }
            }
        }
    }
    void controlfind()//手控射线
    {
        //if (Input.touchCount > 0)

        //{ if (Input.GetTouch(0).position.x >= 0.5f * Screen.width && Input.GetTouch(0).phase == TouchPhase.Moved)

        //    {
        //        direction = (Camera.main.ScreenToWorldPoint(Input.mousePosition)) + new Vector3(0, 0, 1) - this.transform.position;
        //        //Debug.Log("手控射线....z" + direction.normalized.z + "手控射线....x" + direction.normalized.x + "手控射线....y" + direction.normalized.y);
        //    } }
        //if (Input.touchCount == 2)

        //{ if (Input.GetTouch(1).position.x >= 0.5f * Screen.width && Input.GetTouch(1).phase == TouchPhase.Moved)
        //        direction = (Camera.main.ScreenToWorldPoint(Input.mousePosition)) + new Vector3(0, 0, 1) - this.transform.position;
        //}
        if (joystickaim.Direction.magnitude!=0)
        {

            //if(Input.touchCount > 0)

            //{ if ((Input.GetTouch(0).position.x > 0.6f * Screen.width && (Input.GetTouch(0).position.y < 0.4f * Screen.width)))
            //     {

            //        direction = joystickaim.Direction;
            //        Debug.Log("x=.." + Input.GetTouch(0).position.x + "...y=...." + Input.GetTouch(0).position.x);
            //    }
            //}
            //if (Input.touchCount == 2)
            //{
            //    if ( (Input.GetTouch(1).position.x > 0.6f * Screen.width && (Input.GetTouch(1).position.y < 0.4f * Screen.width)))
            //    {

            //        direction = joystickaim.Direction;
            //    }

            //}
            direction = joystickaim.Direction;
        }
        else
            direction = new Vector3(0, 0, 0);


    }

    private Vector3 RotationMatrix(Vector3 v, float angle)//向量旋转方式
    {
        var x = v.x;
        var y = v.y;
        var sin = Mathf.Sin(Mathf.PI * angle / 180);
        var cos = Mathf.Cos(Mathf.PI * angle / 180);
        var newX = x * cos + y * sin;
        var newY = x * -sin + y * cos;
        return new Vector3((float)newX, (float)newY);

    }
    void Flip()//镜面翻转
    {
        if (actorhealth > 0)
        {

            if (cast == true)
            {
                playerspeed = Mathf.Abs(horizontal) > 0.1;
                if (playerspeed)
                {
                    if (horizontal > 0.05f)
                    { transform.localRotation = Quaternion.Euler(0, 180, 0); }
                    if (horizontal < -0.05f)
                    { transform.localRotation = Quaternion.Euler(0, 0, 0); }

                }
            }

            if (cast == false)
            {
                if (direction.x > 0.01f)
                {
                    filp = false;
                    this.transform.localRotation = Quaternion.Euler(0, 180, 0);

                }
                if (direction.x < -0.01f)
                {
                    filp = true;
                    this.transform.localRotation = Quaternion.Euler(0, 0, 0);

                }
            }
        }
    }
    void Update()
    {
        FixedUpdate();
        Flip();
        Getput();
        hurtanimaition();
      StartCoroutine("levelmonitor");
        healthmonitor();
        controlfind();
        findmonsters();
        // Debug.Log("向量" + rigidbody2d.velocity.x);
        // Debug.Log("向量" + playerspeed);
        // Debug.Log("水平" + horizontal);
        // Debug.Log("垂直" + vertical);
        // Debug.Log("条件" + playerspeed);
        //  Debug.Log("参数"+skillrecordheath_assist);
       
    }
    private void LateUpdate()
    {
        //ris = Mathf.Sin(90 * useful.normalized.y);
    }
    //固定时间间隔刷新方法
    private void FixedUpdate()//固定帧率
    {
        weaponcontrol();
        actorrun();

    }


    void actorrun()
    {

        if (run == true)
        {
            //horizontal = Input.GetAxis("Horizontal");
            //vertical = Input.GetAxis("Vertical");

            horizontal = joystick.Horizontal;
            vertical = joystick.Vertical;
           // Vector2 go = new Vector2(horizontal * speed, rigidbody2d.velocity.y);
            //position.x = position.x + speed * horizontal * Time.deltaTime;
            //position.y = position.y + speed * vertical * Time.deltaTime;
            rigidbody2d.velocity = new Vector2(horizontal * speed, vertical * speed);
            playerspeed = Mathf.Abs(rigidbody2d.velocity.x) > Mathf.Epsilon;
           // animator.SetBool("run", playerspeed);
           // rigidbody2d.MovePosition(position);
            // Debug.Log("向量" + rigidbody2d.velocity.x);
        }
        else
        {
            horizontal = 0;
            vertical = 0;
            rigidbody2d.velocity = new Vector2(0, 0);
         


        }


    }

    private  void hurtanimaition()
    {
        if (Time.fixedTime - tc < 0.5f && atime == 1)
        {
           duration += Time.deltaTime / 0.5f;
            this.transform.GetChild(0).GetChild(0).GetChild(3).GetChild(0).GetComponent<SpriteRenderer>().color = Color.Lerp(new Color(1, 0.8f, 0.5f, 1), new Color(1, 0,0, 0.5f), duration);//颜色渐变函数      
           
        }
        else
        {
            atime = 0;
            this.transform.GetChild(0).GetChild(0).GetChild(3).GetChild(0).GetComponent<SpriteRenderer>().color = new Color(1, 0.8f, 0.5f, 1);
            duration = 0;
        }


    }
    public void starthurtanimaition()
    {
        tc = Time.fixedTime;
        atime = 1;
       
    }

    IEnumerator levelmonitor()
    { if (expactor >= exps[level - 1]&&expactor_assist==0&&death==false )
        {
            expactor_assist++;
            level += 1;
            expactor = expactor-exps[level-1];
            yield return null;
            Debug.Log("等级经验...." + exps[level]);
            GameObject expchange = GameObject.Find("expslider");
            expchange.GetComponent<Slider>().maxValue = exps[level];
            skilleffects_path.GetComponent<Skillcontrol>().levelupskill();
            musiccontrol.transform.GetChild(3).GetChild(0).GetComponent<AudioSource>().Play();
            expactor_num = 0;
            yield return new WaitForSeconds(0.5f);
            if (expactor_num == 0)
            {

                if (chooseskill1b_auto.isOn == false)
                {
                    if ((level) % 1 == 0 && level % 5 != 0)
                    {
                        UIpath.GetComponent<UIcontrol>().panlechoose.SetActive(true);
                        panelchoosepath.GetComponent<Panleskilltest>().chooseimage();
                        expactor_num++;
                        Time.timeScale = 0 + UIcontrol.timemanage;
                        fuckingmusic_change(0);
                    }
                }

                if (chooseskill1b_auto.isOn == true)
                {
                    if ((level) % 1 == 0 && level % 5 != 0)

                    {
                        panelchoosepath.GetComponent<Panleskilltest>().choosenum_auto1();
                        expactor_num++;
                        fuckingmusic_change(0);
                    }
                }

                if ((level) % 5 == 0 && level %25 != 0)
                {
                    float choose = Random.Range(0, 1f);
                    if (choose >= 0.55f)
                    {
                        UIpath.GetComponent<UIcontrol>().panlechoose_2b.SetActive(true);
                        panelchoosepath.GetComponent<Panleskilltest>().chooseimage_2b();
                        Debug.Log("。。。。二阶被动。。。。");
                        expactor_num++;
                        Time.timeScale = 0 + UIcontrol.timemanage;
                        fuckingmusic_change(1);//歌曲触发
                    }
                    else
                    {
                        UIpath.GetComponent<UIcontrol>().panlechoose_2z.SetActive(true);
                        panelchoosepath.GetComponent<Panleskilltest>().chooseimage_2z();
                        Debug.Log("。。。。二阶技能。。。。");
                        expactor_num++;
                        Time.timeScale = 0 + UIcontrol.timemanage;
                        fuckingmusic_change(1);
                    }
                }
                if ((level) %25== 0)
                {
                    float choose = Random.Range(0, 1f);

                    if (choose >= 0.55f)
                    {
                        UIpath.GetComponent<UIcontrol>().panlechoose_3b.SetActive(true);
                        panelchoosepath.GetComponent<Panleskilltest>().chooseimage_3b();
                        Debug.Log("。。。。三阶被动技能。。。。");
                        expactor_num++;
                        Time.timeScale = 0 + UIcontrol.timemanage;
                        fuckingmusic_change(2);
                        fuckingmusic_change(10);
                    }
                    else
                    {
                        UIpath.GetComponent<UIcontrol>().panlechoose_3z.SetActive(true);
                        panelchoosepath.GetComponent<Panleskilltest>().chooseimage_3z();
                        Debug.Log("。。。。三阶主动技能。。。。");
                        expactor_num++;
                        Time.timeScale = 0 + UIcontrol.timemanage;
                        fuckingmusic_change(2);
                        fuckingmusic_change(10);
                    }
                }
                yield return null;
            }
            yield return new WaitForSeconds(0.3f);
                expactor_assist= 0;
        } 
    }
    public void fuckingmusic_change(int a)//
    {
        if (Maincontrol.music_lerp == false)//增加淡入淡出约束条件，同一时间只能有一个
        {
            switch (a)
            {
                case 0:
                    if (Random.Range(0, 1f) > 0.97f)
                    {
                        for (int i = 0; i < fuckingmusic.Length; i++)
                        {
                            if (fuckingmusic[i].GetComponent<AudioSource>().isPlaying == true)
                            {
                                music_key = i;
                                StartCoroutine("music_lerpout");
                                break;
                            }
                            else//触发第一次播放
                                if (music_key == 100)
                            {
                                music_key = Random.Range(0, fuckingmusic.Length);
                                StartCoroutine("music_lerpin");
                                break;
                            }
                        }
                        music_hasstarted = true;
                    }
                    break;
                case 1:
                    if (Random.Range(0, 1f) > 0.85f)
                    {
                        for (int i = 0; i < fuckingmusic.Length; i++)
                        {
                            if (fuckingmusic[i].GetComponent<AudioSource>().isPlaying == true)
                            {
                                music_key = i;
                                StartCoroutine("music_lerpout");
                                break;
                            }
                            else
                                if (music_key == 100)
                            {
                                music_key = Random.Range(0, fuckingmusic.Length);
                                StartCoroutine("music_lerpin");
                                break;

                            }
                        }
                        music_hasstarted = true;
                    }
                    break;
                case 2:
                    if (Random.Range(0, 1f) > 0.2f)
                    {
                        for (int i = 0; i < fuckingmusic.Length; i++)
                        {
                            if (fuckingmusic[i].GetComponent<AudioSource>().isPlaying == true)
                            {
                                music_key = i;
                                StartCoroutine("music_lerpout");
                                break;
                            }
                            else
                                if (music_key == 100)
                            {
                                music_key = Random.Range(0, fuckingmusic.Length);
                                StartCoroutine("music_lerpin");
                                break;

                            }
                        }
                        music_hasstarted = true;
                    }
                    break;
                case 10:
                    if (music_hasstarted == false)

                    {
                        music_key = Random.Range(0, fuckingmusic.Length);
                        StartCoroutine("music_lerpin");
                        music_hasstarted = true;
                    }
                    break;
                case 20:
                  
                        for (int i = 0; i < fuckingmusic.Length; i++)
                        {
                            if (fuckingmusic[i].GetComponent<AudioSource>().isPlaying == true)
                            {
                                music_key = i;
                                StartCoroutine("music_lerpout_finally");
                                break;
                            }
                        }
                        music_hasstarted = true;
                  
                    break;

            }
        }
    }

    IEnumerator music_lerpout()//背景音乐淡出
    {
        yield return new WaitForEndOfFrame();
        Maincontrol.music_lerp = true;//解封淡入淡出
        float temporary_volume = fuckingmusic[music_key].GetComponent<AudioSource>().volume;//储存音乐临时值
        for (float tc = temporary_volume; tc >0; tc -= Time.deltaTime)//淡出
        {
            fuckingmusic[music_key].GetComponent<AudioSource>().volume = tc;
            yield return  new WaitForSeconds(5*Time.deltaTime);
        }
        yield return null;
        fuckingmusic[music_key].GetComponent<AudioSource>().Pause();//暂停
        fuckingmusic[music_key].GetComponent<AudioSource>().volume = temporary_volume;//恢复临时值
        StartCoroutine("music_lerpin");

    }
    IEnumerator music_lerpout_finally()//背景音乐淡出停止
    {
        yield return new WaitForEndOfFrame();
        Maincontrol.music_lerp = true;//解封淡入淡出
        float temporary_volume = fuckingmusic[music_key].GetComponent<AudioSource>().volume;//储存音乐临时值
        for (float tc = temporary_volume; tc > 0; tc -= Time.deltaTime)//淡出
        {
            fuckingmusic[music_key].GetComponent<AudioSource>().volume = tc;
            yield return new WaitForSeconds(5 * Time.deltaTime);
        }
        yield return null;
        fuckingmusic[music_key].GetComponent<AudioSource>().Stop();//暂停

    }




    IEnumerator music_lerpin()//背景音乐淡入
    {
        yield return new WaitForEndOfFrame();
        int music_num = Random.Range(0, fuckingmusic.Length);//取出随机音乐
        float temporary_volume = fuckingmusic[music_num].GetComponent<AudioSource>().volume;//取出随机音乐临时值并储存
        fuckingmusic[music_num].GetComponent<AudioSource>().volume = 0;//暂时归零
        fuckingmusic[music_num].GetComponent<AudioSource>().Play();//播放
        for (float tc = 0; tc < temporary_volume; tc += Time.deltaTime)//淡入
        {
            fuckingmusic[music_num].GetComponent<AudioSource>().volume = tc;
            yield return new WaitForSeconds(5*Time.deltaTime);
        }
        yield return null;
        if (music_num != music_key)//判断是否增加伤害
        {
            Skillcontrol.skillmagichurt_effcient_forever += 0.05f;
            Firecontrol.bullerealhut_effcrent_forever += 0.05f;
            UIpath.GetComponent<UIcontrol>().textprompt("血液融入了音符的节拍，伤害永久提升 5%");
        }
        else
        {
            Actor1.actordamagereduction_forever += 0.05f;
            UIpath.GetComponent<UIcontrol>().textprompt("节奏只爱这一拍，伤害减免永久提升 5%");
        }
        Maincontrol.music_lerp = false;//淡入淡出结束，封闭入口，开启淡入淡出选择机会
    }
    public void soptmusic_lerp()
    {
        StopCoroutine("music_lerpin");
        StopCoroutine("music_lerpout");
        Debug.Log("停止步骤已执行！！！！！！！！！！！！！！！！");
    }
    private void OnTriggerEnter2D(Collider2D other)//
    {
        if (other.gameObject.tag == "skill5energyrecover" && skillrecordheath_assist == 0)
        {
            {    skillrecordheath_assist = 1;
                StartCoroutine(skillheathrecord());
              //  Debug.Log("first collision" + 6);
            }
        }
        if (other.gameObject.tag == "treasure" )
        {
            {
                Destroy(GameObject.FindWithTag("treasure"), 0.1f);
                musiccontrol.transform.GetChild(5).GetComponent<AudioSource>().Play();
                GameObject datacontrol = GameObject.FindWithTag("datacontrol");
                datacontrol.transform.GetChild(1).GetComponent<Datasave>().player_crossnum();//储存通关数据
                GameObject root = GameObject.FindWithTag("UIclone");//清除血条 字体
                for (int i = 0; i < root.transform.childCount; i++)
                {
                    root.transform.GetChild(i).gameObject.SetActive(false);
                    Debug.Log("已销毁血条");
                }
                StartCoroutine(gamewin());
            }
        }
        if (other.gameObject.tag == "monster")
        {
            {
                int i;
                i = Random.Range(0, 5);
                musiccontrol.transform.GetChild(8).GetChild(i).GetComponent<AudioSource>().Play();
            }
        }
        if (other.gameObject.tag.Equals("monsterbullet"))
        {
            hurtanimaition();
           int  i = Random.Range(0, 5);
            musiccontrol.transform.GetChild(8).GetChild(i).GetComponent<AudioSource>().Play();
            if (Actor1.actorhealth > 0)
            {
               this.GetComponent<Animator>().Play("Hit", 2);
                
            }


        }

    }
    IEnumerator gamewin()
    {
        animator.SetInteger("State", 13);
        animator.SetLookAtWeight(1, 0.1f);
        animator.Play("Dance", 2);
        this.tag = "skill";
        GameObject[] destorynum = GameObject.FindGameObjectsWithTag("monster");
        for (int i = 0; i < destorynum.Length; i++)
        {
            Destroy(destorynum[i]);
        }
        yield return new WaitForSeconds(1);
        setexit[0].transform.GetComponent<Button>().interactable = false;
        setexit[1].transform.GetComponent<Button>().interactable = false;
        setexit[2].transform.GetComponent<Toggle>().isOn=false;
        nextgamelevel_path.gameObject.SetActive(true);
        
    }
    private void OnTriggerExit2D(Collider2D other)
    { 
    
        if (other.gameObject.tag == "skill5energyrecover" && skillrecordheath_assist == 1)
        {
            skillrecordheath_assist = 0;
           // Debug.Log("out collision" + 6);
        }
    }

    IEnumerator skillheathrecord()
    {
        for (int i = 0; skillrecordheath_assist == 1; i++)
        {
            yield return new WaitForSeconds(1);
            if (actorhealth < 100)
            { actorhealth += Skillcontrol.skillmagichurt * 0.1f * Skillcontrol.skillbounds_ef[4]; }//此处用bound代表回复系数

            if (i > 20 + Skillcontrol.skilltime_ef[4])
                break;
            if (GameObject.FindWithTag("skill5energyrecover") == null)
                break;
          }
        
        yield return null;
    }
    void healthmonitor()
    { if (actorhealth < 0 && healthmonitor_bool == true)
        {
            healthmonitor_bool = false;
            musiccontrol.transform.GetChild(5).GetChild(1).GetComponent<AudioSource>().Play();
            for (int i = 0; i < musiccontrol.transform.GetChild(1).GetChild(0).childCount; i++)
            {
                musiccontrol.transform.GetChild(1).GetChild(0).GetChild(i).GetComponent<AudioSource>().Stop();            
            }
            StartCoroutine(gameover());
            death = true;//约束经验控制器
            StopCoroutine("levelmonitor");
            animator.SetInteger("State", 9);
            animator.Play("Death", 2);
            run = false;
            weather_control.GetComponent<Weathercontrol>().startlighrclose();

        }    
    }
    IEnumerator gameover()//战败画面淡入淡出
    {
        yield return null;
        gamevoer.SetActive(true);
        for (float t = 0; t < 3; t += 0.05f)
        {
            yield return new WaitForSecondsRealtime(0.05f);
            gamevoer.GetComponent<Image>().color = Color.Lerp(new Color(0.8f, 0.8f, 0.8f, 0), new Color(0.8f, 0.8f, 0.8f, 1),t/3);
    
        }
        yield return new WaitForSecondsRealtime(1);
        gamevoer.GetComponent<Button>().interactable = true;
        yield return null;
        Time.timeScale = 0;
    }
    IEnumerator healthyrecmonitor()//生命恢复监控器

    {
        float record;
        for (; actorhealth > 0;)
        {
            record = actorhealth;
            yield return new WaitForSeconds(2f);
            if (actorhealth - record > 0&& actorhealth<100)
            {
                GameObject clone = Instantiate(actorhealthadd, null);
                GameObject root = GameObject.FindWithTag("UIclone");
                clone.GetComponent<TextActor>().hurtcoefficient = actorhealth - record;
                clone.transform.SetParent(root.transform);
                clone.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, 0, -1)); //new Vector3(Random.Range(0.01f, 0.05f), 0.1f,1));                                                                                                                   //Debug.Log("坐标" + clone.transform.position+"已克隆");
                Destroy(clone.gameObject, 2f);

            }
        }
        yield return null;
        
    
    
    }
}

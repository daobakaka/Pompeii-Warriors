using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Actor : MonoBehaviour

{
    public float speed = 1;
    float horizontal;
    float vertical;
    private bool playerspeed;
    private bool run = true;
    private Rigidbody2D rigidbody2d;
    private Animator animator;
    private Vector3 direction, dirpo;
    public Transform act;
    private bool filp = true;
    public Transform tras;
    float dis;
    Vector3 useful, usefulpo;
    // Start is called before the first frame update
    public Joystick joystick;
    /// <summary>
    /// /
    //

    public Vector3 startPos;
    public Vector3 directiontouch;
    public bool directionChosen;
    /// </summary>
    /// 
    public GameObject particle;
    void Start()
    {
        rigidbody2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        this.transform.GetChild(2).GetChild(0).GetChild(5).eulerAngles = new Vector3(0, 0, -200);

    }
    void Flip()//���淭ת
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
        //if (filp == true)
        //{
        //    this.transform.localRotation = Quaternion.Euler(0, 180, 0);
        //}
        //playerspeed = Mathf.Abs(horizontal) > 0.1;
        //if (playerspeed)
        //{
        //    if (horizontal > 0.05f)
        //    { transform.localRotation = Quaternion.Euler(0, 180, 0); }
        //    if (horizontal < -0.05f)
        //    { transform.localRotation = Quaternion.Euler(0, 0, 0); }

        //}
    }
    void Update()
    {
        FixedUpdate();
        Flip();
        controlfind();
        weaponcontrol();
        artificialray();
        //getsome();
        actoranimator();
        // getput();
        // hurtanimaition();
        // startcoroutine(levelmonitor());
        // healthmonitor();
        // Debug.Log("����" + rigidbody2d.velocity.x);
        // Debug.Log("����" + playerspeed);
        // Debug.Log("ˮƽ" + horizontal);
        // Debug.Log("��ֱ" + vertical);
        // Debug.Log("����" + playerspeed);
        //  Debug.Log("����"+skillrecordheath_assist);
        // fingertouch();
        fingertest();
    }

    //�̶�ʱ����ˢ�·���
    private void FixedUpdate()//�̶�֡��
    {
        if (run == true)
        {
            // horizontal = Input.GetAxis("Horizontal");
            //  vertical = Input.GetAxis("Vertical");

            //if (joystick.Horizontal > 0.05f || joystick.Horizontal < -0.05f)
            //{
            //    horizontal = joystick.Horizontal;
            //    vertical = joystick.Vertical;
            //}
            //else
            //{
            //    horizontal = 0;
            //    vertical = 0;

            //}
            horizontal = joystick.Horizontal;
           vertical = joystick.Vertical;
            Vector2 position = transform.position;
            // Vector2 go = new Vector2(horizontal * speed,rigidbody2d.velocity.y);
            position.x = position.x + speed * horizontal * Time.deltaTime;
            position.y = position.y + speed * vertical * Time.deltaTime;
            //rigidbody2d.velocity = go;
            // playerspeed = Mathf.Abs(rigidbody2d.velocity.x) > Mathf.Epsilon;
            //  animator.SetBool("run", playerspeed);
            rigidbody2d.MovePosition(position);
            //Debug.Log("����" + rigidbody2d.velocity.x);
        }
    }
    void controlfind()//�ֿ�����
    {
        if (Input.GetMouseButton(1) && Input.GetMouseButtonUp(0) == false)
        {
            direction = (Camera.main.ScreenToWorldPoint(Input.mousePosition)) + new Vector3(0, 0, 10) - this.transform.position;
            //Debug.Log("�ֿ�����....z" + direction.normalized.z + "�ֿ�����....x" + direction.normalized.x + "�ֿ�����....y" + direction.normalized.y);
        }
    }


    void fingertouch()
    {     // Track a single touch as a direction control.
     
          Touch touch = Input.GetTouch(0);
          switch(touch.phase)

            {
                case (TouchPhase.Moved):
                    if (touch.position.x > 0.5f* Screen.width)
                    {
                        startPos = (Camera.main.ScreenToWorldPoint(touch.position));
                        directionChosen = false;
                        Debug.DrawLine(this.transform.position, (Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 10)), Color.red);
                        Debug.Log("��Ļ���" + Screen.width + "������x��ֵ" + touch.position.x);
                    }
                    break;


            }

        
    }

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
                Debug.Log("x��ֵ" + touch.position.x +"��ָ����"+ Input.touchCount);
            }
            if (Input.touchCount == 2)
            {
                touch = Input.GetTouch(1);
                if (touch.phase == TouchPhase.Moved && touch.position.x > 0.5 * Screen.width)
                {

                    Debug.DrawLine(this.transform.position, (Camera.main.ScreenToWorldPoint(touch.position) + new Vector3(0, 0, 10)), Color.red);
                    Debug.Log("x��ֵ" + touch.position.x + "��ָ����" + Input.touchCount);
                }
            }
        }
        
    }









    void weaponcontrol()
    {

        if (filp == true)
        {
            if (animator.GetInteger("State") == 3)
            {
                useful = RotationMatrix(-direction, 0);
                this.transform.GetChild(2).GetChild(0).GetChild(5).transform.right = useful;

            }

            else
            {

                useful = RotationMatrix(-direction, 25);
                this.transform.GetChild(2).GetChild(0).GetChild(5).transform.right = useful;
            }


        }
        if (filp == false)
        {
            this.transform.GetChild(2).GetChild(0).GetChild(5).transform.rotation = Quaternion.Euler(0, 180, 0);
            if (animator.GetInteger("State") == 3)
            {
                useful = RotationMatrix(-direction, 0);
                this.transform.GetChild(2).GetChild(0).GetChild(5).transform.eulerAngles = new Vector3(0, 180, 90 * useful.normalized.y - 5);

            }

            else
            {
                useful = RotationMatrix(-direction, 25);
                this.transform.GetChild(2).GetChild(0).GetChild(5).transform.eulerAngles = new Vector3(0, 180, 90 * useful.normalized.y - 65);
            }
    

        }
      

    }

    IEnumerator weap()
    {
        yield return null;
        for (; Input.GetMouseButtonUp(0) == false;)
        {
            this.transform.GetChild(2).GetChild(0).GetChild(5).transform.right = direction.normalized;
            yield return new WaitForSeconds(0.1f);
        }
    }
    void artificialray()//��������������߼�¼��Ļ���λ�ã���Ļ����ת��Ϊ�������꣬�������Ƿ���
    {
        RaycastHit hit;

        if (Input.GetMouseButton(0) && Input.GetMouseButtonUp(0) == false)

        {
            Ray ray = new Ray(this.transform.position, Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 10));
            dis = (Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 10)).magnitude;
            Vector3 youyou = new Vector3(-dis, dis, 0);
          //  Vector3 jiji = RotationMatrix(this.transform.position , 25);
           // Debug.DrawLine(jiji,  (Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 10)), Color.black);
           Debug.DrawLine(this.transform.position, (Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 10)), Color.yellow);
            if (Physics.Raycast(ray, out hit)) //�����ײ��⵽����
            {
                Debug.Log(hit.collider.gameObject.name);//��ӡ�����������������
            }
        }
    }
    //void getsome()
    //{
    //    if (Input.GetKey(KeyCode.Space))
    //    {
    //        Vector3 kaka = Vector3.Cross(this.transform.forward, tras.position);
    //        Debug.Log("�ж�����=...................." + kaka.y);
    //        Debug.Log("��׼��������=����������" + -direction.normalized);
    //    }
    //}

    private Vector3 RotationMatrix(Vector3 v, float angle)//������ת��ʽ
    {
        var x = v.x;
        var y = v.y;
        var sin = Mathf.Sin(Mathf.PI * angle / 180);
        var cos = Mathf.Cos(Mathf.PI * angle / 180);
        var newX = x * cos + y * sin;
        var newY = x * -sin + y * cos;
        return new Vector3((float)newX, (float)newY);

    }
    private Vector3 Rox(Vector3 v,float angle)
    {
        var y = v.y;
        var z = v.z;
        var sin = Mathf.Sin(Mathf.PI * angle / 180);
        var cos = Mathf.Cos(Mathf.PI * angle / 180);
        var newZ = y * cos + z * sin;
        var newY = y * -sin + z * cos;
        return new Vector3((float)newY, (float)newZ);


    }
    private Vector3 Roy(Vector3 v, float angle)
    {
        var x = v.x;
        var z = v.z;
        var sin = Mathf.Sin(Mathf.PI * angle / 180);
        var cos = Mathf.Cos(Mathf.PI * angle / 180);
        var newX = x * cos + z * sin;
        var newZ = x * -sin + z * cos;
        return new Vector3((float)newX, (float)newZ);


    }
    void actoranimator()
    {
       if (Input.GetKeyDown(KeyCode.Space))
            {
            animator.Play("Cast", 1,0);
            }
       else if (Input.GetMouseButtonDown(0))
            {
            if (Random.Range(0, 1f) > 0.5f)
            {
                animator.Play("Fire2H", 1);
                animator.SetInteger("WeaponType", 6);
            }
            else
            {
                animator.Play("Fire1H", 1);
                animator.SetInteger("WeaponType", 5);
            }
        }

        else if (((Input.GetKey(KeyCode.A)) || (Input.GetKey(KeyCode.S)) || (Input.GetKey(KeyCode.D)) || (Input.GetKey(KeyCode.W))) && (Input.GetMouseButtonDown(0)) == false )
            {
            animator.SetInteger("State", 3);
           

        }
        else if (Input.GetKeyDown(KeyCode.J))
        {
            if (Random.Range(0, 1f) > 0.5f)

                animator.Play("Slash1H", 1);
            else
                animator.Play("Slash2H", 1);
        }



    }
}
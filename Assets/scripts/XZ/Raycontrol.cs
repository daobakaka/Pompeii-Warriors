using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Raycontrol : MonoBehaviour
{
    public GameObject actor;
    public GameObject rayrange;
    public float rotatespeed;
    public Transform transfor;
    public GameObject cross;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
      //  artificialray();
    //    artificialrayshadow();
     //   findmonsters();
     // rayrotate();
     //   screenray();
    }
    void screenray()//��Ļ���ߣ�δ��Ч
    {
        RaycastHit hit;

        if (Input.GetMouseButtonDown(2))

        {
            Ray ray = new Ray(Camera.main.ScreenToWorldPoint(Input.mousePosition)+ new Vector3(0, 0, 1), Vector2.zero);
            if (Physics.Raycast(ray, out hit)) //�����ײ��⵽����
            {
                Debug.Log(hit.collider.gameObject.name);//��ӡ�����������������
            }
            else
            { Debug.Log("null="+ Input.mousePosition); }



            //WorldToViewportPoint,.WorldToScreenPoint,//ScreenToWorldPoint
        }
    }


    void findmonsters()
    {
        GameObject target = GameObject.FindWithTag("monster");
        Debug.DrawLine(actor.transform.position, target.transform.position, Color.green);
       
    }
    void artificialray()//��������������߼�¼��Ļ���λ�ã���Ļ����ת��Ϊ�������꣬�������Ƿ���
    {
        RaycastHit hit;

        if (Input.GetMouseButton(1) && Input.GetMouseButtonUp(1) == false)

        {
            Ray ray = new Ray(actor.transform.position, Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 1));

            Debug.DrawLine(actor.transform.position, Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 1), Color.red);
            if (Physics.Raycast(ray, out hit)) //�����ײ��⵽����
            {
                Debug.Log(hit.collider.gameObject.name);//��ӡ�����������������
            }



            //WorldToViewportPoint,.WorldToScreenPoint,//ScreenToWorldPoint
        }
    }
    void artificialrayshadow()
    {
        if (Input.GetMouseButton(1) && Input.GetMouseButtonUp(1) == false)
        {
            Vector3 po = Camera.main.ScreenToWorldPoint(Input.mousePosition) + new Vector3(0, 0, 1);

            cross.transform.position = po;
            cross.gameObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0.5f);
        }
        else
        {
            cross.gameObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0f);
        }
    }
    void rayrotate()//��ת����
    {

        this.transform.RotateAround(transfor.transform.position, Vector3.forward, rotatespeed * Time.deltaTime);
        Debug.DrawLine(transfor.transform.position, this.transform.position, Color.yellow);
        RaycastHit hit;
        Ray ray = new Ray(actor.transform.position, this.transform.position);
        if (Physics.Raycast(ray, out hit)) //�����ײ��⵽����
        {
            Debug.Log(hit.collider.gameObject.name);//��ӡ�����������������
        }
        else
        { Debug.Log("null"); }
    }
}

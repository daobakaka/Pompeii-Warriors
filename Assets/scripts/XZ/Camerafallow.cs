using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camerafallow : MonoBehaviour
{
    public Transform target;
    public float lineer;
    public float height = 3.5f;
    public float distance = 7f;
    public float smoothSpeed = 1;

    void Start()
    {
        //Vector2 po = new Vector2();
    }
    private void fellow()
    { }
    // Update is called once per frame
    void Update()
    {
        //  LateUpdate();
        kakafollow();
    }
    private void LateUpdate()
    {
        //if (target != null)
        //{
        //    if (transform.position != target.position)

        //        transform.position = Vector3.Lerp(transform.position, target.position, lineer);

        //   // transform.rotation = target.Quaternion.Euler(rotationVector3.x*6, rotationVector3.y*6, 0);
        //    //  transform.position = transform.position + new Vector3(0, 0, -1);


        //}
        kakafollow();
    }
    void kakafollow()
    {
        if (target != null)
        {
            Vector3 targetForward = target.forward;
            targetForward.y = 0;
            // �������ǰ����
            Vector3 currentForward = transform.forward;
            currentForward.y = 0;
            // ƽ���ƶ�
            Vector3 forward = Vector3.Lerp(currentForward, targetForward.normalized, smoothSpeed * Time.deltaTime);
            // �����Ҫ�����ľ���
            Vector3 targetPos = target.position + Vector3.up * height - forward * distance;
            // ����������������볯��
            transform.position = targetPos;
            transform.LookAt(target);

        }

    }
}

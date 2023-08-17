using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camerahead : MonoBehaviour
{
    public Transform targethead;
    public float lineerhead, headdistance;
    public Vector3 correct;
    void Start()
    {
        //Vector2 po = new Vector2();
    }
    private void fellow()
    { }
    // Update is called once per frame
    void Update()
    {
        LateUpdate();
    }
    private void LateUpdate()
    {
        if (targethead != null)
        {
            if (transform.position != targethead.position)

                transform.position = Vector2.Lerp(transform.position, targethead.position, lineerhead);
            transform.position = transform.position + new Vector3(0, 0, -1);
            transform.position = transform.position + new Vector3(0, +0.1f, headdistance) + correct;

        }
    }
}

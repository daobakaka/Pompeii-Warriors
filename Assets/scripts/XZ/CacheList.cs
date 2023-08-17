using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CacheList : MonoBehaviour
{
    // Start is called before the first frame update
    public List<Sprite> skillone;
    public List<Sprite> skilltwo_b;
    public List<Sprite> skilltwo_z;
    public List<Sprite> skillthree_b;
    public List<Sprite> skillthree_z;
    void Start()
    {
        List<Sprite> key = skillone;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void capture()
    { List<Sprite> key = skillone; }
}

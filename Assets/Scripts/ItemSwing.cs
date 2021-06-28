using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemSwing : MonoBehaviour
{
    public float amp = 200f;
    public float freq = 0.005f;
    public float roty = 20f;
    private float timer;
    private float anchorY;
    private float posx;
    private float posy;
    private float posz;
    // Start is called before the first frame update
    void Start()
    {
        timer = 0f;
        posx = transform.position.x;
        anchorY = transform.position.y;
        posz = transform.position.z;
    }

    // Update is called once per frame
    void Update()
    {
        timer++;
       // posy = anchorY + (Mathf.Sin(freq * timer) * amp);
       // transform.position = new Vector3(posx, posy * Time.deltaTime, posz);
        transform.Rotate(0f, roty * Time.deltaTime, 0f);
    }
}

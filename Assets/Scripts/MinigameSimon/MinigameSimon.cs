using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MinigameSimon : MonoBehaviour
{
    private Rigidbody _rb;
    private Vector3 _rbposition;
    public int playerspeed = 2;
    // Start is called before the first frame update
    void Start()
    {
        _rb = GetComponent<Rigidbody>();
        _rb.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotation;
    }

    // Update is called once per frame
    void Update()
    {
        float horizontalMove = Input.GetAxis("Horizontal");
        _rbposition = transform.right * horizontalMove;
    }
    private void FixedUpdate()
    {
        _rb.MovePosition(_rb.position + (playerspeed * Time.fixedDeltaTime * _rbposition));
    }
    public void PlayerPickup()
    {
        Debug.Log("Got it!");
    }
}

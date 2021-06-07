using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Items : MonoBehaviour
{
    private MinigameSimon player;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Bucket").GetComponent<MinigameSimon>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            player.PlayerPickup();
            Destroy(gameObject);
        }
    }
}

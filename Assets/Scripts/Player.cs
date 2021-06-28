using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Player : MonoBehaviour
{
    private CharacterController controller;
    public float playerSpeed = 2.0f;
    public float jumpHeight = 1.0f;
    public float RotationSpeed = 1.0f;

    private Vector3 _movement;
    private Vector3 _rotation;
    private GameObject myCamera;
    private GameObject myMenu;
    private GameObject Gate;
    public GameObject[] ItemsFind;
    public GameObject LetterUI;
    public GameObject ExitScreen;
    public int counter = 0;
    public bool groundedPlayer;
    private float gravityValue = -9.81f;

    private void Start()
    {
        controller = gameObject.GetComponent<CharacterController>();
        Cursor.lockState = CursorLockMode.Locked;
        myCamera = GameObject.Find("MainCamera");
        myMenu = GameObject.Find("Canvas");
        Gate = GameObject.Find("Gate");
    }

    void Update()
    {
        if (!myMenu.GetComponent<MainMenu>().paused)
        {
            float horizontalMove = Input.GetAxis("Horizontal");
            float verticalMove = Input.GetAxis("Vertical");
            float HortMouseMove = Input.GetAxis("Mouse X");
            float VertMouseMove = Input.GetAxis("Mouse Y");

            _movement = transform.right * horizontalMove + transform.forward * verticalMove;

            if (_movement != Vector3.zero)
            {
                gameObject.transform.forward = _movement;
            }

            _rotation.x += HortMouseMove * RotationSpeed;
            _rotation.y -= VertMouseMove * RotationSpeed;
            _rotation.y = Mathf.Clamp(_rotation.y, -90f, 90f);
            myCamera.transform.localRotation = Quaternion.Euler(_rotation.y, 0f, 0f);
            transform.localRotation = Quaternion.Euler(0f, _rotation.x, 0f);
            if (Input.GetButtonDown("Jump") && groundedPlayer)
            {
                _movement.y += Mathf.Sqrt(jumpHeight * -3.0f * gravityValue);
            }

            _movement.y += gravityValue * Time.deltaTime * 30;
        }
    }
    private void FixedUpdate()
    {
        //controller.Move(transform.rotation * _rotation);
        transform.Rotate(_rotation * Time.fixedDeltaTime * RotationSpeed);
        controller.Move(_movement * Time.fixedDeltaTime * playerSpeed);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Item"))
        {
            for (int i = 0; i < ItemsFind.Length; i++)
            {
                if (ItemsFind[i].name == other.gameObject.name && !ItemsFind[i].activeSelf)
                {
                    ItemsFind[i].SetActive(true);
                    counter++;
                }
            }
            Debug.Log("Hit " + other.gameObject.name);
            Destroy(other.gameObject);
            if (counter == ItemsFind.Length)
            {
                Gate.GetComponent<BoxCollider>().isTrigger = true;
                LetterUI.SetActive(true);
                LetterUI = GameObject.Find("LetterText");
                LetterUI.GetComponent<TextMeshProUGUI>().text = "Great you got all your stuff, now off to the gate, to destiny! \n\nPress 'Esc' to close.";
            }
        }
        else if (other.gameObject.CompareTag("Gate"))
        {
            ExitScreen.SetActive(true);
            Cursor.lockState = CursorLockMode.None;
        }
    }
}
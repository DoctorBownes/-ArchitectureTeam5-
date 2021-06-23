using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerRB : MonoBehaviour
{
    public float WalkSpeed = 5.0f;
    public float RotationSpeed = 1.0f;
    public float JumpHeight = 1.0f;
    public int counter = 0;

    private Transform _groundChecker;
    public float GroundDistance = 0.15f;
    public LayerMask Ground;

    private Rigidbody _rb;
    private Vector3 _movement;
    private Vector3 _rotation;
    private GameObject myCamera;
    private GameObject myMenu;
    private GameObject Gate;
    public GameObject[] ItemsFind;
    public GameObject LetterUI;
    public GameObject ExitScreen;
    public bool _isGrounded;

    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        _rb = GetComponent<Rigidbody>();
        _rb.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;

        _groundChecker = transform.Find("GroundChecker");
        myCamera = GameObject.Find("MainCamera");
        myMenu = GameObject.Find("Canvas");
        Gate = GameObject.Find("Gate");
    }

    // Update is called once per frame
    void Update()
    {
        if (!myMenu.GetComponent<MainMenu>().paused)
        {
            //Get input
            float horizontalMove = Input.GetAxis("Horizontal");
            float verticalMove = Input.GetAxis("Vertical");
            float HortMouseMove = Input.GetAxis("Mouse X");
            float VertMouseMove = Input.GetAxis("Mouse Y");

            //Check if character is grounded
            _isGrounded = Physics.CheckSphere(_groundChecker.position, GroundDistance, Ground, QueryTriggerInteraction.Ignore);

            //Forward movement
            _movement = transform.right * horizontalMove + transform.forward * verticalMove;

            //Rotate 
            //_rotation = Vector3.up * HortMouseMove * RotationSpeed;
            _rotation.x += HortMouseMove * RotationSpeed;
            _rotation.y -= VertMouseMove * RotationSpeed;
            _rotation.y = Mathf.Clamp(_rotation.y, -90f, 90f);
            myCamera.transform.localRotation = Quaternion.Euler(_rotation.y, 0f, 0f);
            transform.localRotation = Quaternion.Euler(0f, _rotation.x, 0f);

            //Jump
            if (Input.GetButtonDown("Jump") && _isGrounded)
            {
                _rb.AddForce(Vector3.up * Mathf.Sqrt(JumpHeight * -2f * Physics.gravity.y), ForceMode.VelocityChange);
            }
        }
    }

    private void FixedUpdate()
    {
        _rb.MovePosition(_rb.position + (WalkSpeed * Time.fixedDeltaTime * _movement));

        Quaternion _deltaRotation = Quaternion.Euler(_rotation * Time.fixedDeltaTime);
        _rb.MoveRotation(_rb.rotation * _deltaRotation);
        myCamera.transform.rotation = _rb.rotation * _deltaRotation;
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public bool paused;
    public GameObject UI;
    public GameObject PauseMenu;
    private void Start()
    {
        Time.timeScale = 1f;
    }
    public void PlayGame()
    {
        SceneManager.LoadScene("Game");
    }
    public void ReturnMenu()
    {
        SceneManager.LoadScene("Menu");
    }
    public void ExitGame()
    {
       // Debug.Log("Quit");
       Application.Quit();
    }
    private void Update()
    {
        if (SceneManager.GetActiveScene().name == "Game" && Input.GetKeyDown(KeyCode.Escape))
        {
            if (paused)
            {
                Resume();
            }
            else
            {
                Pause();
            }
        }
    }
    public void Resume()
    {
        PauseMenu.SetActive(false);
        Time.timeScale = 1f;
        Cursor.lockState = CursorLockMode.Locked;
        paused = false;
        UI.SetActive(true);
    }
    void Pause()
    {
        UI.SetActive(false);
        PauseMenu.SetActive(true);
        Time.timeScale = 0f;
        Cursor.lockState = CursorLockMode.None;
        paused = true;
    }
}

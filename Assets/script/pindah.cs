using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class pindah : MonoBehaviour
{
    public GameObject Fo;

    void Start()
    {
        
    }
    void Update()
    {
        
    }
    public void scene(int scene)
    {
        SceneManager.LoadScene(scene);
        
    }
    public void scale(float scale)
    {
        transform.localScale = new Vector2(1 / scale, 1 * scale);
    }
    public void exit()
    {
        Application.Quit();
    }
    public void next()
    {
        Fo.SetActive(true);
        Fo.GetComponent<Animator>().SetBool("Next", true);
    }



    

}

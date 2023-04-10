using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FOmove : MonoBehaviour
{
    public GameObject Fo;
    //public AnimationClip fadeOutClip;
    int indexScene;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    /*public void FadeOutLoadScene(int nomorScene)
    {
        gameObject.SetActive(true);
        indexScene = nomorScene;
        Invoke("FadeOutCheck", fadeOutClip.length);
        

    }*/
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
    /*public void FadeOutCheck()
    {
        
        SceneManager.LoadScene(indexScene);
    }*/
}

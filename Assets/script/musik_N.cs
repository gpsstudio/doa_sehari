using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class musik_N : MonoBehaviour
{
    [SerializeField] Image SoundOn2;
    [SerializeField] Image SoundOff2;
    [SerializeField] AudioSource musik;
    private bool muted = true;
    
    void Start()
    {
        
        updatebuttonicon();
        musik.mute = true;
    }

    public void onbuttonpress()
    {
        if (muted == false)
        {
            muted = true;
            //AudioListener.pause = true;
            
            musik.mute = true;
        }
        else
        {
            muted = false;
            musik.time = 0;
            //AudioListener.pause = false;
            musik.mute = false;
        }
        updatebuttonicon();
    }

    private void updatebuttonicon()
    {
        if (muted)
        {
            SoundOn2.enabled = false;
            SoundOff2.enabled = true;
        }
        else
        {
            SoundOn2.enabled = true;
            SoundOff2.enabled = false;
        }
    }
}

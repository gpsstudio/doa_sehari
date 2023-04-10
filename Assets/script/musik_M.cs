using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class musik_M : MonoBehaviour
{
    [SerializeField] Image SoundOn;
    [SerializeField] Image SoundOff;
    [SerializeField] AudioSource sound;
    private bool muted = true;

    void Start()
    {

        updatebuttonicon();
        sound.mute = true;
    }

    public void onbuttonpress()
    {
        if(muted == false)
        {
            muted = true;
            //AudioListener.pause = true;
            
            sound.mute = true;

        }
        else
        {
            muted = false;
            //AudioListener.pause = false;
            sound.time = 0;
            sound.mute = false;
        }
        updatebuttonicon();
    }

    private void updatebuttonicon()
    {
        if(muted)
        {
            SoundOn.enabled = false;
            SoundOff.enabled = true;
        }
        else
        {
            SoundOn.enabled = true;
            SoundOff.enabled = false;
        }
    }


}

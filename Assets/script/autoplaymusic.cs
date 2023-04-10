using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class autoplaymusic : MonoBehaviour
{
    private bool muted = true;
    void Start()
    {
        AudioListener.pause = muted;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

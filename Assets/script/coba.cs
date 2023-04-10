using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coba : MonoBehaviour
{
    [SerializeField] AudioSource musik;
    public void ONmusic()
    {
        musik.Play();
    }

    // Update is called once per frame
    public void OFFmusic()
    {
        musik.Stop();
    }
}

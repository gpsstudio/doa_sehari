using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class keepscroll : MonoBehaviour
{
    public ScrollRect scrollRect;
    void OnEnable()
    {
        scrollRect.onValueChanged.AddListener(scrollRectCallBack);
    }

    void scrollRectCallBack(Vector2 value)
    {
        PlayerPrefs.SetFloat("value", value.y);
    }
    void Start()
    {
        float laygiatri = PlayerPrefs.GetFloat("value");
        scrollRect.verticalNormalizedPosition = laygiatri;
    }
    void OnDisable()
    {
        scrollRect.onValueChanged.RemoveListener(scrollRectCallBack);
    }
    void OnApplicationQuit()
    {
        Destroy(gameObject);
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class copy : MonoBehaviour
{
    public Transform sourceTransform;
    public Transform destinationTransform;

    void CopyTransformValues()
    {
        destinationTransform.position = sourceTransform.position;
        destinationTransform.rotation = sourceTransform.rotation;
        destinationTransform.localScale = sourceTransform.localScale;
    }
}

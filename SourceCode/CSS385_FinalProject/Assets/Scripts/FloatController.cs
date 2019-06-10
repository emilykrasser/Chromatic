using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatController : MonoBehaviour {
    public float upperLimit, lowerLimit;
    public float displacement = 0.005f;


    void Start()
    {
        upperLimit = transform.position.y + upperLimit;
        lowerLimit = transform.position.y - lowerLimit;
    }

    void Update()
    {
        float currY = transform.position.y;
        transform.position += new Vector3(0.0f, displacement, 0);
        if (currY <= lowerLimit && displacement < 0)
        {
            displacement = -displacement;
        }
        if (currY >= upperLimit && displacement > 0)
        {
            displacement = -displacement;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChickenController : NPCController {
    public float upperLimit, lowerLimit;
    public float displacement = 0.005f;

    void Start()
    {
        upperLimit = transform.position.x + upperLimit;
        lowerLimit = transform.position.x - lowerLimit;
    }

    void Update()
    {
        float currY = transform.position.y;
        transform.position += new Vector3(displacement, 0, 0);
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

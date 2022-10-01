using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveOutliner : MonoBehaviour
{
    Outline outline;
    void Awake()
    {
        outline = GetComponent<Outline>();
    }

    public void HoverOnEffect()
    {
        if(outline != null)
        {
            //outline.OutlineWidth = 10.0f;
            outline.enabled = true;
        }
    }

    public void HoverOutEffect()
    {
        if(outline!=null)
        {
            //outline.OutlineWidth = 0.0f;
            outline.enabled = false;
        }
    }
}

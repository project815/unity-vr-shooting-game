using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveOutliner : MonoBehaviour
{
    Outline outline;
    public SpriteRenderer pressGrip;
    float fadeCount = 0;

    void Awake()
    {
        outline = GetComponent<Outline>();
        pressGrip.color = new Color(255, 255, 255, 0);
    }

    public void HoverOnEffect()
    {
        if(outline != null)
        {
            //outline.OutlineWidth = 10.0f;
            outline.enabled = true;
            StartCoroutine("GripFadein");
        }
    }

    public void HoverOutEffect()
    {
        if(outline!=null)
        {
            //outline.OutlineWidth = 0.0f;
            outline.enabled = false;
            StartCoroutine("GripFadeout");
        }
    }

    IEnumerator GripFadein()
    {
        while (fadeCount < 1.0f)
        {
            fadeCount += 0.1f;
            yield return new WaitForSeconds(0.01f);
            pressGrip.color = new Color(255, 255, 255, fadeCount);
        }
    }

    IEnumerator GripFadeout()
    {
        while (fadeCount < 0f)
        {
            fadeCount -= 0.1f;
            yield return new WaitForSeconds(0.01f);
            pressGrip.color = new Color(255, 255, 255, fadeCount);
        }
    }
}

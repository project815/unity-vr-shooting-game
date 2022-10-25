using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class FlashLight : MonoBehaviour
{
    [SerializeField]InputManager input;
    [SerializeField]GameObject light;
    private bool gripping;

    private void Start()
    {
        input.onLight += LightOn;
        gripping = false;
    }


    public void LightOn(bool pressDown)
    {
        if(gripping)
            light.SetActive(pressDown);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other!=null)
        {
            if(other.gameObject.GetComponent<XRController>()!=null)
            {
                gripping = true;
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other != null)
        {
            if (other.gameObject.GetComponent<XRController>() != null)
            {
                gripping = false;
            }
        }
    }

}

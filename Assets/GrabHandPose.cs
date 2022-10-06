using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class GrabHandPose : MonoBehaviour
{
    public AnimateHandOnInput rightHandPose;
    // Start is called before the first frame update
    void Start()
    {
        XRGrabInteractable grabInteractable = GetComponent<XRGrabInteractable>();

        grabInteractable.selectEntered.AddListener(SetupPose);

        rightHandPose.gameObject.SetActive(false);
    }

    public void SetupPose(BaseInteractionEventArgs arg)
    {
        if(arg.interactableObject is XRBaseController)
        {
            AnimateHandOnInput HandData = arg.interactableObject.transform.GetComponent<AnimateHandOnInput>();

            HandData.handAnimator.enabled = false;
        }
    }
}

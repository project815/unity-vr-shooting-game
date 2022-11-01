using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class GrabHandPose : MonoBehaviour
{
    public HandData rightHandPose;
    // Start is called before the first frame update
    void Start()
    {
        XRGrabInteractable grabInteractable = GetComponent<XRGrabInteractable>();

        grabInteractable.selectEntered.AddListener(SetupPose);

        rightHandPose.gameObject.SetActive(false);
    }

    public void SetupPose(BaseInteractionEventArgs arg)
    {
        if(arg.interactableObject is XRDirectInteractor)
        {
            HandData HandData = arg.interactableObject.transform.GetComponentInChildren<HandData>();
            
            HandData.animator.enabled = false;
        }
    }

    public void SetHandDataValues(HandData h1, HandData h2)
    {
        
    }
}

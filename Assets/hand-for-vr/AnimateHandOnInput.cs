using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class AnimateHandOnInput : MonoBehaviour
{
    //left일 때, Right일 때 입력받는 값이 다름.
    //
    public enum SelectedJoystick
    {
        left,
        right,
    };
    public SelectedJoystick selected;
    public Transform root;
    public Transform[] fingerBone;
    public InputManager inputManager;
    public Animator handAnimator;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {   
        if(SelectedJoystick.left == selected)
        {
            LeftAnimation();
        }
        else if(SelectedJoystick.right == selected)
        {
            RightAnimtion();
        }
    }

    private void LeftAnimation()
    {
        handAnimator.SetFloat("Trigger", inputManager.left.triggerValue);
        handAnimator.SetFloat("Grip", inputManager.left.gripValue);
    }
    private void RightAnimtion()
    {
        handAnimator.SetFloat("Trigger", inputManager.right.triggerValue);
        handAnimator.SetFloat("Grip", inputManager.right.gripValue);
    }
}

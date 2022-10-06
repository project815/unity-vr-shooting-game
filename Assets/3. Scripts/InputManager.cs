using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

using System.Linq;
/*
VRInputValue 받기!
https://www.youtube.com/watch?v=TLNVWojcbEE

XRNode를 통해 어느 손의 input을 받을지 정한다.
InputDevice를 통해 누른 버튼을 받아온다.

https://developer-talk.tistory.com/294
FirstOrDefault()함수는 using System.Linq;을 사용함.
컬렉션에서 첫 번째 요소를 반환하거나 또는 조건을 만족하는 여러 요소 중에서 첫 번째 요소를 반환합니다. Frist함수도 존재.
Frist함수의 경우 요소가 없거나 빈 컬렉션이면 InvalidOperationException이 발생한다.
FirstOrDefault()함수의 경우 데이터 유형의 기본값을 반환함.
*/

public class InputManager : MonoBehaviour
{
    [SerializeField] private XRNode xrLeftNode= XRNode.LeftHand;
    [SerializeField] private XRNode xrRightNode= XRNode.RightHand;
    private List<InputDevice> leftDevices = new List<InputDevice>();
    private List<InputDevice> rightDevices = new List<InputDevice>();

    private InputDevice leftDevice, rightDevice;

    //Button
    [System.Serializable]
    public class inputValue
    {
        public float gripValue;
        public float triggerValue;
        public Vector2 primary2DAxisValue;
    }

    public inputValue left;
    public inputValue right;


    void GetDevice()
    {
        //GetDevicesAtXRNode :
        //Gets a list of active input devices available to the XR Input Subsystem at a given XRNode endpoint.
        InputDevices.GetDevicesAtXRNode(xrLeftNode, leftDevices);
        InputDevices.GetDevicesAtXRNode(xrRightNode, rightDevices);
        
        leftDevice = leftDevices.FirstOrDefault();
        rightDevice = rightDevices.FirstOrDefault();
    }

    private void OnEnable() {
        if(!leftDevice.isValid || !rightDevice.isValid)
        {
            GetDevice();
        }    
    }
    // Update is called once per frame
    void Update()
    {
        if(!leftDevice.isValid || !rightDevice.isValid)
        {
            GetDevice();
        }   
        
        /*
        first scenario is going to get us all features.
        List<InputFeatureUsage> features = new List<InputFeatureUsage>();
        device.TryGetFeatureUsages(features);

        foreach(var feature in features)
        {
            if(feature.type == typeof(bool))
            {
                Debug.Log("sdafsdf");
            }
        }
        */

        LeftHand();
        RightHand();
    }

    private void LeftHand()
    {
        //Button Grip value
        left.gripValue = 0;
        InputFeatureUsage<float> gripUsage = CommonUsages.grip;
        leftDevice.TryGetFeatureValue(gripUsage, out left.gripValue);
        
        //Button Capturing Trigger value
        left.triggerValue = 0;
        InputFeatureUsage<float> triggerUsage = CommonUsages.trigger;
        leftDevice.TryGetFeatureValue(triggerUsage, out left.triggerValue);

        // Button Capturing Trigger activated
        // bool triggerButtonAction = false;
        // if(leftDevice.TryGetFeatureValue(CommonUsages.triggerButton, out triggerButtonAction) && triggerButtonAction)
        // {
        //     Debug.Log(triggerButtonAction);
        // }

        //Button A activated
        // bool primaryButtonValue = false;
        // InputFeatureUsage<bool> primaryButtonUsage = CommonUsages.primaryButton;
        // if(leftDevice.TryGetFeatureValue(primaryButtonUsage, out primaryButtonValue) && primaryButtonValue)
        // {
        //     Debug.Log(primaryButtonValue);
        // }

        //Button 2DAxis value
        left.primary2DAxisValue = Vector2.zero;
        InputFeatureUsage<Vector2> primary2DAxisUsage = CommonUsages.primary2DAxis;
        leftDevice.TryGetFeatureValue(primary2DAxisUsage, out left.primary2DAxisValue);
      
    }

    private void RightHand()
    {
        //Button Grip value
        right.gripValue = 0;
        InputFeatureUsage<float> gripUsage = CommonUsages.grip;
        rightDevice.TryGetFeatureValue(gripUsage, out right.gripValue);

        //Button Capturing Trigger value
        right.triggerValue = 0;
        InputFeatureUsage<float> triggerUsage = CommonUsages.trigger;
        rightDevice.TryGetFeatureValue(triggerUsage, out right.triggerValue);

        //Button 2DAxis value
        right.primary2DAxisValue = Vector2.zero;
        InputFeatureUsage<Vector2> primary2DAxisUsage = CommonUsages.primary2DAxis;
        rightDevice.TryGetFeatureValue(primary2DAxisUsage, out right.primary2DAxisValue);
    }
}
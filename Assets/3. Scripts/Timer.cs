using Facebook.WitAi.Lib;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    // Start is called before the first frame update

    float _Sec;
    int _Min ;

    [SerializeField]
    Text _TimerText;

    private void Update()
    {
        TimerLive();
    }

    void TimerLive()
    {
        _Sec += Time.deltaTime;
        _TimerText.text = string.Format("{0:D2} : {1:D2}", _Min, _Sec);

        if ( (int)_Sec > 59)
        {
            _Sec = 0;
            _Min++;
        }
    }


}

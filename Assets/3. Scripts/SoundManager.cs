using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;


public class SoundManager : MonoBehaviour
{
    public AudioSource bgm;
    public static SoundManager instance;

    
    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
            
        }
        else
        {
            Destroy(gameObject);
        }
    }    

    public void SFXPlay(string sfxname, AudioClip clip)
    {
        GameObject go = new GameObject(sfxname + "Sound");
        AudioSource audioSource = go.AddComponent<AudioSource>();
        audioSource.clip = clip;
        audioSource.Play();
        Destroy(go, clip.length);
    }
}

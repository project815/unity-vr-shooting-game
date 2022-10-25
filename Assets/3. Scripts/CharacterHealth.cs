using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

/*
 TODO
 add slider at inspector 
 */

public class CharacterHealth : MonoBehaviour ,IDamagable
{
    [SerializeField] Slider healthSlider;
    [SerializeField] float maxHp = 100f;
    [HideInInspector] public float hp { get; private set; }

    [SerializeField] AudioClip HeartSlowBit;
    [SerializeField] AudioClip HeartMidBit;
    [SerializeField] AudioClip HeartFastBit;

    [SerializeField] AudioClip deathClip;
    [SerializeField] AudioClip hitClip;

    private AudioSource audioPlayer;
    [HideInInspector] public bool dead { get; private set; }
    [HideInInspector] public event Action onDeath;

    public Image HealthImage;


    private void Awake()
    {
        audioPlayer = GetComponent<AudioSource>();
    }
    private void OnEnable()
    {
        hp = maxHp;
        if(healthSlider != null)
        healthSlider.value = hp;
    }
    private void Update() {
        if(!audioPlayer.isPlaying)
        {
            if(hp >= 70) audioPlayer.PlayOneShot(HeartSlowBit);
            else if(hp >= 50) audioPlayer.PlayOneShot(HeartMidBit);
            else audioPlayer.PlayOneShot(HeartFastBit); 
        }
    }

    public void OnDamage(float damage)
    {
        if(!dead)
        {
            audioPlayer.PlayOneShot(hitClip);
            hp -= damage;
            Debug.Log(hp);

            HealthImage.fillAmount -= damage * 0.01f;
            if (HealthImage.fillAmount <= 0)
            {
                GameObject.Find("HUD").transform.Find("FailedIcon").gameObject.SetActive(true);

            }
        }

        if (hp <= 0 && !dead)
        {
            Die();
        }

        healthSlider.value = hp;
    }


    public virtual void Die()
    {
        if (onDeath != null)
        {
            onDeath();
        }

        dead = true;
        audioPlayer.PlayOneShot(deathClip);
    }


}

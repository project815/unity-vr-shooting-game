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

    [SerializeField] AudioClip deathClip;
    [SerializeField] AudioClip hitClip;

    private AudioSource audioPlayer;
    [HideInInspector] public bool dead { get; private set; }
    [HideInInspector] public event Action onDeath;


    private void Awake()
    {
        audioPlayer = GetComponent<AudioSource>();
    }
    private void OnEnable()
    {
        hp = maxHp;
        healthSlider.value = hp;
    }

    public void OnDamage(float damage)
    {
        if(!dead)
        {
            audioPlayer.PlayOneShot(hitClip);
            hp -= damage;
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.VFX;

public class Club : MonoBehaviour
{
    [SerializeField] private float force;
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip hitSound;

    [SerializeField] private VisualEffect bloodEffect;
    private void OnCollisionEnter(Collision collision)
    {
        Rigidbody rb = collision.gameObject.GetComponent<Rigidbody>();
        Zombie zombie = collision.gameObject.GetComponentInParent<Zombie>();
        CharacterHealth health = collision.gameObject.GetComponent<CharacterHealth>();   

        if (rb != null && zombie != null)
        {
            
            zombie.BeAttacked();
            //날려버리기
            Vector3 forceDirection = collision.transform.position - transform.position;
            rb.AddForce(forceDirection.normalized * force, ForceMode.Impulse);
            //진동
            InputManager.Instance.HapticHand();
            //이펙트
            bloodEffect.transform.position = collision.transform.position;
            bloodEffect.transform.rotation = Quaternion.LookRotation(collision.contacts[0].normal);
            bloodEffect.Play();
            //사운드
            if(!audioSource.isPlaying)
            audioSource.PlayOneShot(hitSound);
        }
    }
}

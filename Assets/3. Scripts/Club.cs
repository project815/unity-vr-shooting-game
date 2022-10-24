using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.VFX;

public class Club : MonoBehaviour
{
    [SerializeField] private float force;
    [SerializeField] private VisualEffect bloodEffect;
    private void OnCollisionEnter(Collision collision)
    {
        Rigidbody rb = collision.gameObject.GetComponent<Rigidbody>();
        Zombie zombie = collision.gameObject.GetComponentInParent<Zombie>();
        CharacterHealth health = collision.gameObject.GetComponent<CharacterHealth>();   

        if (rb != null && zombie != null)
        {
            zombie.BeAttacked();

            Vector3 forceDirection = collision.transform.position - transform.position;
            rb.AddForce(forceDirection.normalized * force, ForceMode.Impulse);

            InputManager.Instance.HapticHand();

            bloodEffect.transform.position = collision.transform.position;
            bloodEffect.transform.rotation = Quaternion.LookRotation(collision.contacts[0].normal);
            bloodEffect.Play();
        }

        if(health!=null)
        {
            //call boss character OnDamage
            if (health.tag == "Boss")
            {
                health.OnDamage(10.0f);
            }
        }

    }
}

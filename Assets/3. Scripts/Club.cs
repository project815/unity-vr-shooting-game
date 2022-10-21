using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
public class Club : MonoBehaviour
{
    private InputManager inputManager;
    [SerializeField]
    private float force;
    private void OnCollisionEnter(Collision collision)
    {
        Rigidbody rb = collision.gameObject.GetComponent<Rigidbody>();
        CharacterHealth health = collision.gameObject.GetComponent<CharacterHealth>();   

        if (rb != null)
        {
            Zombie zombie = collision.gameObject.GetComponentInParent<Zombie>();
            zombie.BeAttacked();

            Vector3 forceDirection = collision.transform.position - transform.position;
            forceDirection.y = 1f;
            rb.AddForce(forceDirection.normalized * force, ForceMode.Impulse);
            Debug.Log("충돌");
            inputManager.HapticHand();
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Club : MonoBehaviour
{



    [SerializeField]
    private float force;
    private void OnCollisionEnter(Collision collision)
    {
        //CharacterJoint joint = collision.gameObject.GetComponent<CharacterJoint>();
        //if (joint != null)
        //{
        //    Zombie zombie = collision.gameObject.GetComponentInParent<Zombie>();
        //    zombie.BeAttacked();

        //    Vector3 forceDirection = collision.transform.position - transform.position;
        //    forceDirection.y = 1f;
        //    collision.rigidbody.AddForce(forceDirection.normalized * force, ForceMode.Force);
        //}
        Rigidbody rb = collision.gameObject.GetComponent<Rigidbody>();
        if (rb != null)
        {
            Zombie zombie = collision.gameObject.GetComponentInParent<Zombie>();
            zombie.BeAttacked();

            Vector3 forceDirection = collision.transform.position - transform.position;
            forceDirection.y = 1f;
            collision.rigidbody.AddForce(forceDirection.normalized * force, ForceMode.Impulse);
        }



    }
}

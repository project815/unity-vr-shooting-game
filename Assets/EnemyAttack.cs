using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    Zombie _zombie;
    private void OnEnable()
    {
        _zombie = GetComponentInParent<Zombie>();
    }
    // Start is called before the first frame update
    private void OnTriggerEnter(Collider other)
    {
        if (other != null)
        {
            //layer 6 == player
            if (other.gameObject.layer == 6&&_zombie._currentState == Zombie.ZombieState.Attack)
            {
                CharacterHealth playerHealth = other.GetComponent<CharacterHealth>();
                playerHealth.OnDamage(10);
                Debug.Log("PlayerAttack" + playerHealth.hp);
            }
        }
    }
}

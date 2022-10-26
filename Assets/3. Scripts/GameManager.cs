using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//score, game success/fail

public class GameManager : MonoBehaviour
{
    public static GameManager gInstance;
    //check player death
    public bool PlayerOver { get; private set; }

    //total kill enemy count
    private int KillCount = 0;
    //goal to kill enemy
    [SerializeField] int KillGoal = 0;
    
    void Awake()
    {
        //singleton
        if(gInstance==null)
        {
            gInstance = this;
        }
        else
        {
            if(gInstance!=this)
            {
                Destroy(gameObject);
            }
        }

        PlayerOver = false;
    }

    // Start is called before the first frame update
    void Start()
    {
        //player death Action delegate
        CharacterHealth player = GameObject.FindWithTag("Player").GetComponent<CharacterHealth>();
        player.onDeath += PlayerGameOver;
    }

    // Update is called once per frame
    void Update()
    {
        //SceneLoad
        if(!PlayerOver && KillCount>=KillGoal)
        {
            UIManager.uInstance.SceneChange();
        }
    }

    public void AddKillCount()
    {
        if(!PlayerOver)
        {
            KillCount++;
        }
    }

    public void PlayerGameOver()
    {
        if(!PlayerOver)
        {
            PlayerOver = true;
            Debug.Log("player game over");
        }
    }
    
}

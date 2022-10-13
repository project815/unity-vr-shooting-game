using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject enenmyPrefab;
    [SerializeField]
    private Transform[] spawnPosition;
    [SerializeField]
    private Transform waitPosition;

    private List<GameObject> enemies;
    private int maxCount = 0;
    private int spawnCount;
    private List<bool> setActiveTrue;

    void Start()
    {
        spawnCount = 5;
        for(int i = 0;i<spawnCount;i++)
        {
            Debug.Log(i);
            enemies[i] = Instantiate(enenmyPrefab, waitPosition.position,Quaternion.identity);
            enemies[i].SetActive(false);
            setActiveTrue[i] = false;
        }
    }
    
    private void SpawnEnemy()
    {
       for(int i=0;i<enemies.Count;i++)
        {
            if(enemies[i] != null && !setActiveTrue[i])
            {
                if (maxCount >= 20) return;
                enemies[i].transform.position = spawnPosition[Random.Range(0, 2)].position;
                enemies[i].SetActive(true);
                setActiveTrue[i] = true;
                maxCount++;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        //SpawnEnemy();
    }
}

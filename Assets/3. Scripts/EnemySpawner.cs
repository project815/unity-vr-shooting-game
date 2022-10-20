using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    public class PoolObject
    {
        public bool isActive;
        public GameObject gameObject;
    }
    [SerializeField]
    private GameObject ZombiePrefab;
    [SerializeField]
    private Transform[] spawnPosition;
    [SerializeField]
    private Transform waitPosition;
    [SerializeField]
    private int spawnCount;
    [SerializeField]
    private int maxCount;

    private List<PoolObject> enemies;

    

    private int currentCount;
    void Start()
    {


        enemies         = new List<PoolObject>();
        
        SpawnEnemy();
       
    }
    private void SpawnEnemy()
    {
        for (int i = 0; i < spawnCount; i++)
        {
            PoolObject poolObject= new PoolObject();
            poolObject.gameObject = Instantiate(ZombiePrefab, waitPosition.position, Quaternion.identity);
            poolObject.gameObject.SetActive(false);
            poolObject.isActive = false;

            enemies.Add(poolObject);
            
            

           
        }
    }
    private void SetActiveTrueEnemy()
    {
        for (int i = 0; i < enemies.Count; i++)
        {
            PoolObject poolObject = enemies[i];
            if (poolObject != null && !poolObject.isActive)
            {
                if (currentCount >= maxCount) return;
                
                    poolObject.gameObject.transform.position = spawnPosition[Random.Range(0, spawnPosition.Length)].position;
                    poolObject.gameObject.SetActive(true);
                    poolObject.isActive = true;



                    currentCount++;
                    
                
            }
        }
    }
   
    public void SetActiveFalseEnemy(GameObject gameObject)
    {
        for(int i=0;i<enemies.Count;i++)
        {
            if (enemies[i].gameObject == gameObject)
            {
                enemies[i].isActive = false;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
       if(GameManager.gInstance != null && GameManager.gInstance.PlayerOver)
        {
            return;
        }
        SetActiveTrueEnemy();
    }
}

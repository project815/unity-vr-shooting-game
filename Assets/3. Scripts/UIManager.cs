using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public static UIManager uInstance;
    [SerializeField] Animator SceneLoaderEffect;

    void Awake()
    {
        //singleton
        if(uInstance == null)
        {
            uInstance = this;
        }
        else
        {
            if(uInstance!=this)
            {
                Destroy(gameObject);
            }
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SceneChange()
    {
        StartCoroutine("SceneChangeRoutine");
    }

    private IEnumerator SceneChangeRoutine()
    {
        yield return new WaitForSeconds(3f);
        SceneLoaderEffect.SetTrigger("FadeOut");
    }
}

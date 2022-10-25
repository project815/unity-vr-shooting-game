using System.Collections;
using System.Collections.Generic;
using UnityEditor.Rendering;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    public static UIManager uInstance;
    [SerializeField] Animator SceneLoaderEffect;

    //public Image fadepanel;
    //public int sceneNum;
    //float fadeCount = 0;

    void Awake()
    {
        //singleton
        if (uInstance == null)
        {
            uInstance = this;
        }
        else
        {
            if (uInstance != this)
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
        //while (fadeCount < 1.0f)
        //{
        //    fadeCount += 0.1f;
        //    yield return new WaitForSeconds(0.01f);
        //    fadepanel.color = new Color(0, 0, 0, fadeCount);
        //}
        //yield return new WaitForSeconds(2f);
        //SceneManager.LoadScene(sceneNum);
    }
}
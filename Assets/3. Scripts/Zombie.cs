using System.Linq;
using UnityEngine;

public class Zombie : MonoBehaviour
{
    //좀비의 상태 
    private enum ZombieState
    {
        Walking,
        Ragdoll
    }

    //좀비가 바라볼 카메라
    [SerializeField]
    private Camera _camera;


    private Rigidbody[]  _ragdollrigidbodies; // 좀비의 랙돌이 갖고있는 리지드바디가 담길 배열
    private ZombieState  _currentState = ZombieState.Walking; //좀비상태필드
    private Animator _animator;
    private CharacterController _characterController;

   void Awake()
    {
        _ragdollrigidbodies     = GetComponentsInChildren<Rigidbody>();
        _animator               = GetComponent<Animator>();
        _characterController    = GetComponent<CharacterController>();
        DisableRagdoll();
    }

    private void Update()
    {
        // 좀비의 상태에따라 매서드호출
        switch (_currentState)
        {
            case ZombieState.Walking:
                WalkingBehavior();
                break;
            case ZombieState.Ragdoll:
                RagdollBehavior();
                break;

        }
           
    }

    public void BeAttacked()
    {

        EnableRagdoll();
        _currentState = ZombieState.Ragdoll;

    }

    //랙돌이 사용되지 않을 경우 랙돌의 갖고있는 각 리지드바디의 iskinematic 활성화
    //iskinematic이 활성화 되어있으면 물리적용X
    //애니메이터, 캐릭터 컨트롤러 활성화
    private void DisableRagdoll()
    {
        foreach(var rigidbody in _ragdollrigidbodies)
        {
            rigidbody.isKinematic = true;
        }

        _animator.enabled = true;
        _characterController.enabled = true;
    }

    //랙돌이 사용될때 랙돌이 갖고있는 각 리지드 바디의 iskinematic 비활성화
    //애니메이터, 캐릭터 컨트롤러 비활성화
    private void EnableRagdoll()
    {
        foreach(var rigidbody in _ragdollrigidbodies)
        {
            rigidbody.isKinematic = false;
        }
        _animator.enabled = false;
        _characterController.enabled = false;
    }


    //걷는 동작일때의 매서드
    private void WalkingBehavior()
    {
        Vector3 direction = _camera.transform.position - transform.position;
        direction.y = 0; // 방향에 상관없이 땅에 붙어있어야 하므로 y = 0
        direction.Normalize(); //방향은 같고 크기는 1인 vector로 변환 

        Quaternion toRotation = Quaternion.LookRotation(direction, Vector3.up);  //Vector3.up 머리가 vector3.up방향을 향하게하고 direction방향으로 회전하는 값을 quarternion형으로 반환
        transform.rotation = Quaternion.RotateTowards(transform.rotation, toRotation, 20f * Time.deltaTime);//내 위치에서 toRotation 방향으로 3번째 파라미터 속도로 회전
                    
    }

    private void RagdollBehavior()
    {
        
    }

    

}

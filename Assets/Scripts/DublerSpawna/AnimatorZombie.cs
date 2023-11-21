using UnityEngine;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System;

public class AnimatorZombie : MonoBehaviour
{
    [SerializeField] private Animator _animator;

    private MobsCollision _healthEnemy;
    private MovePrefabs2 _movePrefabsEnemy;

    private bool isStartShot = false;

    [SerializeField] private bool isLoadScreen = false;

    public bool isDamage = false;

    private void Start()
    {
        _animator = GetComponent<Animator>();
        _healthEnemy = FindObjectOfType<MobsCollision>();
        _movePrefabsEnemy = FindObjectOfType<MovePrefabs2>();
    }

    private void OnEnable()
    {
        //_animator.Play("Zombie_Rise");
        //_animator.speed = 2f;
    }

    private void Update()
    {
        if (isLoadScreen == false)
        {
            AnimatingDead();
        }
        else if(!isDamage)
        {
            MoveAnimation();
        }
    }

    public bool SpawnAnimation()
    {
        var stateId = Animator.StringToHash("Zombie_Rise");
        
        if(_animator.HasState(0, stateId))
        {
            return true;
        }
        else
        {
            //_animator.Play("Zombie_Rise");
            return false;
        }
    }

    public void MoveAnimation()
    {
        _animator.speed = 0.5f;
        _animator.Play("Zombie_Walk");
    }

    public async void AnimationgAttack()
    {
        if (isStartShot == false && this.gameObject)
        {
            isStartShot = true;
            try
            {
                _animator.speed = 1f;

                await System.Threading.Tasks.Task.Delay((int)(1000 * 0.5f));

                this.GetComponent<MovePrefabs2>()._IsWalk = false;
                _animator.Play("Zombie_Attack");
            }
            catch
            {

            }

            isStartShot = false;
        }
    }

    private bool isDead = false;
    private void AnimatingDead()
    {
        if (_healthEnemy.HP <= 0 && isDead == false)
        {
            isDead = true;

            StartNextLevel.NumberOfDead++;

            if (SpawnEnemy2.EnemyOnScene.find(this.GetComponent<MobsCollision>().ThisEnemy))
            {
                SpawnEnemy2.RemoveEnemyOnScene(this.GetComponent<MobsCollision>().ThisEnemy);
            }

            _movePrefabsEnemy.Speed = 0;
            this.transform.DOKill();

            Destroy(this.GetComponent<MobsCollision>().hud);

            if (RepeatBackground.isMove)
            {
                Vector3 _movePos = Vector3.zero;

                _movePos = new Vector3(-20, 0, 0);

                this.transform.DOKill();

                //this.transform.DOMove(_movePos, (this.transform.position.x - _movePos.x) / 2).SetEase(Ease.Linear);

            }

            if(isDeathAnimation == false)
            {
                isDeathAnimation = true;

                StartCoroutine(Death());
            }

        }
    }

    private bool isDeathAnimation = false;
    private IEnumerator Death()
    {
        this.transform.DOKill();

        _animator.Play("Zombie_Dead");
        _animator.speed = 1f;

        this.GetComponent<DestroyEnemyPrefab2>().postDestroy();

        yield return new WaitForSeconds(1f);

        if (this.gameObject)
        {
            Destroy(this.gameObject);
        }
    }
}

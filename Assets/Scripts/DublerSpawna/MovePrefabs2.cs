using UnityEngine;
using DG.Tweening;

public class MovePrefabs2 : MonoBehaviour
{
    [SerializeField] private float _startingSpeed;

    public float Speed;

    private Vector3 _movePos;

    private Animator _animator;
    public bool _IsWalk = false;


    private void Start()
    {
        _animator = GetComponent<Animator>();
    }

    private void FixedUpdate()
    {
        if (this.GetComponent<MobsCollision>().HP > 0 && _IsWalk)
        {
            MovedPrefabs();
        }
        else if (!_IsWalk)
        {
            this.transform.DOKill();
        }
    }

    public GameObject trigerPlayer;

    public void MovedPrefabs()
    {
        _IsWalk = true;

        if (ListCharacters.CharactersObject.Count > 0)
        {
            if (!trigerPlayer)
            {
                for(int i =0; i < ListCharacters.CharactersObject.Count; i++)
                {
                    if (ListCharacters.CharactersObject[i])
                    {
                        trigerPlayer = ListCharacters.CharactersObject[i];

                        break;
                    }
                }
            }

            if (_movePos != trigerPlayer.transform.position)
            {
                _movePos = trigerPlayer.transform.position;

                _movePos = new Vector3(_movePos.x, this.transform.position.y, _movePos.z);

                this.transform.DOKill();

                if (this.GetComponent<MobsCollision>().isBoss)
                {
                    if (this.transform.position.x >= _movePos.x)
                    {
                        this.transform.DOMove(_movePos, (this.transform.position.x - trigerPlayer.transform.position.x) * 2).SetEase(Ease.Linear);
                    }
                }
                else
                {
                    if (this.transform.position.x >= _movePos.x)
                    {
                        this.transform.DOMove(_movePos, (this.transform.position.x - trigerPlayer.transform.position.x) / 2).SetEase(Ease.Linear);
                    }
                }
            }
        }
        else
        {
            /*
            _movePos = new Vector3(-20, this.transform.position.y, 0);

            this.transform.DOKill();

            if (this.GetComponent<MobsCollision>().isBoss)
            {
                this.transform.DOMove(_movePos, (this.transform.position.x - _movePos.x) * 2).SetEase(Ease.Linear);
            }
            else
            {
                this.transform.DOMove(_movePos, (this.transform.position.x - _movePos.x) / 2).SetEase(Ease.Linear);
            }
            */
        }

        if (this.TryGetComponent<AnimatorZombie>(out var animatorZombie))
        {
            animatorZombie.MoveAnimation();
        }

        //transform.position += (Vector3.left * Time.deltaTime * Speed);
        //_animator.Play("Zombie_Walk");
    }

    public void SettingSpeedAfterAnimationRise()
    {
        Speed = _startingSpeed;
        //_animator.Play("Zombie_Walk");
    }
}

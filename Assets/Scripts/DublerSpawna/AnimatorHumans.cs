using UnityEngine;

public class AnimatorHumans : MonoBehaviour
{
    [SerializeField] private Animator _animatorHuman;
    [SerializeField] private Animator _animatorShotEffect;
    [SerializeField] private AudioManager _audioManager;
    [SerializeField] private AudioSource _audioClick;

    private MobsCollision _healthEnemy;

    private bool isStartShot = false;

    private bool isStopAnimation = false;

    private bool isMove = true;

    public bool isGhost = false;

    public bool isDead = false;

    private void Start()
    {
        _animatorHuman = GetComponent<Animator>();
        _animatorHuman.speed = 0.7f;
        _healthEnemy = this.GetComponent<MobsCollision>();

        _animatorHuman.Play("Human_Idle");
    }

    private void Update()
    {
        if (!isGhost && !isDead)
        {
            if (isStopAnimation == false)
            {
                //AnimatingShootHuman();
                AnimatingWalkHuman();
                AnimatingHappyHuman();
            }

            if (isMove && RepeatBackground.isMove)
            {
                AnimatingIdleHuman();
                isMove = false;
            }

            if (!isMove && !RepeatBackground.isMove)
            {
                AnimatingIdleHuman();
                isMove = true;
            }
        }
        else if (isDead)
        {
            AnimatingDeadHuman();
        }
        else
        {
            _animatorHuman.Play("Human_Idle");
        }
    }

    private async void AnimatingDeadHuman()
    {
        if (isDead)
        {
            isDead = false;
            isStopAnimation = true;

            this.GetComponent<BoxCollider2D>().enabled = false;

            _animatorHuman.Play("Human_Dead");

            await System.Threading.Tasks.Task.Delay(500);

            if (this.gameObject)
                Destroy(this.gameObject);

            //_animatorHuman.speed = 2f;
        }
    }

    public async void AnimatingShootHuman()
    {
        if (isStartShot == false)
        {
            isStartShot = true;

            if (RepeatBackground.isMove)
            {
                //_animatorHuman.Play("Human_RunAndShootWithBullet");
                _audioClick.Play();
                //_audioManager.Invoke(AudioEvent.Shoot);
            }
            else
            {
                _animatorHuman.Play("Human_Shoot");
                _audioClick.Play();
                // GetComponent<AudioSource>().volume = 0.2f;
                // _audioManager.Invoke(AudioEvent.Shoot);
                //GetComponent<AudioSource>().volume = 1;
            }
            //_animatorHuman.speed = 2f;

            await System.Threading.Tasks.Task.Delay((int)(1000 * 0.5f));

            AnimatingIdleHuman();

            //AnimatingIdleHuman();
            isStartShot = false;
        }
    }

    private void AnimatingWalkHuman()
    {
        //_animatorHuman.Play("Human_Walk");
    }

    private void AnimatingHappyHuman()
    {
        //_animatorHuman.Play("Human_Happy");
    }

    public void AnimatingShotEffect()
    {
        //Debug.Log("��������");

        _animatorShotEffect.Play("Shot_Effect");
    }

    public void AnimatingIdleHuman()
    {
        if (isStopAnimation == false)
        {
            if (RepeatBackground.isMove)
            {
                //_animatorHuman.Play("Human_RunAndShoot");

                if (Player.PlayerCharacters.Count > 1)
                {
                    if (this.GetComponent<MobsCollision>().numberButton == 1)
                    {
                        _audioManager.Invoke(AudioEvent.AllWalk);
                    }
                }
                else
                {
                    _audioManager.Invoke(AudioEvent.Walk);
                }
            }
            else
            {
                _audioManager.AudioSource.Stop();
                _animatorHuman.Play("Human_Idle");
            }
        }

        //_animatorHuman.speed = 2f;
    }

    private void AnimatingRunAndShootWithBulletHuman()
    {
        //_animatorHuman.Play("Human_RunAndShootWithBullet");
    }

    private void AnimatingRunAndShootHuman()
    {
        _animatorHuman.Play("Human_RunAndShoot");
    }

    private void OnDestroy()
    {
        isStopAnimation = true;
    }
}
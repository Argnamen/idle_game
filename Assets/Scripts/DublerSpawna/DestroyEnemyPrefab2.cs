using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using DG.Tweening;
using UnityEngine.UIElements;

public class DestroyEnemyPrefab2 : MonoBehaviour
{
    [SerializeField] private Sprite brain;
    public UIDocument uIDocument;

    [SerializeField] private float _borderPosX;
    public ClickOnEnemy2 _enemy;

    public int levelNumber = 0;

    private BoxCollider2D _capsuleCollider2D;
    private SpriteRenderer _spriteRenderer;
    private SpawnEnemy2 _spawnEnemy;
    private MobsCollision _healthEnemy;
    private EnemyKillCounter _enemyKillCounter;
    private SpawnGoldPrefab _spawnGoldPrefab;
    private NextLevelFlag _nextLevelFlag;

    private void Start()
    {
        _spawnGoldPrefab = FindObjectOfType<SpawnGoldPrefab>();
        //_enemyKillCounter = FindObjectOfType<EnemyKillCounter>();
        _nextLevelFlag = FindObjectOfType<NextLevelFlag>();
        _spawnEnemy = FindObjectOfType<SpawnEnemy2>();
        _healthEnemy = FindObjectOfType<MobsCollision>();
        _capsuleCollider2D = GetComponent<BoxCollider2D>();
        _spriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void Update()
    {
        if (gameObject.transform.position.x < _borderPosX || _healthEnemy.HP <= 0)
        {
            if (_spriteRenderer != null)
            {
                _spriteRenderer.sortingOrder = 1;
            }

            _capsuleCollider2D.enabled = false;

            //Destroy(gameObject);
        }
    }

    private void OnDestroy()
    {
        //SpawnEnemy2.RemoveEnemyOnScene(_enemy);
    }

    GameObject brainObject;
    private void PointAnimation()
    {
        brainObject = Instantiate(new GameObject());

        brainObject.AddComponent<SpriteRenderer>().sprite = brain;

        brainObject.transform.localScale /= 3;

        brainObject.transform.position = this.transform.position;

        DOTween.Sequence()
            //.Append(brainObject.transform.DOMove(new Vector3(7.56f, 2.29f, 0), 0.2f).SetEase(Ease.Linear))
            //.AppendInterval(0.01f)
            .AppendCallback(() => Destroy(brainObject))
            //.AppendInterval(0.03f)
            .AppendCallback(() => Destroy(this.gameObject));
    }

    public void postDestroy()
    {
        StartCoroutine(GoldSpawner());
        //PointAnimation();

        /*
        if (levelNumber == UiTextLevel._staticLevelNumber)
        {
            _enemyKillCounter.EnemyKilled++;
        }

        if (_enemyKillCounter.EnemyKilled == _nextLevelFlag.EndLevel)
        {
            _nextLevelFlag.IsLevelEnd = true;
            //_enemyKillCounter.EnemyKillText.enabled = false;
        }
        */
    }
    public void DestroingObjectAfterAnimationDead()
    {
        Destroy(gameObject);
    }

    private IEnumerator GoldSpawner()
    {
        //_spawnGoldPrefab.SpawningGold();

        yield return new WaitForSeconds(0.01f);

        //_spawnGoldPrefab.SpawningGold();
    }
}

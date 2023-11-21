using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using HudElement;
using DG.Tweening;
using System.IO;
using Slider = UnityEngine.UI.Slider;

public class MobsCollision : MonoBehaviour
{
    [SerializeField] private StageConfig _stageConfig;
    [SerializeField] private ConstantConfig _constantConfig;

    public float DP, HP;
    public int numberButton;

    public float oldHP;

    public UIDocument hud;
    private HealthBar _healthbar;
    //private HPBarCircleAnimations barCircleAnimations;

    private Label _DPLabel;

    private bool _healsBarVisible = true;
    //private Label _DPLabel;

    public float maxHealth;

    public bool isNoDamage = false;

    [Range(0, 1)]
    public float healthPearcent = 1;

    public bool isBoss = false;

    public static bool isTeacher = true;

    private DraggablePlayers draggablePlayers;

    [SerializeField] private Slider _sliderHpBar;
    private GameObject HandObject;

    private string _sortingName;
    private int _sortingOrder;

    public Player thisPlayer;

    private bool isLife = true;
    public int ZoneNumber;

    public ClickOnEnemy2 ThisEnemy;

    private async void OnEnable()
    {
        _sortingName = this.GetComponent<SpriteRenderer>().sortingLayerName;
        _sortingOrder = this.GetComponent<SpriteRenderer>().sortingOrder;

        if (this.tag != "Player")
        {
            isNoDamage = true;
            hud = Instantiate(hud, this.transform);
            //hud = this.transform.parent.GetChild(1).gameObject.GetComponent<UIDocument>();

            int levelNumberForConfig = UiTextLevel._staticLevelNumber - 1;

            if (isBoss)
            {
                float.TryParse(_stageConfig.Stage.Target_HP[levelNumberForConfig / _constantConfig.Constants.Stages_Base_NumberOfWaves], out HP);

                //HP = (Player.allCharactersDP) * 20 * StartNextLevel.bossMod;
            }
            else
            {
                if (levelNumberForConfig != 0)
                {
                    levelNumberForConfig *= 2;
                }

                float.TryParse(_stageConfig.Stage.Target_HP[levelNumberForConfig], out HP);

                HP /= _constantConfig.Constants.Stages_NumberOfEnemies;
            }

            Debug.Log(levelNumberForConfig + " levelNumberForConfig " + _stageConfig.Stage.Target_HP[levelNumberForConfig] + " "+ _constantConfig.Constants.Stages_NumberOfEnemies);

            StartCoroutine(NoDamageMod());

            if (!isBoss)
            {
                StartCoroutine(LifeTimer());
            }

            maxHealth = HP;
            _sliderHpBar.maxValue = maxHealth;

            StartCoroutine(AttactZoneUpdate());
        }
        
        var root = hud.rootVisualElement;

        await System.Threading.Tasks.Task.Delay(10);

        //_DPLabel = root.Q<Label>("DP");
        if (this.tag == "Player")
        {
            draggablePlayers = this.GetComponent<DraggablePlayers>();
            ListCharacters.staticSnapController.AddPlayersInMobsCollision(draggablePlayers, numberButton);

            if(this.TryGetComponent<BuffController>(out var buffController))
            {
                buffController.Initialization(draggablePlayers, ListCharacters.staticSnapController);
            }
            //await System.Threading.Tasks.Task.Delay(1000);

            this.transform.GetChild(2).gameObject.SetActive(false);

            this.GetComponent<SpriteRenderer>().sortingOrder = (int)(100 - (this.transform.position.x + this.transform.position.y));

            this.GetComponent<DraggablePlayers>().NewPosition();

            //barCircleAnimations = this.transform.GetChild(1).GetComponent<HPBarCircleAnimations>();

            //_healthbar = root.Q<VisualElement>("InfCharacters").Q<VisualElement>("Character_" + (numberButton + 1)).Q<HealthBar>("HPBar");

            //_healthbar.value = (HP / maxHealth);

            //barCircleAnimations.HPBarAnimation(maxHealth, HP);

            this.GetComponent<AnimatorHumans>().AnimatingIdleHuman();
        }
        else if (this.TryGetComponent<AnimatorZombie>(out var animatorZombie))
        {
            _healthbar = root.Q<HealthBar>();

            _healthbar.value = (HP / maxHealth);
            _sliderHpBar.value = HP;
            
            //await System.Threading.Tasks.Task.Delay(500);
        }
    }

    private IEnumerator AttactZoneUpdate()
    {
        while (isLife)
        {
            if(this.transform.position.x >= 6)
            {
                ZoneNumber = 3;
            }
            else if (this.transform.position.x <= 0)
            {
                ZoneNumber = 1;
            }
            else
            {
                ZoneNumber = 2;
            }

            yield return new WaitForSeconds(0.1f);
        }
    }
    private IEnumerator LifeTimer()
    {
        for (int i = 0; i < 4; i++)
        {
            yield return new WaitForSeconds(1.0f);

            if (this.gameObject && Player.allCharactersDP != TuchDamageCharacter.DPS)
            {
                HP /= 3;
            }

            if(HP < 1)
            {
                //HP = 0;
                break;
            }
        }
    }
    private void OnMouseDown()
    {
        isTeacher = false;
    }

    private IEnumerator NoDamageMod()
    {
        yield return new WaitForSeconds(1.2f);

        isNoDamage = false;
    }

    private void OnDestroy()
    {
        isLife = false;
        if (this.tag == "Player")
        {
            //ListCharacters.CharactersObject.Remove(this.gameObject);

            //ListCharacters._characters[numberButton].SetEnabled(false);

            if (numberButton == 0)
            {
                TuchDamageCharacter.DPS = 0;
            }

            int thisPlayerNumber = -1;

            for(int i = 0; i < Player.PlayerCharacters.Count; i++)
            {
                if(Player.PlayerCharacters[i]._buttonNumber == thisPlayer._buttonNumber)
                {
                    thisPlayerNumber = i;
                }
            }

            if(thisPlayerNumber == -1)
            {
                thisPlayer.isLife = true;
                thisPlayer.MinusAllDP();

                return;
            }

            Player.PlayerCharacters[numberButton].isDeath = true;
            Player.PlayerCharacters[numberButton].MinusAllDP();
            //Player.PlayerCharacters.RemoveAt(numberButton);
        }
        else
        {
            //Wallet._receipts = 20 * (UiTextLevel._staticLevelNumber * UiTextLevel._staticChapter * 10);
            //PlayerPrefs.SetInt("Gems", PlayerPrefs.GetInt("Gems") + 1000000);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Bastion" && this.tag != "Player" && this.GetComponent<BoxCollider2D>().enabled)
        {
            this.GetComponent<BoxCollider2D>().enabled = false;

            this.GetComponent<MovePrefabs2>().trigerPlayer = collision.gameObject;

            if (this.GetComponent<MovePrefabs2>().trigerPlayer)
                StartCoroutine(Damage(this.GetComponent<MovePrefabs2>().trigerPlayer));
        }

        if(this.tag != "Player" && collision.tag == "Destroy")
        {
            Destroy(this.gameObject);
        }
    }

    private IEnumerator HealsBarVisible()
    {
        yield return new WaitForSeconds(0.2f);

        if (_healsBarVisible)
        {
            _healthbar.style.visibility = Visibility.Visible;

            _healsBarVisible = false;
        }
        else
        {
            _healthbar.style.visibility = Visibility.Hidden;
        }
    }

    public void SetHP(float dp)
    {
        if (this.tag == "Player" && this.gameObject)
        {
            if (dp <= 0)
            {
                return;
            }

            /*
            _DPLabel.style.translate =
                new Translate(
                    (Screen.width / 2) / 10 * this.transform.position.x + (healthPearcent * 50),
                    (-Screen.height / 2) / 5 * (this.transform.position.y + 1),
                    0);
            
            _DPLabel.text = ((float)((int)(dp * 100)) / 100).ToString();
            
            */

            //StartCoroutine(DamageAnimation());

            //healthPearcent = HP / maxHealth;

            //_healthbar.value = healthPearcent;

            //barCircleAnimations.HPBarAnimation(maxHealth, HP);


        }
        else
        {
            //_healsBarVisible = true;

            //StartCoroutine(HealsBarVisible());

            // healthPearcent = HP / maxHealth;
            //
            // _healthbar.value = healthPearcent;
            // _sliderHpBar.value = healthPearcent;
            _sliderHpBar.value = HP;
        }
    }

    private IEnumerator DamageAnimation()
    {
        /*
        _DPLabel.style.visibility = Visibility.Visible;

        for (int i = 1; i < 300; i++)
        {
            _DPLabel.style.translate =
                new Translate(
                (Screen.width / 2) / 9 * this.transform.position.x + (healthPearcent * 50),
                (-Screen.height / 2) / 5 * (this.transform.position.y + 1) - 15 - (0.1f * i),
                0);

            yield return new WaitForSeconds(0.0000001f);
        }

        //yield return new WaitForSeconds(1f);
        _DPLabel.style.visibility = Visibility.Hidden;
        */

        yield return null;
    }
    private IEnumerator Damage(GameObject trigerObject)
    {
        while (true)
        {
            if (!trigerObject)
            {
                Debug.Log("11111111111111111111111111111111111111111");
                break;
            }

            if (HP <= 0)
            {
                Debug.Log("333333333333333333333333333333333333333333333333");
                break;
            }

            trigerObject.transform.parent.GetComponent<Bastion>()._damage.Damage(DP);

            /*
            if (trigerObject.GetComponent<MobsCollision>().HP <= 0)
            {
                if (this.TryGetComponent<MovePrefabs2>(out var movePrefabs2))
                {
                    this.GetComponent<AudioManager>().Invoke(AudioEvent.ZombieWalk);
                    movePrefabs2.MovedPrefabs();
                }

                ListCharacters.CharactersObject.Remove(trigerObject);
                ListCharacters.staticSnapController.RemovePlayersInMobsCollision(trigerObject.GetComponent<DraggablePlayers>());

                trigerObject.GetComponent<AnimatorHumans>().isDead = true;

                //if (trigerObject)
                    //Destroy(trigerObject);

                break;
            }

            if (trigerObject)
            {
                if (trigerObject.TryGetComponent<MobsCollision>(out var mobsCollision))
                {
                    if (Player.isNoDamage == false)
                    {
                        mobsCollision.oldHP = mobsCollision.HP;
                        mobsCollision.HP -= DP;
                        trigerObject.transform.GetChild(2).gameObject.SetActive(true);
                        trigerObject.transform.GetChild(2).GetComponent<HpBarFilledOnCircle>()._nowHp -= DP;

                        if (this.tag == "Player")
                        {
                            //barCircleAnimations.HPBarAnimation(maxHealth, HP);
                        }
                        else
                        {
                            this.GetComponent<AudioManager>().Invoke(AudioEvent.ZombieAttack);
                            mobsCollision.SetHP(DP);
                        }
                    }

                    
                }
            }
            else
            {
                if (this.TryGetComponent<MovePrefabs2>(out var movePrefabs2))
                {
                    movePrefabs2.MovedPrefabs();
                }

                break;
            }
            */

            if (this.TryGetComponent<AnimatorZombie>(out var animatorZombie1))
            {
                animatorZombie1.isDamage = true;
                this.GetComponent<AudioManager>().Invoke(AudioEvent.ZombieAttack);
                animatorZombie1.AnimationgAttack();
            }

            yield return new WaitForSeconds(1f);
        }

        if (this.TryGetComponent<AnimatorZombie>(out var animatorZombie))
        {
            animatorZombie.isDamage = false;
        }

        this.GetComponent<BoxCollider2D>().enabled = true;
        this.GetComponent<MovePrefabs2>()._IsWalk = true;

        this.GetComponent<SpriteRenderer>().sortingLayerName = _sortingName;
        this.GetComponent<SpriteRenderer>().sortingOrder = _sortingOrder;
    }

    public void DestroyObject(DraggablePlayers draggablePlayers)
    {
        StartCoroutine(DestroyObjectCoro(draggablePlayers));
    }

    private IEnumerator DestroyObjectCoro(DraggablePlayers draggablePlayers)
    {
        MobsCollision mobsCollision = this.GetComponent<MobsCollision>();

        ListCharacters.CharactersObject.Remove(mobsCollision.gameObject);
        ListCharacters.staticSnapController.RemovePlayersInMobsCollision(draggablePlayers);

        Player.PlayerCharacters.Remove(thisPlayer);

        yield return new WaitForSeconds(1f);

        if (mobsCollision)
            Destroy(mobsCollision.gameObject);
    }


    private void FixedUpdate()
    {
        if (this.tag != "Player")
        {
            if (HandObject != null && isTeacher == false)
            {
                Destroy(HandObject);
            }

            if (_healthbar != null)
            {
                float asspect = (float)Screen.width / Screen.height;

                _healthbar.transform.position = new Vector3((this.transform.position.x + 2.33f) * asspect * 11.05f, -(this.transform.position.y + 2.5f) * asspect * 11.05f , 0);


                //Debug.Log((float)Screen.width / Screen.height + " + " + Screen.width);
            }
        }
    }

    /*
    private void OnMouseDown()
    {
        if (this.gameObject.tag == "Player" && !RepeatBackground.isMove)
        {
            GameObject player = new GameObject();
            Player playerCharacter = new TuchDamageCharacter();
            for (int i = 0; i < ListCharacters.CharactersObject.Count; i++)
            {
                if (ListCharacters.CharactersObject[i] = this.gameObject)
                {
                    player = ListCharacters.CharactersObject[i];
                    playerCharacter = Player.PlayerCharacters[i];
                    break;
                }
            }

            if (ListCharacters.SwipeCharactersObject.Count >= 1)
            {
                //Debug.Log(player.name + " swipe");
                ListCharacters.SwipeCharactersObject.Add(player);
                ListCharacters.SwipePlayerCharacters.Add(playerCharacter);

                Vector3 newPosition = ListCharacters.SwipeCharactersObject[0].transform.position;

                ListCharacters.SwipeCharactersObject[0].transform.position = player.transform.position;

                ListCharacters.SwipeCharactersObject[1].transform.position = newPosition;

                GameObject player2 = ListCharacters.CharactersObject.Find(GameObject => ListCharacters.SwipeCharactersObject[0]);
                Player newPlayerCharacter = Player.PlayerCharacters.Find(Player => ListCharacters.SwipePlayerCharacters[0]);

                //if (ListCharacters.CharactersObject.Count > 1)
                //Debug.Log(ListCharacters.CharactersObject[0].name + " " + ListCharacters.CharactersObject[1].name);

                for (int k = 0; k < ListCharacters.CharactersObject.Count; k++)
                {
                    if (ListCharacters.CharactersObject[k] == player)
                    {
                        ListCharacters.CharactersObject[k] = player2;
                        Player.PlayerCharacters[k] = newPlayerCharacter;
                    }
                    else if (ListCharacters.CharactersObject[k] == player2)
                    {
                        ListCharacters.CharactersObject[k] = player;
                        Player.PlayerCharacters[k] = playerCharacter;
                    }
                }

                //if (ListCharacters.CharactersObject.Count > 1)
                //Debug.Log(ListCharacters.CharactersObject[0].name + " " + ListCharacters.CharactersObject[1].name);

                ListCharacters.SwipeCharactersObject = new List<GameObject>();
                ListCharacters.SwipePlayerCharacters = new List<Player>();

            }
            else
            {
                ListCharacters.SwipeCharactersObject.Add(player);
                ListCharacters.SwipePlayerCharacters.Add(playerCharacter);
                //Debug.Log(player.name);
            }
        }
    }
    */
    /*
    private void OnValidate()
    {
        if (_healthbar != null)
        {
            SetHP(DP);

            _healthbar.value = healthPearcent;
            HP = (int)(healthPearcent * maxHealth);

            Debug.Log(_healthbar.value);
        }
    }
    */

}

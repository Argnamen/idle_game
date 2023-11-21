using System;
using UnityEngine;
using System.Collections;

public class DraggablePlayers : MonoBehaviour
{
    [SerializeField] private HpBar _hpBarSlider;

    private ParticlesBuff _particlesBuff;

    public bool IsBuff;
    public int healthPlayer;

    public delegate void DragEndedDelegate(DraggablePlayers draggablePlayers, Vector3 position);

    public event DragEndedDelegate _dragEndedCallback;
    public event Action MouseDrag;
    public event Action MouseUp;
    public event Action MouseDown;

    public int ButtonNumber;

    public HpBar _HpBarSlider
    {
        get => _hpBarSlider;
        set => _hpBarSlider = value;
    }

    private EnableDisablePointsSnap _enableDisablePointsSnap;
    private bool _isDragged;
    private Vector3 _mouseDragStartPos;
    private Vector3 _spriteDragStartPos;

    public Transform SnapPoint { get; set; }

    private void Update()
    {
        //_hpBarSlider.SetValue();
    }

    private void Awake()
    {
        _particlesBuff = FindObjectOfType<ParticlesBuff>();
    }

    private void OnEnable()
    {
        //StartCoroutine(Spawn());
    }

    public void NewPosition()
    {
        _dragEndedCallback?.Invoke(this, this.transform.position);
    }

    private IEnumerator DelayBeforeShutdownPointSnap()
    {
        MouseUp?.Invoke();
        _dragEndedCallback?.Invoke(this, _ghostObject.transform.position);
        yield return new WaitForSeconds(0.5f);

        _enableDisablePointsSnap.PointsSnapObject.SetActive(false);
        _particlesBuff.DisabledParticles();
        
        IsBuff = false;
    }

    private IEnumerator DelayBeforeShutdown()
    {
        MouseUp?.Invoke();

        _dragEndedCallback?.Invoke(this, _ghostObject.transform.position);

        yield return new WaitForSeconds(0.5f);

        _enableDisablePointsSnap.PointsSnapObject.SetActive(false);
    }

    private GameObject _ghostObject;
    private void SpawnGhost()
    {
        GameObject ghost = Instantiate(Player.PlayerCharacters[ButtonNumber].MobPrefab, this.transform.parent);

        ghost.tag = "Ghost";

        ghost.GetComponent<DraggablePlayers>().enabled = false;

        ghost.GetComponent<MobsCollision>().enabled = false;

        ghost.GetComponent<BoxCollider2D>().enabled = false;

        ghost.GetComponent<AnimatorHumans>().isGhost = true;

        if(ghost.TryGetComponent<BuffController>(out var buffController))
            buffController.isGhost = true;

        ghost.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 150);

        ghost.SetActive(false);

        _ghostObject = ghost;
    }

    private IEnumerator Spawn()
    {
        yield return new WaitForSeconds(0.01f);

        _enableDisablePointsSnap = FindObjectOfType<EnableDisablePointsSnap>();
        //_hpBarSlider.HealthBarObject.SetActive(false);

        SpawnGhost();

        yield return new WaitForSeconds(0.01f);

        _ghostObject.transform.position = this.transform.position;

        _dragEndedCallback?.Invoke(this, _ghostObject.transform.position);
    }

    
    /*
    private void OnMouseDown()
    {
        _isDragged = true;

        _ghostObject.transform.position = this.transform.position;

        _mouseDragStartPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        _spriteDragStartPos = _ghostObject.transform.localPosition;
        MouseDown?.Invoke();

        _ghostObject.SetActive(true);
    }

    private void OnMouseDrag()
    {
        if (_isDragged)
        {
            _enableDisablePointsSnap.PointsSnapObject.SetActive(true);
            MouseDrag?.Invoke();

            _ghostObject.transform.localPosition = _spriteDragStartPos +
                                      (Camera.main.ScreenToWorldPoint(Input.mousePosition) - _mouseDragStartPos);
        }
    }

    private void OnMouseUp()
    {
        _ghostObject.SetActive(false);

        _isDragged = false;

        if (TryGetComponent(out BuffController buffController))
        {
            if (buffController.IsGreen || buffController.IsRed)
            {
                IsBuff = true;
            }
        }


        if (IsBuff == false)
        {
            StartCoroutine(DelayBeforeShutdown());
        }

        if (IsBuff)
        {
            StartCoroutine(DelayBeforeShutdownPointSnap());
        }
    }
    */
}
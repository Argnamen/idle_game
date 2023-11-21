using UnityEngine;

public class BuffController : MonoBehaviour
{
    [SerializeField] private GameObject _arrows;
    [SerializeField] private Vector2[] _offsets;
    [SerializeField] private ColorCircle _colorCircle;
    [SerializeField]private bool _isGreen;
    [SerializeField]private bool _isRed;
    
    private SnapController _staticSnapController;
    private DraggablePlayers _draggablePlayers;

    public bool IsGreen => _isGreen;
    public bool IsRed => _isRed;

    public bool isGhost = false;

    private void OnEnable()
    {
        _arrows.SetActive(false);

        _staticSnapController = ListCharacters.staticSnapController;
    }

    private void Update()
    {
        if (isGhost)
        {
            if (GetComponent<BuffController>()._colorCircle == ColorCircle.Red)
            {
                _staticSnapController.DisabledHighlightRedCircle();

                foreach (var offset in _offsets)
                {
                    _staticSnapController.HighlightRedCircle(transform.position + (Vector3)offset);
                }


                _arrows.SetActive(true);
            }

            if (GetComponent<BuffController>()._colorCircle == ColorCircle.Green)
            {
                Debug.Log(_staticSnapController);

                _staticSnapController.DisabledHighlight();

                for (int i = 0; i < _offsets.Length; i++)
                {
                    _staticSnapController.Highlight(transform.position + (Vector3)_offsets[i], transform.position, _offsets.Length);
                }

                _arrows.SetActive(true);
            }
        }
    }

    public void Initialization(DraggablePlayers draggablePlayers, SnapController staticSnapController)
    {
        _draggablePlayers = draggablePlayers;

        _draggablePlayers.MouseDrag += () =>

        {
            if (GetComponent<BuffController>()._colorCircle == ColorCircle.Red)
            {
                _staticSnapController.DisabledHighlightRedCircle();
               
                foreach (var offset in _offsets)
                {
                    _staticSnapController.HighlightRedCircle(transform.position + (Vector3)offset);
                }

                
                _arrows.SetActive(true);
            }

            if (GetComponent<BuffController>()._colorCircle == ColorCircle.Green)
            {
                _staticSnapController.DisabledHighlight();

                foreach (var offset in _offsets)
                {
                    _staticSnapController.Highlight(transform.position + (Vector3)offset, transform.position, _offsets.Length);
                }

                _arrows.SetActive(true);
            }
        };

        _draggablePlayers.MouseDown += () =>
        {
            _staticSnapController.DisabledHighlight();
            _staticSnapController.DisabledHighlightRedCircle();
        };

        _draggablePlayers.MouseUp += () =>
        {
            if (GetComponent<BuffController>()._colorCircle == ColorCircle.Red)
            {
                if (_draggablePlayers.IsBuff)
                {
                    foreach (var offset in GetComponent<ActivatedParticlesOnRedChar>()._offsets)
                    {
                        //_staticSnapController.BuffEffectParticles(transform.position + (Vector3)offset);
                    }
                    
                }
            }

            if (GetComponent<BuffController>()._colorCircle == ColorCircle.Green)
            {
                if (_draggablePlayers.IsBuff)
                {
                    foreach (var offset in _offsets)
                    {
                        //_staticSnapController.BuffEffectParticles(transform.position + (Vector3)offset);
                    }

                    _arrows.SetActive(true);
                }
            }
            

            _arrows.SetActive(false);
            _staticSnapController.DisabledHighlight();
            _staticSnapController.DisabledHighlightRedCircle();
        };
    }

    private enum ColorCircle
    {
        Green,
        Red
    }
    
}
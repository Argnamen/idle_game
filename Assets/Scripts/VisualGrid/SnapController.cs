using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using System.Collections;

public class SnapController : MonoBehaviour
{
    public enum TypeBaff
    {
        Vertical,
        Horizontal,
        Back,
        Front,
        Sniper
    }

    public TypeBaff typeBaff = TypeBaff.Vertical;


    public List<Transform> _snapPoints;

    [SerializeField] private List<DraggablePlayers> _draggablePlayers;
    private List<int> _playerNumber = new List<int>();

    [SerializeField] private float _snapRange = 0.5f;

    private Dictionary<Transform, DraggablePlayers> _playersOnGrid = new();

    private int[] _playerOnGridDenis;

    private bool isCor = true;

    private void Awake()
    {
        _playerOnGridDenis = new int[_snapPoints.Count];
    }
    private IEnumerator DestroyZoneActove()
    {
        isCor = true;

        if (!isSpawn())
        {
            _snapPoints[_snapPoints.Count - 1].gameObject.SetActive(true);
        }
        else
        {
            _snapPoints[_snapPoints.Count - 1].gameObject.SetActive(false);
        }

        yield return new WaitForFixedUpdate();

        isCor = false;
    }

    private void Update()
    {
        if (isCor == false)
            StartCoroutine(DestroyZoneActove());
    }

    public bool isSpawn()
    {
        for (int i = 0; i < _snapPoints.Count; i++)
        {
            if (_playerOnGridDenis[i] == 0)
            {
                if (i != _snapPoints.Count - 1)
                    return true;
                else
                    return false;
            }
        }

        return false;
    }

    private void OnDisable()
    {
        foreach (DraggablePlayers draggablePlayers in _draggablePlayers)
        {
            draggablePlayers._dragEndedCallback -= OnDragEndedDenis;
            //draggablePlayers.MouseDrag -= EnabledHealthBars;
            //draggablePlayers.MouseUp -= DisabledHealthBars;
        }
    }

    public void AddPlayersInMobsCollision(DraggablePlayers draggablePlayers, int playerNumber)
    {
        _draggablePlayers.Add(draggablePlayers);
        _playerNumber.Add(playerNumber);

        draggablePlayers._dragEndedCallback += OnDragEndedDenis;
        //draggablePlayers.MouseDrag += EnabledHealthBars;
        //draggablePlayers.MouseUp += DisabledHealthBars;

        StartCoroutine(DestroyZoneActove());
    }

    public void RemovePlayersInMobsCollision(DraggablePlayers draggablePlayers)
    {
        int number = 0;

        for (int i = 0; i < _draggablePlayers.Count; i++)
        {
            if (draggablePlayers.ButtonNumber == _draggablePlayers[i].ButtonNumber)
            {
                number = i;
                break;
            }
        }

        _draggablePlayers[number]._dragEndedCallback -= OnDragEndedDenis;
        //_draggablePlayers[number].MouseDrag -= EnabledHealthBars;
        //_draggablePlayers[number].MouseUp -= DisabledHealthBars;

        if (_draggablePlayers[number].SnapPoint)
            _playersOnGrid.Remove(_draggablePlayers[number].SnapPoint);

        _draggablePlayers.RemoveAt(number);
    }

    private void OnDragEndedDenis(DraggablePlayers draggablePlayers, Vector3 positionGhost)
    {
        for(int i = 0; i < _snapPoints.Count; i++)
        {
            if (draggablePlayers.ButtonNumber == 0)
            {
                _playerOnGridDenis[7] = 1;

                draggablePlayers.transform.position = _snapPoints[7].position;
                break;
            }
            else
            {
                if(_playerOnGridDenis[i] == 0)
                {
                    draggablePlayers.transform.position = _snapPoints[i].position;
                    _playerOnGridDenis[i] = 1;

                    draggablePlayers.gameObject.GetComponent<SpriteRenderer>().sortingOrder = (int)(uint)(_snapPoints[i].transform.position.y * _snapPoints[i].transform.position.x);

                    break;
                }
            }
        }
    }
    private void OnDragEnded(DraggablePlayers draggablePlayers, Vector3 positionGhost)
    {
        float _closestDistance = -1;

        Transform _closestSnapPoint = null;

        Debug.Log("DragPlayer " + draggablePlayers.ButtonNumber);

        foreach (Transform snapPoint in _snapPoints)
        {

            if (snapPoint.gameObject.activeSelf == false)
            {
                continue;
            }

            float _currentDistance = Vector2.Distance(positionGhost,
            snapPoint.localPosition);

            if (_closestSnapPoint == null || _currentDistance < _closestDistance)
            {
                if (_playersOnGrid.ContainsKey(snapPoint) == true && draggablePlayers.SnapPoint == null)
                {
                    continue;
                }

                if (draggablePlayers.ButtonNumber == 0)
                {
                    _closestSnapPoint = _snapPoints[11];

                    _currentDistance = Vector2.Distance(positionGhost, _closestSnapPoint.localPosition);
                }
                else
                {
                    _closestSnapPoint = snapPoint;
                }
                _closestDistance = _currentDistance;

                for (int i = 0; i < _snapPoints.Count; i++)
                {
                    if (_snapPoints[i].position == positionGhost)
                    {
                        if (ListCharacters.CharacterNumberPointPosition.Count <= draggablePlayers.ButtonNumber)
                        {
                            for (int k = 0; k <= draggablePlayers.ButtonNumber; k++)
                                ListCharacters.CharacterNumberPointPosition.Add(0);
                        }

                        ListCharacters.CharacterNumberPointPosition[draggablePlayers.ButtonNumber] =
                            i;
                    }
                }
            }
        }

        if (_closestSnapPoint != null && (_closestDistance <= _snapRange || draggablePlayers.SnapPoint == null))
        {
            if (_playersOnGrid.ContainsKey(_closestSnapPoint) == true)
            {
                _playersOnGrid[_closestSnapPoint].transform.localPosition =
                    draggablePlayers.SnapPoint.transform.localPosition;

                DraggablePlayers closestDraggable = _playersOnGrid[_closestSnapPoint];
                Transform closestSnapPoint = closestDraggable.SnapPoint;
                closestDraggable.SnapPoint = draggablePlayers.SnapPoint;

                closestDraggable.gameObject.GetComponent<SpriteRenderer>().sortingOrder
                    = (int)(-draggablePlayers.SnapPoint.localPosition.x *
                            -draggablePlayers.SnapPoint.localPosition.y * 100);

                _playersOnGrid[draggablePlayers.SnapPoint] = closestDraggable;
                _playersOnGrid[_closestSnapPoint] = draggablePlayers;
                draggablePlayers.transform.localPosition = _closestSnapPoint.localPosition;
                draggablePlayers.SnapPoint = closestSnapPoint;

                draggablePlayers.gameObject.GetComponent<SpriteRenderer>().sortingOrder
                    = (int)(-_closestSnapPoint.localPosition.x * -_closestSnapPoint.localPosition.y * 100);
                return;
            }

            draggablePlayers.transform.localPosition = _closestSnapPoint.localPosition;

            draggablePlayers.gameObject.GetComponent<SpriteRenderer>().sortingOrder
                = (int)(-_closestSnapPoint.localPosition.x * -_closestSnapPoint.localPosition.y * 100);

            if (_closestSnapPoint.gameObject.name == "DeleteZone" && _closestSnapPoint.gameObject.activeSelf)
            {
                draggablePlayers.gameObject.GetComponent<MobsCollision>().DestroyObject(draggablePlayers);
                return;
            }

            _playersOnGrid.Add(_closestSnapPoint, draggablePlayers);

            if (draggablePlayers.SnapPoint != null)
            {
                _playersOnGrid.Remove(draggablePlayers.SnapPoint);
            }

            draggablePlayers.SnapPoint = _closestSnapPoint;

            for (int i = 0; i < _snapPoints.Count; i++)
            {
                if (_snapPoints[i].position == _closestSnapPoint.position)
                {
                    if (ListCharacters.CharacterNumberPointPosition.Count <= draggablePlayers.ButtonNumber)
                    {
                        for (int k = 0; k <= draggablePlayers.ButtonNumber; k++)
                            ListCharacters.CharacterNumberPointPosition.Add(0);
                    }

                    ListCharacters.CharacterNumberPointPosition[draggablePlayers.ButtonNumber] =
                        i;
                }
            }

            Player.PlayerCharacters[draggablePlayers.ButtonNumber].modelPosition = draggablePlayers.SnapPoint.position;

            BaffPlayer(draggablePlayers);
        }

        if (draggablePlayers.ButtonNumber == 0)
        {
            //_snapPoints.RemoveAt(45);
        }
    }

    private void BaffPlayer(DraggablePlayers draggablePlayers)
    {
        Vector3 characterPosOne, characterPosTwo;

        //for (int i = 0; i < 2; i++)
        {
            //if (Player.PlayerCharacters[draggablePlayers.ButtonNumber].isBaff == false)
            {
                foreach (Player player in Player.PlayerCharacters)
                {
                    characterPosOne = Player.PlayerCharacters[draggablePlayers.ButtonNumber].modelPosition;
                    characterPosTwo = player.modelPosition;

                    bool isCorrect = false;

                    Player.TypeBaff type = Player.TypeBaff.non;

                    switch (player.typeBaff)
                    {
                        case Player.TypeBaff.Vertical:
                            isCorrect = characterPosOne.x == characterPosTwo.x;

                            type = Player.TypeBaff.Vertical;
                            break;

                        case Player.TypeBaff.Horizontal:
                            isCorrect = characterPosOne.y == characterPosTwo.y;

                            type = Player.TypeBaff.Horizontal;
                            break;

                        case Player.TypeBaff.Back:
                            isCorrect = characterPosOne.y == characterPosTwo.y &&
                                        (characterPosOne.x - characterPosTwo.x) < 0;

                            type = Player.TypeBaff.Back;
                            break;

                        case Player.TypeBaff.Front:
                            isCorrect = characterPosOne.y == characterPosTwo.y &&
                                        (characterPosOne.x - characterPosTwo.x) > 0;

                            type = Player.TypeBaff.Front;
                            break;

                        case Player.TypeBaff.Sniper:
                            isCorrect = !(characterPosOne.y == characterPosTwo.y &&
                                          (characterPosOne.x - characterPosTwo.x) < 0);

                            type = Player.TypeBaff.Sniper;
                            break;
                    }

                    if (isCorrect && player.isBaff)
                    {
                        if (characterPosOne != characterPosTwo)
                            for (int baff = 0;
                                 baff < Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Count;
                                 baff++)
                            {
                                if (Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[baff] ==
                                    Player.TypeBaff.non ||
                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[baff] == type)
                                {
                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].isActiveBaff = true;

                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[baff] = type;

                                    break;
                                }
                                else if (baff + 1 ==
                                         Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Count)
                                {
                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].isActiveBaff = true;

                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Add(type);

                                    break;
                                }
                            }

                        CheckEnableBaff(Player.PlayerCharacters[draggablePlayers.ButtonNumber]);

                        Player.PlayerCharacters[draggablePlayers.ButtonNumber].UpdateAllDP(false);
                        Player.PlayerCharacters[draggablePlayers.ButtonNumber].UpdateAllDP(true);

                        //return;
                    }
                    else
                    {
                        if (characterPosOne != characterPosTwo)
                            for (int baff = 0;
                                 baff < Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Count;
                                 baff++)
                            {
                                if (Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[baff] == type ||
                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[baff] ==
                                    Player.TypeBaff.non)
                                {
                                    Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[baff] =
                                        Player.TypeBaff.non;

                                    if (Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Count > 1)
                                    {
                                        Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff
                                            .Remove(Player.TypeBaff.non);
                                    }
                                }
                            }

                        for (int g = 0; g < Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Count; g++)
                        {
                            if (Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff[g] != Player.TypeBaff.non)
                            {
                                break;
                            }
                            else if (Player.PlayerCharacters[draggablePlayers.ButtonNumber].meBaff.Count == g + 1)
                            {
                                Player.PlayerCharacters[draggablePlayers.ButtonNumber].isActiveBaff = false;
                            }
                        }

                        CheckEnableBaff(Player.PlayerCharacters[draggablePlayers.ButtonNumber]);

                        Player.PlayerCharacters[draggablePlayers.ButtonNumber].UpdateAllDP(false);
                        Player.PlayerCharacters[draggablePlayers.ButtonNumber].UpdateAllDP(true);
                    }
                }
            }
            //else
            {
                foreach (Player player in Player.PlayerCharacters)
                {
                    characterPosOne = Player.PlayerCharacters[draggablePlayers.ButtonNumber].modelPosition;
                    characterPosTwo = player.modelPosition;

                    bool isCorrect = false;

                    Player.TypeBaff type = Player.TypeBaff.non;

                    switch (Player.PlayerCharacters[draggablePlayers.ButtonNumber].typeBaff)
                    {
                        case Player.TypeBaff.Vertical:
                            isCorrect = characterPosOne.x == characterPosTwo.x;

                            type = Player.TypeBaff.Vertical;
                            break;

                        case Player.TypeBaff.Horizontal:
                            isCorrect = characterPosOne.y == characterPosTwo.y;

                            type = Player.TypeBaff.Horizontal;
                            break;

                        case Player.TypeBaff.Back:
                            isCorrect = characterPosOne.y == characterPosTwo.y &&
                                        (characterPosTwo.x - characterPosOne.x) < 0;

                            type = Player.TypeBaff.Back;
                            break;

                        case Player.TypeBaff.Front:
                            isCorrect = characterPosOne.y == characterPosTwo.y &&
                                        (characterPosTwo.x - characterPosOne.x) > 0;

                            type = Player.TypeBaff.Front;
                            break;

                        case Player.TypeBaff.Sniper:
                            isCorrect = !(characterPosOne.y == characterPosTwo.y &&
                                          (characterPosTwo.x - characterPosOne.x) < 0);

                            type = Player.TypeBaff.Sniper;
                            break;
                    }

                    if (isCorrect)
                    {
                        if (characterPosOne != characterPosTwo)
                            for (int baff = 0; baff < player.meBaff.Count; baff++)
                            {
                                if (player.meBaff[baff] == Player.TypeBaff.non || player.meBaff[baff] == type)
                                {
                                    player.isActiveBaff = true;

                                    player.meBaff[baff] = type;

                                    break;
                                }
                                else if (baff + 1 == player.meBaff.Count)
                                {
                                    player.isActiveBaff = true;

                                    player.meBaff.Add(type);

                                    break;
                                }
                            }

                        CheckEnableBaff(player);

                        player.UpdateAllDP(false);
                        player.UpdateAllDP(true);
                    }
                    else
                    {
                        if (characterPosOne != characterPosTwo)
                        {
                            for (int baff = 0; baff < player.meBaff.Count; baff++)
                            {
                                if (player.meBaff[baff] == type || player.meBaff[baff] == Player.TypeBaff.non)
                                {
                                    player.meBaff[baff] = Player.TypeBaff.non;

                                    if (player.meBaff.Count > 1)
                                    {
                                        player.meBaff.Remove(Player.TypeBaff.non);
                                    }
                                }
                            }

                            for (int g = 0; g < player.meBaff.Count; g++)
                            {
                                if (player.meBaff[g] != Player.TypeBaff.non)
                                {
                                    break;
                                }
                                else if (player.meBaff.Count == g + 1)
                                {
                                    player.isActiveBaff = false;
                                }
                            }
                        }
                    }

                    CheckEnableBaff(player);
                    player.UpdateAllDP(false);
                    player.UpdateAllDP(true);
                }
            }
        }
    }

    private void CheckEnableBaff(Player player)
    {
        foreach (Transform snapPoint in _snapPoints)
        {
            if (snapPoint.position == player.modelPosition)
            {
                if (player.isActiveBaff)
                {
                    if (snapPoint.GetComponent<Backlight>())
                        snapPoint.GetComponent<Backlight>().EnabledParticleEffect();
                }
                else
                {
                    if (snapPoint.GetComponent<Backlight>())
                        snapPoint.GetComponent<Backlight>().DisabledParticleEffect();
                }

                DisableBaffEffect();
            }

            DisableBaffEffect();
        }
    }

    private void DisableBaffEffect()
    {
        for (int i = 0; i < _snapPoints.Count; i++)
        {
            for (int k = 0; k < Player.PlayerCharacters.Count; k++)
            {
                //Debug.Log(snap + " " + snapDrag + " / " + _snapPoints[i].position + " " + _draggablePlayers[k].SnapPoint.position);

                if (_snapPoints[i].position == Player.PlayerCharacters[k].modelPosition)
                {
                    break;
                }

                if (k + 1 == Player.PlayerCharacters.Count)
                {
                    if (_snapPoints[i].TryGetComponent<Backlight>(out var backlight))
                    {
                        backlight.DisabledParticleEffect();
                    }
                }
            }
        }
    }

    private void EnabledHealthBars()
    {
        foreach (DraggablePlayers drag in _draggablePlayers)
        {
            //drag._HpBarSlider.HealthBarObject.SetActive(true);
        }
    }

    private void DisabledHealthBars()
    {
        foreach (DraggablePlayers drag in _draggablePlayers)
        {
            //drag._HpBarSlider.HealthBarObject.SetActive(false);
        }
    }

    public void Highlight(Vector3 position, Vector3 objectPosition, int numberCircle)
    {
        Transform _closesSnapPoint;
        _closesSnapPoint = _snapPoints[0];

        foreach (Transform snapPoint in _snapPoints)
        {
            if (Vector3.Distance(position, _closesSnapPoint.position) > Vector3.Distance(position, snapPoint.position))
            {
                _closesSnapPoint = snapPoint;
            }
        }

        if (IsActiveCircle(position, objectPosition, _closesSnapPoint, numberCircle))
        {
            if (_closesSnapPoint.TryGetComponent<Backlight>(out var backlight))
                backlight.EnabledHighlightCircle();
        }
        else
        {
            if (_closesSnapPoint.TryGetComponent<Backlight>(out var backlight))
                backlight.DisabledHighlightCircle();
        }
    }

    private bool IsActiveCircle(Vector3 position, Vector3 objectPosition, Transform snapPoint, int numberCircles)
    {
        if (Vector3.Distance(snapPoint.position, objectPosition) <= 0.75f)
        {
            return false;
        }

        if (numberCircles > 1)
        {
            for (int i = 0; i < _snapPoints.Count; i++)
            {
                if (_snapPoints[i] == snapPoint)
                {
                    if (i + 3 < _snapPoints.Count)
                    {
                        if (_snapPoints[i + 3].position.y == _snapPoints[i].position.y)
                        {
                            if (_snapPoints[i + 3].TryGetComponent<Backlight>(out var backlight))
                            {
                                if (backlight.IsEnableHighlightCircle())
                                {
                                    return false;
                                }
                            }
                        }
                    }

                    if (i - 3 >= 0)
                    {
                        if (_snapPoints[i - 3].position.y == _snapPoints[i].position.y)
                        {
                            if (_snapPoints[i - 3].TryGetComponent<Backlight>(out var backlight))
                            {
                                if (backlight.IsEnableHighlightCircle())
                                {
                                    return false;
                                }
                            }
                        }
                    }

                    if (i + 1 < _snapPoints.Count)
                    {
                        if (_snapPoints[i + 1].position.x == _snapPoints[i].position.x)
                        {
                            if (_snapPoints[i + 1].TryGetComponent<Backlight>(out var backlight))
                            {
                                if (backlight.IsEnableHighlightCircle())
                                {
                                    return false;
                                }
                            }
                        }
                    }

                    if (i - 1 >= 0)
                    {
                        if (_snapPoints[i - 1].position.x == _snapPoints[i].position.x)
                        {
                            if (_snapPoints[i - 1].TryGetComponent<Backlight>(out var backlight))
                            {
                                if (backlight.IsEnableHighlightCircle())
                                {
                                    return false;
                                }
                            }
                        }
                    }

                    if (i == 0)
                    {
                        return false;
                    }
                }
            }

            return true;
        }
        else
        {
            if (position.x - objectPosition.x != 0)
            {
                //x

                if ((int)(position.x - objectPosition.x) == (int)(snapPoint.position.x - objectPosition.x))
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                //y

                if ((int)(position.y - objectPosition.y) == (int)(snapPoint.position.y - objectPosition.y))
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        }
    }

    public void HighlightRedCircle(Vector3 position)
    {
        Transform _closesSnapPoint;
        _closesSnapPoint = _snapPoints[0];

        foreach (Transform snapPoint in _snapPoints)
        {
            if (Vector3.Distance(position, _closesSnapPoint.position) > Vector3.Distance(position, snapPoint.position))
            {
                _closesSnapPoint = snapPoint;
            }
        }

        if (_closesSnapPoint.TryGetComponent<Backlight>(out var backlight))
            backlight.EnabledHighlightCircleRed();
    }

    public void DisabledBuffEffect()
    {
        foreach (var snapPoint in _snapPoints)
        {
            if (snapPoint.GetComponent<Backlight>())
                snapPoint.GetComponent<Backlight>().DisabledParticleEffect();
        }
    }

    public void DisabledHighlight()
    {
        foreach (var snapPoint in _snapPoints)
        {
            if (snapPoint.TryGetComponent<Backlight>(out var backlight))
                backlight.DisabledHighlightCircle();
        }
    }

    public void DisabledHighlightRedCircle()
    {
        foreach (var snapPoint in _snapPoints)
        {
            if (snapPoint.TryGetComponent<Backlight>(out var backlight))
                backlight.DisabledHighlightCircleRed();
        }
    }
}
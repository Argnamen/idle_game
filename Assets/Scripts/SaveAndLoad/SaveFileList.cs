using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;

[System.Serializable]
public class SaveFileList
{
    public List<int> CharacterNumber;
    public List<int> CharacterLevelNumber;
    public List<int> CharacterNumberPointPosition;
    public List<int> Coins;

    public int LevelNumber;
    public int ChapterNumber;

    public DateTime oldTime;
}

public class Characters
{
    public int _characterNumber, _cellNumber;

    public bool _isActive;

    public List<int> _cell;
    public Characters(int characterNumber ,int cellNumber, bool isActive, List<int> cell)
    {
        _characterNumber = characterNumber;
        _cellNumber = cellNumber;
        _isActive = isActive;
        _cell = cell;
    }
}

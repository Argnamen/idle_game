using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class SaveAndLoadGame : MonoBehaviour
{
    public void SaveGame(SaveFileList saveAndLoad)
    {
        if(LoadScreen.isStartSpawn == false)
        {
            //saveAndLoad = LoadGame();
            //saveAndLoad.oldTime = System.DateTime.Now;

            return;
        }

        BinaryFormatter bf = new BinaryFormatter();

        Debug.Log(Application.persistentDataPath);
        FileStream file = File.OpenWrite(Application.persistentDataPath + "/gamesave.data");
        bf.Serialize(file, saveAndLoad);
        file.Close();

        //Debug.Log("Game Saved");
    }

    public SaveFileList LoadGame()
    {
        SaveFileList saveFileList = null;

        if (File.Exists(Application.persistentDataPath + "/gamesave.data"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/gamesave.data", FileMode.Open);

            //Debug.Log(Application.dataPath + "/gamesave.data");

            saveFileList = (SaveFileList)bf.Deserialize(file);

            file.Close();

            //Debug.Log("Game Loaded");
        }
        else
        {
            saveFileList = null;
            //Debug.Log("No game saved!");
        }

        return saveFileList;
    }
}

public static class Extensions
{
    public static bool find<T>(this List<T> list, T target)
    {
        return list.Contains(target);
    }
}

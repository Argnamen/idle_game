using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Google.Apis.Services;
using Google.Apis.Sheets.v4;
using Google.Apis.Sheets.v4.Data;
using UnityEditor;
using UnityEngine;

namespace Plugins.Ship.Saver
{
    public static class SaveAndLoad
    {
        public static async Task<IList<IList<object>>> DownloadSheet(string link, string name)
        {
            SheetsService service = new SheetsService(new BaseClientService.Initializer()
            {
                ApplicationName = "Loader",
                ApiKey = "AIzaSyCcFVABfQD5e0zTqWfwWqGvaenUlWfvTes"
            });
            Console.WriteLine(link);
            SpreadsheetsResource.ValuesResource.GetRequest request = service.Spreadsheets.Values.Get(link, name);

            Debug.Log(link + " " + name);

            ValueRange response = await request.ExecuteAsync();
            return response.Values;
        }

        public static Task Save(string link, string name, string postfix, string value)
        {
            SaveFile save = Resources.Load<SaveFile>($"DefaultSave");
            if (save.Saves.Any(s => s.Name == $"{name}_{postfix}"))
            {
                int index = save.Saves.FindIndex(s => s.Name == $"{name}_{postfix}");
                Save newValue = save.Saves[index];
                newValue.Value = value;
                newValue.Link = link;
                save.Saves[index] = newValue;
                return Task.CompletedTask;
            }

            save.Saves.Add(new Save($"{name}_{postfix}", value, link));
#if UNITY_EDITOR
            EditorUtility.SetDirty(save);
#endif
            return Task.CompletedTask;
        }

        public static string Load(string name, string postfix)
        {
            SaveFile save = Resources.Load<SaveFile>($"DefaultSave");
            Save found = save.Saves.Find(s => s.Name == $"{name}_{postfix}");
            return found.Value;
        }

        public static void Clear()
        {
            SaveFile save = Resources.Load<SaveFile>($"DefaultSave");
            save.Saves.Clear();

#if UNITY_EDITOR
            EditorUtility.SetDirty(save);
#endif
        }
    }
}
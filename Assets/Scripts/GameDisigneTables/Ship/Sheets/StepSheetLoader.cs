using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Google.Apis.Services;
using Google.Apis.Sheets.v4;
using Google.Apis.Sheets.v4.Data;
using Newtonsoft.Json;
using Plugins.Ship.Saver;
using Plugins.Ship.Sheets.InfoSheet;
using UnityEngine;

namespace Plugins.Ship.Sheets
{
    public class StepSheetLoader<T> : ISheetLoader
    {
        private IRowHandler<T> _handler;
        private ISheetFactory<T> _factory;
        private List<T> _nodes;
        private string _sheetLink;
        private readonly string _postfix;
        private readonly bool _invert;

        public StepSheetLoader(IRowHandler<T> handler, ISheetFactory<T> factory, string sheetLink, string postfix, bool invert)
        {
            _handler = handler;
            _factory = factory;
            _nodes = new List<T>();
            _sheetLink = sheetLink;
            _postfix = postfix;
            _invert = invert;
        }

        private ISheet LoadStepSheet(string name)
        {
            IList<IList<object>> values = Values(name);
            
            BuildTutorialSheet(values, _handler, _nodes);

            return _factory.Get(name, _nodes);
        }

        private ISheet LoadStageSheet(string name)
        {
            IList<IList<object>> values = Values(name);

            BuildStagelSheet(values, _handler, _nodes);

            return _factory.Get(name, _nodes);
        }

        private IList<IList<object>> Values(string name)
        {
            string json = SaveAndLoad.Load(name, _postfix);
            IList<IList<object>> values = JsonConvert.DeserializeObject<IList<IList<object>>>(json);
            return values;
        }

        public ISheet Load(string name)
        {
            if (name == "Stage" || _postfix == "Stage")
            {
                return LoadStageSheet(name);
            }
            else
            {
                return LoadStepSheet(name);
            }
        }
        
        public async Task Save(string name, string postfix)
        {
            await SaveSheet(name,  postfix);
        }

        private async Task SaveSheet(string name, string postfix)
        {
            await DownloadSheet(name, postfix);
            
#if UNITY_EDITOR
            Debug.Log("Done!");
#endif
            Console.WriteLine("Done!");
        }
        
        private async Task DownloadSheet(string name, string postfix)
        {
            SheetsService service = new SheetsService(new BaseClientService.Initializer()
            {
                ApplicationName = "Loader",
                ApiKey = "AIzaSyCcFVABfQD5e0zTqWfwWqGvaenUlWfvTes"
            });
            
            
#if UNITY_EDITOR
            Debug.Log($"{name}: Executing a request...");
#endif
            Console.WriteLine($"{name}: Executing a request...");
            
            SpreadsheetsResource.ValuesResource.GetRequest request = 
                service.Spreadsheets.Values.Get(_sheetLink,
                name);
            
            ValueRange response = await request.ExecuteAsync();
            
#if UNITY_EDITOR
            Debug.Log("Parsing...");
#endif
            Console.WriteLine("Parsing...");
            
            IList<IList<object>> objs = response.Values;
            List<List<string>> rows = new ();
            foreach (IList<object> objectRow in objs)
            {
                List<string> row = objectRow.Cast<string>().ToList();
                for (int i = 0; i < row.Count; i++)
                {
                    row[i] = row[i].Replace(",", ".");
                }
                rows.Add(row);
            }
            string savedTutorial = JsonConvert.SerializeObject(rows, Formatting.Indented);
            
#if UNITY_EDITOR
            Debug.Log("Saving...");
#endif
            Console.WriteLine("Saving...");
            
            await SaveAndLoad.Save(_sheetLink, name, postfix, savedTutorial);
        }

        private void BuildStagelSheet(IList<IList<object>> values, IRowHandler<T> handler, ICollection<T> nodes)
        {
            bool skippedFirstLine = false;

            if (_invert)
            {
                List<string> row = new List<string>();
                foreach (IList<object> objectRow in values)
                {
                    if (skippedFirstLine != true)
                    {
                        skippedFirstLine = true;
                        continue;
                    }

                    row.Add((string)objectRow[0]);
                    row.Add((string)objectRow[1]);
                    row.Add((string)objectRow[4]);
                }
                T node = handler.RowToStep(row);
                nodes.Add(node);
                return;
            }

            foreach (IList<object> objectRow in values)
            {
                if (skippedFirstLine != true)
                {
                    skippedFirstLine = true;
                    continue;
                }

                List<string> row = objectRow.Cast<string>().ToList();
                T node = handler.RowToStep(row);

                nodes.Add(node);
            }
        }
        private void BuildTutorialSheet(IList<IList<object>> values, IRowHandler<T> handler, ICollection<T> nodes)
        {
            bool skippedFirstLine = false;
            
            if (_invert)
            {
                List<string> row = new List<string>();
                foreach (IList<object> objectRow in values)
                {
                    if (skippedFirstLine != true)
                    {
                        skippedFirstLine = true;
                        continue;
                    }
                
                    row.Add((string)objectRow[1]);
                }
                T node = handler.RowToStep(row);
                nodes.Add(node);
                return;
            }
            
            foreach (IList<object> objectRow in values)
            {
                if (skippedFirstLine != true)
                {
                    skippedFirstLine = true;
                    continue;
                }
                
                List<string> row = objectRow.Cast<string>().ToList();
                T node = handler.RowToStep(row);

                nodes.Add(node);
            }
        }
    }
}
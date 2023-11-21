using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Plugins.Ship.Saver;
using Plugins.Ship.Sheets;
using Newtonsoft.Json;

namespace Plugins.Ship.States
{
    public class StateFactory
    {
        private readonly ISetup _setup;
        private ISheetLoader[] _loaders;

        public StateFactory(ISetup setup)
        {
            _setup = setup;
            _loaders = setup.Sheets.Values.ToArray();
        }
        
        public IState Get(string name)
        {
            List<ISheet> sheets = new ();

            string stateJson = SaveAndLoad.Load(name, Constants.StatePostfix);
            string[] sheetNames = JsonConvert.DeserializeObject<string[]>(stateJson);
            
            int i = 0;
            foreach (KeyValuePair<string, ISheetLoader> sheet in _setup.Sheets)
            {
                sheets.Add(sheet.Value.Load(sheetNames[i]));
                i++;
            }
            
            State state = new State(name, sheets);
            return state;
        }

        public async Task Save(string stateName)
        {
            IList<IList<object>> loaded = 
                await SaveAndLoad.DownloadSheet(_setup.StateLink, Constants.StateSheetName);
            List<string> sheets = new ();

            foreach (IList<object> row in loaded)
            {
                string stateRowValue = row[0] as string;
                if (stateRowValue == stateName)
                {
                    row.RemoveAt(0);
                    int i = 0;
                    foreach (ISheetLoader loader in _loaders)
                    {
                        sheets.Add(row[i] as string);
                        await loader.Save(row[i] as string, $"{i}");
                        i++;
                    }
                }
            }
            
            string json = JsonConvert.SerializeObject(sheets, Formatting.Indented);
            await SaveAndLoad.Save(_setup.StateLink, stateName, Constants.StatePostfix, json);
        }

        public async Task SaveAll()
        {
            SaveAndLoad.Clear();
            
            IList<IList<object>> loaded = 
                await SaveAndLoad.DownloadSheet(_setup.StateLink, Constants.StateSheetName);

            List<string> sheetNames = loaded[0].Cast<string>().ToList();
            sheetNames.RemoveAt(0);
            
            loaded.RemoveAt(0);
            
            foreach (IList<object> row in loaded)
            {
                string stateRowValue = row[0] as string;
                List<string> sheets = new();
                row.RemoveAt(0);
                int i = 0;
                foreach (ISheetLoader loader in _loaders)
                {
                    sheets.Add(row[i] as string);
                    await loader.Save(row[i] as string, $"{sheetNames[i]}");
                    i++;
                }
                string json = JsonConvert.SerializeObject(sheets, Formatting.Indented);
                await SaveAndLoad.Save(_setup.StateLink, stateRowValue, Constants.StatePostfix, json);
            }
        }
    }
}
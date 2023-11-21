using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using NaughtyAttributes;
using Newtonsoft.Json;
using Plugins.Ship;
using Plugins.Ship.Saver;
using Plugins.Ship.Sheets;
using Plugins.Ship.Sheets.InfoSheet;
using Plugins.Ship.Sheets.StepSheet;
using Plugins.Ship.Sheets.StepSheet.Commands;
using Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands;
using Plugins.Ship.Sheets.StepSheet.Steps;
using Plugins.Ship.States;
using Realization.Configs;
using Realization.States.CharacterSheet;
using UnityEngine;
//using Constants = Realization.Configs.Constants;

namespace Realization.States
{
    [CreateAssetMenu(fileName = "New State Configurator", menuName = "States/Configurator", order = 0)]
    public class StateConfigurator : ScriptableObject
    {
        [HideInInspector] [SerializeField] private List<State> _states = new();

        private string[] _names => _states.Select((state => state.Name)).ToArray();
        [Dropdown("_names")] [SerializeField] private string _currentState = "none";

        [HorizontalLine(color: EColor.White)]
        [InfoBox("Links for connecting to Google Sheets.", EInfoBoxType.Normal)]
        [Header("Links")]
        [SerializeField] private string _constantsLink = "16EuULcHFd0kKqHzZQUgzqwewEMreM-Z5A2TLYY_cbkc";
        [SerializeField] string _bastionPointLink = "1L-tb53EDze40q0gemDORa6C9ZfbvWjEAYHe5foe-Vq0";
        [SerializeField] private string _stagesLink = "1NOLkc1PpTdhQX-bCTRlltx8Y7UuMDZQfZokebYh8aoo";

        [SerializeField] private string _stateLink = "1pSHyzUUO40FQqUBb3QsxIpIpCSkSQMLpkflimBJ-ClE";

        private string[] _sheetLinks = new string[] { "Constants", "Stage", "BastionPoints" };

        [BoxGroup("Sheet downloader")]
        [InfoBox("Field to download to the game only one sheet from Google Sheets instead of all. " +
                 "Need to select a sheet and press 'DownloadSelectedSheet'." +
                 "The sheets not liked to a special state, so if you update for example " +
                 "tutorial sheet 'main', it will be updated on every state that use it.", EInfoBoxType.Normal)]
        [Dropdown("_sheetLinks")]
        [SerializeField]
        private string _selectedSheet;

        private string[] _stateLinks = new[] {"Constants", "Stage", "BastionPoints"};

        [BoxGroup("States downloader")]
        [InfoBox("Field to download to the game only one state from Google Sheets instead of all. " +
                 "Need to select a sheet and press 'DownloadSelectedState'." +
                 "It will update every sheet that used in the chosen state.", EInfoBoxType.Normal)]
        [Dropdown("_stateLinks")]
        [SerializeField]
        private string _selectedState = "none";

        [InfoBox("If the fields 'Selected Sheet' and 'Selected State' are empty then need to press 'Download' " +
                 "and update all states and sheets.", EInfoBoxType.Warning)]
        [Label("")]
        [ReadOnly]
        [SerializeField]
        private string _tip;

        [SerializeField] private List<PostfixPair> _postfixes = new();

        public string CurrentState => _currentState;
        public string StateLink => _stateLink;

        public string ConstantLink => _constantsLink;
        public string BastionPointsLink => _bastionPointLink;
        public string StagesLink => _stagesLink;
        public Dictionary<string, string> Postfixes => PostfixesToDictionary();

        private Dictionary<string, string> PostfixesToDictionary()
        {
            var dictionary = new Dictionary<string, string>();
            foreach (var postfix in _postfixes)
            {
                dictionary.TryAdd(postfix.Link, postfix.Postfix);
            }

            return dictionary;
        }

        [Button("Download selected sheet")]
        private async void DownloadSelectedSheet()
        {
            for (int i = 0; i < _sheetLinks.Length; i++)
            {
                _selectedSheet = _sheetLinks[i];

                string patternPostfix = @"([^_]+)$";
                Regex regexPostfix = new Regex(patternPostfix);
                Match matchPostfix = regexPostfix.Match(_selectedSheet);

                string patternName = @"\w+(?=_\w*$)";
                Regex regexName = new Regex(patternName);
                Match matchName = regexName.Match(_selectedSheet);

                SaveFile save = Resources.Load<SaveFile>($"DefaultSave");
                string sheet = save.Saves.Find((s => s.Name == _selectedSheet)).Link;

                var objs = await SaveAndLoad.DownloadSheet(sheet, matchName.Value);
                string downloadedSheet = JsonConvert.SerializeObject(objs, Formatting.Indented);

                await SaveAndLoad.Save(sheet, matchName.Value, matchPostfix.Value, downloadedSheet);

                Debug.Log($"Selected sheet downloaded successfully");
            }
        }

        [Button("Download selected state")]
        private async void DownloadSelectedState()
        {
            string patternName = @"\w+(?=_\w*$)";
            Regex regexName = new Regex(patternName);
            Match matchName = regexName.Match(_selectedState);

            /*
            var tutorial = MakeTutorialSheet();
            var configLoader = MakeCharactersSheet();
            var constantsLoader = MakeConstantsSheet();
            var configStoreLoader = MakeCharactersStoreSheet();
            */

            var constant = MakeConstantSheet();
            var bastionPoints = MakeBastionPointsSheet();
            var stage = MakeStageSheet();

            var setup = new Setup(StateLink, constant, bastionPoints, stage);

            var stateFactory = new StateFactory(setup);

            await stateFactory.Save(matchName.Value);

            Debug.Log($"Selected state downloaded successfully");
        }

        [Button]
        private async void Download()
        {
            var saves = Resources.Load<SaveFile>($"DefaultSave").Saves;
            Postfixes.Clear();
            foreach (var save in saves)
            {
                string patternPostfix = @"([^_]+)$";
                Regex regexPostfix = new Regex(patternPostfix);
                Match matchPostfix = regexPostfix.Match(save.Name);
                if (_postfixes.Any(s => s.Link == save.Link) == false)
                    _postfixes.Add(new PostfixPair(save.Link, matchPostfix.Value));
            }

            /*
            var tutorial = MakeTutorialSheet();
            var configLoader = MakeCharactersSheet();
            var constantsLoader = MakeConstantsSheet();
            var configStoreLoader = MakeCharactersStoreSheet();
            */

            var constant = MakeConstantSheet();
            var bastionPoints = MakeBastionPointsSheet();
            var stage = MakeStageSheet();

            var setup = new Setup(StateLink, constant, bastionPoints, stage);

            var stateFactory = new StateFactory(setup);

            await stateFactory.SaveAll();

            _sheetLinks = saves
                .Where((save => save.Link != StateLink))
                .Select((state => state.Name)).ToArray();
            _stateLinks = saves
                .Where((save => save.Link == StateLink))
                .Select((state => state.Name)).ToArray();

            Debug.Log($"All sheets and states downloaded successfully");
        }

        private ISheetLoader MakeConstantSheet()
        {
            var constant = new List<Constant>();
            var infoBuilder = new ConstantInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<Constant>(ConstantLink, Postfixes[ConstantLink], infoBuilder, constant).Get();
            return configLoader;
        }

        private ISheetLoader MakeBastionPointsSheet()
        {
            var constant = new List<BastionPoints>();
            var infoBuilder = new BastionPointsInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<BastionPoints>(BastionPointsLink, Postfixes[BastionPointsLink], infoBuilder, constant).Get();
            return configLoader;
        }

        private ISheetLoader MakeStageSheet()
        {
            var constant = new List<Stage>();
            var infoBuilder = new StageInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<Stage>(StagesLink, Postfixes[StagesLink], infoBuilder, constant).Get();
            return configLoader;
        }

        /*
        private ISheetLoader MakeCharactersSheet()
        {
            var players = new List<Character>();
            var infoBuilder = new CharacterInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<Character>(CharactersLink, Postfixes[CharactersLink], infoBuilder, players).Get();
            return configLoader;
        }
        
        private ISheetLoader MakeCharactersStoreSheet()
        {
            var players = new List<Parameters.CharacterStore>();
            var infoBuilder = new CharacterStoreInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<Parameters.CharacterStore>(CharactersStoreLink, Postfixes[CharactersStoreLink], infoBuilder, players).Get();
            return configLoader;
        }

        private ISheetLoader MakeConstantsSheet()
        {
            var constants = new List<Constants>();
            var infoBuilder = new ConstantsInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<Constants>(ConstantsLink, Postfixes[ConstantsLink], infoBuilder, constants, true).Get();
            return configLoader;
        }

        private ISheetLoader MakeTutorialSheet()
        {
            IConditionDictionary[] conditions =
            {
                new DefaultConditions()
            };
            IActionDictionary[] actions =
            {
                new DefaultActions()
            };

            var nameConverter = new NameConverter(conditions, actions);
            var builder = new NodeBuilder(nameConverter);
            var loader = new StepLoaderFactory(TutorialLink, Postfixes[TutorialLink], builder).Get();
            return loader;
        }
        */

        [Button("Validate (not ready)")]
        private void Validate()
        {
            //todo
        }
    }

    [Serializable]
    public struct PostfixPair
    {
        public string Link;
        public string Postfix;

        public PostfixPair(string link, string postfix)
        {
            Link = link;
            Postfix = postfix;
        }
    }
}
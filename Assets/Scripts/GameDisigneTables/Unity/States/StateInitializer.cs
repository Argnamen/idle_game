using System.Collections.Generic;
using NaughtyAttributes;
//using Parameters;
using Plugins.Ship;
using Plugins.Ship.Sheets;
using Plugins.Ship.Sheets.InfoSheet;
using Plugins.Ship.Sheets.StepSheet;
using Plugins.Ship.Sheets.StepSheet.Commands;
using Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands;
using Plugins.Ship.Sheets.StepSheet.Steps;
using Plugins.Ship.States;
using Realization.States.CharacterSheet;
using Realization.TutorialRealization.Commands;
using Realization.TutorialRealization.Helpers;
using UnityEngine;
using Realization.Configs;
//using Constants = Realization.Configs.Constants;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Realization.States
{
    public class StateInitializer : MonoBehaviour
    {
        [SerializeField] private StateConfigurator _stateConfigurator;

        //[SerializeField] private ObjectFinder _objectFinder;
        //[SerializeField] private HardTutorial _hardTutorial;
        //[SerializeField] private CharacterConfig _characterConfig;

        [SerializeField] private ConstantConfig _constantsConfig;
        [SerializeField] private StageConfig _stageConfig;
        [SerializeField] private BastionPointsConfig _bastionPointsConfig;

        private ISheet _tutorial;
        //private UnityConditions _unityConditions;
        private IState _state;
        private bool _initialized = false;

        private List<Constant> _constants = new();
        private List<Stage> _stages = new();
        private List<BastionPoints> _bastionPoints = new();

        //private List<BastionPoints> _bastionPoints = new();

        //private List<Character> _characters = new();
        //private List<CharacterStore> _characterStore = new();
        //private List<Constants> _constants = new();

        private void Awake()
        {
            if (_initialized == false)
                Initialize();
        }

        private void OnDestroy()
        {
            //_unityConditions.Dispose();
        }

        public void UpdateState()
        {
            if (_state is {Working: true})
                _state?.Update();
        }

        [Button]
        private void UpdateConfigs()
        {
            /*
            var loader = MakeTutorialSheet();
            var configLoader = MakeCharactersSheet();
            var constantsLoader = MakeConstantsSheet();
            var configStoreLoader = MakeCharactersStoreSheet();
            */

            var constant = MakeConstantSheet();
            var bastionPoints = MakeBastionPointsSheet();
            var stage = MakeStageSheet();

            var setup = new Setup(_stateConfigurator.StateLink, constant, bastionPoints, stage);

            var stateFactory = new StateFactory(setup);

            _state = stateFactory.Get(_stateConfigurator.CurrentState);
            _state.Start();


#if UNITY_EDITOR

            _constantsConfig.Constants = _constants[0];
            _stageConfig.Stage = _stages[0];
            _bastionPointsConfig.BastionPoints = _bastionPoints[0];

            EditorUtility.SetDirty(_constantsConfig);
            EditorUtility.SetDirty(_stageConfig);
            EditorUtility.SetDirty(_bastionPointsConfig);
            /*
            _characterConfig.UpdateCharacters(_characters.ToArray());
            _characterConfig.UpdateCharacterStore(_characterStore.ToArray());
            _characterConfig.UpdateConstants(_constants[0]);
            EditorUtility.SetDirty(_characterConfig);
            */
#endif
        }

        private void Initialize()
        {
            /*
            var loader = MakeTutorialSheet();
            var configLoader = MakeCharactersSheet();
            var constantsLoader = MakeConstantsSheet();
            var configStoreLoader = MakeCharactersStoreSheet();
            */

            var constant = MakeConstantSheet();
            var bastionPoints = MakeBastionPointsSheet();
            var stage = MakeStageSheet();

            var setup = new Setup(_stateConfigurator.StateLink, constant, bastionPoints, stage);

            var stateFactory = new StateFactory(setup);

            _state = stateFactory.Get(_stateConfigurator.CurrentState);
            _state.Start();

#if UNITY_EDITOR
            _constantsConfig.Constants = _constants[0];
            _stageConfig.Stage = _stages[0];
            _bastionPointsConfig.BastionPoints = _bastionPoints[0];


            EditorUtility.SetDirty(_constantsConfig);
            EditorUtility.SetDirty(_stageConfig);
            EditorUtility.SetDirty(_bastionPointsConfig);

            /*
            _characterConfig.Characters = _characters.ToArray();
            _characterConfig.CharacterStore = _characterStore.ToArray();
            Debug.Log(_constants[0].BattleHealingSpread);
            _characterConfig.UpdateConstants(_constants[0]);
            */
#endif
            _initialized = true;
        }

        private ISheetLoader MakeConstantSheet()
        {
            _constants = new List<Constant>();
            var infoBuilder = new ConstantInfoBuilder();
            var link = _stateConfigurator.ConstantLink;
            var configLoader =
                new InfoLoaderFactory<Constant>(link, _stateConfigurator.Postfixes[link], infoBuilder, _constants, true)
                    .Get();
            return configLoader;
        }

        private ISheetLoader MakeBastionPointsSheet()
        {
            _bastionPoints = new List<BastionPoints>();
            var infoBuilder = new BastionPointsInfoBuilder();
            var link = _stateConfigurator.BastionPointsLink;
            var configLoader =
                new InfoLoaderFactory<BastionPoints>(link, _stateConfigurator.Postfixes[link], infoBuilder, _bastionPoints, true)
                    .Get();
            return configLoader;
        }

        private ISheetLoader MakeStageSheet()
        {
            _stages = new List<Stage>();
            var infoBuilder = new StageInfoBuilder();
            var link = _stateConfigurator.StagesLink;
            var configLoader =
                new InfoLoaderFactory<Stage>(link, _stateConfigurator.Postfixes[link], infoBuilder, _stages, true)
                    .Get();
            return configLoader;
        }

        /*
        private ISheetLoader MakeConstantsSheet()
        {
            _constants  = new List<Constants>();
            var infoBuilder = new ConstantsInfoBuilder();
            var link = _stateConfigurator.ConstantsLink;
            var configLoader =
                new InfoLoaderFactory<Constants>(link, _stateConfigurator.Postfixes[link], infoBuilder, _constants, true)
                    .Get();
            return null;
        }
        
        private ISheetLoader MakeCharactersStoreSheet()
        {
            var infoBuilder = new CharacterStoreInfoBuilder();
            var configLoader =
                new InfoLoaderFactory<CharacterStore>(
                    _stateConfigurator.CharactersStoreLink, _stateConfigurator.Postfixes[_stateConfigurator.CharactersStoreLink], 
                    infoBuilder, _characterStore).Get();
            return null;
        }

        private ISheetLoader MakeCharactersSheet()
        {
            var infoBuilder = new CharacterInfoBuilder();
            var link = _stateConfigurator.CharactersLink;
            var configLoader =
                new InfoLoaderFactory<Character>(link, _stateConfigurator.Postfixes[link], infoBuilder, _characters)
                    .Get();
            return null;
        }

        private ISheetLoader MakeTutorialSheet()
        {
            _unityConditions = new UnityConditions();
            IConditionDictionary[] conditions =
            {
                new DefaultConditions(),
                _unityConditions,
            };
            IActionDictionary[] actions =
            {
                new DefaultActions(),
                new UnityActions(_objectFinder, _hardTutorial),
            };
            var nameConverter = new NameConverter(conditions, actions);
            var builder = new NodeBuilder(nameConverter);
            var link = _stateConfigurator.TutorialLink;
            var loader = new StepLoaderFactory(link, _stateConfigurator.Postfixes[link], builder).Get();
            return loader;
        }
        */
    }
}
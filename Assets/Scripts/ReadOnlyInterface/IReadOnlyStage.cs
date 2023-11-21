namespace Realization.States.Stages
{
    public interface IReadOnlyStage
    {
        int Stages_Base_NumberOfWaves { get; }
        int Stages_FarmStagge_Difficult { get; }
        int Stages_NumberOfEnemies { get; }
        int Stages_Spawn_Interval { get; }
        int Stages_Spawn_PowerPercent { get; }

        string Stage_UID { get; }
        string Target_HP { get; }
        string Reward { get; }
    }
}
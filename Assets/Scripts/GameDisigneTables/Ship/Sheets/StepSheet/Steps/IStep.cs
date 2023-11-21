namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public interface IStep : INode
    {
        bool ReadyToStart { get; }
        bool ReadyToContinue { get; }
    }
}
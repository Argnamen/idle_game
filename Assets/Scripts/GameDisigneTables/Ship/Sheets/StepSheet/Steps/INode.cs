namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public interface INode
    {
        string Uid { get; }
        bool Acted { get; }

        void Act();
    }
}
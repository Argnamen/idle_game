namespace Plugins.Ship.Sheets
{
    public interface ISheet
    {
        bool Working { get; }
        string Name { get; }
        
        void Start();
        void Update();
    }
}
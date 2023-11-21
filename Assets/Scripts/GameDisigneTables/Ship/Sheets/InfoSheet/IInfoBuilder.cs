namespace Plugins.Ship.Sheets.InfoSheet
{
    public interface IInfoBuilder<T>
    {
        void Perform(string cell);
        IInfo<T> Get();
    }
}
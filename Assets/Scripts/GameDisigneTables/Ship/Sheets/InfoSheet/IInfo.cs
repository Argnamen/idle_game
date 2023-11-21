namespace Plugins.Ship.Sheets.InfoSheet
{
    public interface IInfo<T>
    {
        void Perform(T info);
    }
}
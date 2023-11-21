using System.Threading.Tasks;

namespace Plugins.Ship.Sheets
{
    public interface ISheetLoader
    {
        ISheet Load(string name);
        Task Save(string name, string postfix);
    }
}
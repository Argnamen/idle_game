using System.Threading.Tasks;

namespace Realization.TutorialRealization.Commands
{
    public interface IObjectProvider<T>
    {
        T Get();
        Task<T> GetAsync();
    }
}
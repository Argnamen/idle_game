namespace GridMap.Model
{
    public class Cell
    {
        private IGridContent _content;

        public bool TryLocate(IGridContent gridContent)
        {
            if (CanLocate(gridContent) == false)
                return false;

            _content = gridContent;
            return true;
        }

        public bool TryRemove(IGridContent gridContent)
        {
            if (_content == null || _content != gridContent)
                return false;

            _content = null;
            return true;
        }

        public bool CanLocate(IGridContent gridContent)
        {
            return _content == null || _content == gridContent;
        }
    }
}
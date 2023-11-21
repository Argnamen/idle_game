/*
using Entities.InventoryItems;
using Infrastructure.Shared.Factories;
using Model.Economy;
using Model.Inventories.Items;
using Model.Shops;
using Model.Shops.Items;
using Realization.Configs;
using Units;
using UnityEngine;
using Zenject;

namespace Realization.TutorialRealization.Temp
{
    public class ItemIniter : MonoBehaviour
    {
        [SerializeField] private ItemConfig _item;
        [SerializeField] private GameObject _toDestroy;
        [SerializeField] private TutorialButton _button;

        private InventoryItemEntityFactory _itemEntityFactory;
        private IStorage _storage;

        [Inject]
        private void Construct(InventoryItemEntityFactory itemEntityFactory, IStorage storage)
        {
            _storage = storage;
            _itemEntityFactory = itemEntityFactory;
        }

        private void Awake()
        {
            IMinionItem newMinionItem = new MinionItem(_item.Sprite,
                _item.Modificators,
                _item.Class,
                _item.JsonCharacterView,
                _item.AttackStrategy);
            DefaultItem newDefaultItem = new DefaultItem(_item.Name, newMinionItem);

            InventoryItemEntityFactoryArgs args = new InventoryItemEntityFactoryArgs(newDefaultItem);
            FactoryWrapper<InventoryItemEntityFactoryArgs> wrapper =
                new FactoryWrapper<InventoryItemEntityFactoryArgs>(_itemEntityFactory, args);

            IShopItem item = new FactoryShopItem(wrapper, _storage,
                _item.Currency, _item.Name, _item.Price, _item.Sprite);

            _button.Clicked += () =>
            {
                item.TryBuy();
                Destroy(_toDestroy);
                Destroy(gameObject);
            };
        }
    }
}
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

namespace HudElement
{
    public class HealthBar : VisualElement, INotifyValueChanged<float>
    {
        public int width { get; set; }
        public int height { get; set; }

        public enum FillType
        {
            Horizontal,
            Vertical
        }

        public FillType fillType;

        private VisualElement hpparent;
        private VisualElement hpbackgraund;
        private VisualElement hpforeground;

        public new class UxmlFactory : UxmlFactory<HealthBar, UxmlTraits> { }

        public void SetValueWithoutNotify(float newValue)
        {
            m_value = newValue;
        }

        private float m_value;

        public float value
        {
            get
            {
                m_value = Mathf.Clamp(m_value, 0, 1);
                return m_value;
            }
            set
            {
                if(EqualityComparer<float>.Default.Equals(m_value, value))
                {
                    return;
                }
                if (this.panel == null)
                {
                    using (ChangeEvent<float> pooled = ChangeEvent<float>.GetPooled(m_value, value))
                    {
                        pooled.target = (IEventHandler)this;
                        this.SetValueWithoutNotify(value);
                        this.SendEvent((EventBase)pooled);  
                    }

                    FillHealth();
                }
                else
                {
                    SetValueWithoutNotify(value);

                    FillHealth();
                }
            }
        }

        public new class UxmlTraits : VisualElement.UxmlTraits
        {
            UxmlIntAttributeDescription widthAttr = new UxmlIntAttributeDescription() {name = "width", defaultValue = 300};
            UxmlIntAttributeDescription heightAttr = new UxmlIntAttributeDescription() {name = "height", defaultValue = 50};
            UxmlFloatAttributeDescription valueAttr = new UxmlFloatAttributeDescription() { name = "value", defaultValue = 1};
            UxmlEnumAttributeDescription<HealthBar.FillType> fillTypeAttr = new UxmlEnumAttributeDescription<FillType> { name = "fill-type", defaultValue = FillType.Horizontal };
            public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
            {
                base.Init(ve, bag, cc);
                var ate = ve as HealthBar;
                ate.width = widthAttr.GetValueFromBag(bag, cc);
                ate.height = heightAttr.GetValueFromBag(bag, cc);
                ate.value = valueAttr.GetValueFromBag(bag, cc);
                ate.fillType = fillTypeAttr.GetValueFromBag(bag, cc);

                ate.Clear();
                VisualTreeAsset vt = Resources.Load<VisualTreeAsset>("HealthBar");
                VisualElement healthbar = vt.Instantiate();
                ate.hpparent = healthbar.Q<VisualElement>("healthbar");
                ate.hpbackgraund = healthbar.Q<VisualElement>("backgraund");
                ate.hpforeground = healthbar.Q<VisualElement>("foregraund");
                ate.Add(healthbar);

                ate.hpparent.style.width = ate.width;
                ate.hpparent.style.height = ate.height;
                ate.style.width = ate.width;
                ate.style.height = ate.height;
                ate.RegisterValueChangedCallback(ate.UpdateHealth);
                ate.FillHealth();
            }
        }

        public void UpdateHealth(ChangeEvent<float> evt)
        {
            FillHealth();
        }

        private void FillHealth()
        {
            if(hpforeground != null) {
                if (fillType == FillType.Horizontal)
                {
                    hpforeground.style.scale = new Scale(new Vector3(value, 1, 0));
                }
                else if (fillType == FillType.Vertical)
                {
                    hpforeground.style.scale = new Scale(new Vector3(1, value, 0));
                }
            }
        }
    }
}

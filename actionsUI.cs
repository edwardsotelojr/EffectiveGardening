using System.Linq;
using AppKit;
using Foundation;

namespace AnimatingViews
{
    partial class AnimatingViewsWindowController
    {
        partial void sizeTicker(NSObject sender)
        {
            switch (plantSizeStepper.IntValue)
            {
                case 1:
                    plantSize.StringValue = "S";
                    break;
                case 2:
                    plantSize.StringValue = "M";
                    break;
                case 3:
                    plantSize.StringValue = "L";
                    break;
            }
            if (plantSizeStepper.IntValue == 4)
            {
                plantSizeStepper.IntValue = 3;
            }
            else if (plantSizeStepper.IntValue == 0)
            {
                plantSizeStepper.IntValue = 1;
            }
        }

        // Action for Add pushbutton
        partial void addABox(NSButton sender)
        {
            if (outletFoodSelectionComboBox.StringValue != "")
            {
                string id = plantSize.StringValue + outletFoodSelectionComboBox.SelectedIndex.ToString();
                string name = plants.ElementAt((int)outletFoodSelectionComboBox.SelectedIndex).Name;
                string size = plantSize.StringValue;
                Plant plant = plants.ElementAt((int)outletFoodSelectionComboBox.SelectedIndex);
                if (FindPlant(id))
                {
                    return;
                }
                existingPlants[inventoryCount++] = id;
                simpleView.AddSubview(ViewToBeAdded());
                simpleView.Subviews.Last().AddSubview(addPlantName(name));
                simpleView.Subviews.Last().AddSubview(addPlantImage(name));
                simpleView.Subviews.Last().AddSubview(addPlantSize(size));
                simpleView.Subviews.Last().AddSubview(perPlantLabel());
                simpleView.Subviews.Last().AddSubview(removeButton(id));
                simpleView.Subviews.Last().AddSubview(addPlantWater(plant, size));
                Layout();
            }
        }

        public bool FindPlant(string plant)
        {
            for (int i = 0; i < existingPlants.Length; i++)
            {
                if (plant == existingPlants[i])
                {
                    return true;
                }
            }
            return false;
        }
    }
}
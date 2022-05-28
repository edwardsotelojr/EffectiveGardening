

using System;
using AppKit;
using CoreGraphics;

namespace AnimatingViews
{
	public partial class AnimatingViewsWindowController
	{
		private NSView perPlantLabel()
		{
			NSTextField label = new NSTextField(new CGRect(BOX_WIDTH - 95f, BOX_HEIGHT - 67f, 70f, 30f))
			{
				Selectable = false,
				Editable = false,
				Bezeled = false,
				DrawsBackground = false,
				MaximumNumberOfLines = 1,
				Bordered = false,
				StringValue = "Per Plant",
				Font = NSFont.SystemFontOfSize(13f, 12f)
			};
			return label;
		}

		private NSView addPlantWater(Plant p, string size)
		{
			//string pp = waterNeeded(p, size, avgTemp, avgHumidity, theMost, avgUvIndex, avgCloudCoverage, avgPrecipProbability); ;
			NSTextField water = new NSTextField(new CGRect(90f, 22f, 100f, 70f))
			{
				Selectable = false,
				Editable = false,
				Bezeled = false,
				DrawsBackground = false,
				Bordered = false,
				StringValue = "Now: " + WaterNeeded(p, size, 1) + "\nin 24hrs: " + WaterNeeded(p, size, 2)
			};
			return water;
		}

		private NSView addPlantName(string plantName)
		{
			double fieldWidth = plantName.Length * 9;
			//Console.WriteLine(fieldWidth);
			if (fieldWidth > 110)
			{
				fieldWidth = 110;
			}
			return new NSTextField(new CGRect(19f, BOX_HEIGHT - 35f, (float)fieldWidth, 25.0f))
			{
				Editable = false,
				BackgroundColor = NSColor.Clear,
				StringValue = plantName,
				DrawsBackground = false,

			};
		}

		private NSView addPlantSize(string plantSize)
		{
			return new NSTextField(new CGRect(0f, BOX_HEIGHT - 35f, 18f, 25f))
			{
				Editable = false,
				StringValue = plantSize
			};
		}

		private NSImageView addPlantImage(string plantName)
		{
			NSImage image = NSImage.ImageNamed(plantName);
			return new NSImageView(new CGRect(0.0f, 30.0f, 80.0f, 75.0f))
			{
				Image = image,

			};
		}

		private NSView AddPlantStepperTextField()
		{
			NSTextField dsd = new NSTextField(new CGRect(BOX_WIDTH - 40f, BOX_HEIGHT - 35f, 30f, 25f))
			{
				MaximumNumberOfLines = 1,
				PlaceholderString = "1",
				Alignment = NSTextAlignment.Center
			};
			dsd.Changed += delegate
			{
				if (dsd.StringValue.Length > 0)
				{
					string str = dsd.StringValue;
					char c = str[0];
					if (Char.IsDigit(c))
					{

					}
					dsd.StringValue = c.ToString();

				}
			};
			return dsd;
		}

		private NSView removeButton(string plantID)
		{
			NSButton cancelB = new NSButton(new CGRect(BOX_WIDTH - 30f, 0f, 20f, 20f))
			{
				Title = "X"
			};
			cancelB.Activated += (object s, EventArgs e) =>
			{
				//Console.WriteLine("Removed " + plantID);
				int i = 0;
				int index = 0;
				foreach (string p in existingPlants)
				{
					if (p == plantID)
					{
						index = i;
						continue;
					}
					existingPlants[i] = p;
					i++;
				}
				inventoryCount--;
				existingPlants[inventoryCount] = null;
				simpleView.Subviews[index].RemoveFromSuperview();
				Layout();
			};
			return cancelB;
		}

		public string WaterNeeded(Plant p, string size, int nowOrLater)
		{
			double result;
			double heatT = p.getHeatTolerance();
			double waterPer = p.getWaterNeededPerM3();
			double temp;
			double humidity;
			double uv;
			double cloudCoverage;
			double precipProb;
			string summary;
			var intSize = size switch
			{
				"S" => 0.4,
				"M" => 0.85,
				"L" => 1.2,
				_ => 0.5,
			};
			if (nowOrLater == 1)
			{
				temp = avgTemp;
				humidity = avgHumidity;
				uv = avgUV;
				cloudCoverage = avgCloudCoverage;
				precipProb = avgPrecipProb;
				summary = avgSummary;
			}
			else
			{
				temp = avgTempLater;
				humidity = avgHumidityLater;
				uv = avgUVLater;
				cloudCoverage = avgCloudCoverageLater;
				precipProb = avgPrecipProbLater;
				summary = avgSummaryLater;
			}

			if (cloudCoverage > 0.6 || summary == "Overcast" || precipProb > .50 || temp <= 10)
				return "No need";
			else
			{
				result = ((1 - heatT) * (waterPer * intSize) * (temp - 10) * (uv * 0.5)) - ((humidity * 3) + (precipProb * 70) + (cloudCoverage * 10));
				result = Math.Round(result, 0);
			}
			if (result < 30)
			{
				return "No need";
			}
			return result.ToString() + "mL";
		}
	}
}
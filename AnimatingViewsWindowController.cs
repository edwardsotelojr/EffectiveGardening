
using System;
using System.Collections.Generic;
using System.Linq;
using CoreGraphics;
using Foundation;
using AppKit;
using CoreAnimation;
using Xamarin.Essentials;
using Xamarin.Forms;
using OpenWeatherMap;
using System.Threading.Tasks;
using System.Net;
using System.Net.Http;
using Newtonsoft.Json;
using DarkSky.Services;
using Xamarin.Forms.Maps;
using DarkSky.Models;
using System.Collections;
using System.Xml.Linq;
using System.ComponentModel;

namespace AnimatingViews
{
	public partial class AnimatingViewsWindowController : AppKit.NSWindowController
	{
		public static int inventoryCount = 0;
		public static double avgTemp = 0;
		public static double avgHumidity = 0;
		public static string avgSummary = "";
		public static int avgUV = 0;
		public static double avgCloudCoverage = 0;
		public static double avgPrecipProb = 0;
		public static double avgTemp1 = 0;
		public static double avgHumidity1 = 0;
		public static string avgSummary1 = "";
		public static int avgUV1 = 0;
		public static double avgCloudCoverage1 = 0;
		public static double avgPrecipProb1 = 0;

		private const float SEPARATION = 15.0f;
		private const float BOX_WIDTH = 200.0f;
		private const float BOX_HEIGHT = 150.0f;

		public static string[] existingPlants = new string[100];

		public class Plant
		{
			private string name;
			private double heatTolerance;
			private double waterNeededPerM3;
			private int favorableSeason;
			public Plant(string n, double h, double w, int f)
			{
				name = n;
				heatTolerance = h;
				waterNeededPerM3 = w;
				favorableSeason = f; // 1 = winter, 4 = fall
			}
			public string Name { get { return name; } set { name = value; } }

			public double getHeatTolerance()
            {
				return heatTolerance;
            }
            public double getWaterNeededPerM3()
            {
				return waterNeededPerM3;
            }
            public int getFavorableSeason()
            {
				return favorableSeason;
            }
		};

		public static List<Plant> plants = new List<Plant>()
		{
			new Plant("Amaranth", .4, 20, 2),
			new Plant("Artichoke", .55, 24, 3),
			new Plant("Arugula", .60, 25, 2),
			new Plant("Asparagus", .75, 35, 3),
			new Plant("Beets", .8, 40, 3),
			new Plant("Broccoli", .7, 33, 3),
			new Plant("Brussel Sprouts", .45, 35, 2),
			new Plant("Cabbage", .35, 33, 2),
			new Plant("Carrots", .6, 25, 2),
			new Plant("Cauliflower", .6, 28, 4),
			new Plant("Celery", .42, 35, 2),
			new Plant("Collard Greens", .38, 30, 2),
			new Plant("Corn", .8, 40, 4),
			new Plant("Cucumber", .6, 45, 2),
			new Plant("Eggplant", .55, 41, 3),
			new Plant("Ginger Root", .7, 29, 4),
			new Plant("Green Beans", .70, 35, 3),
			new Plant("Kale", .55, 26, 2),
			new Plant("Lettuce", .33, 33, 2),
			new Plant("Mushrooms", .43, 21, 2),
			new Plant("Mustard Greens", .4, 26, 2),
			new Plant("Okra", .3, 30, 2),
			new Plant("Onions", .7, 31, 4),
			new Plant("Peas", .39, 28, 2),
			new Plant("Peppers", .35, 34, 3),
			new Plant("Potatoes", .65, 35, 4),
			new Plant("Radishes", .55, 36, 4),
			new Plant("Spinach", .3, 35, 2),
			new Plant("Squash", .38, 32, 2),
			new Plant("Sugar Snap Peas", .32, 22, 2),
			new Plant("Sweet Potatoes", .28, 27, 4),
			new Plant("Swiss Chard", .41, 31, 2),
			new Plant("Tomatoes", .42, 30, 2),
			new Plant("Turnip", .6, 34, 4),
			new Plant("Watercress", .4, 26, 2),
			new Plant("Zucchini", .47, 33, 2)
		};

	
	
		class MessageTypeDataSource : NSComboBoxDataSource
		{
			public override nint ItemCount(NSComboBox comboBox)
			{
				return plants.Count;
			}

			public override NSObject ObjectValueForItem(NSComboBox comboBox, nint index)
			{
				var itemname = plants[(int)index].Name;
				NSMutableAttributedString str = new NSMutableAttributedString(itemname);
        		var range = new NSRange(0, itemname.Length);
				str.BeginEditing();
				//if needed, place conditions around them based on itemname\
				str.AddAttribute(NSStringAttributeKey.ForegroundColor, NSColor.White, range);
				str.EndEditing();
				return NSObject.FromObject(str);
			}
		}

        public override void AwakeFromNib()
		{
			Xamarin.FormsMaps.Init();
			Geocoder geoCoder = new Geocoder();
			Task ok = getCoordinates(geoCoder);
			outletFoodSelectionComboBox.UsesDataSource = true;
			MessageTypeDataSource ds = new MessageTypeDataSource();
			outletFoodSelectionComboBox.DataSource = ds;
			Window.DidResize += (sender, e) =>
			{
				layout();
			};
		}

		async Task getCoordinates(Geocoder g)
		{
			try
			{
				var locations = await g.GetPositionsForAddressAsync("77009");
				Position location = locations.FirstOrDefault();
				if (location == null)
				{
					nowWeatherLabel.StringValue = "unable";
            	}
				else
				{
					Task forecast = getForecast((double)location.Longitude, (double)location.Latitude);
				}
			}
			catch (Exception e)
			{
				nowWeatherLabel.StringValue = e + "unable";
				var alert = new NSAlert()
				{
					AlertStyle = NSAlertStyle.Critical,
					InformativeText = e.ToString(),
					MessageText = "Save Document",
				};
				alert.RunModal();
			}
		}

		// Called when created from unmanaged code
		public AnimatingViewsWindowController(IntPtr handle) : base(handle)
		{
		}

		// Called when created directly from a XIB file
		[Export("initWithCoder:")]
		public AnimatingViewsWindowController(NSCoder coder) : base(coder)
		{
		}

		// Call to load from the XIB/NIB file
		public AnimatingViewsWindowController() : base("AnimatingViewsWindow")
		{
		}

		//strongly typed window accessor
		public new AnimatingViewsWindow Window
		{
			get { return (AnimatingViewsWindow)base.Window; }
		}
		/*public static double avgTemp = 0;
		public static double avgCloudCoverage = 0;
		public static double avgHumidity = 0;
		public static double avgPrecipProbability = 0;
		public static int avgUvIndex = 0;
		public static string theMost = "";
		public static double avgTemp1 = 0;
		public static double avgCloudCoverage1 = 0;
		public static double avgHumidity1 = 0;
		public static double avgPrecipProbability1 = 0;
		public static int avgUvIndex1 = 0;
		public static string theMost1 = "";
        */
        public string getEmoji(string str)
        {
			string emoji = "";
			switch (str)
			{
				case "Overcast":
					emoji = " ☁️ ";
					break;
				case "Drizzle":
					emoji = " 🌧 ";
					break;
				case "Possible Drizzle":
					emoji = " ☁️ ";
					break;
				case "Partly Cloudy":
					emoji = " 🌤 ";
					break;
				case "Mostly Cloudy":
					emoji = " ⛅️ ";
					break;
				case "Possible Light Rain":
					emoji = " 🌨 ";
					break;
				case "Sunny":
					emoji = " ☀️ ";
					break;
				default:
					emoji = " ";
					break;
			}
			return emoji;
		}

		async Task getForecast(double longitude, double latitude)
		{
			var darkSky = new DarkSky.Services.DarkSkyService("a1c059ee2f1d05ad7900a749d26c3082");
			var forecast = await darkSky.GetForecast(latitude, longitude);
			double[] temp = new double[49];
			double[] cloudCoverage = new double[49];
			double[] humidity = new double[49];
			double[] precipProbability = new double[49];
			double[] precipAccumulation = new double[49];
			string[] summary = new string[49];
			int[] uvIndex = new int[49];

			if (forecast?.IsSuccessStatus == true)
			{
				List<DataPoint> r = forecast.Response.Hourly.Data;
				int time = r[10].DateTime.Hour;
				string pmoram = "am";
				if (time > 12)
				{
					time -= 12;
					pmoram = "pm";
				}
				if (time == 0)
				{
					time = 12;
				}
				tenHoursFromNow.StringValue = time.ToString() + " " + pmoram;
				tenHoursFromNow2.StringValue = time.ToString() + " " + pmoram;
				if (pmoram == "am")
				{
					pmoram = "pm";
				}
				twentyFourHoursFromNow.StringValue = time.ToString() + " " + pmoram;
				int i = 0;
				
				
				int most = 0;
				Dictionary<string, int> sum = new Dictionary<string, int>();

				for (i = 0; i < 49; i++)
				{
					temp[i] = (double)r[i].Temperature;
                    cloudCoverage[i] = (double)r[i].CloudCover;
                    humidity[i] = (double)r[i].Humidity;
					precipProbability[i] = (double)r[i].PrecipProbability;
					summary[i] = r[i].Summary;
					uvIndex[i] = (int)r[i].UvIndex;
					//Console.WriteLine(r[i].Summary);
                }
			    for (i = 0; i < 11; i++)
				{
					if (i == 0)
					{
						sum.Add(summary[i], 1);
					}
					if (!sum.ContainsKey(summary[i]))
					{
						sum.Add(summary[i], 1);
					}
					else
					{
						sum[summary[i]] += 1;
					}
					avgTemp += temp[i];
					avgCloudCoverage += cloudCoverage[i];
					avgHumidity += humidity[i];
					avgPrecipProb += precipProbability[i];
					avgUV += uvIndex[i];
				}
				if (sum.Count > 1)
				{
					foreach (KeyValuePair<string, int> x in sum)
					{
						if (x.Value > most)
						{
							avgSummary = x.Key;
						}
					}
				}
				avgTemp /= 11;
				avgCloudCoverage /= 11;
				avgHumidity /= 11;
				avgPrecipProb /= 11;
				avgUV /= 11;
				string emoji = "";
               
    			nowWeatherLabel.StringValue = Math.Round(avgTemp, 2).ToString() + "℉" + getEmoji(avgSummary) + avgSummary;
				
				sum.Clear();
				for (i = 11; i < 23; i++)
				{
					if (i == 11)
					{
						sum.Add(summary[i], 1);
					}
					if (!sum.ContainsKey(summary[i]))
					{
						sum.Add(summary[i], 1);
					}
					else
					{
						sum[summary[i]] += 1;
					}
					avgTemp1 += temp[i];
					avgCloudCoverage1 += cloudCoverage[i];
					avgHumidity1 += humidity[i];
					avgPrecipProb1 += precipProbability[i];
					avgUV1 += uvIndex[i];
				}
				avgTemp1 /= 12;
				avgCloudCoverage1 /= 12;
				avgHumidity1 /= 12;
				avgPrecipProb1 /= 12;
				avgUV1 /= 12;
				//Console.WriteLine(avgUvIndex1);
				most = 0;
			   	if (sum.Count >= 1)
			    {
			    	foreach (KeyValuePair<string, int> x in sum)
			    	{
				    	if (x.Value > most)
				    	{
				    		avgSummary1 = x.Key;
					    }
				    }
			    }
			   	laterWeatherLabel.StringValue = Math.Round(avgTemp1, 2).ToString() + "℉" + getEmoji(avgSummary1) + avgSummary1;       
            }
			else
			{
				nowWeatherLabel.StringValue = "No current weather data";
				laterWeatherLabel.StringValue = "";
			}
		}

        public bool findPlant(string plant)
        {
            for (int i = 0; i < existingPlants.Length; i++) {
                if(plant == existingPlants[i]) {
					return true;
                }
            }
			return false;
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
				if (findPlant(id))
				{
					return;
				}
				existingPlants[inventoryCount++] = id;
				simpleView.AddSubview(viewToBeAdded());
				simpleView.Subviews.Last().AddSubview(addPlantName(name));
				simpleView.Subviews.Last().AddSubview(addPlantImage(name));
				simpleView.Subviews.Last().AddSubview(addPlantSize(size));
				//	simpleView.Subviews.Last().AddSubview(addPlantStepperTextField());
				simpleView.Subviews.Last().AddSubview(perPlantLabel());
                simpleView.Subviews.Last().AddSubview(removeButton(id));
				simpleView.Subviews.Last().AddSubview(addPlantWater(plant, size));
                layout();
			}
		}
       
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
            else if(plantSizeStepper.IntValue == 0)
            {
				plantSizeStepper.IntValue = 1;
            }
        }

        public string waterNeeded(Plant p, string size, int nowOrLater)
        {
			double result;
			double heatT = p.getHeatTolerance();
			double waterPer = p.getWaterNeededPerM3();
			int seasonF = p.getFavorableSeason();
			double amount = 0;
			double intSize;
			double temp;
			double humidity;
			double uv;
			double cloudCoverage;
			double precipProb;
			string summary;
            switch (size)
            {
                case "S":
                    intSize = 0.4;
					break;
				case "M":
					intSize = 0.85;
					break;
				case "L":
					intSize = 1.2;
					break;
				default:
					intSize = 0.5;
					break;
            }
		//	Console.WriteLine(intSize);
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
				temp = avgTemp1;
				humidity = avgHumidity1;
				uv = avgUV1;
				cloudCoverage = avgCloudCoverage1;
				precipProb = avgPrecipProb1;
				summary = avgSummary1;
			}
			/*Console.WriteLine("heatT " + heatT + "\n" +
                              "waterper " + waterPer + "\n" +
                              "seasonF " + seasonF + "\n" +
                              "temp " + temp + "\n" +
                              "humidity " + humidity + "\n" +
                              "summary " + summary + "\n" +
                              "uv " + uv + "\n" +
                              "cloud " + cloudCoverage + "\n" +
                              "precipProb" + precipProb + "\n");*/

			if (cloudCoverage > 0.6 || summary == "Overcast" || precipProb > .50 || temp <= 10)
				return "No need";
            else
            {
				result = ((1 - heatT) * (waterPer * intSize) * (temp-10) * uv) - ((humidity * 1.5) + (precipProb * 40) + (cloudCoverage * 4));
			    result = Math.Round(result, 0);
			}
            if(result < 30)
            {
				return "No need";
            }
			return result.ToString() + "mL";
        }

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
				StringValue = "Now: " + waterNeeded(p, size, 1) + "\nin 24hrs: " + waterNeeded(p, size, 2) 
			};
			return water;
        }

        private NSView addPlantName(string plantName)
        {
			double fieldWidth = plantName.Length * 9;
			Console.WriteLine(fieldWidth);
            if(fieldWidth > 110)
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
			return new NSTextField(new CGRect(0f, BOX_HEIGHT - 35f, 18f, 25f)) {
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

        private NSView addPlantStepperTextField()
        {
			NSTextField dsd = new NSTextField(new CGRect(BOX_WIDTH - 40f, BOX_HEIGHT - 35f, 30f, 25f))
			{
				MaximumNumberOfLines = 1,
				PlaceholderString = "1",
                Alignment = NSTextAlignment.Center
			};
			dsd.Changed += delegate
			{   
                if(dsd.StringValue.Length > 0)
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
				layout();
			};
			return cancelB;
        }

		private NSView viewToBeAdded() 
		{
			return new NSBox(new CGRect(0.0f, 0.0f, BOX_WIDTH, BOX_HEIGHT)) {
                BoxType = NSBoxType.NSBoxCustom,
				BorderType = NSBorderType.LineBorder,
				TitlePosition = NSTitlePosition.NoTitle
			};
		}
		
		/* This method returns a rect that is integral in base coordinates. */
		private CGRect integralRect (CGRect rect) 
		{
			return simpleView.ConvertRectFromBase(simpleView.ConvertRectToBase(rect));	
		}
		
		// Layout the sub views 
        private void layout ()
		{
			NSView[] subviews = simpleView.Subviews;
			CGPoint curPoint;
			curPoint = new CGPoint(0.0f, simpleView.Bounds.Size.Height - 150.0f);
			int viewWidth = (int)simpleView.Frame.Width;
			int viewHeight = (int)simpleView.Frame.Height;
			int rowWidth = 0;
            foreach (NSView subview in subviews)
			{
				rowWidth += (int)BOX_WIDTH + (int)SEPARATION;
            	CGRect frame = new CGRect(curPoint.X, curPoint.Y, BOX_WIDTH, BOX_HEIGHT);
                animateView(subview, frame);
                curPoint.X += (int)BOX_WIDTH + (int)SEPARATION;
				if (rowWidth + 215 >= viewWidth)
                {
					rowWidth = 0;
					curPoint.X = 0;
					curPoint.Y -= BOX_HEIGHT + SEPARATION;
				}
			}
		}
		
		// Helper method to animate the sub view
		private void animateView(NSView subView, CGRect toFrame) 
		{
#if true
			// Simple animation: assign the new value, and let CoreAnimation
			// take it from here
			
			((NSView) subView.Animator).Frame = toFrame;
#else
			//
			// Performing the animation by hand, every step of the way
			//
			var animationY = CABasicAnimation.FromKeyPath("position.y");
			animationY.To = NSNumber.FromFloat(toFrame.Y);
			animationY.AnimationStopped += delegate {
				//Console.WriteLine("animation stopped");
				subView.Layer.Frame = toFrame;
			};
			
			var animationX = CABasicAnimation.FromKeyPath("position.x");
			animationX.To = NSNumber.FromFloat(toFrame.X);
			
			animationY.AutoReverses = false;
			animationX.AutoReverses = false;
			
			animationY.RemovedOnCompletion = false;
			animationX.RemovedOnCompletion = false;
			
			animationY.FillMode = CAFillMode.Forwards;
			animationX.FillMode = CAFillMode.Forwards;
			
			subView.Layer.AddAnimation(animationX,"moveX");
			subView.Layer.AddAnimation(animationY,"moveY");
#endif
		}
	}
}


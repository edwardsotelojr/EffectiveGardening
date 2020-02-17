
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

		private const float SEPARATION = 15.0f;
		private const float BOX_WIDTH = 200.0f;
		private const float BOX_HEIGHT = 150.0f;

		public static string[] existingPlants = new string[100];
		public static List<Plant> plants = new List<Plant>()
		{
			new Plant("Arugula", 1, 1, 1),
			new Plant("Asparagus", 1, 1, 1),
			new Plant("Green Beans", 1, 1, 1),
			new Plant("Beets", 1, 1, 1),
			new Plant("Broccoli", 1, 1, 1)
		};

		public class Plant
		{
			public string name;
			public string Name { get { return name; } set { name = value; } }
			public double heatTolerance { get; set; }
			public double waterNeededPerM3 { get; set; }
			public int favorableSeason { get; set; }
			public Plant(string n, double h, double w, int f)
			{
				name = n;
				heatTolerance = h;
				waterNeededPerM3 = w;
				favorableSeason = f;
			}
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
				double avgTemp = 0;
				double avgCloudCoverage = 0;
				double avgHumidity = 0;
				double avgPrecipAccumulation = 0;
				double avgPrecipProbability = 0;
				int avgUvIndex = 0;
				string theMost = "";
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
					Console.WriteLine(r[i].Humidity);
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
					avgPrecipProbability += precipProbability[i];
					avgUvIndex += uvIndex[i];
				}
				if (sum.Count > 1)
				{
					foreach (KeyValuePair<string, int> x in sum)
					{
						if (x.Value > most)
						{
							theMost = x.Key;
						}
					}
				}
				avgTemp /= 11;
				avgCloudCoverage /= 11;
				avgHumidity /= 11;
				avgPrecipProbability /= 11;
				avgUvIndex /= 11;
    			nowWeatherLabel.StringValue = Math.Round(avgTemp, 2).ToString() + "℉" + " 🌤" + theMost;
				avgTemp = 0;
				avgCloudCoverage = 0;
				avgHumidity = 0;
				avgPrecipProbability = 0;
				avgUvIndex = 0;
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
					avgTemp += temp[i];
					avgCloudCoverage += cloudCoverage[i];
					avgHumidity += humidity[i];
					avgPrecipProbability += precipProbability[i];
					avgUvIndex += uvIndex[i];
				}
				avgTemp /= 12;
				avgCloudCoverage /= 12;
				avgHumidity /= 12;
				avgPrecipProbability /= 12;
				avgUvIndex /= 12;
				Console.WriteLine(avgUvIndex);
				most = 0;
			   	if (sum.Count >= 1)
			    {
			    	foreach (KeyValuePair<string, int> x in sum)
			    	{
				    	if (x.Value > most)
				    	{
				    		theMost = x.Key;
					    }
				    }
			    }
			   	laterWeatherLabel.StringValue = Math.Round(avgTemp, 2).ToString() + "℉" + " 🌘" + theMost;       
            }
			else
			{
				nowWeatherLabel.StringValue = "No current weather data";
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
				string plantName = plants.ElementAt((int)outletFoodSelectionComboBox.SelectedIndex).Name;

				//	if (founded() == true)
				if (findPlant(id))
				{
					return;
				}
				existingPlants[inventoryCount++] = id;
				simpleView.AddSubview(viewToBeAdded());
				simpleView.Subviews.Last().AddSubview(addPlantName(plantName));
				simpleView.Subviews.Last().AddSubview(addPlantImage(plantName));
				simpleView.Subviews.Last().AddSubview(addPlantSize(plantSize.StringValue.ToString()));
				simpleView.Subviews.Last().AddSubview(addPlantStepperTextField());
                simpleView.Subviews.Last().AddSubview(removeButton(id));
				simpleView.Subviews.Last().AddSubview(addPlantWater());
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

	   private NSView addPlantWater()
        {
			NSTextField water = new NSTextField(new CGRect(100f, 25f, 90f, 85f))
			{
                Bordered = true,
                StringValue = "dfsdfdsfsdfsdfsfsdf"
			};
			return water;
        }

        private NSView addPlantName(string plantName)
        {
			int fieldWidth = plantName.Length * 8;
			NSTextField d = new NSTextField();
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
				Image = image
			};
        }

        private NSView addPlantStepperTextField()
        {
			NSTextField dsd = new NSTextField(new CGRect(BOX_WIDTH - 40f, BOX_HEIGHT - 35f, 30f, 25f))
			{
				MaximumNumberOfLines = 1,
				PlaceholderString = "0",
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


using System;
using System.Collections.Generic;
using System.Linq;
using CoreGraphics;
using Foundation;
using AppKit;
using System.Threading.Tasks;
using Xamarin.Forms.Maps;
using DarkSky.Models;

namespace AnimatingViews
{
	public partial class AnimatingViewsWindowController : AppKit.NSWindowController
	{
		const float SEPARATION = 15.0f;
		private const float BOX_WIDTH = 200.0f;
		private const float BOX_HEIGHT = 150.0f;

		public static int inventoryCount = 0;
		public static double avgTemp = 0;
		public static double avgHumidity = 0;
		public static string avgSummary = "";
		public static int avgUV = 0;
		public static double avgCloudCoverage = 0;
		public static double avgPrecipProb = 0;
		public static double avgTempLater = 0;
		public static double avgHumidityLater = 0;
		public static string avgSummaryLater = "";
		public static int avgUVLater = 0;
		public static double avgCloudCoverageLater = 0;
        public static double avgPrecipProbLater = 0;
		public static string[] existingPlants = new string[100];
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

		public override void AwakeFromNib()
		{
			Xamarin.FormsMaps.Init();
			Geocoder geoCoder = new Geocoder();
			Task ok = GetCoordinates(geoCoder);
			outletFoodSelectionComboBox.UsesDataSource = true;
			MessageTypeDataSource ds = new MessageTypeDataSource();
			outletFoodSelectionComboBox.DataSource = ds;
			Window.DidResize += (sender, e) =>
			{
				Layout();
			};
		}

		//dropdown menu
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
				str.AddAttribute(NSStringAttributeKey.ForegroundColor, NSColor.White, range);
				str.EndEditing();
				return NSObject.FromObject(str);
			}
		}

		async Task GetCoordinates(Geocoder g)
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
					Task forecast = GetForecast((double)location.Longitude, (double)location.Latitude);
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

		
		async Task GetForecast(double longitude, double latitude)
		{
			var darkSky = new DarkSky.Services.DarkSkyService("a1c059ee2f1d05ad7900a749d26c3082");
			var forecast = await darkSky.GetForecast(latitude, longitude);
			double[] temp = new double[49];
			double[] cloudCoverage = new double[49];
			double[] humidity = new double[49];
			double[] precipProbability = new double[49];
			string[] summary = new string[49];
			int[] uvIndex = new int[49];

			if (forecast?.IsSuccessStatus == true)
			{
				List<DataPoint> r = forecast.Response.Hourly.Data;
				int time = r[10].DateTime.Hour; //10 hours from now
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
				string tenhours = time.ToString() + " " + pmoram; 
				nowLabel.StringValue = "Now to " + tenhours;
				int sixteenHoursLater = (time + 16) % 12;
				if (sixteenHoursLater == 0)
                {
					sixteenHoursLater = 12;
				}
				if (time < 6) {
					if (pmoram == "pm")
					{
						pmoram = "am";
					}
					else{
					    pmoram = "pm";
			       	}
			    }
				string later = sixteenHoursLater.ToString();
				
				laterLabel.StringValue = "From " + tenhours + " to " + later + " " + pmoram;
                int most = 0;
                Dictionary<string, int> sum = new Dictionary<string, int>();

                int i;
                for (i = 0; i < 49; i++)
                {
                    temp[i] = (double)r[i].Temperature;
                    cloudCoverage[i] = (double)r[i].CloudCover;
                    humidity[i] = (double)r[i].Humidity;
                    precipProbability[i] = (double)r[i].PrecipProbability;
                    summary[i] = r[i].Summary;
                    uvIndex[i] = (int)r[i].UvIndex;
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
				if (sum.Count >= 1)
				{
					foreach (KeyValuePair<string, int> x in sum)
					{
						if (x.Value > most)
						{
							most = x.Value;
							avgSummary = x.Key;
						}
					}
				}
				avgTemp /= 11;
				avgCloudCoverage /= 11;
				avgHumidity /= 11;
				avgPrecipProb /= 11;
				avgUV /= 11;
				if (avgSummary == "Clear")
					avgSummary = "Clear Skies";
    			nowWeatherLabel.StringValue = Math.Round(avgTemp, 2).ToString() + "℉" + GetEmoji(avgSummary) + avgSummary;
				
				sum.Clear();
				for (i = 11; i < 27; i++)
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
					avgTempLater += temp[i];
					avgCloudCoverageLater += cloudCoverage[i];
					avgHumidityLater += humidity[i];
					avgPrecipProbLater += precipProbability[i];
					avgUVLater += uvIndex[i];
				}
				avgTempLater /= 16;
				avgCloudCoverageLater /= 16;
				avgHumidityLater /= 16;
				avgPrecipProbLater /= 16;
				avgUVLater /= 16;
				most = 0;
			   	if (sum.Count >= 1)
			    {
			    	foreach (KeyValuePair<string, int> x in sum)
			    	{
				    	if (x.Value > most)
				    	{
							most = x.Value;
							avgSummaryLater = x.Key;
					    }
				    }
			    }
				if (avgSummaryLater == "Clear")
					avgSummaryLater = "Clear Skies";
				laterWeatherLabel.StringValue = Math.Round(avgTempLater, 2).ToString() + "℉" + GetEmoji(avgSummaryLater) + avgSummaryLater;       
            }
			else
			{
				nowWeatherLabel.StringValue = "No current weather data";
				laterWeatherLabel.StringValue = "";
			}
		}
        
		private NSView ViewToBeAdded() 
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
        private void Layout ()
		{
			NSView[] subviews = simpleView.Subviews;
			CGPoint curPoint;
			curPoint = new CGPoint(0.0f, simpleView.Bounds.Size.Height - 150.0f);
			int viewWidth = (int)simpleView.Frame.Width;
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



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
		private enum Layout {
			GridLayout
		}

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

			public Plant()
			{
			}
		}
        public static string [] existingPlants = new string[100];
		public static List<Plant> plants = new List<Plant>()
			{
				new Plant("Arugula", 1, 1, 1),
				new Plant("Asparagus", 1, 1, 1),
				new Plant("Green Beans", 1, 1, 1),
				new Plant("Beets", 1, 1, 1),
				new Plant("Broccoli", 1, 1, 1)
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
		class PlantStepper : NSStepper
		{
        //    public override 

		};

		public override void AwakeFromNib()
		{
			outletFoodSelectionComboBox.UsesDataSource = true;
			MessageTypeDataSource ds = new MessageTypeDataSource();
			outletFoodSelectionComboBox.DataSource = ds;
			Window.DidResize += (sender, e) =>
			{
				//Console.WriteLine(Window.ContentLayoutRect.Width);
				layout();
			};
            
		}
		const string WeatherCoordinatesUri = "http://api.openweathermap.org/data/2.5/weather?lat={0}&lon={1}&units={2}&appid=005f05b33f9c4a65b997bddb8d1ddfb8";

		private Layout layoutStyle = Layout.GridLayout;

		/* Default separation between items, and default size of added subviews. */
		private const float SEPARATION = 15.0f;
		private const float BOX_WIDTH = 200.0f;
		private const float BOX_HEIGHT = 150.0f;

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

		private Layout LayoutStyle {
			get {
				return layoutStyle;
			}

			set {
				if (layoutStyle != value) {
					layoutStyle = value;
					layout();
				}
			}
		}
        
		//strongly typed window accessor
		public new AnimatingViewsWindow Window
		{
			get { return (AnimatingViewsWindow)base.Window; }
		}

		partial void getGeoLocationButton(NSObject sender)
		{
			Xamarin.FormsMaps.Init();
			Geocoder geoCoder = new Geocoder();
			Task ok = getCoordinates(geoCoder);
		}

		async Task getForecast(double longitude, double latitude)
		{
			var darkSky = new DarkSky.Services.DarkSkyService("a1c059ee2f1d05ad7900a749d26c3082");
			var forecast = await darkSky.GetForecast(latitude, longitude);
			double [] temp = new double[49];
            double [] cloudCoverage = new double[49];
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
                if(time > 12)
                {
					time -= 12;
					pmoram = "pm";
                }
                if(time == 0)
                {
					time = 12;
                }
				tenHoursFromNow.StringValue = time.ToString() + " " + pmoram;
				tenHoursFromNow2.StringValue = time.ToString() + " " + pmoram;
                if(pmoram == "am")
                {
					pmoram = "pm";
                }
				twentyFourHoursFromNow.StringValue = time.ToString() + " " + pmoram;
				int i = 0;
               	for (i = 0; i < 49; i++)
				{
                    
					temp[i] = (double)r[i].Temperature;
					
					cloudCoverage[i] = (double)r[i].CloudCover;

					humidity[i] = (double)r[i].Humidity;
				    //precipAccumulation[i] = (double)r[i].PrecipAccumulation;

					precipProbability[i] = (double)r[i].PrecipProbability;
					summary[i] = r[i].Summary;
					uvIndex[i] = (int)r[i].UvIndex;
                    Console.WriteLine(summary[i]);
				}
				double avgTemp = 0;
				double avgCloudCoverage = 0;
				double avgHumidity = 0;
				double avgPrecipAccumulation = 0;
				double avgPrecipProbability = 0;
				int avgUvIndex = 0;
				for (i = 0; i < 11; i++)
                {
					avgTemp += temp[i];
					avgCloudCoverage += cloudCoverage[i];
					avgHumidity += humidity[i];
					avgPrecipProbability += precipProbability[i];
					avgUvIndex += uvIndex[i];
                }
                avgTemp /= 11;
				avgCloudCoverage /= 11;
				avgHumidity /= 11;
				avgPrecipProbability /= 11;
				avgUvIndex /= 11;
/*
				Console.WriteLine(avgTemp);
				Console.WriteLine(avgCloudCoverage);
				Console.WriteLine(avgHumidity);
				Console.WriteLine(avgPrecipAccumulation);
				Console.WriteLine(avgPrecipProbability);
				Console.WriteLine(avgUvIndex);
                */

				nowWeatherLabel.StringValue = Math.Round(avgTemp, 2).ToString() + "℉" + " 🌤";
				avgTemp = 0;
				avgCloudCoverage = 0;
				avgHumidity = 0;
				avgPrecipProbability = 0;
				avgUvIndex = 0;
				for (i =11; i < 23; i++)
				{
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
			    laterWeatherLabel.StringValue = Math.Round(avgTemp, 2).ToString() + "℉" + " 🌘";
			}
			else
			{
				nowWeatherLabel.StringValue = "No current weather data";
			}

		}

		async Task getCoordinates(Geocoder g)
		{
			try
			{
				var locations = await g.GetPositionsForAddressAsync("77009");
				Position location = locations.FirstOrDefault();
				if (location == null)
				{
					//GeocodePosition = "unable";
					nowWeatherLabel.StringValue = "unable";

				}
				else
				{
					Task forecast = getForecast((double)location.Longitude, (double)location.Latitude);
				//	nowWeatherLabel.StringValue = location.Longitude.ToString() + location.Latitude.ToString();
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

		// Action for Add pushbutton
		partial void addABox(NSButton sender)
		{
			if (outletFoodSelectionComboBox.StringValue != "")
			{
				string id = plantSize.StringValue + outletFoodSelectionComboBox.SelectedIndex.ToString();
			//	if (founded() == true)
				{
					 
				}
				string plantName = plants.ElementAt((int)outletFoodSelectionComboBox.SelectedIndex).Name;
				simpleView.AddSubview(viewToBeAdded());
				simpleView.Subviews.Last().AddSubview(addPlantName(plantName));
				simpleView.Subviews.Last().AddSubview(addPlantImage(plantName));
				simpleView.Subviews.Last().AddSubview(addPlantSize(plantSize.StringValue));
				simpleView.Subviews.Last().AddSubview(addPlantStepperTextField());
				Console.WriteLine(outletFoodSelectionComboBox.SelectedIndex);
				
				existingPlants.Append(id);
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
        // Action for Remove pushbutton
        partial void removeLastBox(NSButton sender)
		{
			if (simpleView.Subviews.Length == 0)
				return;

			simpleView.Subviews.Last().RemoveFromSuperview();
			layout();

		}
		public static int inventoryCount = 0;
		public int[] inventory = new int[100];
	

        private NSView addPlantName(string plantName)
        {
			int fieldWidth = plantName.Length * 8;
			return new NSTextField(new CGRect(19f, BOX_HEIGHT - 35f, (float)fieldWidth, 25.0f))
			{
				Editable = false,
                BackgroundColor = NSColor.Clear,
				StringValue = plantName
			};
        }
        private NSView addPlantSize(string plantSize)
        {
			return new NSTextField(new CGRect(0f, BOX_HEIGHT - 36f, 18f, 25f)) {
				Editable = false,
				StringValue = plantSize
            };
        }
        private NSImageView addPlantImage(string plantName)
        {
			NSImage image = NSImage.ImageNamed(plantName);
			return new NSImageView(new CGRect(0.0f, 35.0f, 80.0f, 80.0f))
			{
				Image = image
			};
        }

        private NSView addPlantStepperTextField()
        {
			NSTextField dsd = new NSTextField(new CGRect(150f, BOX_HEIGHT - 35f, 20f, 28f))
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
					dsd.StringValue = c.ToString();
				}
                
			};
			return dsd;
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
			// missing NSIntegralRect
			//return simpleView.ConvertRectFromBase(NSIntegralRect(simpleView.ConvertRectToBase(rect)));
			return simpleView.ConvertRectFromBase(simpleView.ConvertRectToBase(rect));	
		}
		
		// Layout the sub views
        
        private void layout ()
		{
			NSView[] subviews = simpleView.Subviews;
			CGPoint curPoint;

			curPoint = new CGPoint(0.0f, simpleView.Bounds.Size.Height - 150.0f);

			/*
            // square root of plants added
			int viewsPerSide = (int)Math.Ceiling(Math.Sqrt(subviews.Count()));

			// subview index 
			int idx = 0;
            
			foreach (NSView subview in subviews)
			{
				
				CGRect frame = new CGRect(curPoint.X, curPoint.Y, BOX_WIDTH, BOX_HEIGHT);
				  animateView(subview, frame);
				curPoint.X += frame.Size.Width + SEPARATION;

               
						if (++idx % viewsPerSide == 0)
						{   // go to next row
							curPoint.X = 0;
							curPoint.Y -= BOX_HEIGHT + SEPARATION;
						}
					}

    */
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


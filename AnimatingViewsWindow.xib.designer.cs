// WARNING
//
// This file has been generated automatically by Visual Studio to store outlets and
// actions made in the UI designer. If it is removed, they will be lost.
// Manual changes to this file may not be handled correctly.
//
using Foundation;
using System.CodeDom.Compiler;

namespace AnimatingViews
{
	[Register ("AnimatingViewsWindowController")]
	partial class AnimatingViewsWindowController
	{
		[Outlet]
		AppKit.NSTextField laterLabel { get; set; }

		[Outlet]
		AppKit.NSTextFieldCell laterWeatherLabel { get; set; }

		[Outlet]
		AppKit.NSTextField nowLabel { get; set; }

		[Outlet]
		AppKit.NSTextField nowWeatherLabel { get; set; }

		[Outlet]
		AppKit.NSComboBox outletFoodSelectionComboBox { get; set; }

		[Outlet]
		AppKit.NSTextField plantSize { get; set; }

		[Outlet]
		AppKit.NSStepper plantSizeStepper { get; set; }

		[Outlet]
		AppKit.NSView simpleView { get; set; }

		[Outlet]
		AppKit.NSTextField tenHoursFromNow2 { get; set; }

		[Action ("addABox:")]
		partial void addABox (AppKit.NSButton sender);

		[Action ("sizeTicker:")]
		partial void sizeTicker (Foundation.NSObject sender);
		
		void ReleaseDesignerOutlets ()
		{
			if (laterWeatherLabel != null) {
				laterWeatherLabel.Dispose ();
				laterWeatherLabel = null;
			}

			if (nowWeatherLabel != null) {
				nowWeatherLabel.Dispose ();
				nowWeatherLabel = null;
			}

			if (outletFoodSelectionComboBox != null) {
				outletFoodSelectionComboBox.Dispose ();
				outletFoodSelectionComboBox = null;
			}

			if (plantSize != null) {
				plantSize.Dispose ();
				plantSize = null;
			}

			if (plantSizeStepper != null) {
				plantSizeStepper.Dispose ();
				plantSizeStepper = null;
			}

			if (simpleView != null) {
				simpleView.Dispose ();
				simpleView = null;
			}

			if (tenHoursFromNow2 != null) {
				tenHoursFromNow2.Dispose ();
				tenHoursFromNow2 = null;
			}

			if (nowLabel != null) {
				nowLabel.Dispose ();
				nowLabel = null;
			}

			if (laterLabel != null) {
				laterLabel.Dispose ();
				laterLabel = null;
			}
		}
	}

	[Register ("AnimatingViewsWindow")]
	partial class AnimatingViewsWindow
	{
		[Outlet]
		AppKit.NSView simpleLayoutView { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (simpleLayoutView != null) {
				simpleLayoutView.Dispose ();
				simpleLayoutView = null;
			}
		}
	}
}

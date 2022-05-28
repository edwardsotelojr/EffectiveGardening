using System;
using CoreGraphics;
using Foundation;
using AppKit;
using ObjCRuntime;

namespace AnimatingViews
{
	public partial class AppDelegate : NSApplicationDelegate
	{
		AnimatingViewsWindowController AnimatingViewsWindowController;

		public AppDelegate ()
		{
		}

		public override void DidFinishLaunching (NSNotification notification)
		{
			AnimatingViewsWindowController = new AnimatingViewsWindowController();
			AnimatingViewsWindowController.Window.MakeKeyAndOrderFront (this);
		}
		
		public override bool ApplicationShouldTerminateAfterLastWindowClosed (NSApplication sender)
		{
			return true;
		}
	}
}


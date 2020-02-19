// WARNING
// This file has been generated automatically by Visual Studio to
// mirror C# types. Changes in this file made by drag-connecting
// from the UI designer will be synchronized back to C#, but
// more complex manual changes may not transfer correctly.


#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>


@interface AnimatingViewsWindowController : NSWindowController {
	NSTextFieldCell *_laterWeatherLabel;
	NSTextField *_nowWeatherLabel;
	NSComboBox *_outletFoodSelectionComboBox;
	NSTextField *_plantSize;
	NSStepper *_plantSizeStepper;
	NSView *_simpleView;
	NSTextField *_tenHoursFromNow;
	NSTextField *_tenHoursFromNow2;
	NSTextField *_twentyFourHoursFromNow;
}

@property (nonatomic, retain) IBOutlet NSTextFieldCell *laterWeatherLabel;

@property (nonatomic, retain) IBOutlet NSTextField *nowWeatherLabel;

@property (nonatomic, retain) IBOutlet NSComboBox *outletFoodSelectionComboBox;

@property (nonatomic, retain) IBOutlet NSTextField *plantSize;

@property (nonatomic, retain) IBOutlet NSStepper *plantSizeStepper;

@property (nonatomic, retain) IBOutlet NSView *simpleView;

@property (nonatomic, retain) IBOutlet NSTextField *tenHoursFromNow;

@property (nonatomic, retain) IBOutlet NSTextField *tenHoursFromNow2;

@property (nonatomic, retain) IBOutlet NSTextField *twentyFourHoursFromNow;

- (IBAction)addABox:(NSButton *)sender;

- (IBAction)sizeTicker:(id)sender;

@end

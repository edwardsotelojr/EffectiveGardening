#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#pragma clang diagnostic ignored "-Wunguarded-availability-new"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <SoundAnalysis/SoundAnalysis.h>
#import <SafariServices/SafariServices.h>
#import <AppKit/AppKit.h>
#import <Speech/Speech.h>
#import <QuickLookThumbnailing/QuickLookThumbnailing.h>
#import <Quartz/Quartz.h>
#import <QuartzCore/QuartzCore.h>
#import <PushKit/PushKit.h>
#import <PencilKit/PencilKit.h>
#import <PhotosUI/PhotosUI.h>
#import <NotificationCenter/NotificationCenter.h>
#import <MediaLibrary/MediaLibrary.h>
#import <LinkPresentation/LinkPresentation.h>
#import <ImageCaptureCore/ImageCaptureCore.h>
#import <FileProviderUI/FileProviderUI.h>
#import <ExecutionPolicy/ExecutionPolicy.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <ContactsUI/ContactsUI.h>
#import <CoreAudioKit/CoreAudioKit.h>
#import <AdSupport/AdSupport.h>
#import <Quartz/Quartz.h>
#import <CoreMIDI/CoreMIDI.h>
#import <Accounts/Accounts.h>
#import <Vision/Vision.h>
#import <VideoSubscriberAccount/VideoSubscriberAccount.h>
#import <UserNotifications/UserNotifications.h>
#import <StoreKit/StoreKit.h>
#import <Social/Social.h>
#import <ScriptingBridge/ScriptingBridge.h>
#import <Quartz/Quartz.h>
#import <Photos/Photos.h>
#import <Quartz/Quartz.h>
#import <NetworkExtension/NetworkExtension.h>
#import <NaturalLanguage/NaturalLanguage.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <ModelIO/ModelIO.h>
#import <MetalPerformanceShaders/MetalPerformanceShaders.h>
#import <MetalKit/MetalKit.h>
#import <Metal/Metal.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <iTunesLibrary/iTunesLibrary.h>
#import <IOSurface/IOSurfaceObjC.h>
#import <Intents/Intents.h>
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED 1
#import <GLKit/GLKit.h>
#import <GameplayKit/GameplayKit.h>
#import <GameController/GameController.h>
#import <EventKit/EventKit.h>
#import <CoreWlan/CoreWlan.h>
#import <CoreSpotlight/CoreSpotlight.h>
#import <CoreMotion/CoreMotion.h>
#import <CoreImage/CoreImage.h>
#import <CoreImage/CIFilterBuiltins.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Contacts/Contacts.h>
#import <CloudKit/CloudKit.h>
#import <BusinessChat/BusinessChat.h>
#import <AudioUnit/AudioUnit.h>
#import <SpriteKit/SpriteKit.h>
#import <SceneKit/SceneKit.h>
#import <GameKit/GameKit.h>
#import <WebKit/WebKit.h>
#import <CoreML/CoreML.h>
#import <CoreData/CoreData.h>
#import <IOBluetooth/IOBluetooth.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <AVKit/AVKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AuthenticationServices/AuthenticationServices.h>
#import <LocalAuthentication/LocalAuthentication.h>
#import <DeviceCheck/DeviceCheck.h>
#import <FinderSync/FinderSync.h>

@class SFSpeechRecognitionTaskDelegate;
@class SFSpeechRecognizerDelegate;
@class PKPushRegistryDelegate;
@class PHLivePhotoViewDelegate;
@class PHProjectTypeDescriptionDataSource;
@class NCWidgetListViewDelegate;
@class NCWidgetProviding;
@class NCWidgetSearchViewDelegate;
@class Xamarin_Mac__ImageCaptureCore_ICCameraDeviceDelegate;
@class Xamarin_Mac__ImageCaptureCore_ICCameraDeviceDownloadDelegate;
@class Xamarin_Mac__ImageCaptureCore_ICDeviceBrowserDelegate;
@class Xamarin_Mac__ImageCaptureCore_ICDeviceDelegate;
@class Xamarin_Mac__ImageCaptureCore_ICScannerDeviceDelegate;
@class EAAccessoryDelegate;
@class CNContactPickerDelegate;
@class IKCameraDeviceViewDelegate;
@class IKDeviceBrowserViewDelegate;
@class IKFilterCustomUIProvider;
@protocol IKImageBrowserDataSource;
@class IKImageBrowserDataSource;
@protocol IKImageBrowserDelegate;
@class IKImageBrowserDelegate;
@protocol IKImageBrowserItem;
@class IKImageBrowserItem;
@class IKImageEditPanelDataSource;
@protocol IKSaveOptionsDelegate;
@class IKSaveOptionsDelegate;
@class IKScannerDeviceViewDelegate;
@class IKSlideshowDataSource;
@class VSAccountManagerDelegate;
@class UNUserNotificationCenterDelegate;
@class SKPaymentTransactionObserver;
@class Xamarin_Mac__StoreKit_SKPaymentQueueDelegate;
@class SKRequestDelegate;
@class SKProductsRequestDelegate;
@class SBApplicationDelegate;
@class QLPreviewItem;
@class QLPreviewPanelDataSource;
@class QLPreviewPanelDelegate;
@class PHPhotoLibraryChangeObserver;
@class PDFDocumentDelegate;
@class PDFViewDelegate;
@class NWTCPConnectionAuthenticationDelegate;
@class MCAdvertiserAssistantDelegate;
@class MCBrowserViewControllerDelegate;
@class MCNearbyServiceAdvertiserDelegate;
@class MCNearbyServiceBrowserDelegate;
@class MCSessionDelegate;
@class MDLLightProbeIrradianceDataSource;
@class Xamarin_Mac__MetalPerformanceShaders_MPSCnnBatchNormalizationDataSource;
@class MPSCNNConvolutionDataSource;
@class Xamarin_Mac__MetalPerformanceShaders_MPSCnnInstanceNormalizationDataSource;
@class MTKViewDelegate;
@class Xamarin_Mac__Metal_MTLCaptureScope;
@class MTLDrawable;
@class MKAnnotation;
@class MKLocalSearchCompleterDelegate;
@class MKMapViewDelegate;
@class MKOverlay;
@class Xamarin_Mac__JavaScriptCore_JSExport;
@class GLKNamedEffect;
@class GKAgentDelegate;
@class CWEventDelegate;
@class CSSearchableIndexDelegate;
@class CLLocationManagerDelegate;
@class CoreImage_CICmykHalftone;
@class CoreImage_CICMYKHalftone;
@class CoreImage_CIAccordionFoldTransition;
@class CoreImage_CICompositingFilter;
@class CoreImage_CIAdditionCompositing;
@class CoreImage_CIAffineFilter;
@class CoreImage_CIAffineClamp;
@class CoreImage_CIAffineTile;
@class CoreImage_CIAffineTransform;
@class CoreImage_CIReductionFilter;
@class CoreImage_CIAreaAverage;
@class CoreImage_CIAreaHistogram;
@class CoreImage_CIAreaMaximum;
@class CoreImage_CIAreaMaximumAlpha;
@class CoreImage_CIAreaMinimum;
@class CoreImage_CIAreaMinimumAlpha;
@class CoreImage_CIAreaMinMax;
@class CoreImage_CIAreaMinMaxRed;
@class CoreImage_CIImageGenerator;
@class CoreImage_CIAttributedTextImageGenerator;
@class CoreImage_CICodeGenerator;
@class CoreImage_CIAztecCodeGenerator;
@class CoreImage_CIBarcodeGenerator;
@class CoreImage_CITransitionFilter;
@class CoreImage_CIBarsSwipeTransition;
@class CoreImage_CIBicubicScaleTransform;
@class CoreImage_CIBlendFilter;
@class CoreImage_CIBlendWithMask;
@class CoreImage_CIBlendWithAlphaMask;
@class CoreImage_CIBlendWithBlueMask;
@class CoreImage_CIBlendWithRedMask;
@class CoreImage_CIBloom;
@class CoreImage_CILinearBlur;
@class CoreImage_CIBokehBlur;
@class CoreImage_CIBoxBlur;
@class CoreImage_CIDistortionFilter;
@class CoreImage_CIBumpDistortion;
@class CoreImage_CIBumpDistortionLinear;
@class CoreImage_CICameraCalibrationLensCorrection;
@class CoreImage_CICheckerboardGenerator;
@class CoreImage_CICircleSplashDistortion;
@class CoreImage_CIScreenFilter;
@class CoreImage_CICircularScreen;
@class CoreImage_CICircularWrap;
@class CoreImage_CIClamp;
@class CoreImage_CICode128BarcodeGenerator;
@class CoreImage_CIColorBlendMode;
@class CoreImage_CIColorBurnBlendMode;
@class CoreImage_CIColorClamp;
@class CoreImage_CIColorControls;
@class CoreImage_CIColorCrossPolynomial;
@class CoreImage_CIColorCube;
@class CoreImage_CIColorCubesMixedWithMask;
@class CoreImage_CIColorCubeWithColorSpace;
@class CoreImage_CIColorCurves;
@class CoreImage_CIColorDodgeBlendMode;
@class CoreImage_CIColorInvert;
@class CoreImage_CIColorMap;
@class CoreImage_CIColorMatrix;
@class CoreImage_CIColorMonochrome;
@class CoreImage_CIColorPolynomial;
@class CoreImage_CIColorPosterize;
@class CoreImage_CIColumnAverage;
@class CoreImage_CIComicEffect;
@class CoreImage_CIConstantColorGenerator;
@class CoreImage_CIConvolutionCore;
@class CoreImage_CIConvolution3X3;
@class CoreImage_CIConvolution5X5;
@class CoreImage_CIConvolution7X7;
@class CoreImage_CIConvolution9Horizontal;
@class CoreImage_CIConvolution9Vertical;
@class CoreImage_CICopyMachineTransition;
@class CoreImage_CICoreMLModelFilter;
@class CoreImage_CICrop;
@class CoreImage_CICrystallize;
@class CoreImage_CIDarkenBlendMode;
@class CoreImage_CIDepthBlurEffect;
@class CoreImage_CIDepthDisparityConverter;
@class CoreImage_CIDepthOfField;
@class CoreImage_CIDepthToDisparity;
@class CoreImage_CIDifferenceBlendMode;
@class CoreImage_CIDiscBlur;
@class CoreImage_CIDisintegrateWithMaskTransition;
@class CoreImage_CIDisparityToDepth;
@class CoreImage_CIDisplacementDistortion;
@class CoreImage_CIDissolveTransition;
@class CoreImage_CIDither;
@class CoreImage_CIDivideBlendMode;
@class CoreImage_CIDocumentEnhancer;
@class CoreImage_CIDotScreen;
@class CoreImage_CIDroste;
@class CoreImage_CIEdgePreserveUpsampleFilter;
@class CoreImage_CIEdges;
@class CoreImage_CIEdgeWork;
@class CoreImage_CITileFilter;
@class CoreImage_CIEightfoldReflectedTile;
@class CoreImage_CIExclusionBlendMode;
@class CoreImage_CIExposureAdjust;
@class CoreImage_CIFaceBalance;
@class CoreImage_CIFalseColor;
@class CoreImage_CIFlashTransition;
@class CoreImage_CIFourfoldReflectedTile;
@class CoreImage_CIFourfoldRotatedTile;
@class CoreImage_CIFourfoldTranslatedTile;
@class CoreImage_CIGaborGradients;
@class CoreImage_CIGammaAdjust;
@class CoreImage_CIGaussianBlur;
@class CoreImage_CIGaussianGradient;
@class CoreImage_CIGlassDistortion;
@class CoreImage_CIGlassLozenge;
@class CoreImage_CIGlideReflectedTile;
@class CoreImage_CIGloom;
@class CoreImage_CIGuidedFilter;
@class CoreImage_CIHardLightBlendMode;
@class CoreImage_CIHatchedScreen;
@class CoreImage_CIHeightFieldFromMask;
@class CoreImage_CIHexagonalPixellate;
@class CoreImage_CIHighlightShadowAdjust;
@class CoreImage_CIHistogramDisplayFilter;
@class CoreImage_CIHoleDistortion;
@class CoreImage_CIHueAdjust;
@class CoreImage_CIHueBlendMode;
@class CoreImage_CIHueSaturationValueGradient;
@protocol CIImageProvider;
@class CoreImage_CIKaleidoscope;
@class CoreImage_CIKeystoneCorrection;
@class CoreImage_CIKeystoneCorrectionCombined;
@class CoreImage_CIKeystoneCorrectionHorizontal;
@class CoreImage_CIKeystoneCorrectionVertical;
@class CoreImage_CIKMeans;
@class CoreImage_CILabDeltaE;
@class CoreImage_CILanczosScaleTransform;
@class CoreImage_CILenticularHaloGenerator;
@class CoreImage_CILightenBlendMode;
@class CoreImage_CILightTunnel;
@class CoreImage_CILinearBurnBlendMode;
@class CoreImage_CILinearDodgeBlendMode;
@class CoreImage_CILinearGradient;
@class CoreImage_CILinearToSRGBToneCurve;
@class CoreImage_CILineOverlay;
@class CoreImage_CILineScreen;
@class CoreImage_CILuminosityBlendMode;
@class CoreImage_CIMaskedVariableBlur;
@class CoreImage_CIMaskToAlpha;
@class CoreImage_CIMaximumComponent;
@class CoreImage_CIMaximumCompositing;
@class CoreImage_CIMedianFilter;
@class CoreImage_CIMeshGenerator;
@class CoreImage_CIMinimumComponent;
@class CoreImage_CIMinimumCompositing;
@class CoreImage_CIMix;
@class CoreImage_CIModTransition;
@class CoreImage_CIMorphology;
@class CoreImage_CIMorphologyGradient;
@class CoreImage_CIMorphologyMaximum;
@class CoreImage_CIMorphologyMinimum;
@class CoreImage_CIMorphologyRectangle;
@class CoreImage_CIMorphologyRectangleMaximum;
@class CoreImage_CIMorphologyRectangleMinimum;
@class CoreImage_CIMotionBlur;
@class CoreImage_CIMultiplyBlendMode;
@class CoreImage_CIMultiplyCompositing;
@class CoreImage_CINinePartStretched;
@class CoreImage_CINinePartTiled;
@class CoreImage_CINoiseReduction;
@class CoreImage_CIOpTile;
@class CoreImage_CIOverlayBlendMode;
@class CoreImage_CIPageCurlTransition;
@class CoreImage_CIPageCurlWithShadowTransition;
@class CoreImage_CIPaletteCentroid;
@class CoreImage_CIPalettize;
@class CoreImage_CIParallelogramTile;
@class CoreImage_CIPdf417BarcodeGenerator;
@class CoreImage_CIPerspectiveTransform;
@class CoreImage_CIPerspectiveCorrection;
@class CoreImage_CIPerspectiveRotate;
@class CoreImage_CIPerspectiveTile;
@class CoreImage_CIPerspectiveTransformWithExtent;
@class CoreImage_CIPhotoEffect;
@class CoreImage_CIPhotoEffectChrome;
@class CoreImage_CIPhotoEffectFade;
@class CoreImage_CIPhotoEffectInstant;
@class CoreImage_CIPhotoEffectMono;
@class CoreImage_CIPhotoEffectNoir;
@class CoreImage_CIPhotoEffectProcess;
@class CoreImage_CIPhotoEffectTonal;
@class CoreImage_CIPhotoEffectTransfer;
@class CoreImage_CIPinchDistortion;
@class CoreImage_CIPinLightBlendMode;
@class CoreImage_CIPixellate;
@class CoreImage_CIPointillize;
@class CoreImage_CIQRCodeGenerator;
@class CoreImage_CIRadialGradient;
@class CoreImage_CIRandomGenerator;
@class CoreImage_CIRippleTransition;
@class CoreImage_CIRoundedRectangleGenerator;
@class CoreImage_CIRowAverage;
@class CoreImage_CISaliencyMapFilter;
@class CoreImage_CISampleNearest;
@class CoreImage_CISaturationBlendMode;
@class CoreImage_CIScreenBlendMode;
@class CoreImage_CISepiaTone;
@class CoreImage_CIShadedMaterial;
@class CoreImage_CISharpenLuminance;
@class CoreImage_CISixfoldReflectedTile;
@class CoreImage_CISixfoldRotatedTile;
@class CoreImage_CISmoothLinearGradient;
@class CoreImage_CISoftLightBlendMode;
@class CoreImage_CISourceAtopCompositing;
@class CoreImage_CISourceInCompositing;
@class CoreImage_CISourceOutCompositing;
@class CoreImage_CISourceOverCompositing;
@class CoreImage_CISpotColor;
@class CoreImage_CISpotLight;
@class CoreImage_CISRGBToneCurveToLinear;
@class CoreImage_CIStarShineGenerator;
@class CoreImage_CIStraightenFilter;
@class CoreImage_CIStretchCrop;
@class CoreImage_CIStripesGenerator;
@class CoreImage_CISubtractBlendMode;
@class CoreImage_CISunbeamsGenerator;
@class CoreImage_CISwipeTransition;
@class CoreImage_CITemperatureAndTint;
@class CoreImage_CITextImageGenerator;
@class CoreImage_CIThermal;
@class CoreImage_CIToneCurve;
@class CoreImage_CITorusLensDistortion;
@class CoreImage_CITriangleKaleidoscope;
@class CoreImage_CITriangleTile;
@class CoreImage_CITwelvefoldReflectedTile;
@class CoreImage_CITwirlDistortion;
@class CoreImage_CIUnsharpMask;
@class CoreImage_CIVibrance;
@class CoreImage_CIVignette;
@class CoreImage_CIVignetteEffect;
@class CoreImage_CIVortexDistortion;
@class CoreImage_CIWhitePointAdjust;
@class CoreImage_CIXRay;
@class CoreImage_CIZoomBlur;
@class CALayerDelegate;
@class CAAnimationDelegate;
@class CAMediaTiming;
@class CKRecordValue;
@class SKPhysicsContactDelegate;
@class SKSceneDelegate;
@class SKViewDelegate;
@class SCNAnimatable;
@class SCNSceneRenderer;
@class SCNActionable;
@class SCNAvoidOccluderConstraintDelegate;
@class SCNBoundingVolume;
@class SCNCameraControllerDelegate;
@class SCNNodeRendererDelegate;
@class SCNPhysicsContactDelegate;
@class SCNProgramDelegate;
@class SCNSceneExportDelegate;
@class SCNSceneRendererDelegate;
@class SCNShadable;
@class SCNTechniqueSupport;
@class GKAchievementViewControllerDelegate;
@class GKChallengeEventHandlerDelegate;
@class GKChallengeListener;
@class GKChallengesViewControllerDelegate;
@class GKFriendRequestComposeViewControllerDelegate;
@class GKGameCenterControllerDelegate;
@class GKInviteEventListener;
@class GKLeaderboardViewControllerDelegate;
@class GKLocalPlayerListener;
@class GKMatchDelegate;
@class GKMatchmakerViewControllerDelegate;
@class GKSavedGameListener;
@class GKSessionDelegate;
@class GKTurnBasedEventHandlerDelegate;
@class GKTurnBasedEventListener;
@class GKTurnBasedMatchmakerViewControllerDelegate;
@class WebPolicyDelegate;
@class DOMEventListener;
@class DOMEventTarget;
@class Xamarin_Mac__WebKit_DomNodeFilter;
@class WebDocumentRepresentation;
@class WebDownloadDelegate;
@class WebFrameLoadDelegate;
@class Xamarin_Mac__WebKit_WebOpenPanelResultListener;
@class Xamarin_Mac__WebKit_WebPolicyDecisionListener;
@class WebResourceLoadDelegate;
@class WebUIDelegate;
@class WKNavigationDelegate;
@class WKScriptMessageHandler;
@class WKUIDelegate;
@protocol NSMenuValidation;
@class __monomac_internal_ActionDispatcher;
@class __MonoMac_NSAlertDidEndDispatcher;
@class NSApplicationDelegate;
@class NSSharingServiceDelegate;
@class NSCollectionViewDelegate;
@class NSCollectionViewDelegateFlowLayout;
@class NSAccessibilityCustomRotorItemSearchDelegate;
@class NSAlertDelegate;
@class NSAlignmentFeedbackToken;
@class NSAnimationDelegate;
@class NSAppearanceCustomization;
@class NSBrowserDelegate;
@class NSCandidateListTouchBarItemDelegate;
@class NSCloudSharingServiceDelegate;
@class NSCollectionViewDataSource;
@class NSCollectionViewElement;
@class NSComboBoxCellDataSource;
@class NSComboBoxDataSource;
@class NSTextFieldDelegate;
@class NSComboBoxDelegate;
@class NSControlTextEditingDelegate;
@class NSDatePickerCellDelegate;
@class NSDockTilePlugIn;
@class NSDraggingDestination;
@class NSDraggingSource;
@class NSDrawerDelegate;
@class NSFilePromiseProviderDelegate;
@class NSGestureRecognizerDelegate;
@class NSHapticFeedbackPerformer;
@class NSImageDelegate;
@protocol NSLayerDelegateContentsScaleUpdating;
@class NSLayoutManagerDelegate;
@class NSMatrixDelegate;
@class NSMenuDelegate;
@class NSOpenSavePanelDelegate;
@class NSOutlineViewDataSource;
@class NSOutlineViewDelegate;
@class NSPageControllerDelegate;
@class NSPasteboardItemDataProvider;
@class NSPasteboardReading;
@class NSPasteboardWriting;
@class NSPathCellDelegate;
@class NSPathControlDelegate;
@class NSPopoverDelegate;
@class NSPrintPanelAccessorizing;
@class NSRuleEditorDelegate;
@class NSScrubberDataSource;
@class NSScrubberDelegate;
@class NSScrubberFlowLayoutDelegate;
@class NSSearchFieldDelegate;
@class NSSeguePerforming;
@class NSSharingServicePickerDelegate;
@class Xamarin_Mac__AppKit_NSSharingServicePickerToolbarItemDelegate;
@class NSSharingServicePickerTouchBarItemDelegate;
@class NSSoundDelegate;
@class NSSpeechRecognizerDelegate;
@class NSSpeechSynthesizerDelegate;
@class NSSplitViewDelegate;
@class NSSpringLoadingDestination;
@class NSStackViewDelegate;
@class NSTableViewDataSource;
@class NSTableViewDelegate;
@class NSTableViewSource;
@class NSTabViewDelegate;
@class NSTextAttachmentContainer;
@class NSTextDelegate;
@class NSTextFinderBarContainer;
@class NSTextFinderClient;
@class NSTextInputClient;
@class NSTextStorageDelegate;
@class NSTextViewDelegate;
@class NSTokenFieldCellDelegate;
@class NSTokenFieldDelegate;
@class NSToolbarDelegate;
@protocol NSToolTipOwner;
@class NSTouchBarDelegate;
@class NSViewControllerPresentationAnimator;
@class NSWindowDelegate;
@class NSWindowRestoration;
@class Xamarin_Mac__CoreML_MLCustomModel;
@class CBCentralManagerDelegate;
@class CBPeripheralDelegate;
@class CBPeripheralManagerDelegate;
@class AVCaptureViewDelegate;
@class AVPictureInPictureControllerDelegate;
@class Xamarin_Mac__AVKit_AVPlayerViewPictureInPictureDelegate;
@class AVRoutePickerViewDelegate;
@class AVFoundation_AVCaptureDataOutputSynchronizer;
@class AVFoundation_AVCaptureDataOutputSynchronizerDelegate;
@class AVCaptureAudioDataOutputSampleBufferDelegate;
@class AVAudioPlayerDelegate;
@class AVFoundation_InternalAVAudioPlayerDelegate;
@class AVAudioRecorderDelegate;
@class AVFoundation_InternalAVAudioRecorderDelegate;
@class AVAssetResourceLoaderDelegate;
@class AVAsynchronousKeyValueLoading;
@class AVAudio3DMixing;
@class AVAudioStereoMixing;
@class AVCaptureFileOutputDelegate;
@class AVCaptureFileOutputRecordingDelegate;
@class AVCapturePhotoCaptureDelegate;
@class AVCaptureVideoDataOutputSampleBufferDelegate;
@class AVContentKeySessionDelegate;
@class AVPlayerItemOutputPushDelegate;
@class AVPlayerItemLegibleOutputPushDelegate;
@class AVPlayerItemMetadataCollectorPushDelegate;
@class AVPlayerItemMetadataOutputPushDelegate;
@class AVPlayerItemOutputPullDelegate;
@class AVSpeechSynthesizerDelegate;
@class AVVideoCompositing;
@class Xamarin_Mac__AuthenticationServices_ASAuthorizationControllerDelegate;
@class Xamarin_Mac__AuthenticationServices_ASWebAuthenticationSessionRequestDelegate;
@class NSFileManagerDelegate;
@class Foundation_InternalNSNotificationHandler;
@class Foundation_NSUrlProtocolClient;
@class Foundation_NSDispatcher;
@class __MonoMac_NSActionDispatcher;
@class __MonoMac_NSSynchronizationContextDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class Foundation_NSAsyncDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class __MonoMac_NSAsyncSynchronizationContextDispatcher;
@class NSCacheDelegate;
@class NSCoding;
@class NSConnectionDelegate;
@class NSCopying;
@class NSExtensionRequestHandling;
@class NSFilePresenter;
@class NSKeyedArchiverDelegate;
@class NSKeyedUnarchiverDelegate;
@class NSPortDelegate;
@class NSMachPortDelegate;
@class NSMetadataQueryDelegate;
@class NSMutableCopying;
@class NSNetServiceBrowserDelegate;
@class NSNetServiceDelegate;
@class NSStreamDelegate;
@class NSURLAuthenticationChallengeSender;
@class NSURLConnectionDelegate;
@class NSURLConnectionDataDelegate;
@class NSURLConnectionDownloadDelegate;
@class NSUrlDownloadDelegate;
@class NSURLSessionDelegate;
@class NSURLSessionTaskDelegate;
@class NSURLSessionDataDelegate;
@class NSURLSessionDownloadDelegate;
@class NSURLSessionStreamDelegate;
@class Xamarin_Mac__Foundation_NSUrlSessionWebSocketDelegate;
@class NSUserActivityDelegate;
@class NSUserNotificationCenterDelegate;
@class NotificationCenter_NCWidgetListViewController__NCWidgetListViewDelegate;
@class NotificationCenter_NCWidgetSearchViewController__NCWidgetSearchViewDelegate;
@class ExternalAccessory_EAAccessory__EAAccessoryDelegate;
@class ImageKit_IKCameraDeviceView__IKCameraDeviceViewDelegate;
@class ImageKit_IKDeviceBrowserView__IKDeviceBrowserViewDelegate;
@class ImageKit_IKImageBrowserView__IKImageBrowserDelegate;
@class ImageKit_IKSaveOptions__IKSaveOptionsDelegate;
@class ImageKit_IKScannerDeviceView__IKScannerDeviceViewDelegate;
@class StoreKit_SKRequest__SKRequestDelegate;
@class StoreKit_SKProductsRequest__SKProductsRequestDelegate;
@class ScriptingBridge_SBApplication__SBApplicationDelegate;
@class PdfKit_PdfView__PdfViewDelegate;
@class PdfKit_PdfDocument__PdfDocumentDelegate;
@class MapKit_MKMapView__MKMapViewDelegate;
@class CoreLocation_CLLocationManager__CLLocationManagerDelegate;
@class CoreAnimation_CAAnimation__CAAnimationDelegate;
@class SpriteKit_SKPhysicsWorld__SKPhysicsContactDelegate;
@class SceneKit_SCNPhysicsWorld__SCNPhysicsContactDelegate;
@class GameKit_GKMatch__GKMatchDelegate;
@class GameKit_GKGameCenterViewController__GKGameCenterControllerDelegate;
@class GameKit_GKAchievementViewController__GKAchievementViewControllerDelegate;
@class GameKit_GKChallengeEventHandler__GKChallengeEventHandlerDelegate;
@class GameKit_GKFriendRequestComposeViewController__GKFriendRequestComposeViewControllerDelegate;
@class GameKit_GKLeaderboardViewController__GKLeaderboardViewControllerDelegate;
@class GameKit_GKMatchmakerViewController__GKMatchmakerViewControllerDelegate;
@class WebKit_DomNode_DomNodeEventProxy;
@class WebKit_DomNode_DomNodeEventProxy2;
@class WebKit_WebView__WebFrameLoadDelegate;
@class WebKit_WebView__WebDownloadDelegate;
@class WebKit_WebView__WebResourceLoadDelegate;
@class WebKit_WebView__WebUIDelegate;
@class WebKit_WebView__WebPolicyDelegate;
@class AppKit_NSApplication__NSApplicationDelegate;
@class AppKit_NSMatrix__NSMatrixDelegate;
@class AppKit_NSPathCell__NSPathCellDelegate;
@class AppKit_NSTableView__NSTableViewDelegate;
@class AppKit_NSAlert__NSAlertDelegate;
@class AppKit_NSTextField__NSTextFieldDelegate;
@class AppKit_NSComboBox__NSComboBoxDelegate;
@class __NSDocumentDuplicateCallback;
@class __NSGestureRecognizerToken;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class AppKit_NSGestureRecognizer__NSGestureRecognizerDelegate;
@class __NSClickGestureRecognizer;
@class __NSMagnificationGestureRecognizer;
@class __NSPanGestureRecognizer;
@class __NSPressGestureRecognizer;
@class __NSRotationGestureRecognizer;
@class AppKit_NSImage__NSImageDelegate;
@class AppKit_NSSharingService__NSSharingServiceDelegate;
@class AppKit_NSSound__NSSoundDelegate;
@class AppKit_NSTextStorage__NSTextStorageDelegate;
@class AppKit_NSWindow__NSWindowDelegate;
@class AppKit_NSAnimation__NSAnimationDelegate;
@class AppKit_NSDatePicker__NSDatePickerCellDelegate;
@class AppKit_NSDatePickerCell__NSDatePickerCellDelegate;
@class AppKit_NSDrawer__NSDrawerDelegate;
@class AppKit_NSPageController__NSPageControllerDelegate;
@class AppKit_NSRuleEditor__NSRuleEditorDelegate;
@class AppKit_NSSavePanel__NSOpenSavePanelDelegate;
@class AppKit_NSSearchField__NSSearchFieldDelegate;
@class AppKit_NSSharingServicePicker__NSSharingServicePickerDelegate;
@class AppKit_NSTabView__NSTabViewDelegate;
@class AppKit_NSText__NSTextDelegate;
@class AppKit_NSTextView__NSTextViewDelegate;
@class AppKit_NSToolbar__NSToolbarDelegate;
@class AppKit_NSTouchBar__NSTouchBarDelegate;
@class CoreBluetooth_CBCentralManager__CBCentralManagerDelegate;
@class CoreBluetooth_CBPeripheralManager__CBPeripheralManagerDelegate;
@class CoreBluetooth_CBPeripheral__CBPeripheralDelegate;
@class AVFoundation_AVCaptureFileOutput_recordingProxy;
@class AVFoundation_AVSpeechSynthesizer__AVSpeechSynthesizerDelegate;
@class Foundation_NSUrlSessionHandler_WrappedNSInputStream;
@class Foundation_NSNetService__NSNetServiceDelegate;
@class Foundation_NSKeyedArchiver__NSKeyedArchiverDelegate;
@class Foundation_NSKeyedUnarchiver__NSKeyedUnarchiverDelegate;
@class Foundation_NSStream__NSStreamDelegate;
@class Foundation_NSThread_ActionThread;
@class __NSObject_Disposer;
@class __XamarinObjectObserver;
@class Foundation_NSCache__NSCacheDelegate;
@class Foundation_NSMetadataQuery__NSMetadataQueryDelegate;
@class Foundation_NSNetServiceBrowser__NSNetServiceBrowserDelegate;
@class Foundation_NSUserNotificationCenter__NSUserNotificationCenterDelegate;
@class Foundation_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;
@class Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1;
@class Xamarin_Forms_Platform_MacOS_ViewRenderer_2;
@class Xamarin_Forms_Platform_MacOS_ViewRenderer;
@class Xamarin_Forms_Maps_MacOS_MapRenderer;
@class Xamarin_Forms_Platform_macOS_Controls_FormsBoxView;
@class Xamarin_Forms_Platform_macOS_Controls_FormsNSSlider;
@class Xamarin_Forms_Platform_MacOS_FormsNSDatePicker;
@class Xamarin_Forms_Platform_MacOS_FormsApplicationDelegate;
@class Xamarin_Forms_Platform_MacOS_PlatformRenderer;
@class Xamarin_Forms_Platform_MacOS_FlippedClipView;
@class Xamarin_Forms_Platform_MacOS_PageRenderer;
@class Xamarin_Forms_Platform_MacOS_DefaultRenderer;
@class Xamarin_Forms_Platform_MacOS_BoxViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ScrollViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ActivityIndicatorRenderer;
@class Xamarin_Forms_Platform_MacOS_DatePickerRenderer;
@class Xamarin_Forms_Platform_MacOS_FrameRenderer;
@class Xamarin_Forms_Platform_MacOS_FormsNSImageView;
@class Xamarin_Forms_Platform_MacOS_OpenGLViewRenderer;
@class Xamarin_Forms_Platform_MacOS_MacOSOpenGLView;
@class Xamarin_Forms_Platform_MacOS_PickerRenderer;
@class Xamarin_Forms_Platform_MacOS_ProgressBarRenderer;
@class Xamarin_Forms_Platform_MacOS_SearchBarRenderer;
@class Xamarin_Forms_Platform_MacOS_SliderRenderer;
@class Xamarin_Forms_Platform_MacOS_StepperRenderer;
@class Xamarin_Forms_Platform_MacOS_CheckBoxRenderer;
@class Xamarin_Forms_Platform_MacOS_SwitchRenderer;
@class Xamarin_Forms_Platform_MacOS_TimePickerRenderer;
@class Xamarin_Forms_Platform_MacOS_CellNSView;
@class Xamarin_Forms_Platform_MacOS_TrackingClickNSView;
@class Xamarin_Forms_Platform_MacOS_ViewCellNSView;
@class Xamarin_Forms_Platform_MacOS_ListViewDataSource;
@class Xamarin_Forms_Platform_MacOS_CustomNSTableHeaderView;
@class Xamarin_Forms_Platform_MacOS_FormsPageControllerDelegate;
@class Xamarin_Forms_Platform_MacOS_NavigationChildPageWrapper;
@class Xamarin_Forms_Platform_MacOS_NativeViewPropertyListener;
@class Xamarin_Forms_Platform_MacOS_LayoutRenderer;
@class Xamarin_Forms_Platform_MacOS_NSPageContainer;
@class Xamarin_Forms_Platform_MacOS_PageControllerDelegate;
@class Xamarin_Forms_Platform_MacOS_TableViewRenderer;
@class Xamarin_Forms_Platform_MacOS_TableViewDataSource;
@class Xamarin_Forms_Platform_MacOS_UnEvenTableViewModelRenderer;
@class Xamarin_Forms_Platform_MacOS_VerticallyCenteredTextFieldCell;
@class Xamarin_Forms_Platform_MacOS_NativeViewWrapperRenderer;
@class Xamarin_Forms_Platform_MacOS_LabelRenderer;
@class Xamarin_Forms_Platform_MacOS_ButtonRenderer;
@class Xamarin_Forms_Platform_MacOS_EntryRenderer_FormsNSTextField;
@class Xamarin_Forms_Platform_MacOS_EntryRenderer;
@class Xamarin_Forms_Platform_MacOS_EditorRenderer;
@class Xamarin_Forms_Platform_MacOS_ImageRenderer;
@class Xamarin_Forms_Platform_MacOS_WebViewRenderer_FormsWebFrameDelegate;
@class Xamarin_Forms_Platform_MacOS_WebViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ListViewRenderer_FormsNSTableView;
@class Xamarin_Forms_Platform_MacOS_ListViewRenderer;
@class CarouselPageRenderer;
@class Xamarin_Forms_Platform_MacOS_MasterDetailPageRenderer_ViewControllerWrapper;
@class Xamarin_Forms_Platform_MacOS_MasterDetailPageRenderer;
@class Xamarin_Forms_Platform_MacOS_TabbedPageRenderer;
@class Xamarin_Forms_Platform_MacOS_NavigationPageRenderer;
@class Xamarin_Forms_Platform_MacOS_NativeToolbarTracker_ToolBarItemNSButton;
@class Xamarin_Forms_Platform_MacOS_NativeToolbarTracker;
@class Xamarin_Forms_Platform_MacOS_ButtonRenderer_FormsNSButton_FormsNSButtonCell;
@class Xamarin_Forms_Platform_MacOS_ButtonRenderer_FormsNSButton;
@class AppDelegate;
@class AnimatingViewsWindow;
@class AnimatingViews_AnimatingViewsWindowController_MessageTypeDataSource;
@class AnimatingViewsWindowController;

@interface SFSpeechRecognitionTaskDelegate : NSObject<SFSpeechRecognitionTaskDelegate> {
}
	-(id) init;
@end

@interface SFSpeechRecognizerDelegate : NSObject<SFSpeechRecognizerDelegate> {
}
	-(id) init;
@end

@interface PKPushRegistryDelegate : NSObject<PKPushRegistryDelegate> {
}
	-(id) init;
@end

@interface PHLivePhotoViewDelegate : NSObject<PHLivePhotoViewDelegate> {
}
	-(id) init;
@end

@interface PHProjectTypeDescriptionDataSource : NSObject<PHProjectTypeDescriptionDataSource> {
}
	-(id) init;
@end

@interface NCWidgetListViewDelegate : NSObject<NCWidgetListViewDelegate> {
}
	-(id) init;
@end

@interface NCWidgetProviding : NSObject<NCWidgetProviding> {
}
	-(id) init;
@end

@interface NCWidgetSearchViewDelegate : NSObject<NCWidgetSearchViewDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__ImageCaptureCore_ICCameraDeviceDelegate : NSObject<ICCameraDeviceDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__ImageCaptureCore_ICCameraDeviceDownloadDelegate : NSObject<ICCameraDeviceDownloadDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__ImageCaptureCore_ICDeviceBrowserDelegate : NSObject<ICDeviceBrowserDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__ImageCaptureCore_ICDeviceDelegate : NSObject<ICDeviceDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__ImageCaptureCore_ICScannerDeviceDelegate : NSObject<ICScannerDeviceDelegate> {
}
	-(id) init;
@end

@interface EAAccessoryDelegate : NSObject<EAAccessoryDelegate> {
}
	-(id) init;
@end

@interface CNContactPickerDelegate : NSObject<CNContactPickerDelegate> {
}
	-(id) init;
@end

@interface IKCameraDeviceViewDelegate : NSObject<IKCameraDeviceViewDelegate> {
}
	-(id) init;
@end

@interface IKDeviceBrowserViewDelegate : NSObject<IKDeviceBrowserViewDelegate> {
}
	-(id) init;
@end

@interface IKFilterCustomUIProvider : NSObject<IKFilterCustomUIProvider> {
}
	-(id) init;
@end

@protocol IKImageBrowserDataSource
	@required -(NSInteger) numberOfItemsInImageBrowser:(IKImageBrowserView *)p0;
	@required -(id) imageBrowser:(IKImageBrowserView *)p0 itemAtIndex:(NSInteger)p1;
@end

@interface IKImageBrowserDataSource : NSObject {
}
	-(id) init;
@end

@protocol IKImageBrowserDelegate
@end

@interface IKImageBrowserDelegate : NSObject {
}
	-(id) init;
@end

@protocol IKImageBrowserItem
	@required -(NSString *) imageUID;
	@required -(NSString *) imageRepresentationType;
	@required -(NSObject *) imageRepresentation;
@end

@interface IKImageBrowserItem : NSObject {
}
	-(id) init;
@end

@interface IKImageEditPanelDataSource : NSObject<IKImageEditPanelDataSource> {
}
	-(id) init;
@end

@protocol IKSaveOptionsDelegate
@end

@interface IKSaveOptionsDelegate : NSObject {
}
	-(id) init;
@end

@interface IKScannerDeviceViewDelegate : NSObject<IKScannerDeviceViewDelegate> {
}
	-(id) init;
@end

@interface IKSlideshowDataSource : NSObject<IKSlideshowDataSource> {
}
	-(id) init;
@end

@interface VSAccountManagerDelegate : NSObject<VSAccountManagerDelegate> {
}
	-(id) init;
@end

@interface UNUserNotificationCenterDelegate : NSObject<UNUserNotificationCenterDelegate> {
}
	-(id) init;
@end

@interface SKPaymentTransactionObserver : NSObject<SKPaymentTransactionObserver> {
}
	-(id) init;
@end

@interface Xamarin_Mac__StoreKit_SKPaymentQueueDelegate : NSObject<SKPaymentQueueDelegate> {
}
	-(id) init;
@end

@interface SKRequestDelegate : NSObject<SKRequestDelegate> {
}
	-(id) init;
@end

@interface SKProductsRequestDelegate : NSObject<SKProductsRequestDelegate, SKRequestDelegate> {
}
	-(id) init;
@end

@interface SBApplicationDelegate : NSObject<SBApplicationDelegate> {
}
	-(id) init;
@end

@interface QLPreviewItem : NSObject<QLPreviewItem> {
}
	-(id) init;
@end

@interface QLPreviewPanelDataSource : NSObject<QLPreviewPanelDataSource> {
}
	-(id) init;
@end

@interface QLPreviewPanelDelegate : NSObject<QLPreviewPanelDelegate> {
}
	-(id) init;
@end

@interface PHPhotoLibraryChangeObserver : NSObject<PHPhotoLibraryChangeObserver> {
}
	-(id) init;
@end

@interface PDFDocumentDelegate : NSObject<PDFDocumentDelegate> {
}
	-(id) init;
@end

@interface PDFViewDelegate : NSObject<PDFViewDelegate> {
}
	-(id) init;
@end

@interface NWTCPConnectionAuthenticationDelegate : NSObject<NWTCPConnectionAuthenticationDelegate> {
}
	-(id) init;
@end

@interface MCAdvertiserAssistantDelegate : NSObject<MCAdvertiserAssistantDelegate> {
}
	-(id) init;
@end

@interface MCBrowserViewControllerDelegate : NSObject<MCBrowserViewControllerDelegate> {
}
	-(id) init;
@end

@interface MCNearbyServiceAdvertiserDelegate : NSObject<MCNearbyServiceAdvertiserDelegate> {
}
	-(id) init;
@end

@interface MCNearbyServiceBrowserDelegate : NSObject<MCNearbyServiceBrowserDelegate> {
}
	-(id) init;
@end

@interface MCSessionDelegate : NSObject<MCSessionDelegate> {
}
	-(id) init;
@end

@interface MDLLightProbeIrradianceDataSource : NSObject<MDLLightProbeIrradianceDataSource> {
}
	-(id) init;
@end

@interface Xamarin_Mac__MetalPerformanceShaders_MPSCnnBatchNormalizationDataSource : NSObject<MPSCNNBatchNormalizationDataSource> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface MPSCNNConvolutionDataSource : NSObject<MPSCNNConvolutionDataSource> {
}
	-(id) init;
@end

@interface Xamarin_Mac__MetalPerformanceShaders_MPSCnnInstanceNormalizationDataSource : NSObject<MPSCNNInstanceNormalizationDataSource> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface MTKViewDelegate : NSObject<MTKViewDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__Metal_MTLCaptureScope : NSObject<MTLCaptureScope> {
}
	-(id) init;
@end

@interface MTLDrawable : NSObject<MTLDrawable> {
}
	-(id) init;
@end

@interface MKAnnotation : NSObject<MKAnnotation> {
}
	-(id) init;
@end

@interface MKLocalSearchCompleterDelegate : NSObject<MKLocalSearchCompleterDelegate> {
}
	-(id) init;
@end

@interface MKMapViewDelegate : NSObject<MKMapViewDelegate> {
}
	-(id) init;
@end

@interface MKOverlay : NSObject<MKOverlay, MKAnnotation> {
}
	-(id) init;
@end

@interface Xamarin_Mac__JavaScriptCore_JSExport : NSObject<JSExport> {
}
	-(id) init;
@end

@interface GLKNamedEffect : NSObject<GLKNamedEffect> {
}
	-(id) init;
@end

@interface GKAgentDelegate : NSObject<GKAgentDelegate> {
}
	-(id) init;
@end

@interface CWEventDelegate : NSObject<CWEventDelegate> {
}
	-(id) init;
@end

@interface CSSearchableIndexDelegate : NSObject<CSSearchableIndexDelegate> {
}
	-(id) init;
@end

@interface CLLocationManagerDelegate : NSObject<CLLocationManagerDelegate> {
}
	-(id) init;
@end

@interface CoreImage_CICmykHalftone : CIFilter<CICMYKHalftone> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(float) grayComponentReplacement;
	-(void) setGrayComponentReplacement:(float)p0;
	-(float) underColorRemoval;
	-(void) setUnderColorRemoval:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICMYKHalftone : CoreImage_CICmykHalftone<CICMYKHalftone> {
}
	-(id) init;
@end

@interface CoreImage_CIAccordionFoldTransition : CIFilter<CIAccordionFoldTransition> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(float) bottomHeight;
	-(void) setBottomHeight:(float)p0;
	-(float) numberOfFolds;
	-(void) setNumberOfFolds:(float)p0;
	-(float) foldShadowAmount;
	-(void) setFoldShadowAmount:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICompositingFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAdditionCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineFilter : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineClamp : CoreImage_CIAffineFilter<CIAffineClamp, CIFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGAffineTransform) transform;
	-(void) setTransform:(CGAffineTransform)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTile : CoreImage_CIAffineFilter<CIAffineTile, CIFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGAffineTransform) transform;
	-(void) setTransform:(CGAffineTransform)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTransform : CoreImage_CIAffineFilter<CIFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIReductionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaAverage : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaHistogram : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximum : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximumAlpha : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimum : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimumAlpha : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMax : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMaxRed : CoreImage_CIAreaMaximum {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIImageGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAttributedTextImageGenerator : CoreImage_CIImageGenerator<CIAttributedTextImageGenerator> {
}
	-(NSAttributedString *) text;
	-(void) setText:(NSAttributedString *)p0;
	-(float) scaleFactor;
	-(void) setScaleFactor:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICodeGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAztecCodeGenerator : CoreImage_CICodeGenerator<CIAztecCodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(float) correctionLevel;
	-(void) setCorrectionLevel:(float)p0;
	-(float) layers;
	-(void) setLayers:(float)p0;
	-(float) compactStyle;
	-(void) setCompactStyle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarcodeGenerator : CIFilter<CIBarcodeGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIBarcodeDescriptor *) barcodeDescriptor;
	-(void) setBarcodeDescriptor:(CIBarcodeDescriptor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITransitionFilter : CIFilter<CITransitionFilter> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarsSwipeTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBicubicScaleTransform : CIFilter<CIBicubicScaleTransform> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(float) aspectRatio;
	-(void) setAspectRatio:(float)p0;
	-(float) parameterB;
	-(void) setParameterB:(float)p0;
	-(float) parameterC;
	-(void) setParameterC:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithMask : CoreImage_CIBlendFilter<CIBlendWithMask> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) backgroundImage;
	-(void) setBackgroundImage:(CIImage *)p0;
	-(CIImage *) maskImage;
	-(void) setMaskImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithAlphaMask : CoreImage_CIBlendWithMask<CIBlendWithMask> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithBlueMask : CoreImage_CIBlendWithMask<CIBlendWithMask> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithRedMask : CoreImage_CIBlendWithMask<CIBlendWithMask> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBloom : CIFilter<CIBloom> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBokehBlur : CoreImage_CILinearBlur<CIBokehBlur> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) ringAmount;
	-(void) setRingAmount:(float)p0;
	-(float) ringSize;
	-(void) setRingSize:(float)p0;
	-(float) softness;
	-(void) setSoftness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBoxBlur : CIFilter<CIBoxBlur> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDistortionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortionLinear : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICameraCalibrationLensCorrection : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICheckerboardGenerator : CIFilter<CICheckerboardGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircleSplashDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularScreen : CoreImage_CIScreenFilter<CICircularScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularWrap : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIClamp : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICode128BarcodeGenerator : CoreImage_CICodeGenerator<CICode128BarcodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(float) quietSpace;
	-(void) setQuietSpace:(float)p0;
	-(float) barcodeHeight;
	-(void) setBarcodeHeight:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorClamp : CIFilter<CIColorClamp> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) minComponents;
	-(void) setMinComponents:(CIVector *)p0;
	-(CIVector *) maxComponents;
	-(void) setMaxComponents:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorControls : CIFilter<CIColorControls> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) saturation;
	-(void) setSaturation:(float)p0;
	-(float) brightness;
	-(void) setBrightness:(float)p0;
	-(float) contrast;
	-(void) setContrast:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCrossPolynomial : CIFilter<CIColorCrossPolynomial> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) redCoefficients;
	-(void) setRedCoefficients:(CIVector *)p0;
	-(CIVector *) greenCoefficients;
	-(void) setGreenCoefficients:(CIVector *)p0;
	-(CIVector *) blueCoefficients;
	-(void) setBlueCoefficients:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCube : CIFilter<CIColorCube> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) cubeDimension;
	-(void) setCubeDimension:(float)p0;
	-(NSData *) cubeData;
	-(void) setCubeData:(NSData *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubesMixedWithMask : CIFilter<CIColorCubesMixedWithMask> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) maskImage;
	-(void) setMaskImage:(CIImage *)p0;
	-(float) cubeDimension;
	-(void) setCubeDimension:(float)p0;
	-(NSData *) cube0Data;
	-(void) setCube0Data:(NSData *)p0;
	-(NSData *) cube1Data;
	-(void) setCube1Data:(NSData *)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubeWithColorSpace : CoreImage_CIColorCube<CIColorCubeWithColorSpace, CIColorCube> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) cubeDimension;
	-(void) setCubeDimension:(float)p0;
	-(NSData *) cubeData;
	-(void) setCubeData:(NSData *)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCurves : CIFilter<CIColorCurves> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(NSData *) curvesData;
	-(void) setCurvesData:(NSData *)p0;
	-(CIVector *) curvesDomain;
	-(void) setCurvesDomain:(CIVector *)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorInvert : CIFilter<CIColorInvert> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMap : CIFilter<CIColorMap> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) gradientImage;
	-(void) setGradientImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMatrix : CIFilter<CIColorMatrix> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) RVector;
	-(void) setRVector:(CIVector *)p0;
	-(CIVector *) GVector;
	-(void) setGVector:(CIVector *)p0;
	-(CIVector *) BVector;
	-(void) setBVector:(CIVector *)p0;
	-(CIVector *) AVector;
	-(void) setAVector:(CIVector *)p0;
	-(CIVector *) biasVector;
	-(void) setBiasVector:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMonochrome : CIFilter<CIColorMonochrome> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPolynomial : CoreImage_CIColorCrossPolynomial<CIColorPolynomial, CIColorCrossPolynomial> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) redCoefficients;
	-(void) setRedCoefficients:(CIVector *)p0;
	-(CIVector *) greenCoefficients;
	-(void) setGreenCoefficients:(CIVector *)p0;
	-(CIVector *) blueCoefficients;
	-(void) setBlueCoefficients:(CIVector *)p0;
	-(CIVector *) alphaCoefficients;
	-(void) setAlphaCoefficients:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPosterize : CIFilter<CIColorPosterize> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) levels;
	-(void) setLevels:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColumnAverage : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIComicEffect : CIFilter<CIComicEffect> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConstantColorGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionCore : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution3X3 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution5X5 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution7X7 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Horizontal : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Vertical : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICopyMachineTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICoreMLModelFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrystallize : CIFilter<CICrystallize> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDarkenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthBlurEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthDisparityConverter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthOfField : CIFilter<CIDepthOfField> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(float) saturation;
	-(void) setSaturation:(float)p0;
	-(float) unsharpMaskRadius;
	-(void) setUnsharpMaskRadius:(float)p0;
	-(float) unsharpMaskIntensity;
	-(void) setUnsharpMaskIntensity:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthToDisparity : CoreImage_CIDepthDisparityConverter<CIDepthToDisparity> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDifferenceBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDiscBlur : CIFilter<CIDiscBlur> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisintegrateWithMaskTransition : CoreImage_CITransitionFilter<CIDisintegrateWithMaskTransition, CITransitionFilter> {
}
	-(CIImage *) maskImage;
	-(void) setMaskImage:(CIImage *)p0;
	-(float) shadowRadius;
	-(void) setShadowRadius:(float)p0;
	-(float) shadowDensity;
	-(void) setShadowDensity:(float)p0;
	-(CGPoint) shadowOffset;
	-(void) setShadowOffset:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisparityToDepth : CoreImage_CIDepthDisparityConverter<CIDisparityToDepth> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisplacementDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDissolveTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDither : CIFilter<CIDither> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDivideBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDocumentEnhancer : CIFilter<CIDocumentEnhancer> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDotScreen : CoreImage_CIScreenFilter<CIDotScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDroste : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgePreserveUpsampleFilter : CIFilter<CIEdgePreserveUpsample> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) smallImage;
	-(void) setSmallImage:(CIImage *)p0;
	-(float) spatialSigma;
	-(void) setSpatialSigma:(float)p0;
	-(float) lumaSigma;
	-(void) setLumaSigma:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdges : CIFilter<CIEdges> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgeWork : CIFilter<CIEdgeWork> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITileFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEightfoldReflectedTile : CoreImage_CITileFilter<CIEightfoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExclusionBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExposureAdjust : CIFilter<CIExposureAdjust> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) EV;
	-(void) setEV:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFaceBalance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFalseColor : CIFilter<CIFalseColor> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFlashTransition : CoreImage_CITransitionFilter<CIFlashTransition, CITransitionFilter> {
}
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) maxStriationRadius;
	-(void) setMaxStriationRadius:(float)p0;
	-(float) striationStrength;
	-(void) setStriationStrength:(float)p0;
	-(float) striationContrast;
	-(void) setStriationContrast:(float)p0;
	-(float) fadeThreshold;
	-(void) setFadeThreshold:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldReflectedTile : CoreImage_CITileFilter<CIFourfoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) acuteAngle;
	-(void) setAcuteAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldRotatedTile : CoreImage_CITileFilter<CIFourfoldRotatedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldTranslatedTile : CoreImage_CITileFilter<CIFourfoldTranslatedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) acuteAngle;
	-(void) setAcuteAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaborGradients : CIFilter<CIGaborGradients> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGammaAdjust : CIFilter<CIGammaAdjust> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) power;
	-(void) setPower:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianBlur : CIFilter<CIGaussianBlur> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianGradient : CIFilter<CIGaussianGradient> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassLozenge : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlideReflectedTile : CoreImage_CITileFilter<CIGlideReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGloom : CIFilter<CIGloom> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGuidedFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHardLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHatchedScreen : CoreImage_CIScreenFilter<CIHatchedScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHeightFieldFromMask : CIFilter<CIHeightFieldFromMask> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHexagonalPixellate : CIFilter<CIHexagonalPixellate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHighlightShadowAdjust : CIFilter<CIHighlightShadowAdjust> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) shadowAmount;
	-(void) setShadowAmount:(float)p0;
	-(float) highlightAmount;
	-(void) setHighlightAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHistogramDisplayFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHoleDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueAdjust : CIFilter<CIHueAdjust> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueSaturationValueGradient : CIFilter<CIHueSaturationValueGradient> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(float) value;
	-(void) setValue:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) softness;
	-(void) setSoftness:(float)p0;
	-(float) dither;
	-(void) setDither:(float)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@protocol CIImageProvider
	@required -(void) provideImageData:(void *)p0 bytesPerRow:(NSUInteger)p1 origin:(NSUInteger)p2 :(NSUInteger)p3 size:(NSUInteger)p4 :(NSUInteger)p5 userInfo:(NSObject *)p6;
@end

@interface CoreImage_CIKaleidoscope : CIFilter<CIKaleidoscope> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(NSInteger) count;
	-(void) setCount:(NSInteger)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrection : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrectionCombined : CoreImage_CIKeystoneCorrection<CIKeystoneCorrectionCombined> {
}
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrectionHorizontal : CoreImage_CIKeystoneCorrection<CIKeystoneCorrectionHorizontal> {
}
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrectionVertical : CoreImage_CIKeystoneCorrection<CIKeystoneCorrectionVertical> {
}
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKMeans : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILabDeltaE : CIFilter<CILabDeltaE> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) image2;
	-(void) setImage2:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILanczosScaleTransform : CIFilter<CILanczosScaleTransform> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(float) aspectRatio;
	-(void) setAspectRatio:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILenticularHaloGenerator : CIFilter<CILenticularHaloGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) haloRadius;
	-(void) setHaloRadius:(float)p0;
	-(float) haloWidth;
	-(void) setHaloWidth:(float)p0;
	-(float) haloOverlap;
	-(void) setHaloOverlap:(float)p0;
	-(float) striationStrength;
	-(void) setStriationStrength:(float)p0;
	-(float) striationContrast;
	-(void) setStriationContrast:(float)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightTunnel : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearGradient : CIFilter<CILinearGradient> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearToSRGBToneCurve : CIFilter<CILinearToSRGBToneCurve> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineOverlay : CIFilter<CILineOverlay> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) NRNoiseLevel;
	-(void) setNRNoiseLevel:(float)p0;
	-(float) NRSharpness;
	-(void) setNRSharpness:(float)p0;
	-(float) edgeIntensity;
	-(void) setEdgeIntensity:(float)p0;
	-(float) threshold;
	-(void) setThreshold:(float)p0;
	-(float) contrast;
	-(void) setContrast:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineScreen : CoreImage_CIScreenFilter<CILineScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILuminosityBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskedVariableBlur : CIFilter<CIMaskedVariableBlur> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) mask;
	-(void) setMask:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskToAlpha : CIFilter<CIMaskToAlpha> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumComponent : CIFilter<CIMaximumComponent> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMedianFilter : CIFilter<CIMedian> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMeshGenerator : CIFilter<CIMeshGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(NSArray *) mesh;
	-(void) setMesh:(NSArray *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumComponent : CIFilter<CIMinimumComponent> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMix : CIFilter<CIMix> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) backgroundImage;
	-(void) setBackgroundImage:(CIImage *)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIModTransition : CoreImage_CITransitionFilter<CIModTransition, CITransitionFilter> {
}
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) compression;
	-(void) setCompression:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphology : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyGradient : CoreImage_CIMorphology<CIMorphologyGradient> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMaximum : CoreImage_CIMorphology<CIMorphologyMaximum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMinimum : CoreImage_CIMorphology<CIMorphologyMinimum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyRectangle : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyRectangleMaximum : CoreImage_CIMorphologyRectangle<CIMorphologyRectangleMaximum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) height;
	-(void) setHeight:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyRectangleMinimum : CoreImage_CIMorphologyRectangle<CIMorphologyRectangleMinimum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) height;
	-(void) setHeight:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMotionBlur : CoreImage_CILinearBlur<CIMotionBlur> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartStretched : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartTiled : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINoiseReduction : CIFilter<CINoiseReduction> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) noiseLevel;
	-(void) setNoiseLevel:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOpTile : CoreImage_CITileFilter<CIOpTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOverlayBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlTransition : CoreImage_CITransitionFilter<CIPageCurlTransition, CITransitionFilter> {
}
	-(CIImage *) backsideImage;
	-(void) setBacksideImage:(CIImage *)p0;
	-(CIImage *) shadingImage;
	-(void) setShadingImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlWithShadowTransition : CIFilter<CIPageCurlWithShadowTransition> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) backsideImage;
	-(void) setBacksideImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) shadowSize;
	-(void) setShadowSize:(float)p0;
	-(float) shadowAmount;
	-(void) setShadowAmount:(float)p0;
	-(CGRect) shadowExtent;
	-(void) setShadowExtent:(CGRect)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPaletteCentroid : CIFilter<CIPaletteCentroid> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) paletteImage;
	-(void) setPaletteImage:(CIImage *)p0;
	-(BOOL) perceptual;
	-(void) setPerceptual:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPalettize : CIFilter<CIPalettize> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) paletteImage;
	-(void) setPaletteImage:(CIImage *)p0;
	-(BOOL) perceptual;
	-(void) setPerceptual:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIParallelogramTile : CoreImage_CITileFilter<CIParallelogramTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) acuteAngle;
	-(void) setAcuteAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPdf417BarcodeGenerator : CoreImage_CICodeGenerator<CIPDF417BarcodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(float) minWidth;
	-(void) setMinWidth:(float)p0;
	-(float) maxWidth;
	-(void) setMaxWidth:(float)p0;
	-(float) minHeight;
	-(void) setMinHeight:(float)p0;
	-(float) maxHeight;
	-(void) setMaxHeight:(float)p0;
	-(float) dataColumns;
	-(void) setDataColumns:(float)p0;
	-(float) rows;
	-(void) setRows:(float)p0;
	-(float) preferredAspectRatio;
	-(void) setPreferredAspectRatio:(float)p0;
	-(float) compactionMode;
	-(void) setCompactionMode:(float)p0;
	-(float) compactStyle;
	-(void) setCompactStyle:(float)p0;
	-(float) correctionLevel;
	-(void) setCorrectionLevel:(float)p0;
	-(float) alwaysSpecifyCompaction;
	-(void) setAlwaysSpecifyCompaction:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransform : CIFilter<CIPerspectiveTransform> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveCorrection : CoreImage_CIPerspectiveTransform<CIPerspectiveCorrection, CIPerspectiveTransform> {
}
	-(BOOL) crop;
	-(void) setCrop:(BOOL)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveRotate : CIFilter<CIPerspectiveRotate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(float) pitch;
	-(void) setPitch:(float)p0;
	-(float) yaw;
	-(void) setYaw:(float)p0;
	-(float) roll;
	-(void) setRoll:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTile : CIFilter<CIPerspectiveTile> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransformWithExtent : CoreImage_CIPerspectiveTransform<CIPerspectiveTransformWithExtent, CIPerspectiveTransform> {
}
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffect : CIFilter<CIPhotoEffect> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectChrome : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectFade : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectInstant : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectMono : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectNoir : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectProcess : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTonal : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTransfer : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinchDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPixellate : CIFilter<CIPixellate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPointillize : CIFilter<CIPointillize> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIQRCodeGenerator : CoreImage_CICodeGenerator<CIQRCodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(NSString *) correctionLevel;
	-(void) setCorrectionLevel:(NSString *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRadialGradient : CIFilter<CIRadialGradient> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius0;
	-(void) setRadius0:(float)p0;
	-(float) radius1;
	-(void) setRadius1:(float)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRandomGenerator : CIFilter<CIRandomGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRippleTransition : CoreImage_CITransitionFilter<CIRippleTransition, CITransitionFilter> {
}
	-(CIImage *) shadingImage;
	-(void) setShadingImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRoundedRectangleGenerator : CIFilter<CIRoundedRectangleGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRowAverage : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaliencyMapFilter : CIFilter<CISaliencyMap> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISampleNearest : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaturationBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISepiaTone : CIFilter<CISepiaTone> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIShadedMaterial : CIFilter<CIShadedMaterial> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) shadingImage;
	-(void) setShadingImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISharpenLuminance : CIFilter<CISharpenLuminance> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldReflectedTile : CoreImage_CITileFilter<CISixfoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldRotatedTile : CoreImage_CITileFilter<CISixfoldRotatedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISmoothLinearGradient : CoreImage_CILinearGradient<CISmoothLinearGradient, CILinearGradient> {
}
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISoftLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceAtopCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceInCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOutCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOverCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotColor : CIFilter<CISpotColor> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) centerColor1;
	-(void) setCenterColor1:(CIColor *)p0;
	-(CIColor *) replacementColor1;
	-(void) setReplacementColor1:(CIColor *)p0;
	-(float) closeness1;
	-(void) setCloseness1:(float)p0;
	-(float) contrast1;
	-(void) setContrast1:(float)p0;
	-(CIColor *) centerColor2;
	-(void) setCenterColor2:(CIColor *)p0;
	-(CIColor *) replacementColor2;
	-(void) setReplacementColor2:(CIColor *)p0;
	-(float) closeness2;
	-(void) setCloseness2:(float)p0;
	-(float) contrast2;
	-(void) setContrast2:(float)p0;
	-(CIColor *) centerColor3;
	-(void) setCenterColor3:(CIColor *)p0;
	-(CIColor *) replacementColor3;
	-(void) setReplacementColor3:(CIColor *)p0;
	-(float) closeness3;
	-(void) setCloseness3:(float)p0;
	-(float) contrast3;
	-(void) setContrast3:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotLight : CIFilter<CISpotLight> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) lightPosition;
	-(void) setLightPosition:(CIVector *)p0;
	-(CIVector *) lightPointsAt;
	-(void) setLightPointsAt:(CIVector *)p0;
	-(float) brightness;
	-(void) setBrightness:(float)p0;
	-(float) concentration;
	-(void) setConcentration:(float)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISRGBToneCurveToLinear : CIFilter<CISRGBToneCurveToLinear> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStarShineGenerator : CIFilter<CIStarShineGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) crossScale;
	-(void) setCrossScale:(float)p0;
	-(float) crossAngle;
	-(void) setCrossAngle:(float)p0;
	-(float) crossOpacity;
	-(void) setCrossOpacity:(float)p0;
	-(float) crossWidth;
	-(void) setCrossWidth:(float)p0;
	-(float) epsilon;
	-(void) setEpsilon:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStraightenFilter : CIFilter<CIStraighten> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStretchCrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStripesGenerator : CIFilter<CIStripesGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISubtractBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISunbeamsGenerator : CIFilter<CISunbeamsGenerator> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) sunRadius;
	-(void) setSunRadius:(float)p0;
	-(float) maxStriationRadius;
	-(void) setMaxStriationRadius:(float)p0;
	-(float) striationStrength;
	-(void) setStriationStrength:(float)p0;
	-(float) striationContrast;
	-(void) setStriationContrast:(float)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISwipeTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITemperatureAndTint : CIFilter<CITemperatureAndTint> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) neutral;
	-(void) setNeutral:(CIVector *)p0;
	-(CIVector *) targetNeutral;
	-(void) setTargetNeutral:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITextImageGenerator : CoreImage_CIImageGenerator<CITextImageGenerator> {
}
	-(NSString *) text;
	-(void) setText:(NSString *)p0;
	-(NSString *) fontName;
	-(void) setFontName:(NSString *)p0;
	-(float) fontSize;
	-(void) setFontSize:(float)p0;
	-(float) scaleFactor;
	-(void) setScaleFactor:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIThermal : CIFilter<CIThermal> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIToneCurve : CIFilter<CIToneCurve> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(CGPoint) point2;
	-(void) setPoint2:(CGPoint)p0;
	-(CGPoint) point3;
	-(void) setPoint3:(CGPoint)p0;
	-(CGPoint) point4;
	-(void) setPoint4:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITorusLensDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleKaleidoscope : CIFilter<CITriangleKaleidoscope> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point;
	-(void) setPoint:(CGPoint)p0;
	-(float) size;
	-(void) setSize:(float)p0;
	-(float) rotation;
	-(void) setRotation:(float)p0;
	-(float) decay;
	-(void) setDecay:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleTile : CoreImage_CITileFilter<CITriangleTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwelvefoldReflectedTile : CoreImage_CITileFilter<CITwelvefoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwirlDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIUnsharpMask : CIFilter<CIUnsharpMask> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVibrance : CIFilter<CIVibrance> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignette : CIFilter<CIVignette> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignetteEffect : CIFilter<CIVignetteEffect> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(float) falloff;
	-(void) setFalloff:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVortexDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIWhitePointAdjust : CIFilter<CIWhitePointAdjust> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIXRay : CIFilter<CIXRay> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIZoomBlur : CIFilter<CIZoomBlur> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CALayerDelegate : NSObject<CALayerDelegate> {
}
	-(id) init;
@end

@interface CAAnimationDelegate : NSObject<CAAnimationDelegate> {
}
	-(id) init;
@end

@interface CAMediaTiming : NSObject<CAMediaTiming> {
}
	-(id) init;
@end

@interface CKRecordValue : NSObject<CKRecordValue> {
}
	-(id) init;
@end

@interface SKPhysicsContactDelegate : NSObject<SKPhysicsContactDelegate> {
}
	-(id) init;
@end

@interface SKSceneDelegate : NSObject<SKSceneDelegate> {
}
	-(id) init;
@end

@interface SKViewDelegate : NSObject<SKViewDelegate> {
}
	-(id) init;
@end

@interface SCNAnimatable : NSObject<SCNAnimatable> {
}
	-(id) init;
@end

@interface SCNSceneRenderer : NSObject<SCNSceneRenderer> {
}
	-(id) init;
@end

@interface SCNActionable : NSObject<SCNActionable> {
}
	-(id) init;
@end

@interface SCNAvoidOccluderConstraintDelegate : NSObject<SCNAvoidOccluderConstraintDelegate> {
}
	-(id) init;
@end

@interface SCNBoundingVolume : NSObject<SCNBoundingVolume> {
}
	-(id) init;
@end

@interface SCNCameraControllerDelegate : NSObject<SCNCameraControllerDelegate> {
}
	-(id) init;
@end

@interface SCNNodeRendererDelegate : NSObject<SCNNodeRendererDelegate> {
}
	-(id) init;
@end

@interface SCNPhysicsContactDelegate : NSObject<SCNPhysicsContactDelegate> {
}
	-(id) init;
@end

@interface SCNProgramDelegate : NSObject<SCNProgramDelegate> {
}
	-(id) init;
@end

@interface SCNSceneExportDelegate : NSObject<SCNSceneExportDelegate> {
}
	-(id) init;
@end

@interface SCNSceneRendererDelegate : NSObject<SCNSceneRendererDelegate> {
}
	-(id) init;
@end

@interface SCNShadable : NSObject<SCNShadable> {
}
	-(id) init;
@end

@interface SCNTechniqueSupport : NSObject<SCNTechniqueSupport> {
}
	-(id) init;
@end

@interface GKAchievementViewControllerDelegate : NSObject<GKAchievementViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKChallengeEventHandlerDelegate : NSObject<GKChallengeEventHandlerDelegate> {
}
	-(id) init;
@end

@interface GKChallengeListener : NSObject<GKChallengeListener> {
}
	-(id) init;
@end

@interface GKChallengesViewControllerDelegate : NSObject<GKChallengesViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKFriendRequestComposeViewControllerDelegate : NSObject<GKFriendRequestComposeViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKGameCenterControllerDelegate : NSObject<GKGameCenterControllerDelegate> {
}
	-(id) init;
@end

@interface GKInviteEventListener : NSObject<GKInviteEventListener> {
}
	-(id) init;
@end

@interface GKLeaderboardViewControllerDelegate : NSObject<GKLeaderboardViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKLocalPlayerListener : NSObject<GKLocalPlayerListener> {
}
	-(id) init;
@end

@interface GKMatchDelegate : NSObject<GKMatchDelegate> {
}
	-(id) init;
@end

@interface GKMatchmakerViewControllerDelegate : NSObject<GKMatchmakerViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKSavedGameListener : NSObject<GKSavedGameListener> {
}
	-(id) init;
@end

@interface GKSessionDelegate : NSObject<GKSessionDelegate> {
}
	-(id) init;
@end

@interface GKTurnBasedEventHandlerDelegate : NSObject<GKTurnBasedEventHandlerDelegate> {
}
	-(id) init;
@end

@interface GKTurnBasedEventListener : NSObject<GKTurnBasedEventListener> {
}
	-(id) init;
@end

@interface GKTurnBasedMatchmakerViewControllerDelegate : NSObject<GKTurnBasedMatchmakerViewControllerDelegate> {
}
	-(id) init;
@end

@interface WebPolicyDelegate : NSObject<WebPolicyDelegate> {
}
	-(id) init;
@end

@interface DOMEventListener : NSObject<DOMEventListener> {
}
	-(id) init;
@end

@interface DOMEventTarget : NSObject<DOMEventTarget> {
}
	-(id) init;
@end

@interface Xamarin_Mac__WebKit_DomNodeFilter : NSObject<DOMNodeFilter> {
}
	-(id) init;
@end

@interface WebDocumentRepresentation : NSObject<WebDocumentRepresentation> {
}
	-(id) init;
@end

@interface WebDownloadDelegate : NSObject<WebDownloadDelegate> {
}
	-(id) init;
@end

@interface WebFrameLoadDelegate : NSObject<WebFrameLoadDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__WebKit_WebOpenPanelResultListener : NSObject<WebOpenPanelResultListener> {
}
	-(id) init;
@end

@interface Xamarin_Mac__WebKit_WebPolicyDecisionListener : NSObject<WebPolicyDecisionListener> {
}
	-(id) init;
@end

@interface WebResourceLoadDelegate : NSObject<WebResourceLoadDelegate> {
}
	-(id) init;
@end

@interface WebUIDelegate : NSObject<WebUIDelegate> {
}
	-(id) init;
@end

@interface WKNavigationDelegate : NSObject<WKNavigationDelegate> {
}
	-(id) init;
@end

@interface WKScriptMessageHandler : NSObject<WKScriptMessageHandler> {
}
	-(id) init;
@end

@interface WKUIDelegate : NSObject<WKUIDelegate> {
}
	-(id) init;
@end

@protocol NSMenuValidation
	@required -(BOOL) validateMenuItem:(NSMenuItem *)p0;
@end

@interface NSApplicationDelegate : NSObject<NSApplicationDelegate> {
}
	-(id) init;
@end

@interface NSSharingServiceDelegate : NSObject<NSSharingServiceDelegate> {
}
	-(id) init;
@end

@interface NSCollectionViewDelegate : NSObject<NSCollectionViewDelegate> {
}
	-(id) init;
@end

@interface NSCollectionViewDelegateFlowLayout : NSObject<NSCollectionViewDelegateFlowLayout> {
}
	-(id) init;
@end

@interface NSAccessibilityCustomRotorItemSearchDelegate : NSObject<NSAccessibilityCustomRotorItemSearchDelegate> {
}
	-(id) init;
@end

@interface NSAlertDelegate : NSObject<NSAlertDelegate> {
}
	-(id) init;
@end

@interface NSAlignmentFeedbackToken : NSObject<NSAlignmentFeedbackToken> {
}
	-(id) init;
@end

@interface NSAnimationDelegate : NSObject<NSAnimationDelegate> {
}
	-(id) init;
@end

@interface NSAppearanceCustomization : NSObject<NSAppearanceCustomization> {
}
	-(id) init;
@end

@interface NSBrowserDelegate : NSObject<NSBrowserDelegate> {
}
	-(id) init;
@end

@interface NSCandidateListTouchBarItemDelegate : NSObject<NSCandidateListTouchBarItemDelegate> {
}
	-(id) init;
@end

@interface NSCloudSharingServiceDelegate : NSObject<NSCloudSharingServiceDelegate, NSSharingServiceDelegate> {
}
	-(id) init;
@end

@interface NSCollectionViewDataSource : NSObject<NSCollectionViewDataSource> {
}
	-(id) init;
@end

@interface NSCollectionViewElement : NSObject<NSCollectionViewElement> {
}
	-(id) init;
@end

@interface NSComboBoxCellDataSource : NSObject<NSComboBoxCellDataSource> {
}
	-(id) init;
@end

@interface NSComboBoxDataSource : NSObject<NSComboBoxDataSource> {
}
	-(id) init;
@end

@interface NSTextFieldDelegate : NSObject<NSTextFieldDelegate> {
}
	-(id) init;
@end

@interface NSComboBoxDelegate : NSObject<NSComboBoxDelegate, NSTextFieldDelegate> {
}
	-(id) init;
@end

@interface NSControlTextEditingDelegate : NSObject<NSControlTextEditingDelegate> {
}
	-(id) init;
@end

@interface NSDatePickerCellDelegate : NSObject<NSDatePickerCellDelegate> {
}
	-(id) init;
@end

@interface NSDockTilePlugIn : NSObject<NSDockTilePlugIn> {
}
	-(id) init;
@end

@interface NSDraggingDestination : NSObject<NSDraggingDestination> {
}
	-(id) init;
@end

@interface NSDraggingSource : NSObject<NSDraggingSource> {
}
	-(id) init;
@end

@interface NSDrawerDelegate : NSObject<NSDrawerDelegate> {
}
	-(id) init;
@end

@interface NSFilePromiseProviderDelegate : NSObject<NSFilePromiseProviderDelegate> {
}
	-(id) init;
@end

@interface NSGestureRecognizerDelegate : NSObject<NSGestureRecognizerDelegate> {
}
	-(id) init;
@end

@interface NSHapticFeedbackPerformer : NSObject<NSHapticFeedbackPerformer> {
}
	-(id) init;
@end

@interface NSImageDelegate : NSObject<NSImageDelegate> {
}
	-(id) init;
@end

@protocol NSLayerDelegateContentsScaleUpdating
@end

@interface NSLayoutManagerDelegate : NSObject<NSLayoutManagerDelegate> {
}
	-(id) init;
@end

@interface NSMatrixDelegate : NSObject<NSMatrixDelegate> {
}
	-(id) init;
@end

@interface NSMenuDelegate : NSObject<NSMenuDelegate> {
}
	-(id) init;
@end

@interface NSOpenSavePanelDelegate : NSObject<NSOpenSavePanelDelegate> {
}
	-(id) init;
@end

@interface NSOutlineViewDataSource : NSObject<NSOutlineViewDataSource> {
}
	-(id) init;
@end

@interface NSOutlineViewDelegate : NSObject<NSOutlineViewDelegate> {
}
	-(id) init;
@end

@interface NSPageControllerDelegate : NSObject<NSPageControllerDelegate> {
}
	-(id) init;
@end

@interface NSPasteboardItemDataProvider : NSObject<NSPasteboardItemDataProvider> {
}
	-(id) init;
@end

@interface NSPasteboardReading : NSObject<NSPasteboardReading> {
}
	-(id) init;
@end

@interface NSPasteboardWriting : NSObject<NSPasteboardWriting> {
}
	-(id) init;
@end

@interface NSPathCellDelegate : NSObject<NSPathCellDelegate> {
}
	-(id) init;
@end

@interface NSPathControlDelegate : NSObject<NSPathControlDelegate> {
}
	-(id) init;
@end

@interface NSPopoverDelegate : NSObject<NSPopoverDelegate> {
}
	-(id) init;
@end

@interface NSPrintPanelAccessorizing : NSObject<NSPrintPanelAccessorizing> {
}
	-(id) init;
@end

@interface NSRuleEditorDelegate : NSObject<NSRuleEditorDelegate> {
}
	-(id) init;
@end

@interface NSScrubberDataSource : NSObject<NSScrubberDataSource> {
}
	-(id) init;
@end

@interface NSScrubberDelegate : NSObject<NSScrubberDelegate> {
}
	-(id) init;
@end

@interface NSScrubberFlowLayoutDelegate : NSObject<NSScrubberFlowLayoutDelegate> {
}
	-(id) init;
@end

@interface NSSearchFieldDelegate : NSObject<NSSearchFieldDelegate> {
}
	-(id) init;
@end

@interface NSSeguePerforming : NSObject<NSSeguePerforming> {
}
	-(id) init;
@end

@interface NSSharingServicePickerDelegate : NSObject<NSSharingServicePickerDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__AppKit_NSSharingServicePickerToolbarItemDelegate : NSObject<NSSharingServicePickerToolbarItemDelegate, NSSharingServicePickerDelegate> {
}
	-(id) init;
@end

@interface NSSharingServicePickerTouchBarItemDelegate : NSObject<NSSharingServicePickerTouchBarItemDelegate> {
}
	-(id) init;
@end

@interface NSSoundDelegate : NSObject<NSSoundDelegate> {
}
	-(id) init;
@end

@interface NSSpeechRecognizerDelegate : NSObject<NSSpeechRecognizerDelegate> {
}
	-(id) init;
@end

@interface NSSpeechSynthesizerDelegate : NSObject<NSSpeechSynthesizerDelegate> {
}
	-(id) init;
@end

@interface NSSplitViewDelegate : NSObject<NSSplitViewDelegate> {
}
	-(id) init;
@end

@interface NSSpringLoadingDestination : NSObject<NSSpringLoadingDestination> {
}
	-(id) init;
@end

@interface NSStackViewDelegate : NSObject<NSStackViewDelegate> {
}
	-(id) init;
@end

@interface NSTableViewDataSource : NSObject<NSTableViewDataSource> {
}
	-(id) init;
@end

@interface NSTableViewDelegate : NSObject<NSTableViewDelegate> {
}
	-(id) init;
@end

@interface NSTableViewSource : NSObject {
}
	-(id) init;
@end

@interface NSTabViewDelegate : NSObject<NSTabViewDelegate> {
}
	-(id) init;
@end

@interface NSTextAttachmentContainer : NSObject<NSTextAttachmentContainer> {
}
	-(id) init;
@end

@interface NSTextDelegate : NSObject<NSTextDelegate> {
}
	-(id) init;
@end

@interface NSTextFinderBarContainer : NSObject<NSTextFinderBarContainer> {
}
	-(id) init;
@end

@interface NSTextFinderClient : NSObject<NSTextFinderClient> {
}
	-(id) init;
@end

@interface NSTextInputClient : NSObject<NSTextInputClient> {
}
	-(id) init;
@end

@interface NSTextStorageDelegate : NSObject<NSTextStorageDelegate> {
}
	-(id) init;
@end

@interface NSTextViewDelegate : NSObject<NSTextViewDelegate, NSTextDelegate> {
}
	-(id) init;
@end

@interface NSTokenFieldCellDelegate : NSObject<NSTokenFieldCellDelegate> {
}
	-(id) init;
@end

@interface NSTokenFieldDelegate : NSObject<NSTokenFieldDelegate> {
}
	-(id) init;
@end

@interface NSToolbarDelegate : NSObject<NSToolbarDelegate> {
}
	-(id) init;
@end

@protocol NSToolTipOwner
	@required -(NSString *) view:(NSView *)p0 stringForToolTip:(NSInteger)p1 point:(CGPoint)p2 userData:(void *)p3;
@end

@interface NSTouchBarDelegate : NSObject<NSTouchBarDelegate> {
}
	-(id) init;
@end

@interface NSViewControllerPresentationAnimator : NSObject<NSViewControllerPresentationAnimator> {
}
	-(id) init;
@end

@interface NSWindowDelegate : NSObject<NSWindowDelegate> {
}
	-(id) init;
@end

@interface NSWindowRestoration : NSObject<NSWindowRestoration> {
}
	-(id) init;
@end

@interface Xamarin_Mac__CoreML_MLCustomModel : NSObject<MLCustomModel> {
}
	-(id) init;
	-(id) initWithModelDescription:(MLModelDescription *)p0 parameterDictionary:(NSDictionary <NSString *, NSObject *>*)p1 error:(NSError **)p2;
@end

@interface CBCentralManagerDelegate : NSObject<CBCentralManagerDelegate> {
}
	-(id) init;
@end

@interface CBPeripheralDelegate : NSObject<CBPeripheralDelegate> {
}
	-(id) init;
@end

@interface CBPeripheralManagerDelegate : NSObject<CBPeripheralManagerDelegate> {
}
	-(id) init;
@end

@interface AVCaptureViewDelegate : NSObject<AVCaptureViewDelegate> {
}
	-(id) init;
@end

@interface AVPictureInPictureControllerDelegate : NSObject<AVPictureInPictureControllerDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__AVKit_AVPlayerViewPictureInPictureDelegate : NSObject<AVPlayerViewPictureInPictureDelegate> {
}
	-(id) init;
@end

@interface AVRoutePickerViewDelegate : NSObject<AVRoutePickerViewDelegate> {
}
	-(id) init;
@end

@interface AVFoundation_AVCaptureDataOutputSynchronizer : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface AVFoundation_AVCaptureDataOutputSynchronizerDelegate : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface AVCaptureAudioDataOutputSampleBufferDelegate : NSObject<AVCaptureAudioDataOutputSampleBufferDelegate> {
}
	-(id) init;
@end

@interface AVAudioPlayerDelegate : NSObject<AVAudioPlayerDelegate> {
}
	-(id) init;
@end

@interface AVAudioRecorderDelegate : NSObject<AVAudioRecorderDelegate> {
}
	-(id) init;
@end

@interface AVAssetResourceLoaderDelegate : NSObject<AVAssetResourceLoaderDelegate> {
}
	-(id) init;
@end

@interface AVAsynchronousKeyValueLoading : NSObject<AVAsynchronousKeyValueLoading> {
}
	-(id) init;
@end

@interface AVAudio3DMixing : NSObject<AVAudio3DMixing> {
}
	-(id) init;
@end

@interface AVAudioStereoMixing : NSObject<AVAudioStereoMixing> {
}
	-(id) init;
@end

@interface AVCaptureFileOutputDelegate : NSObject<AVCaptureFileOutputDelegate> {
}
	-(id) init;
@end

@interface AVCaptureFileOutputRecordingDelegate : NSObject<AVCaptureFileOutputRecordingDelegate> {
}
	-(id) init;
@end

@interface AVCapturePhotoCaptureDelegate : NSObject<AVCapturePhotoCaptureDelegate> {
}
	-(id) init;
@end

@interface AVCaptureVideoDataOutputSampleBufferDelegate : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate> {
}
	-(id) init;
@end

@interface AVContentKeySessionDelegate : NSObject<AVContentKeySessionDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemOutputPushDelegate : NSObject<AVPlayerItemOutputPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemLegibleOutputPushDelegate : NSObject<AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemOutputPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemMetadataCollectorPushDelegate : NSObject<AVPlayerItemMetadataCollectorPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemMetadataOutputPushDelegate : NSObject<AVPlayerItemMetadataOutputPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemOutputPullDelegate : NSObject<AVPlayerItemOutputPullDelegate> {
}
	-(id) init;
@end

@interface AVSpeechSynthesizerDelegate : NSObject<AVSpeechSynthesizerDelegate> {
}
	-(id) init;
@end

@interface AVVideoCompositing : NSObject<AVVideoCompositing> {
}
	-(id) init;
@end

@interface Xamarin_Mac__AuthenticationServices_ASAuthorizationControllerDelegate : NSObject<ASAuthorizationControllerDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__AuthenticationServices_ASWebAuthenticationSessionRequestDelegate : NSObject<ASWebAuthenticationSessionRequestDelegate> {
}
	-(id) init;
@end

@interface NSFileManagerDelegate : NSObject<NSFileManagerDelegate> {
}
	-(id) init;
@end

@interface Foundation_NSUrlProtocolClient : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface NSCacheDelegate : NSObject<NSCacheDelegate> {
}
	-(id) init;
@end

@interface NSCoding : NSObject<NSCoding> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NSConnectionDelegate : NSObject<NSConnectionDelegate> {
}
	-(id) init;
@end

@interface NSCopying : NSObject<NSCopying> {
}
	-(id) init;
@end

@interface NSExtensionRequestHandling : NSObject<NSExtensionRequestHandling> {
}
	-(id) init;
@end

@interface NSFilePresenter : NSObject<NSFilePresenter> {
}
	-(id) init;
@end

@interface NSKeyedArchiverDelegate : NSObject<NSKeyedArchiverDelegate> {
}
	-(id) init;
@end

@interface NSKeyedUnarchiverDelegate : NSObject<NSKeyedUnarchiverDelegate> {
}
	-(id) init;
@end

@interface NSPortDelegate : NSObject<NSPortDelegate> {
}
	-(id) init;
@end

@interface NSMachPortDelegate : NSObject<NSMachPortDelegate, NSPortDelegate> {
}
	-(id) init;
@end

@interface NSMetadataQueryDelegate : NSObject<NSMetadataQueryDelegate> {
}
	-(id) init;
@end

@interface NSMutableCopying : NSObject<NSMutableCopying> {
}
	-(id) init;
@end

@interface NSNetServiceBrowserDelegate : NSObject<NSNetServiceBrowserDelegate> {
}
	-(id) init;
@end

@interface NSNetServiceDelegate : NSObject<NSNetServiceDelegate> {
}
	-(id) init;
@end

@interface NSStreamDelegate : NSObject<NSStreamDelegate> {
}
	-(id) init;
@end

@interface NSURLAuthenticationChallengeSender : NSObject<NSURLAuthenticationChallengeSender> {
}
	-(id) init;
@end

@interface NSURLConnectionDelegate : NSObject<NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface NSURLConnectionDataDelegate : NSObject<NSURLConnectionDataDelegate, NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface NSURLConnectionDownloadDelegate : NSObject<NSURLConnectionDownloadDelegate, NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface NSUrlDownloadDelegate : NSObject<NSURLDownloadDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDelegate : NSObject<NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionTaskDelegate : NSObject<NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDataDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDownloadDelegate : NSObject<NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionStreamDelegate : NSObject<NSURLSessionStreamDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__Foundation_NSUrlSessionWebSocketDelegate : NSObject<NSURLSessionWebSocketDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSUserActivityDelegate : NSObject<NSUserActivityDelegate> {
}
	-(id) init;
@end

@interface NSUserNotificationCenterDelegate : NSObject<NSUserNotificationCenterDelegate> {
}
	-(id) init;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end

@interface Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1 : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) keyDown:(NSEvent *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) rightMouseUp:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ViewRenderer_2 : Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Maps_MacOS_MapRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_FormsApplicationDelegate : NSObject<NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(void) applicationDidBecomeActive:(NSNotification *)p0;
	-(void) applicationDidResignActive:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PageRenderer : NSViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewDidAppear;
	-(void) viewDidDisappear;
	-(void) viewWillAppear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_BoxViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ScrollViewRenderer : NSScrollView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) layout;
	-(void) UpdateScrollPosition;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ActivityIndicatorRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_DatePickerRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_FrameRenderer : Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_MacOSOpenGLView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PickerRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ProgressBarRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_SearchBarRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_SliderRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_StepperRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_CheckBoxRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_SwitchRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_TimePickerRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_TableViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_NativeViewWrapperRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_LabelRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ButtonRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_EntryRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_EditorRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ImageRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_WebViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2<WebPolicyDelegate> {
}
	-(void) webView:(WebView *)p0 decidePolicyForNavigationAction:(NSDictionary *)p1 request:(NSURLRequest *)p2 frame:(WebFrame *)p3 decisionListener:(id)p4;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ListViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) viewWillDraw;
	-(id) init;
@end

@interface CarouselPageRenderer : NSPageController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSInteger) selectedIndex;
	-(void) setSelectedIndex:(NSInteger)p0;
	-(void) viewDidAppear;
	-(void) viewDidDisappear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_MasterDetailPageRenderer : NSSplitViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear;
	-(CGRect) splitView:(NSSplitView *)p0 effectiveRect:(CGRect)p1 forDrawnRect:(CGRect)p2 ofDividerAtIndex:(NSInteger)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_TabbedPageRenderer : NSTabViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillLayout;
	-(NSInteger) selectedTabViewItemIndex;
	-(void) setSelectedTabViewItemIndex:(NSInteger)p0;
	-(void) viewDidAppear;
	-(void) viewDidDisappear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_NavigationPageRenderer : NSViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewDidDisappear;
	-(void) viewDidAppear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface AppDelegate : NSObject<NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(BOOL) applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface AnimatingViewsWindow : NSWindow {
}
	@property (nonatomic, assign) NSView * simpleLayoutView;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSView *) simpleLayoutView;
	-(void) setSimpleLayoutView:(NSView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface AnimatingViewsWindowController : NSWindowController {
}
	@property (nonatomic, assign) NSTextField * laterLabel;
	@property (nonatomic, assign) NSTextFieldCell * laterWeatherLabel;
	@property (nonatomic, assign) NSTextField * nowLabel;
	@property (nonatomic, assign) NSTextField * nowWeatherLabel;
	@property (nonatomic, assign) NSComboBox * outletFoodSelectionComboBox;
	@property (nonatomic, assign) NSTextField * plantSize;
	@property (nonatomic, assign) NSStepper * plantSizeStepper;
	@property (nonatomic, assign) NSView * simpleView;
	@property (nonatomic, assign) NSTextField * tenHoursFromNow2;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSTextField *) laterLabel;
	-(void) setLaterLabel:(NSTextField *)p0;
	-(NSTextFieldCell *) laterWeatherLabel;
	-(void) setLaterWeatherLabel:(NSTextFieldCell *)p0;
	-(NSTextField *) nowLabel;
	-(void) setNowLabel:(NSTextField *)p0;
	-(NSTextField *) nowWeatherLabel;
	-(void) setNowWeatherLabel:(NSTextField *)p0;
	-(NSComboBox *) outletFoodSelectionComboBox;
	-(void) setOutletFoodSelectionComboBox:(NSComboBox *)p0;
	-(NSTextField *) plantSize;
	-(void) setPlantSize:(NSTextField *)p0;
	-(NSStepper *) plantSizeStepper;
	-(void) setPlantSizeStepper:(NSStepper *)p0;
	-(NSView *) simpleView;
	-(void) setSimpleView:(NSView *)p0;
	-(NSTextField *) tenHoursFromNow2;
	-(void) setTenHoursFromNow2:(NSTextField *)p0;
	-(void) awakeFromNib;
	-(void) addABox:(NSButton *)p0;
	-(void) sizeTicker:(NSObject *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) init;
@end



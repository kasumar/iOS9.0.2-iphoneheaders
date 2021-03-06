/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <Maps/RAPSubmitterDelegate.h>
#import <Maps/StarkDisplayControllerDelegate.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>
#import <Maps/GEONavigationObserver.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIApplicationDelegatePrivate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/MNBackgroundNavigationDelegate.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <Maps/PrintControllerDelegate.h>

@protocol LoadingToken;
@class UIWindow, MapsMainModeController, MapsURLHandler, UINavigationController, MapsDebugController, UIAlertController, MainChromeViewController, NSHashTable, StarkDisplayController, NSDate, NSTimer, NSUserActivity, NSMutableSet, BKSProcessAssertion, CLInUseAssertion, SBSStatusBarStyleOverridesAssertion, DataActivationPopupAssertion, ForegroundOnlyDataActivationPopupAssertion, DirectionsController, POISearchManager, AdaptivePresenter, FavoritesiCloudSyncClient, FavoritesSpotlightIndexingClient, FavoritesNanoSyncClient, MapsRadarContext, RAPReportComposerViewController, RAPSubmitter, MapsLaunchHandler, PrintController, NSDictionary, NSString, LightLevelController, NSArray, MapsActivity;

@interface MapsAppDelegate : UIResponder <UIApplicationTestingDelegate, RAPSubmitterDelegate, StarkDisplayControllerDelegate, MSPMapsPushDaemonProxyObserver, NSUserActivityDelegate, GEONavigationObserver, ABPeoplePickerNavigationControllerDelegate, UIApplicationDelegate, UIApplicationDelegatePrivate, UINavigationControllerDelegate, MNBackgroundNavigationDelegate, AFContextProvider, PrintControllerDelegate> {

	int _idleTimerDisabledCount;
	int _idleTimerDisabledIfChargedCount;
	int _idleTimerDisabledReasonCounter[3];
	int _batteryMonitorCount;
	int _batteryMonitorReasonCounter[2];
	char _registeredForAddressBookChanges;
	UIWindow* _window;
	MapsMainModeController* _mapController;
	MapsURLHandler* _mapsURLHandler;
	UINavigationController* _debugNavigationController;
	MapsDebugController* _mapsDebugController;
	UIAlertController* _addressCorrectionPermissionAlert;
	MainChromeViewController* _chromeViewController;
	int _navNotifyToken;
	char _hasNavNotifyToken;
	char _isNavigating;
	char _isTrackingLocation;
	char _isShowingTour;
	SBSThermalWarningAssertionRef _thermalWarningSuppressionAssertion;
	NSHashTable* _navigatorUIObserversSet;
	StarkDisplayController* _starkDisplayController;
	NSDate* _enteredForegroundDate;
	char _starkNavigationWasVisible;
	char _isRestoringState;
	char _running;
	char _needToWaitForHandoff;
	char _needToUpdateHandoff;
	NSTimer* _directionsTimestampTimer;
	NSUserActivity* _mapsUserActivity;
	NSMutableSet* _navigatorsSuspendingIdleTimer;
	BKSProcessAssertion* _priorityAssertion;
	BKSProcessAssertion* _steppingAssertion;
	CLInUseAssertion* _inUseAssertion;
	SBSStatusBarStyleOverridesAssertion* _doubleHeightStatusBarAssertion;
	DataActivationPopupAssertion* _navigatorDataActivationPopupAssertion;
	ForegroundOnlyDataActivationPopupAssertion* _foregroundDataActivationPopupAssertion;
	char _debugAutomaticNightMode;
	DirectionsController* _directionsController;
	POISearchManager* _poiSearchManager;
	AdaptivePresenter* _debugViewControllerPresenter;
	id<LoadingToken> _continuityLoadingToken;
	FavoritesiCloudSyncClient* _favoritesSyncClient;
	FavoritesSpotlightIndexingClient* _favoritesSpotlightIndexingClient;
	FavoritesNanoSyncClient* _favoritesNanoSyncClient;
	MapsRadarContext* _defaultContext;
	RAPReportComposerViewController* _reportComposer;
	RAPSubmitter* _submitter;
	unsigned _reportAProblemSubmitterAssertion;
	char _backgroundTaskExpired;
	char _mapsIsNavigating;
	char _mapsIsNavigatingTurnByTurn;
	MapsLaunchHandler* _mapsLaunchHandler;
	PrintController* _printController;
	NSDictionary* __cachedMapsActivity;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,readonly) int currentInterruptionKind; 
@property (nonatomic,readonly) LightLevelController * lightLevelController; 
@property (nonatomic,readonly) char canPlayTrace; 
@property (nonatomic,retain) NSDate * enteredForegroundDate;                                                     //@synthesize enteredForegroundDate=_enteredForegroundDate - In the implementation block
@property (assign,nonatomic) char mapsIsNavigating;                                                              //@synthesize mapsIsNavigating=_mapsIsNavigating - In the implementation block
@property (assign,nonatomic) char mapsIsNavigatingTurnByTurn;                                                    //@synthesize mapsIsNavigatingTurnByTurn=_mapsIsNavigatingTurnByTurn - In the implementation block
@property (nonatomic,readonly) MapsMainModeController * mapController;                                           //@synthesize mapController=_mapController - In the implementation block
@property (nonatomic,readonly) MainChromeViewController * chromeViewController;                                  //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (nonatomic,readonly) NSArray * navigatorUIObservers; 
@property (assign,nonatomic) unsigned preferredTransportType; 
@property (assign,nonatomic) char debugAutomaticNightMode;                                                       //@synthesize debugAutomaticNightMode=_debugAutomaticNightMode - In the implementation block
@property (nonatomic,readonly) StarkDisplayController * starkDisplayController;                                  //@synthesize starkDisplayController=_starkDisplayController - In the implementation block
@property (nonatomic,readonly) MapsLaunchHandler * mapsLaunchHandler;                                            //@synthesize mapsLaunchHandler=_mapsLaunchHandler - In the implementation block
@property (nonatomic,readonly) MapsURLHandler * mapsURLHandler;                                                  //@synthesize mapsURLHandler=_mapsURLHandler - In the implementation block
@property (nonatomic,readonly) DirectionsController * directionsController;                                      //@synthesize directionsController=_directionsController - In the implementation block
@property (nonatomic,retain) MapsActivity * mapsActivity; 
@property (nonatomic,readonly) PrintController * printController;                                                //@synthesize printController=_printController - In the implementation block
@property (getter=isRestoringState,nonatomic,readonly) char isRestoringState; 
@property (nonatomic,readonly) FavoritesSpotlightIndexingClient * favoritesSpotlightIndexingClient;              //@synthesize favoritesSpotlightIndexingClient=_favoritesSpotlightIndexingClient - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * priorityAssertion;                                            //@synthesize priorityAssertion=_priorityAssertion - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * steppingAssertion;                                            //@synthesize steppingAssertion=_steppingAssertion - In the implementation block
@property (retain) NSDictionary * _cachedMapsActivity;                                                           //@synthesize _cachedMapsActivity=__cachedMapsActivity - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                                  //@synthesize window=_window - In the implementation block
-(NSDate *)enteredForegroundDate;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(char)runPounceToNavTest:(id)arg1 options:(id)arg2 ;
-(char)runGenerateEtaPinTest:(id)arg1 options:(id)arg2 ;
-(void)_gotoNextStep;
-(void)jumpToBayArea;
-(char)runMapsTest:(id)arg1 options:(id)arg2 ;
-(void)dropPinOnLocation:(SCD_Struct_RA7)arg1 ;
-(void)handleSettingsTableViewControllerLoaded:(id)arg1 ;
-(void)tapOnSearchBar;
-(void)_showDirectionSearchView:(id)arg1 ;
-(int)_guidanceStepSwipeCount;
-(void)didEndGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1 ;
-(void)jumpToCupertino;
-(char)runVKTest:(id)arg1 options:(id)arg2 ;
-(void)didEndGEOPPTTest_Manifest_ForcedUpdate:(id)arg1 ;
-(CGPoint)screenPointInView:(CGPoint)arg1 ;
-(void)didEndGEOPPTTest_Manifest:(id)arg1 ;
-(char)runRAPTest:(id)arg1 options:(id)arg2 ;
-(void)startPlaceViewControllerPresentationTest:(id)arg1 ;
-(void)_showSearchResultsList:(id)arg1 ;
-(void)didDisplayRoutes:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_ResetActiveTileGroup:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_GetResourceManifest:(id)arg1 ;
-(char)runFlyoverTourTest:(id)arg1 options:(id)arg2 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1 ;
-(char)onscreenTimestampsEnabled;
-(void)didFinishJumping:(id)arg1 ;
-(char)runGenerateEtaTest:(id)arg1 options:(id)arg2 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1 ;
-(void)_showCallout:(id)arg1 ;
-(void)_registerGEOSubtestsForRouting;
-(void)didFinishJumpingForCapture:(id)arg1 ;
-(void)_showPlaceCard:(id)arg1 ;
-(void)_guidanceOrSteppingDidShowFirstSign:(id)arg1 ;
-(id)_subTestNameForGoingToGuidanceStep:(int)arg1 forSwipeCount:(int)arg2 ;
-(void)doPostLaunchTestSetup;
-(void)addPartiallyDrawnCallback:(/*^block*/id)arg1 ;
-(char)runPlacecardTest:(id)arg1 options:(id)arg2 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1 ;
-(void)animateCircle:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)runSubTestWithOptions:(id)arg1 ;
-(char)runGuidanceTest:(id)arg1 options:(id)arg2 ;
-(id)readMapRegion:(id)arg1 ;
-(void)handleRAPProblemNotListedControllerLoaded:(id)arg1 ;
-(void)finishedFps:(id)arg1 ;
-(char)runCirclePanTest:(id)arg1 options:(id)arg2 ;
-(void)partiallyDrawnForSubTest:(id)arg1 ;
-(void)_steppingSignDidChange:(id)arg1 ;
-(unsigned)readMapType:(id)arg1 ;
-(void)didEndGEOPPTTest_Manifest_SetActiveTileGroup:(id)arg1 ;
-(void)setupFullyDrawnNotification:(SEL)arg1 ;
-(void)didEndMapsPPTTest_ComposeWaypoint:(id)arg1 ;
-(void)didResolveWaypointsForRouting:(id)arg1 ;
-(void)finishSearchTest:(id)arg1 ;
-(void)searchRequestSent:(id)arg1 ;
-(void)didFinishDrawingTiles:(id)arg1 ;
-(void)_enterGuidanceNavOrSteppingMode:(id)arg1 ;
-(void)finishedSubTest:(id)arg1 ;
-(void)startCalloutControllerPresentationTest:(id)arg1 ;
-(void)isFullyDrawn:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest:(id)arg1 ;
-(void)setupForVKTest:(id)arg1 options:(id)arg2 ;
-(void)_testCompletedOrFailed:(char)arg1 ;
-(void)willBeginGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_SetActiveTileGroup:(id)arg1 ;
-(char)runStylesheetTest:(id)arg1 options:(id)arg2 ;
-(void)willBeginMapsPPTTest_ComposeWaypoint:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_ForcedUpdate:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1 ;
-(void)didEndGEOPPTTest_Manifest_HandleMessage:(id)arg1 ;
-(char)runSearchTest:(id)arg1 options:(id)arg2 ;
-(void)panLoadFinished;
-(void)yaw:(id)arg1 ;
-(id)mainVKMapView;
-(char)runRouteTest:(id)arg1 options:(id)arg2 ;
-(void)didEndGEOPPTTest_PlaceRequest:(id)arg1 ;
-(void)willBeginGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_Update:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_SetManifestToken:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan:(id)arg1 ;
-(void)didFinishJumpingForDrivingRoutePrep:(id)arg1 ;
-(void)jumpTo;
-(void)willBeginGEOPPTTest_Manifest_HandleMessage:(id)arg1 ;
-(char)runCapture:(id)arg1 options:(id)arg2 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1 ;
-(void)_registerGEOManifestSubtests;
-(void)testFailed;
-(void)willBeginGEOPPTTest_PlaceRequest:(id)arg1 ;
-(char)runGuidanceSteppingTest:(id)arg1 options:(id)arg2 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan:(id)arg1 ;
-(void)didEndGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1 ;
-(void)didEndGEOPPTTest_Manifest_Update:(id)arg1 ;
-(void)didEndGEOPPTTest_Manifest_SetManifestToken:(id)arg1 ;
-(void)didFinishJumpingForPlacecardPrep:(id)arg1 ;
-(void)willBeginGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1 ;
-(void)didEndGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1 ;
-(void)willBeginGEOPPTTest_Manifest_SetupConnection:(id)arg1 ;
-(void)willResolveWaypointsForRouting:(id)arg1 ;
-(void)startKeyboardBringupTest:(id)arg1 ;
-(char)runDrivingRouteTest:(id)arg1 options:(id)arg2 ;
-(void)didEndGEOPPTTest_Manifest_GetResourceManifest:(id)arg1 ;
-(void)startPlacecardTest:(id)arg1 ;
-(void)jumpToPoint:(SCD_Struct_RA7)arg1 ;
-(void)didEndGEOPPTTest_Manifest_ResetActiveTileGroup:(id)arg1 ;
-(void)checkFullyDrawnForCapture;
-(char)runSwitchTest:(id)arg1 options:(id)arg2 ;
-(void)setupPartiallyDrawnNotification:(SEL)arg1 ;
-(void)addFullyDrawnCallback:(/*^block*/id)arg1 ;
-(void)annotationPinDropped:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1 ;
-(void)searchKeyboardDidShow;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1 ;
-(void)willBeginGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1 ;
-(void)handleRAPControllerLoaded:(id)arg1 ;
-(void)circlePanLoadFinished;
-(id)mainMKMapView;
-(void)startTimingFps:(id)arg1 ;
-(char)runPanZoomTest:(id)arg1 options:(id)arg2 ;
-(void)didEndGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1 ;
-(void)testComplete;
-(void)didEndGEOPPTTest_Manifest_SetupConnection:(id)arg1 ;
-(void)handleRAPThankYouControllerLoaded:(id)arg1 ;
-(void)_checkFullyDrawnForPlacecardPrep:(id)arg1 ;
-(void)checkFullyDrawn;
-(void)switchToMapType:(unsigned)arg1 ;
-(void)_placeViewControllerAppeared:(id)arg1 ;
-(void)jumpToCoords:(SCD_Struct_Ma35)arg1 pitch:(double)arg2 yaw:(double)arg3 ;
-(id)setupDirectionsPlanForRoute:(id)arg1 ;
-(void)_checkFullyDrawnForDrivingRoutePrep:(id)arg1 ;
-(void)isPartiallyDrawn:(id)arg1 ;
-(void)searchManager:(id)arg1 didReceiveResults:(id)arg2 scrollToResults:(char)arg3 displayPlaceCardForResult:(id)arg4 ;
-(void)zoom:(id)arg1 ;
-(MainChromeViewController *)chromeViewController;
-(void)navigationSession:(id)arg1 didEnableGuidance:(char)arg2 ;
-(void)navigationSessionWillResumeNavigatorFromPause:(id)arg1 ;
-(void)navigationSessionWillStopNavigator:(id)arg1 ;
-(void)navigationSessionHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(char)arg2 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(MapsLaunchHandler *)mapsLaunchHandler;
-(void)presentReportAProblemByEditingContext:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createReportAProblemContextWithCompletion:(/*^block*/id)arg1 ;
-(void)submitterWillStartRequiringActivityAssertion:(id)arg1 ;
-(void)_beginReschedulingSendingReportAProblemReportsIfNeeded;
-(void)submitterDidStopRequiringActivityAssertion:(id)arg1 ;
-(char)reportAProblemPresentationWillCoverEntireScreen;
-(void)representReportAProblemIfCurrentlyOngoingAnimated:(char)arg1 ;
-(id)_reportAProblemSubmitter;
-(void)_updateReportAProblemSubmitterCanSendReallowingBackgroundAssertions:(char)arg1 ;
-(void)presentReportAProblemWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissReportAProblemAnimated:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_beginSendingReportAProblemReportsIfNeeded;
-(DirectionsController *)directionsController;
-(void)endBackgroundNavigation;
-(void)startPreparedBackgroundNavigation;
-(char)canPlayTrace;
-(id)allVisibleMapViews;
-(void)_updatePersistedDirectionsTimestamp;
-(NSDictionary *)_cachedMapsActivity;
-(void)setSuppressStatusBarAnimations:(char)arg1 ;
-(void)directionsControllerDidReset;
-(int)_idleTimerStateForBattery;
-(void)_setIdleTimerState:(int)arg1 ;
-(void)_print;
-(char)_isForcingViewMode;
-(void)archiveMapsActivity;
-(void)setPriorityAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setPreferredTransportType:(unsigned)arg1 ;
-(void)showPeoplePickerControllerFromController:(id)arg1 ;
-(unsigned)preferredTransportType;
-(void)statusBarTappedWithEvent:(id)arg1 ;
-(void)prepareBackgroundNavigationWithItems:(id)arg1 ;
-(id)shieldArtworkForType:(int)arg1 text:(id)arg2 size:(int)arg3 inMapRect:(SCD_Struct_RA13)arg4 ;
-(void)_updateUserActivityWithMapsActivityAtFullFidelity:(id)arg1 atCompactFidelity:(id)arg2 title:(id)arg3 expirationDate:(id)arg4 ;
-(NSArray *)navigatorUIObservers;
-(void)removeNavigatorUIObserver:(id)arg1 ;
-(void)_suspendIfNeeded;
-(void)addNavigatorUIObserver:(id)arg1 ;
-(void)setNeedsUserActivityUpdate;
-(char)isRestoringState;
-(void)_showFrequentLocationsAlertIfNecessary;
-(void)setMapsActivity:(MapsActivity *)arg1 ;
-(BKSProcessAssertion *)steppingAssertion;
-(void)navigationSessionWillPauseNavigatorNavigator:(id)arg1 ;
-(char)_shouldFavorActivityOverNavigation:(id)arg1 ;
-(id)poiSearchManager;
-(void)_clearDoubleHeightStatusBar;
-(void)_moveBackToNavigationIfNeeded;
-(void)setMonitorBattery:(char)arg1 forReason:(int)arg2 ;
-(id)mapsActivityWithFidelity:(unsigned)arg1 ;
-(void)setMapsIsNavigatingTurnByTurn:(char)arg1 ;
-(id)monitorBatteryStateDescription;
-(void)setMapsIsShowingTour:(char)arg1 ;
-(void)setTrackingMode:(int)arg1 monitorBatteryState:(char)arg2 ;
-(int)_forcedViewMode;
-(void)_setDesiredIdleTimerState:(int)arg1 reason:(int)arg2 monitorBatteryState:(char)arg3 ;
-(id)_mapsUserActivity;
-(MapsActivity *)mapsActivity;
-(void)setSteppingAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_acquireDoubleHeightStatusBarAssertionIfNeeded;
-(void)navigationSessionDidEnd;
-(void)_updateDistanceUnits;
-(void)_unconditionallySetMapsActivity:(id)arg1 ;
-(void)sendDidEnterBackgroundNotification;
-(void)navigationSessionDidStart;
-(void)navigationSessionDidStartNavigator:(id)arg1 ;
-(void)navigationSessionWillStartStepping:(id)arg1 ;
-(void)presentMapsDebugController;
-(void)navigationSessionWillEndStepping:(id)arg1 ;
-(void)_resetViewModeToDefaultIfNeeded;
-(id)currentTraits;
-(void)_addNavigatorSuspendingIdleTimer:(id)arg1 ;
-(void)_resumeIfNeeded;
-(void)waitForNextHandoff;
-(void)starkDisplayControllerDidInvalidateNavigationVisibility:(id)arg1 ;
-(void)navigationSessionWillStartNavigator:(id)arg1 ;
-(void)_removeNavigatorSuspendingIdleTimer:(id)arg1 ;
-(void)setMapsIsNavigating:(char)arg1 ;
-(void)_idleTimerStateEnableBatteryMonitoring:(char)arg1 ;
-(char)_applicationShouldUseScreenJail:(id)arg1 ;
-(id)idleTimerStateDescription;
-(void)_idleTimerStateBatteryStatusDidChange:(id)arg1 ;
-(void)dismissMapsDebugControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetTrafficToDefaultIfNeeded;
-(id)mainMapView;
-(BKSProcessAssertion *)priorityAssertion;
-(void)_performIfWouldLikeFrequentLocationsPrompt:(/*^block*/id)arg1 ;
-(void)_setLaunchIntoDirectionsOnRelaunch:(char)arg1 ;
-(void)set_cachedMapsActivity:(NSDictionary *)arg1 ;
-(void)_loadMapsForApplication:(id)arg1 ;
-(StarkDisplayController *)starkDisplayController;
-(MapsURLHandler *)mapsURLHandler;
-(void)_presentRadarComposerFromGestureRecognizer:(id)arg1 ;
-(char)debugAutomaticNightMode;
-(void)showFromController:(id)arg1 alertForHomeAddress:(char)arg2 ;
-(void)setDebugAutomaticNightMode:(char)arg1 ;
-(char)mapsIsNavigating;
-(char)mapsIsNavigatingTurnByTurn;
-(PrintController *)printController;
-(void)_setSteppingAssertionsEnabled:(char)arg1 ;
-(void)printControllerDidPresentPrinterOptions:(id)arg1 ;
-(void)setEnteredForegroundDate:(NSDate *)arg1 ;
-(void)setMapsActivity:(id)arg1 assumedSourceFidelity:(unsigned)arg2 ;
-(FavoritesSpotlightIndexingClient *)favoritesSpotlightIndexingClient;
-(CGRect)popoverPresentationRectForPrintController:(id)arg1 ;
-(id)_currentInterruptionHandle;
-(void)interruptApplicationWithKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setCurrentInterruptionHandle:(id)arg1 ;
-(void)dismissCurrentInterruption;
-(int)currentInterruptionKind;
-(void)showLocationServicesAlertWithError:(id)arg1 ;
-(char)_isStarkMapView:(id)arg1 ;
-(char)createCurrentStateSnapshotAndReturnSnapshotDirectoryURL:(out id*)arg1 tileStateReportURLs:(out id*)arg2 screenshotImageURLs:(out id*)arg3 error:(out id*)arg4 ;
-(void)presentRadarComposerIfPossibleFromView:(id)arg1 inViewController:(id)arg2 ;
-(void)presentRadarComposerIfPossibleFromView:(id)arg1 inViewController:(id)arg2 showingTracePicker:(char)arg3 ;
-(void)startDefaultRadarContext;
-(char)_isMainScreenMapView:(id)arg1 ;
-(LightLevelController *)lightLevelController;
-(void)_updateUserActivity;
-(void)yaw;
-(char)applicationCanPromptToCalibrateHeading:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)dealloc;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(unsigned)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)userActivityWillSave:(id)arg1 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void)zoom;
-(void)_keyboardDidShow:(id)arg1 ;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(MapsMainModeController *)mapController;
-(char)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)print;
-(void)navigation:(id)arg1 didChangeShouldSuppressCellularDataAlerts:(char)arg2 ;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void*)sharedAddressBook;
-(void)_userDefaultsDidChange:(id)arg1 ;
@end


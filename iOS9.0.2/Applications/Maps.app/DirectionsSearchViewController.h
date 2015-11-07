/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/CustomSearchManagerObserver.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Maps/SearchCompletionsTableViewControllerDelegate.h>
#import <Maps/TransitAppSelectionControllerDelegate.h>

@protocol DirectionsSearchViewControllerDelegate;
@class SearchFieldItem, UIBarButtonItem, SearchCompletionsTableViewController, DirectionsFieldsView, UIView, UINavigationController, TransitAppSelectionController, BlurView, PopoverRevealViewController, NSString;

@interface DirectionsSearchViewController : UIViewController <CustomSearchManagerObserver, UITextFieldDelegate, SearchCompletionsTableViewControllerDelegate, TransitAppSelectionControllerDelegate> {

	id<DirectionsSearchViewControllerDelegate> _delegate;
	unsigned _transportType;
	unsigned _nextPresentationtransportType;
	SearchFieldItem* _startItem;
	SearchFieldItem* _endItem;
	int _activeSearchField;
	UIBarButtonItem* _routeButtonItem;
	SearchCompletionsTableViewController* _searchCompletionsController;
	DirectionsFieldsView* _directionsFieldsView;
	UIView* _bottomLine;
	char _ignoreTextFieldChangedNotifications;
	UINavigationController* _transitNavigationController;
	TransitAppSelectionController* _transitAppSelectionController;
	float _leftEdgeOfTextForHorizontalScroll;
	BlurView* _backdrop;
	UIView* _searchBlurView;
	char _canShowRouteCompletions;
	unsigned _nextPresentationTransportType;
	PopoverRevealViewController* _popoverRevealViewController;

}

@property (assign,nonatomic,__weak) id<DirectionsSearchViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned transportType;                                                        //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) unsigned nextPresentationTransportType;                                        //@synthesize nextPresentationTransportType=_nextPresentationTransportType - In the implementation block
@property (assign,nonatomic) int activeSearchField;                                                         //@synthesize activeSearchField=_activeSearchField - In the implementation block
@property (nonatomic,readonly) SearchFieldItem * startItem;                                                 //@synthesize startItem=_startItem - In the implementation block
@property (nonatomic,readonly) SearchFieldItem * endItem;                                                   //@synthesize endItem=_endItem - In the implementation block
@property (assign,nonatomic) char canShowRouteCompletions;                                                  //@synthesize canShowRouteCompletions=_canShowRouteCompletions - In the implementation block
@property (assign,nonatomic,__weak) PopoverRevealViewController * popoverRevealViewController;              //@synthesize popoverRevealViewController=_popoverRevealViewController - In the implementation block
@property (nonatomic,retain) DirectionsFieldsView * directionsFieldsView;                                   //@synthesize directionsFieldsView=_directionsFieldsView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * routeButtonItem;                                             //@synthesize routeButtonItem=_routeButtonItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 ;
-(void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(char)arg3 shouldSelectOnMap:(char)arg4 ;
-(void)_updateTransparency;
-(void)searchCompletionsTableViewControllerDidSelectCollectionsButton:(id)arg1 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3 ;
-(void)_loadViewIfNeeded;
-(void)setRouteButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_userEditedTextField:(id)arg1 ;
-(id)_imageForDrivingMode:(unsigned)arg1 isMini:(char)arg2 ;
-(void)showRoutingAppsAnimated:(char)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNextPresentationTransportType:(unsigned)arg1 ;
-(char)canShowRouteCompletions;
-(void)setDirectionsFieldsView:(DirectionsFieldsView *)arg1 ;
-(void)_setFirstResponder;
-(char)_shouldShowCompactControlsForCurrentSize;
-(unsigned)nextPresentationTransportType;
-(char)_readyToRoute;
-(void)populateActiveSearchFieldsWithOrigin:(id)arg1 andDestination:(id)arg2 ;
-(void)populateActiveSearchFieldWith:(id)arg1 ;
-(id)transitAppSelectionController;
-(void)setCanShowRouteCompletions:(char)arg1 ;
-(void)transitAppSelectionControllerDidCancel:(id)arg1 ;
-(UIBarButtonItem *)routeButtonItem;
-(void)_resizeCompletionTable;
-(void)_reverseDirectionsButtonTapped;
-(PopoverRevealViewController *)popoverRevealViewController;
-(void)_proceedToNextSearchField;
-(void)setPopoverRevealViewController:(PopoverRevealViewController *)arg1 ;
-(void)_usePreferredTransportType;
-(void)setActiveSearchField:(int)arg1 ;
-(void)_refreshSearchFieldText:(int)arg1 ;
-(DirectionsFieldsView *)directionsFieldsView;
-(void)transitAppSelectionControllerDidSelectApp:(id)arg1 ;
-(void)_refreshSearchFieldAccessoryViews;
-(void)_refreshRouteButtonAvailibility;
-(void)performViewTransitionWithCoordinator:(id)arg1 ;
-(int)activeSearchField;
-(void)_refreshReverseDirectionsButton;
-(void)_routeButtonTapped:(id)arg1 ;
-(SearchFieldItem *)startItem;
-(void)_presentTransitSelectorAnimated:(char)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SearchFieldItem *)endItem;
-(void)_route;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<DirectionsSearchViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<DirectionsSearchViewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)reset;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(unsigned)transportType;
@end

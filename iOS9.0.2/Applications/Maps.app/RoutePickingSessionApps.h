/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TransitAppSelectionControllerDelegate.h>
#import <Maps/RoutePickingSessionBasics.h>

@protocol RoutePickingDisplayableRoutes;
@class RoutePickingModeController, TransitAppSelectionController, AdaptivePresenter, NSString;

@interface RoutePickingSessionApps : NSObject <TransitAppSelectionControllerDelegate, RoutePickingSessionBasics> {

	TransitAppSelectionController* _appSelector;
	id<RoutePickingDisplayableRoutes> _routes;
	AdaptivePresenter* _presenter;
	RoutePickingModeController* _routePickingMode;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) RoutePickingModeController * routePickingMode;              //@synthesize routePickingMode=_routePickingMode - In the implementation block
-(int)selectedVariant;
-(id)_mainChrome;
-(RoutePickingModeController *)routePickingMode;
-(void)setRoutePickingMode:(RoutePickingModeController *)arg1 ;
-(void)transitAppSelectionControllerDidCancel:(id)arg1 ;
-(void)transitAppSelectionControllerDidSelectApp:(id)arg1 ;
-(void)willStartLoadingExpectingNewSession:(char)arg1 withTiming:(id)arg2 animation:(id)arg3 ;
-(void)controlBarMainActionButtonTapped:(id)arg1 ;
-(void)didFinishLoading;
-(id)initWithDisplayableRoutes:(id)arg1 ;
-(void)resignCurrentWithAnimation:(id)arg1 ;
-(void)becomeCurrentWithAnimation:(id)arg1 ;
-(UIEdgeInsets)additionalInsetsForSession;
-(void)dealloc;
-(void)layout;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/DirectionsManagerObserver.h>

@protocol StarkNavigationStartupDelegate;
@class DirectionsWaypoint, GEOURLRouteHandle, NSString;

@interface StarkNavigationStartupSession : NSObject <DirectionsManagerObserver> {

	char _started;
	char _ended;
	DirectionsWaypoint* _destination;
	GEOURLRouteHandle* _routeHandle;
	char _startWithETAOnly;
	id<StarkNavigationStartupDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<StarkNavigationStartupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char startWithETAOnly;                                           //@synthesize startWithETAOnly=_startWithETAOnly - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isStartingNavigation;
+(id)_runningSessions;
+(id)sessionWithSearchResultDestination:(id)arg1 routeHandle:(id)arg2 ;
+(id)sessionWithAddressDestination:(id)arg1 ;
+(void)_removeSessionFromRunningSessions:(id)arg1 ;
+(id)nonNavigableRouteAlertUserInfo;
+(void)_addSessionToRunningSessions:(id)arg1 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidFailToLoadMoreRoutes:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidCancelLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didStartNavigationSessionOfType:(int)arg2 options:(int)arg3 ;
-(void)directionsManagerDidFailToLoadInitialRoutes:(id)arg1 withError:(id)arg2 ;
-(void)setStartWithETAOnly:(char)arg1 ;
-(void)_presentErrorIfPossible:(id)arg1 ;
-(void)_endWithError:(id)arg1 ;
-(id)initWithDestinationWaypoint:(id)arg1 routeHandle:(id)arg2 ;
-(char)_shouldPresentError:(id)arg1 ;
-(char)startWithETAOnly;
-(void)cancel;
-(void)setDelegate:(id<StarkNavigationStartupDelegate>)arg1 ;
-(void)dealloc;
-(id<StarkNavigationStartupDelegate>)delegate;
-(void)start;
@end


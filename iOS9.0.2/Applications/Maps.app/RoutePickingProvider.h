/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class RoutePickingModeController, DirectionsWaypoint;


@protocol RoutePickingProvider <NSObject>
@property (assign,nonatomic,__weak) RoutePickingModeController * routePickingMode; 
@property (nonatomic,readonly) DirectionsWaypoint * startWaypoint; 
@property (nonatomic,readonly) DirectionsWaypoint * endWaypoint; 
@required
-(id)latestReportAProblemRecording;
-(RoutePickingModeController *)routePickingMode;
-(unsigned)lastRequestedTransportType;
-(void)writeTraceToFile;
-(id)lastRequestedDisplayableRoutes;
-(id)displayableRoutes;
-(void)setRoutePickingMode:(id)arg1;
-(id)lastRequestedTiming;
-(void)beginLoadingRoutesFromWaypoint:(id)arg1 toWaypoint:(id)arg2 mode:(unsigned)arg3 traits:(id)arg4 timepoint:(SCD_Struct_Di42)arg5 sortOption:(int)arg6 routeHandle:(id)arg7 tracePlayer:(id)arg8 withFeedback:(id)arg9 withUserInfo:(id)arg10;
-(id)currentError;
-(char)isLoading;
-(DirectionsWaypoint *)startWaypoint;
-(DirectionsWaypoint *)endWaypoint;

@end

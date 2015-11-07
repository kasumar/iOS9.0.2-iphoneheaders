/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebGeolocationCoreLocationUpdateListener
@required
-(void)resetGeolocation;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPosition*)arg1;
-(void)errorOccurred:(id)arg1;

@end

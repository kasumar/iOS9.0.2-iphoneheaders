/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBAppSwitcherRemoteAlertSet;

@interface SBAppSwitcherRemoteAlertManager : NSObject {

	SBAppSwitcherRemoteAlertSet* _remoteAlerts;

}
+(id)sharedInstance;
-(id)currentRemoteAlerts;
-(void)addPlaceholderForIdentifier:(id)arg1 ;
-(void)removePlaceholderForIdentifier:(id)arg1 ;
-(void)addRemoteAlert:(id)arg1 ;
-(void)removeRemoteAlert:(id)arg1 ;
-(void)dealloc;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen, NSString, NSMutableArray, SBStarkScreenFocusAssertion, BSZeroingWeakReference;

@interface SBStarkScreenFocusController : NSObject {

	UIScreen* _screen;
	NSString* _displayID;
	NSMutableArray* _assertions;
	SBStarkScreenFocusAssertion* _lastFocusAssertion;
	BSZeroingWeakReference* _weak_lastFocusWindow;

}
-(id)focusWindow;
-(void)_updateEventFocus;
-(void)_applyAssertion:(id)arg1 ;
-(void)takeWithPriority:(float)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5 ;
-(void)dropReason:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithScreen:(id)arg1 ;
@end


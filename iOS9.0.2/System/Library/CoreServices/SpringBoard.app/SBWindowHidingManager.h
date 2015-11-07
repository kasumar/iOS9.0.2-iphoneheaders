/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMapTable;

@interface SBWindowHidingManager : NSObject {

	NSMapTable* _windowStateMap;
	NSMapTable* _hidingContextMap;
	SBWindowLevelRange_struct _hideRange;

}
+(id)sharedInstance;
+(void)start;
-(void)setAlpha:(float)arg1 forWindow:(id)arg2 ;
-(void)startHidingWindowsExclusivelyFromLevel:(float)arg1 toLevel:(float)arg2 forContext:(id)arg3 reason:(id)arg4 ;
-(void)stopHidingWindowsForContext:(id)arg1 ;
-(void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2 ;
-(char)_isHidingWindowLevel:(float)arg1 ;
-(void)_recomputeHideRangeAndAdjustWindows;
-(char)_isHidingWindows;
-(void)_adjustWindowsForActiveHideRange;
-(void)_captureWindow:(id)arg1 ;
-(void)_releaseWindow:(id)arg1 ;
-(id)dumpHidingState;
-(id)dumpKnownWindows;
-(id)init;
@end

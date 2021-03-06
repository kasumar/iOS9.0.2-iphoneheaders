/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureManager.h>

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {

	char _multitaskingGesturesEnabled;

}

@property (assign,setter=_setMultitaskingGesturesEnabled:,getter=_isMultitaskingGesturesEnabled,nonatomic) char multitaskingGesturesEnabled;              //@synthesize multitaskingGesturesEnabled=_multitaskingGesturesEnabled - In the implementation block
-(char)_isMultitaskingGesturesEnabled;
-(void)_setMultitaskingGesturesEnabled:(char)arg1 ;
-(void)_updateUserPreferences;
-(char)_isGestureWithTypeAllowed:(unsigned)arg1 ;
-(char)_shouldEnableSystemGestureWithType:(unsigned)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


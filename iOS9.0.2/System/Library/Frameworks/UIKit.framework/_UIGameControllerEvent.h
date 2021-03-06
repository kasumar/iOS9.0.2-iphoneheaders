/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI96 _previousState;
	int _inputType;

}
-(int)type;
-(void)_maybeConvertAndSendAsPressesEvent;
-(int)subtype;
-(CGPoint)_leftStickPosition;
-(void)_sendEventToResponder:(id)arg1 ;
-(char)_processStandardButtons:(SCD_Struct_UI96*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(char)_determineInputTypeAndProcess:(SCD_Struct_UI96*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(char)_processDPad:(SCD_Struct_UI96*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(char)_processLeftStick:(SCD_Struct_UI96*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(char)_processShoulder:(SCD_Struct_UI96*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIResponder, UIWindow;


@protocol _UIResponderForwardable <NSObject>
@property (assign,setter=_setForwardablePhase:,nonatomic) int _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,retain,readonly) UIWindow * window; 
@required
-(UIWindow *)window;
-(id)gestureRecognizers;
-(void)_setForwardablePhase:(int)arg1;
-(UIResponder *)_responder;
-(void)_setResponder:(id)arg1;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(int)arg1;
-(char)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
-(int)_forwardablePhase;
-(char)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;

@end


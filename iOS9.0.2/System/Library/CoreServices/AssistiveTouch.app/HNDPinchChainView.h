/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@interface HNDPinchChainView : HNDView {

	CGPoint _startPoint;
	CGPoint _endPoint;
	char _pressed;
	int pinchChainMode;

}

@property (assign,nonatomic) CGPoint startPoint;                         //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint endPoint;                           //@synthesize endPoint=_endPoint - In the implementation block
@property (assign,getter=isPressed,nonatomic) char pressed;              //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) int pinchChainMode; 
-(void)setPinchChainMode:(int)arg1 ;
-(int)pinchChainMode;
-(char)isPressed;
-(CGPoint)endPoint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isUserInteractionEnabled;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setPressed:(char)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)midPoint;
@end

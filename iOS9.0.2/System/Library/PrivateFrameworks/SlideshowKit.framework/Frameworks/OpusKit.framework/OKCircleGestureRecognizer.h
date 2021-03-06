/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class CAShapeLayer;

@interface OKCircleGestureRecognizer : UIGestureRecognizer {

	CGPoint _origin;
	float _lastAngle;
	float _angle;
	CAShapeLayer* _roundLayer;
	CAShapeLayer* _pointLayer;
	CAShapeLayer* _originLayer;
	float _continuousProgress;
	float _diffenceProgress;

}

@property (nonatomic,readonly) float diffenceProgress;                //@synthesize diffenceProgress=_diffenceProgress - In the implementation block
@property (nonatomic,readonly) float continuousProgress;              //@synthesize continuousProgress=_continuousProgress - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)initDebugLayer:(CGPoint)arg1 ;
-(void)updateDebug:(CGPoint)arg1 angle:(float)arg2 ;
-(void)resetDebug;
-(float)continuousProgress;
-(float)diffenceProgress;
@end


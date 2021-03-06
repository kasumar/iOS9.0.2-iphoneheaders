/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/_UISettings.h>

@interface SBAnimationCurveSettings : _UISettings {

	unsigned _curve;
	CGPoint _controlPoint1;
	CGPoint _controlPoint2;

}

@property (assign,nonatomic) unsigned curve;                     //@synthesize curve=_curve - In the implementation block
@property (assign,nonatomic) CGPoint controlPoint1;              //@synthesize controlPoint1=_controlPoint1 - In the implementation block
@property (assign,nonatomic) CGPoint controlPoint2;              //@synthesize controlPoint2=_controlPoint2 - In the implementation block
+(id)_rowsRelativeToKeyPath:(id)arg1 ;
+(id)settingsControllerModule;
-(void)setControlPoint1:(CGPoint)arg1 ;
-(void)setControlPoint2:(CGPoint)arg1 ;
-(void)setCurve:(unsigned)arg1 ;
-(void)setDefaultValues;
-(unsigned)curve;
-(void)_invalidate;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
@end


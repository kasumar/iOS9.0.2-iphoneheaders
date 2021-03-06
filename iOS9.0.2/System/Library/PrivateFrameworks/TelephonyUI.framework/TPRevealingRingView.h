/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class TPBackgroundRoundedRectView, TPPathView, UIColor;

@interface TPRevealingRingView : UIView {

	char _revealed;
	TPBackgroundRoundedRectView* _outerView;
	TPPathView* _outerGammaView;
	TPPathView* _innerGammaView;
	TPPathView* _innerView;
	UIColor* _colorOutsideRing;
	UIColor* _colorInsideRing;
	UIEdgeInsets _paddingOutsideRing;
	float _defaultRingStrokeWidth;
	float _gammaBoost;
	float _revealAnimationDuration;
	float _unrevealAnimationDuration;
	float _minimumRevealingScale;
	float _cornerRadius;
	int _animationStyle;
	char _isCircularRing;
	char _innerGammaAlpha;
	char _gammaBoostOuterRing;
	char _gammaBoostInside;
	float _alphaInsideRing;
	float _alphaOutsideRing;

}

@property (nonatomic,readonly) CGSize ringSize; 
@property (nonatomic,readonly) UIEdgeInsets paddingOutsideRing;              //@synthesize paddingOutsideRing=_paddingOutsideRing - In the implementation block
@property (assign,nonatomic) float cornerRadius;                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) float defaultRingStrokeWidth;                   //@synthesize defaultRingStrokeWidth=_defaultRingStrokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * colorOutsideRing;                     //@synthesize colorOutsideRing=_colorOutsideRing - In the implementation block
@property (nonatomic,retain) UIColor * colorInsideRing;                      //@synthesize colorInsideRing=_colorInsideRing - In the implementation block
@property (assign,nonatomic) float gammaBoost;                               //@synthesize gammaBoost=_gammaBoost - In the implementation block
@property (assign,nonatomic) float revealAnimationDuration;                  //@synthesize revealAnimationDuration=_revealAnimationDuration - In the implementation block
@property (assign,nonatomic) float unrevealAnimationDuration;                //@synthesize unrevealAnimationDuration=_unrevealAnimationDuration - In the implementation block
@property (assign,nonatomic) float alphaOutsideRing;                         //@synthesize alphaOutsideRing=_alphaOutsideRing - In the implementation block
@property (assign,nonatomic) float alphaInsideRing;                          //@synthesize alphaInsideRing=_alphaInsideRing - In the implementation block
@property (assign,nonatomic) char gammaBoostOuterRing;                       //@synthesize gammaBoostOuterRing=_gammaBoostOuterRing - In the implementation block
@property (assign,nonatomic) char gammaBoostInside;                          //@synthesize gammaBoostInside=_gammaBoostInside - In the implementation block
@property (assign,nonatomic) int animationStyle;                             //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) float minimumRevealingScale;                    //@synthesize minimumRevealingScale=_minimumRevealingScale - In the implementation block
-(void)setRevealed:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(CGSize)intrinsicContentSize;
-(int)animationStyle;
-(void)setAnimationStyle:(int)arg1 ;
-(void)setGammaBoostInside:(char)arg1 ;
-(void)setGammaBoostOuterRing:(char)arg1 ;
-(void)setRingGammaBoost:(float)arg1 ;
-(UIEdgeInsets)paddingOutsideRing;
-(id)initWithFrame:(CGRect)arg1 paddingOutsideRing:(UIEdgeInsets)arg2 ;
-(void)setColorInsideRing:(UIColor *)arg1 ;
-(void)setColorOutsideRing:(UIColor *)arg1 ;
-(CGSize)ringSize;
-(void)setGammaBoost:(float)arg1 ;
-(void)setUsesColorDodgeBlending:(char)arg1 ;
-(void)setUsesColorBurnBlending:(char)arg1 ;
-(float)alphaInsideRing;
-(void)setAlphaInsideRing:(float)arg1 ;
-(void)setAlphaOutsideRing:(float)arg1 ;
-(UIColor *)colorOutsideRing;
-(id)_bezierPathForRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
-(void)setDefaultRingStrokeWidth:(float)arg1 ;
-(void)setRevealAnimationDuration:(float)arg1 ;
-(void)setUnrevealAnimationDuration:(float)arg1 ;
-(void)setMinimumRevealingScale:(float)arg1 ;
-(void)setPaddingOutsideRing:(UIEdgeInsets)arg1 ;
-(void)_adjustGammaBoostIfNecessary;
-(void)_evaluateCircularness;
-(void)setRevealed:(char)arg1 animated:(char)arg2 delay:(double)arg3 ;
-(void)_animateForReveal:(char)arg1 withDuration:(float)arg2 delay:(double)arg3 ;
-(void)_setOuterGammaScale:(float)arg1 ;
-(void)_setInnerGammaScale:(float)arg1 ;
-(void)_setInnerCircleScale:(float)arg1 ;
-(void)_calculateOuter:(CGRect*)arg1 inner:(CGRect*)arg2 newXOffset:(float*)arg3 newYOffset:(float*)arg4 withScale:(float)arg5 ;
-(char)_shouldDrawAsCircle:(CGSize)arg1 cornerRadius:(float)arg2 ;
-(char)_isSquare:(CGSize)arg1 ;
-(float)alphaOutsideRing;
-(float)defaultRingStrokeWidth;
-(float)gammaBoost;
-(float)revealAnimationDuration;
-(float)unrevealAnimationDuration;
-(float)minimumRevealingScale;
-(UIColor *)colorInsideRing;
-(char)gammaBoostOuterRing;
-(char)gammaBoostInside;
@end


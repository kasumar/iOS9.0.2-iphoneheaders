/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <ProceduralWallpapers/BokehParallaxScene.h>

@class NSMutableArray;

@interface BokehScene : BokehParallaxScene {

	int _circleBlendMode;
	int _finalBlendMode;
	char _enableTwoPassBlending;
	int _numCircles;
	NSMutableArray* blurCircles;
	NSMutableArray* colors;
	NSMutableArray* colorsFrequency;
	unsigned totalColorsFrequency;
	char _isOn;
	char isBlurredVersion;
	char _needsFrameCallback;
	/*^block*/id _frameCallback;

}

@property (assign) char isBlurredVersion; 
@property (copy) id frameCallback;                             //@synthesize frameCallback=_frameCallback - In the implementation block
@property (assign,nonatomic) int circleBlendMode; 
-(void)didChangeSize:(CGSize)arg1 ;
-(void)didEvaluateActions;
-(void)_setNeedsRender;
-(id)initWithSize:(CGSize)arg1 ;
-(void)nudge;
-(id)averageColorForRect:(CGRect)arg1 ;
-(void)presimulateWallpaperAnimation;
-(char)isBlurredVersion;
-(void)setCircleBlendMode:(int)arg1 ;
-(id)fadingAction;
-(void)addBokehCircles;
-(id)frameCallback;
-(void)relocateBokehCircle:(id)arg1 ;
-(void)transitionIn;
-(void)addBokehCircle:(CGPoint)arg1 parallax:(float)arg2 ;
-(void)setIsBlurredVersion:(char)arg1 ;
-(id)flickerAction;
-(void)addRandomBokehCircle;
-(void)reloadColors;
-(void)setFrameCallback:(id)arg1 ;
-(int)circleBlendMode;
-(void)transitionOut;
-(void)transitionInFromBlack;
-(id)wobbleAction;
@end


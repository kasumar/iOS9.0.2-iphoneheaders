/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MRLayer, MCTransitionTrigger, MRGesturePanZoomRotation;

@interface MRTransitionChanges : NSObject {

	double startTime;
	double duration;
	char isBackwards;
	MRLayer* _currentSublayer;
	MRLayer* _nextSublayer;
	MCTransitionTrigger* _transition;
	MRGesturePanZoomRotation* _pzr;

}

@property (retain) MRLayer * currentSublayer;                     //@synthesize currentSublayer=_currentSublayer - In the implementation block
@property (retain) MRLayer * nextSublayer;                        //@synthesize nextSublayer=_nextSublayer - In the implementation block
@property (retain) MCTransitionTrigger * transition;              //@synthesize transition=_transition - In the implementation block
@property (retain) MRGesturePanZoomRotation * pzr;                //@synthesize pzr=_pzr - In the implementation block
-(MRGesturePanZoomRotation *)pzr;
-(void)setPzr:(MRGesturePanZoomRotation *)arg1 ;
-(MRLayer *)nextSublayer;
-(MRLayer *)currentSublayer;
-(void)setCurrentSublayer:(MRLayer *)arg1 ;
-(void)setNextSublayer:(MRLayer *)arg1 ;
-(void)dealloc;
-(void)setTransition:(MCTransitionTrigger *)arg1 ;
-(MCTransitionTrigger *)transition;
@end

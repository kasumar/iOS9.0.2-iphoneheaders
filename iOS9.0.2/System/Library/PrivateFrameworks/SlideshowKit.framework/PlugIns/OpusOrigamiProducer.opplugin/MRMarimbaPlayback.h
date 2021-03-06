/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MRMarimbaPlayback
@property (assign,nonatomic) char isAboutToPlay; 
@required
-(void)gotoNextSlide;
-(double)timeForSlide:(id)arg1;
-(void)gotoNextSlide:(char)arg1;
-(char)isAboutToPlay;
-(double)relativeTime;
-(void)gotoSlide:(id)arg1;
-(id)currentSlides;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(char)arg4;
-(id)displayedEffectContainers;
-(void)gotoPreviousSlide:(char)arg1;
-(double)startTimeForSlide:(id)arg1;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(double)relativeTimeForLayer:(id)arg1;
-(void)moveToSubtitleForSlide:(id)arg1;
-(void)gotoPreviousSlide;
-(double)relativeTimeForBackgroundAudio;
-(void)setIsAboutToPlay:(char)arg1;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2;
-(void)gotoText:(id)arg1;
-(void)removeEffectContainersBeforeTime:(double)arg1;
-(void)moveToTitleSlide;
-(id)currentSlide;
-(char)isInTransition;

@end


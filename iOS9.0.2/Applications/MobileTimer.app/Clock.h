/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol Clock
@property (nonatomic,readonly) int runMode; 
@optional
-(double)updateInterval;
-(double)coarseUpdateInterval;
-(void)updateFlutter;
-(void)updateTimeContinuously:(int)arg1;

@required
-(void)stop;
-(void)start;
-(void)updateTime;
-(int)runMode;

@end


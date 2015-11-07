/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNGuidanceManagerDelegate <NSObject>
@required
-(void)guidanceManager:(id)arg1 updatePointOfInterest:(SCD_Struct_RA7)arg2 focusStyle:(int)arg3;
-(void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned)arg2;
-(void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(int)arg3 stage:(unsigned)arg4 hasSecondaryManeuver:(char)arg5 completionBlock:(/*^block*/id)arg6;
-(void)guidanceManagerHasReachedEndOfLeg:(id)arg1 announce:(id)arg2;
-(void)guidanceManagerDidUpdateProgress:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 currentStepIndex:(unsigned)arg4 distanceUntilManeuver:(double)arg5 timeUntilManeuver:(double)arg6;
-(void)guidanceManagerHasArrived:(id)arg1 announce:(id)arg2;
-(char)guidanceManagerIsOffRoute:(id)arg1 location:(id)arg2 stepIndex:(unsigned)arg3;
-(void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned)arg6;
-(void)guidanceManager:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di17*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)guidanceManager:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di17*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(char)arg12;
-(void)guidanceManager:(id)arg1 willAnnounce:(unsigned)arg2 inSeconds:(double)arg3;
-(void)guidanceManagerHideSecondaryStep:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) char minimized; 
@required
-(char)isActive;
-(char)isMinimized;
-(char)shouldSaveMinimizationState;
-(void)setMinimized:(char)arg1;
-(char)isAutomatic;
-(char)canDismiss;
-(void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(char)arg2;
-(void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(char)arg2;

@end

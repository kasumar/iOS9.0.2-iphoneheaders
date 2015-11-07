/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NCInteractiveNotificationServiceInterface
@required
-(void)_setContext:(id)arg1;
-(void)_getInitialStateWithCompletion:(/*^block*/id)arg1;
-(void)_setMaximumHeight:(float)arg1;
-(void)_setModal:(char)arg1;
-(void)_interactiveNotificationDidAppear;
-(void)_proximityStateDidChange:(char)arg1;
-(void)_didChangeRevealPercent:(float)arg1;
-(void)_willPresentFromActionIdentifier:(id)arg1;
-(void)_getActionContextWithCompletion:(/*^block*/id)arg1;
-(void)_getActionTitlesWithCompletion:(/*^block*/id)arg1;
-(void)_handleActionAtIndex:(unsigned)arg1;
-(void)_handleActionIdentifier:(id)arg1;

@end

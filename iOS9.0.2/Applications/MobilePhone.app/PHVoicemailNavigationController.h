/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <MobilePhone/PhoneNavigationController.h>

@class PHVoicemailListViewController, PHVoicemailSetupViewController, PHVoicemailNoContentViewController, TPAlertViewHelper;

@interface PHVoicemailNavigationController : PhoneNavigationController {

	PHVoicemailListViewController* _inboxViewController;
	PHVoicemailListViewController* _trashViewController;
	PHVoicemailListViewController* _blockedViewController;
	PHVoicemailSetupViewController* _setupViewController;
	PHVoicemailNoContentViewController* _noContentViewController;
	TPAlertViewHelper* _mailboxFullAlertViewHelper;
	char _active;
	char _mailboxRequiresSetupPreviousValue;
	char _sharedServiceIsSubscribedPreviousValue;

}

@property (readonly) PHVoicemailListViewController * inboxViewController; 
@property (readonly) PHVoicemailListViewController * trashViewController; 
@property (readonly) PHVoicemailListViewController * blockedViewController; 
@property (readonly) PHVoicemailSetupViewController * setupViewController; 
@property (readonly) PHVoicemailNoContentViewController * noContentViewController; 
@property (assign) char mailboxRequiresSetupPreviousValue;                                      //@synthesize mailboxRequiresSetupPreviousValue=_mailboxRequiresSetupPreviousValue - In the implementation block
@property (assign) char sharedServiceIsSubscribedPreviousValue;                                 //@synthesize sharedServiceIsSubscribedPreviousValue=_sharedServiceIsSubscribedPreviousValue - In the implementation block
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconName;
+(int)tabViewType;
+(id)tabBarIconImageName;
+(SCD_Struct_Ph0)badge;
-(char)shouldSnapshot;
-(void)_handleStoreChanged:(id)arg1 ;
-(PHVoicemailListViewController *)trashViewController;
-(PHVoicemailListViewController *)blockedViewController;
-(void)addNotificationObservers;
-(void)removeNotificationObservers;
-(void)_updateUIStateForce:(char)arg1 ;
-(void)_checkMailboxUsage;
-(PHVoicemailListViewController *)inboxViewController;
-(char)mailboxRequiresSetupPreviousValue;
-(char)sharedServiceIsSubscribedPreviousValue;
-(PHVoicemailNoContentViewController *)noContentViewController;
-(void)setMailboxRequiresSetupPreviousValue:(char)arg1 ;
-(void)setSharedServiceIsSubscribedPreviousValue:(char)arg1 ;
-(void)_handleSetupRequirementChanged:(id)arg1 ;
-(void)_handleOnlineStateChanged:(id)arg1 ;
-(void)_handleMessageWaitingStateChanged:(id)arg1 ;
-(void)_handleTaskEndedOrCancelled:(id)arg1 ;
-(void)_voicemailsAdded:(id)arg1 ;
-(void)_handleSuspend:(id)arg1 ;
-(void)_handleActiveNotification:(id)arg1 ;
-(void)_updateUIState;
-(void)_invalidateBadge;
-(void)_playVoicemailSound;
-(void)_handleCTIndicatorsVoicemailNotification:(id)arg1 ;
-(PHVoicemailSetupViewController *)setupViewController;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)handleURL:(id)arg1 ;
@end


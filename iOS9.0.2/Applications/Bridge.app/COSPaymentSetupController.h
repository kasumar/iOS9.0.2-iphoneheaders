/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface COSPaymentSetupController : NSObject <PKPaymentSetupViewControllerDelegate, COSBuddyController> {

	PKPaymentSetupAssistantRegistrationViewController* _registrationController;
	id<COSBuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1 ;
-(char)controllerAllowsNavigatingBackTo;
-(char)holdBeforeDisplaying;
-(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id)init;
-(id<COSBuddyControllerDelegate>)delegate;
-(id)viewController;
@end


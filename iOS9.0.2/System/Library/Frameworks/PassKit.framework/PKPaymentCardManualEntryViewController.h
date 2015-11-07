/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupDisambiguationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupBrowseProductsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentCameraCaptureViewControllerDelegate.h>

@class PKPaymentSetupFindWithoutNumberFooterView, PKPaymentSetupBrowseProductsViewController, NSString;

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate> {

	PKPaymentSetupFindWithoutNumberFooterView* _findWithoutNumberFooterView;
	PKPaymentSetupBrowseProductsViewController* _findWithoutNumberBrowser;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newPaymentEligibilityRequest;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(id)visibleFieldIdentifiers;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2 ;
-(void)disambiguationViewControllerSetupLater:(id)arg1 ;
-(char)_shouldUseInlineSecondaryProvisioningFlow;
-(id)_findWithoutNumberFooterView;
-(void)findCardWithoutNumber:(id)arg1 ;
-(void)_captureFromCamera:(id)arg1 ;
-(void)_cameraCaptureCancelButtonPressed:(id)arg1 ;
-(void)_dismissCameraCaptureViewController:(id)arg1 ;
-(void)updateFieldsModelWithCameraCaptureObjects:(id)arg1 ;
-(void)_performSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_performDisambiguationWithCompletion:(/*^block*/id)arg1 ;
-(void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performInlineSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)fieldCellEditableTextFieldValueDidChange:(id)arg1 ;
-(void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 ;
-(void)cameraCaptureViewControllerDidFail:(id)arg1 ;
-(void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)footerView;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class HKHealthStore, _HKMedicalIDData, _MedicalIDIntroductionView, NSUserActivity, NSString;

@interface WDMedicalIDViewController : UIViewController <HKMedicalIDViewControllerDelegate, UINavigationControllerDelegate> {

	HKHealthStore* _healthStore;
	_HKMedicalIDData* _medicalIDData;
	char _medicalIDIsNew;
	_MedicalIDIntroductionView* _introView;
	NSUserActivity* _userActivity;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_showMedicalIDIntroView;
-(void)_showMedicalIDView;
-(id)_createMedicalIDDataFromMeCardAndHealthKit;
-(void)_showMedicalIDEditor;
-(void)_createMedicalIDTapped:(id)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
@end

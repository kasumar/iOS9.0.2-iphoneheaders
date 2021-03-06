/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/BuddyController.h>

@protocol BuddyAppleIDSpinnerPageDelegate;
@class UIView, UILabel, UIActivityIndicatorView, NSString;

@interface BuddyAppleIDSpinnerPage : UIViewController <BuddyController> {

	UIView* _containerView;
	UILabel* _label;
	UIActivityIndicatorView* _spinner;
	id<BuddyAppleIDSpinnerPageDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initInExistingAccountMode:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)controllerAllowsNavigatingBack;
@end


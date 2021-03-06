/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class UILabel, UIButton, COSWatchView, UITapGestureRecognizer, NSString;

@interface COSCrownOrientationChoiceViewController : UIViewController <COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	UILabel* _crownTitleLabel;
	UILabel* _crownTitleDetailLabel;
	UIButton* _leftCrownButton;
	UIButton* _rightCrownButton;
	COSWatchView* _crownChoiceView;
	UITapGestureRecognizer* _crownTapRecognizer;
	UILabel* _crownDetailLabel;

}

@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * crownTitleLabel;                                   //@synthesize crownTitleLabel=_crownTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * crownTitleDetailLabel;                             //@synthesize crownTitleDetailLabel=_crownTitleDetailLabel - In the implementation block
@property (nonatomic,retain) UIButton * leftCrownButton;                                  //@synthesize leftCrownButton=_leftCrownButton - In the implementation block
@property (nonatomic,retain) UIButton * rightCrownButton;                                 //@synthesize rightCrownButton=_rightCrownButton - In the implementation block
@property (nonatomic,retain) COSWatchView * crownChoiceView;                              //@synthesize crownChoiceView=_crownChoiceView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * crownTapRecognizer;                 //@synthesize crownTapRecognizer=_crownTapRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * crownDetailLabel;                                  //@synthesize crownDetailLabel=_crownDetailLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tappedCrownImage:(id)arg1 ;
-(void)madeCrownSelection:(id)arg1 ;
-(void)_selectedCrownOnRight:(char)arg1 ;
-(UILabel *)crownTitleLabel;
-(void)setCrownTitleLabel:(UILabel *)arg1 ;
-(UILabel *)crownTitleDetailLabel;
-(void)setCrownTitleDetailLabel:(UILabel *)arg1 ;
-(UIButton *)leftCrownButton;
-(void)setLeftCrownButton:(UIButton *)arg1 ;
-(UIButton *)rightCrownButton;
-(void)setRightCrownButton:(UIButton *)arg1 ;
-(COSWatchView *)crownChoiceView;
-(void)setCrownChoiceView:(COSWatchView *)arg1 ;
-(UITapGestureRecognizer *)crownTapRecognizer;
-(void)setCrownTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UILabel *)crownDetailLabel;
-(void)setCrownDetailLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id)init;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end


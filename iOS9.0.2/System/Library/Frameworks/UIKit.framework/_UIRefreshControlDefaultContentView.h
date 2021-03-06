/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRefreshControlContentView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, NSMutableDictionary;

@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView {

	char _animationsAreValid;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UIImageView* _arrow;
	UIActivityIndicatorView* _spinner;
	NSMutableDictionary* _snappingTextFromValues;
	NSMutableDictionary* _snappingImageFromValues;
	NSMutableDictionary* _snappingArrowFromValues;
	char _areAnimationsValid;

}

@property (nonatomic,readonly) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * arrow;                            //@synthesize arrow=_arrow - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) char areAnimationsValid;                          //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setTintColor:(id)arg1 ;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(id)attributedTitle;
-(void)refreshControlInvalidatedSnappingHeight;
-(float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(float)maximumSnappingHeight;
-(float)minimumSnappingHeight;
-(void)willTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)didTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setAreAnimationsValid:(char)arg1 ;
-(void)_fadeInMagic;
-(void)_revealingMagic;
-(void)_snappingMagic;
-(void)_refreshingMagic;
-(void)_spinOutMagic;
-(double)_currentTimeOffset;
-(double)_snappingTimeOffset;
-(char)areAnimationsValid;
-(id)_revealingImageAnimations;
-(id)_revealingArrowAnimations;
-(id)_revealingTextAnimations;
-(void)_updateTimeOffsetOfRelevantLayers;
-(id)_regenerateCircle;
-(id)_regenerateArrow;
-(UIImageView *)arrow;
-(UIActivityIndicatorView *)spinner;
@end


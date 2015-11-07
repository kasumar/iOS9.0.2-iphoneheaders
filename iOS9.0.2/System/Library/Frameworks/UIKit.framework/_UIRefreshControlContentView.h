/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIRefreshControl, UIColor, NSAttributedString;

@interface _UIRefreshControlContentView : UIView {

	UIRefreshControl* _refreshControl;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) int style; 
@property (assign,nonatomic) UIRefreshControl * refreshControl;                 //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) float minimumSnappingHeight; 
@property (nonatomic,readonly) float maximumSnappingHeight; 
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(int)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)refreshControlInvalidatedSnappingHeight;
-(float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(float)maximumSnappingHeight;
-(float)minimumSnappingHeight;
-(void)willTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)didTransitionFromState:(int)arg1 toState:(int)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface NoGoodRouteTableViewCell : UITableViewCell {

	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;
	char _checked;

}

@property (assign,nonatomic) char checked;              //@synthesize checked=_checked - In the implementation block
+(char)requiresConstraintBasedLayout;
-(id)_autolayoutMetrics;
-(id)_autolayoutViews;
-(void)_addAutolayoutConstraints;
-(void)_createSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(char)checked;
@end


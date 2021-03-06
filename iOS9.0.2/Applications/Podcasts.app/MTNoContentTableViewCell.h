/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTTableViewCell.h>

@class UILabel, UIView, MTColorTheme, NSString;

@interface MTNoContentTableViewCell : MTTableViewCell {

	UILabel* _messageLabel;
	UIView* _separatorView;
	MTColorTheme* _colorTheme;
	UIEdgeInsets _contentInset;
	UIEdgeInsets __layoutMargins;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) MTColorTheme * colorTheme;                //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets _layoutMargins;              //@synthesize _layoutMargins=__layoutMargins - In the implementation block
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_layoutMargins;
-(void)setupCell;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
@end


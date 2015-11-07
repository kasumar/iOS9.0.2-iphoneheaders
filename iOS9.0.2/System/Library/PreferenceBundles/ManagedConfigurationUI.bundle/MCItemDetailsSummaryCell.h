/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface MCItemDetailsSummaryCell : UITableViewCell {

	NSArray* _detailViews;
	float _detailLabelOriginX;

}

@property (nonatomic,retain) NSArray * detailViews;                 //@synthesize detailViews=_detailViews - In the implementation block
@property (assign,nonatomic) float detailLabelOriginX;              //@synthesize detailLabelOriginX=_detailLabelOriginX - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(NSArray *)detailViews;
-(void)setDetailViews:(NSArray *)arg1 ;
-(void)setDetailLabelOriginX:(float)arg1 ;
-(void)createViewWithDescriptors:(id)arg1 ;
-(void)createViewWithItemDetailArray:(id)arg1 ;
-(float)detailLabelOriginX;
@end

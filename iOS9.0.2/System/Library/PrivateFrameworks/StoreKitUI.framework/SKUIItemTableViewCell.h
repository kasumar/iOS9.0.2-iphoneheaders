/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUITableViewCell.h>
#import <libobjc.A.dylib/SKUICellLayoutParentView.h>

@class SKUIItemCellLayout, NSString;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {

	char _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIItemCellLayout * layout; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(SKUIItemCellLayout *)layout;
-(void)setCellLayoutNeedsLayout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(int)arg3 ;
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 ;
@end


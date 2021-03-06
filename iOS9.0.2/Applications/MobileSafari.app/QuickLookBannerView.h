/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIToolbar.h>

@class UILabel, UIBarButtonItem, OpenInApplicationBarButtonItem;

@interface QuickLookBannerView : UIToolbar {

	UILabel* _filenameLabel;
	UIBarButtonItem* _flexibleSpaceItem;
	OpenInApplicationBarButtonItem* _openInApplicationItem;
	UIBarButtonItem* _openInOtherApplicationsItem;

}

@property (assign,nonatomic,__weak) id<QuickLookBannerViewDelegate> quickLookDelegate; 
-(char)updateWithQuickLookDocument:(id)arg1 ;
-(id)initWithQuickLookBannerViewDelegate:(id)arg1 ;
-(void)_layoutFilenameLabel;
-(void)_animateTo:(float)arg1 ;
-(void)setQuickLookDelegate:(id<QuickLookBannerViewDelegate>)arg1 ;
-(id<QuickLookBannerViewDelegate>)quickLookDelegate;
-(void)setFrame:(CGRect)arg1 ;
-(void)animateOut;
-(void)animateIn;
@end


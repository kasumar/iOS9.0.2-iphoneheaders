/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <libobjc.A.dylib/SKUIEmbeddedMediaViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, SKUISwooshPageComponent, SKUISwooshView, NSString;

@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	char _delegateWantsWillDisplay;
	SKUISwooshPageComponent* _gallerySwoosh;
	float _itemHeight;
	SKUISwooshView* _swooshView;

}

@property (nonatomic,readonly) SKUISwooshPageComponent * gallerySwoosh;                                //@synthesize gallerySwoosh=_gallerySwoosh - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIGallerySwooshViewControllerDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 forItemAtIndex:(int)arg2 ;
-(void)setDelegate:(id<SKUIGallerySwooshViewControllerDelegate>)arg1 ;
-(id)indexPathsForVisibleItems;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setColorScheme:(id)arg1 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(int)arg2 ;
-(id)_newViewWithMediaComponent:(id)arg1 ;
-(id)artworkForItemAtIndex:(int)arg1 ;
-(void)performActionForItemAtIndex:(int)arg1 animated:(char)arg2 ;
-(id)initWithGallerySwoosh:(id)arg1 ;
-(SKUISwooshPageComponent *)gallerySwoosh;
@end


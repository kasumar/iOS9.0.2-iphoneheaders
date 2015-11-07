/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionViewUpdateItem, NSMutableArray, NSArray;

@interface UICollectionViewUpdateGap : NSObject {

	UICollectionViewUpdateItem* _firstUpdateItem;
	UICollectionViewUpdateItem* _lastUpdateItem;
	NSMutableArray* _deleteItems;
	NSMutableArray* _insertItems;
	CGRect _beginningRect;
	CGRect _endingRect;

}

@property (nonatomic,retain) UICollectionViewUpdateItem * firstUpdateItem;              //@synthesize firstUpdateItem=_firstUpdateItem - In the implementation block
@property (nonatomic,retain) UICollectionViewUpdateItem * lastUpdateItem;               //@synthesize lastUpdateItem=_lastUpdateItem - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems; 
@property (nonatomic,readonly) NSArray * deleteItems;                                   //@synthesize deleteItems=_deleteItems - In the implementation block
@property (nonatomic,readonly) NSArray * insertItems;                                   //@synthesize insertItems=_insertItems - In the implementation block
@property (nonatomic,readonly) char isDeleteBasedGap; 
@property (nonatomic,readonly) char hasInserts; 
@property (nonatomic,readonly) char isSectionBasedGap; 
@property (assign,nonatomic) CGRect beginningRect;                                      //@synthesize beginningRect=_beginningRect - In the implementation block
@property (assign,nonatomic) CGRect endingRect;                                         //@synthesize endingRect=_endingRect - In the implementation block
+(id)gapWithUpdateItem:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setFirstUpdateItem:(UICollectionViewUpdateItem *)arg1 ;
-(void)setLastUpdateItem:(UICollectionViewUpdateItem *)arg1 ;
-(void)addUpdateItem:(id)arg1 ;
-(char)isDeleteBasedGap;
-(char)hasInserts;
-(NSArray *)updateItems;
-(char)isSectionBasedGap;
-(UICollectionViewUpdateItem *)firstUpdateItem;
-(UICollectionViewUpdateItem *)lastUpdateItem;
-(NSArray *)deleteItems;
-(NSArray *)insertItems;
-(CGRect)beginningRect;
-(void)setBeginningRect:(CGRect)arg1 ;
-(CGRect)endingRect;
-(void)setEndingRect:(CGRect)arg1 ;
@end

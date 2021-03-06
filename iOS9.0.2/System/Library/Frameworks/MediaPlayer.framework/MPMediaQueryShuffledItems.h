/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, MPMediaQuery, NSArray;

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying> {

	unsigned _activeShuffleType;
	char _dirty;
	NSMutableArray* _orderedArray;
	MPMediaQuery* _sourceMediaQuery;
	NSArray* _sourceMediaQueryItems;
	NSRange _focusedRange;

}

@property (nonatomic,readonly) MPMediaQuery * sourceMediaQuery;              //@synthesize sourceMediaQuery=_sourceMediaQuery - In the implementation block
@property (assign,nonatomic) NSRange focusedRange;                           //@synthesize focusedRange=_focusedRange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned realShuffleType; 
+(char)supportsSecureCoding;
-(unsigned)realShuffleType;
-(id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned)arg3 ;
-(void)_rebuildCaches;
-(unsigned)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned)arg2 ;
-(unsigned)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned)arg2 ;
-(void)_resetCaches;
-(void)_rebuildCachesWithInitialSourceIndex:(unsigned)arg1 ;
-(void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned)arg1 ;
-(void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned)arg1 ;
-(void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned)arg1 ;
-(id)_includeInShuffleItemsForQuery:(id)arg1 ;
-(id)initWithSourceMediaQuery:(id)arg1 ;
-(unsigned)indexOfItemWithPersistentID:(unsigned long long)arg1 ;
-(void)invalidateSourceMediaQueryAndLoadItems;
-(void)shuffleAlbumsWithInitialIndex:(unsigned)arg1 ;
-(void)shuffleItemsWithInitialIndex:(unsigned)arg1 ;
-(void)unshuffle;
-(MPMediaQuery *)sourceMediaQuery;
-(NSRange)focusedRange;
-(void)setFocusedRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
@end


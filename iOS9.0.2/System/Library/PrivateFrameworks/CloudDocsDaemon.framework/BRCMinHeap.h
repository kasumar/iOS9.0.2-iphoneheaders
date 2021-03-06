/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration> {

	id* _array;
	unsigned _size;
	/*^block*/id _comparator;
	unsigned long _mutation;
	NSMapTable* _objects;
	unsigned _count;

}

@property (nonatomic,readonly) unsigned count;              //@synthesize count=_count - In the implementation block
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_BR13*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(id)description;
-(char)containsObject:(id)arg1 ;
-(void)_moveDown:(id)arg1 index:(unsigned)arg2 ;
-(void)_moveUp:(id)arg1 index:(unsigned)arg2 ;
-(void)_moveUpOrDown:(id)arg1 index:(unsigned)arg2 ;
-(void)_shrink;
-(char)check;
-(void)removeFirstObject;
-(void)firstObjectWeightChanged;
-(void)objectWeightChanged:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end


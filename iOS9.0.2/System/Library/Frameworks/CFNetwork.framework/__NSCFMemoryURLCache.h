/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface __NSCFMemoryURLCache : NSURLCache {

	id _internal;
	unsigned _memoryCapacity;
	unsigned _currentLength;
	NSMutableDictionary* _memoryStorage;
	NSMutableArray* _memoryStorageLRU;
	NSObject*<OS_dispatch_queue> _memoryQueue;

}
+(void)initialize;
-(unsigned)currentDiskUsage;
-(id)initByCallingSuperSuperInit;
-(id)initEmptyCache;
-(id)initMemoryCache;
-(unsigned)currentMemoryUsage;
-(void)setMemoryCapacity:(unsigned)arg1 ;
-(void)setDiskCapacity:(unsigned)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 diskPath:(id)arg3 ;
-(void)removeAllCachedResponses;
-(unsigned)diskCapacity;
-(unsigned)memoryCapacity;
-(void)removeCachedResponseForRequest:(id)arg1 ;
@end

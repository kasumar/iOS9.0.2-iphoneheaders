/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface BKBookCacheController : NSObject {

	NSCountedSet* _openBooks;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSCountedSet * openBooks;                              //@synthesize openBooks=_openBooks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
+(id)sharedInstance;
-(void)setMetadataForAssetAtURL:(id)arg1 withHelper:(id)arg2 ;
-(void)setOpenBooks:(NSCountedSet *)arg1 ;
-(void)cachedURLForAssetURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSCountedSet *)openBooks;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MBEngine.h>

@protocol OS_dispatch_semaphore;
@class MBService, MBChunkStore, MBServiceCache, MBServiceEncryptionManager, MBServiceRetryStrategy, MBServiceReachabilityMonitor, NSObject, MBServiceSettingsContext, NSString;

@interface MBServiceEngine : MBEngine {

	MBService* _service;
	MBChunkStore* _chunkStore;
	MBServiceCache* _cache;
	MBServiceEncryptionManager* _encryptionManager;
	MBServiceRetryStrategy* _retryStrategy;
	MBServiceReachabilityMonitor* _reachability;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	char _cancelled;

}

@property (nonatomic,readonly) MBServiceSettingsContext * settingsContext; 
@property (nonatomic,readonly) NSString * backupUDID; 
@property (nonatomic,readonly) MBService * service;                                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) MBChunkStore * chunkStore;                                   //@synthesize chunkStore=_chunkStore - In the implementation block
@property (nonatomic,readonly) MBServiceCache * cache;                                      //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) MBServiceEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (nonatomic,readonly) MBServiceRetryStrategy * retryStrategy;                      //@synthesize retryStrategy=_retryStrategy - In the implementation block
@property (nonatomic,readonly) MBServiceReachabilityMonitor * reachability;                 //@synthesize reachability=_reachability - In the implementation block
-(MBServiceRetryStrategy *)retryStrategy;
-(MBServiceEncryptionManager *)encryptionManager;
-(void)runWithQueue:(id)arg1 stateChange:(/*^block*/id)arg2 ;
-(id)cleanupAfterError:(id)arg1 ;
-(id)acquireLock;
-(id)releaseLockNow;
-(MBChunkStore *)chunkStore;
-(id)releaseLock;
-(void)cancel;
-(void)dealloc;
-(char)isCancelled;
-(id)run;
-(MBServiceCache *)cache;
-(MBService *)service;
-(int)engineType;
-(char)waitWithTimeout:(double)arg1 ;
-(MBServiceReachabilityMonitor *)reachability;
-(NSString *)backupUDID;
-(MBServiceSettingsContext *)settingsContext;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3 ;
-(id)setup;
@end

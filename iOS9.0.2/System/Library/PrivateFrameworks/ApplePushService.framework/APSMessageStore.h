/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <apsd/apsd-Structs.h>
@interface APSMessageStore : NSObject {

	char _databaseOpen;
	char _pendingDatabaseClose;

}
+(id)sharedInstance;
-(id)incomingMessagesForTopic:(id)arg1 priority:(int)arg2 environment:(id)arg3 ;
-(void)deleteIncomingMessageWithGUID:(id)arg1 ;
-(void)deleteStaleIncomingLowPriorityMessagesForEnvironment:(id)arg1 ;
-(void)deleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 ;
-(id)incomingHighPriorityMessagesForEnvironment:(id)arg1 ;
-(void)markAllOutgoingMessagesAsUnsent;
-(id)pendingLowPriorityIncomingMessageTopicsForEnvironment:(id)arg1 ;
-(void)storeIncomingMessage:(id)arg1 environment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)markMessageWithGUID:(id)arg1 asSent:(char)arg2 ;
-(void)deleteOutgoingMessageWithGUID:(id)arg1 ;
-(void)__closeDatabase;
-(void)_clearDatabaseCloseTimer;
-(void)_setDatabaseCloseTimer;
-(void)_onQueueDeleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 ;
-(id)_onQueueIncomingMessagesFromRecords:(CFArrayRef)arg1 ;
-(id)storeOutgoingMessage:(id)arg1 environment:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)closeDatabase;
-(void)openDatabase;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
@end

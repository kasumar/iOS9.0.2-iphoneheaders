/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source;
@class NSObject, _SYMessageTimerTable;

@interface SYOutgoingDeltaTransactionSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	unsigned long long _activity;
	int _state;
	_SYMessageTimerTable* _timers;
	char _canRestart;
	char _canRollback;
	char _cancelled;

}
-(void)cancel;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(char)canRestart;
-(void)setCanRestart:(char)arg1 ;
-(char)canRollback;
-(void)setCanRollback:(char)arg1 ;
-(void)_fetchNextBatch;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(int)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_setStateQuietly:(int)arg1 ;
-(void)_notifySessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(unsigned)protocolVersion;
-(void)_handleError:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(char)isSending;
-(char)isResetSync;
-(char)wasCancelled;
@end


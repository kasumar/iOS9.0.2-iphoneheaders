/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class APSEnvironment, NSMutableDictionary;

@interface APSPushHistory : NSObject {

	APSEnvironment* _environment;
	NSMutableDictionary* _history;

}
-(id)timestampForTopic:(id)arg1 token:(id)arg2 ;
-(char)hasPayload:(id)arg1 forTopic:(id)arg2 token:(id)arg3 ;
-(void)receivedPushWithTopic:(id)arg1 token:(id)arg2 payload:(id)arg3 timestamp:(id)arg4 ;
-(id)_keyForTopic:(id)arg1 token:(id)arg2 ;
-(void)_pruneHistory;
-(void)dealloc;
-(id)initWithEnvironment:(id)arg1 ;
@end

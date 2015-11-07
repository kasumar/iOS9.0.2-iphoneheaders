/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMLoggingAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _IMLoggingAgentPingRunner : NSObject {

	NSMutableArray* _pingTests;
	NSObject*<OS_dispatch_queue> _testQueue;
	NSObject*<OS_dispatch_queue> _pingQueue;

}
+(id)sharedInstance;
-(void)addPingTest:(id)arg1 duration:(double)arg2 useWifi:(char)arg3 pathDirectory:(id)arg4 fileName:(id)arg5 ;
-(void)addPingTest:(id)arg1 duration:(double)arg2 useWifi:(char)arg3 outputPath:(id)arg4 ;
-(void)stopAllTests;
-(id)init;
@end

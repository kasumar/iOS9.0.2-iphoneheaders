/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VisualAlert/AXLocalNotificationHandler.h>

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {

	SEL* _possibleHandlers;
	unsigned long _possibleHandlersCount;

}
-(void)dealloc;
-(void)_startObserving;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 possibleHandlers:(SEL)arg4 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(char)arg4 ;
-(id)_notificationTypeDescription;
-(void)_stopObserving;
-(id)_forwardDistributedNotificationNameForHandler:(SEL)arg1 ;
-(id)_prefixForForwardDistributedNotificationName;
-(char)_handleForwardDistributedNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end


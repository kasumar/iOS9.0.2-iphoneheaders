/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@class NSHashTable, PKXPCService, NSString;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {

	NSHashTable* _acquiredAssertions;
	PKXPCService* _remoteService;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(void)acquireAssertionOfType:(unsigned)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(id)initSharedInstance;
-(char)assertionExistsOfType:(unsigned)arg1 ;
-(void)invalidateAssertion:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IAP/IAP-Structs.h>
@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {

	/*function pointer*/void* _deviceStateChangedCallback;
	void* _deviceStateChangedContext;
	/*function pointer*/void* _volumeChangedCallback;
	void* _volumeChangedContext;
	/*function pointer*/void* _pauseOnHeadphoneDisconnectChangedCallback;
	void* _pauseOnHeadphoneDisconnectChangedContext;
	/*function pointer*/void* _volumeControlSupportChangedCallback;
	void* _volumeControlSupportChangedContext;
	CPDistributedNotificationCenter* _dnCenter;
	CPDistributedNotificationCenter* _dnCenteriAP2;
	CFRunLoopRef _dnCenterRunLoop;
	NSLock* _lock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)startNotificationCenterOnRunLoop:(CFRunLoopRef)arg1 ;
-(void)_deviceStateChanged:(id)arg1 ;
-(void)_volumeChanged:(id)arg1 ;
-(void)_pauseOnHeadphoneDisconnectChanged:(id)arg1 ;
-(void)_volumeControlSupportChanged:(id)arg1 ;
-(void)setupDeviceStateChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearDeviceStateChangedCallback;
-(void)setupVolumeChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearVolumeChangedCallback;
-(void)setupPauseOnHeadphoneDisconnectChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearPauseOnHeadphoneDisconnectChangedCallback;
-(void)setupVolumeControlSupportChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearVolumeControlSupportChangedCallback;
@end

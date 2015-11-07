/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECBus.h>
#import <libobjc.A.dylib/CECInterfaceDelegate.h>
#import <libobjc.A.dylib/CECBusPollingOperationDelegate.h>

@class CECInterface, CECBusPollingOperation, CoreCECDevice, NSString;

@interface CoreCECBusProvider : CoreCECBus <CECInterfaceDelegate, CECBusPollingOperationDelegate> {

	CECInterface* _interface;
	unsigned _streamPath;
	unsigned _previousStreamPath;
	CECBusPollingOperation* _pollingOperation;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue; 
@property (assign,nonatomic) CoreCECDevice * activeSource; 
@property (assign,nonatomic) unsigned streamPath;                                     //@synthesize streamPath=_streamPath - In the implementation block
@property (assign,nonatomic) unsigned previousStreamPath;                             //@synthesize previousStreamPath=_previousStreamPath - In the implementation block
@property (nonatomic,retain,readonly) CECInterface * interface;                       //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) CECBusPollingOperation * pollingOperation;               //@synthesize pollingOperation=_pollingOperation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)sendMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(CECInterface *)interface;
-(void)interfacePropertiesChanged:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithInterface:(id)arg1 ;
-(void)updateAllowHibernation;
-(void)willRemoveDevice:(id)arg1 ;
-(id)initWithBus:(id)arg1 ;
-(id)initWithPhysicalAddress:(unsigned)arg1 ;
-(void)setOsdNameASCII:(CECOSDName)arg1 ;
-(void)setTvLanguageCodeASCII:(CECLanguage)arg1 ;
-(id)addDeviceWithType:(unsigned)arg1 error:(id*)arg2 ;
-(void)setSystemAudioModeStatus:(unsigned)arg1 ;
-(char)linkStateChanged:(char)arg1 error:(id*)arg2 ;
-(id)addDeviceWithLogicalAddress:(unsigned char)arg1 physicalAddress:(unsigned)arg2 deviceType:(unsigned)arg3 message:(id)arg4 reason:(unsigned)arg5 ;
-(void)interface:(id)arg1 receivedFrame:(CECFrame)arg2 ;
-(void)interface:(id)arg1 hibernationChanged:(char)arg2 ;
-(unsigned)streamPath;
-(void)setStreamPath:(unsigned)arg1 ;
-(CECBusPollingOperation *)pollingOperation;
-(void)setPollingOperation:(CECBusPollingOperation *)arg1 ;
-(id)addDeviceWithLogicalAddress:(unsigned char)arg1 message:(id)arg2 reason:(unsigned)arg3 ;
-(id)destinationExpectedForMessage:(id)arg1 ;
-(char)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(id)_cecErrorWithInterfaceError:(id)arg1 ;
-(id)destinationConfirmedForMessage:(id)arg1 ;
-(void)receivedMessage:(id)arg1 ;
-(char)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2 ;
-(void)pollingOperationCompleted:(id)arg1 ;
-(void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2 ;
-(void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3 ;
-(char)refreshDevicesWithInitiator:(id)arg1 error:(id*)arg2 ;
-(void)setActiveSource:(CoreCECDevice *)arg1 ;
-(void)makeDeviceInactiveSource:(id)arg1 ;
-(unsigned)previousStreamPath;
-(void)setPreviousStreamPath:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

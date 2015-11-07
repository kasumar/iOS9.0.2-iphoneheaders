/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WACUIHostProtocol <NSObject>
@required
-(void)_signalPresentationComplete;
-(void)dismissWithStatus:(long)arg1;
-(void)wifiDidShutdown;
-(void)backendDidStartSearchWithError:(id)arg1;
-(void)backendDidStopSearchWithError:(id)arg1;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2;
-(void)updateState:(int)arg1;

@end

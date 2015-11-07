/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DATestOperation.h>

@class DAAudioDevice;

@interface DAAudioSystemTest : DATestOperation {

	DAAudioDevice* _audioDevice;

}

@property (retain) DAAudioDevice * audioDevice;              //@synthesize audioDevice=_audioDevice - In the implementation block
+(char)setCode:(int)arg1 forError:(id*)arg2 ;
-(void)setUpEventNotifications;
-(void)startAudioQualityTest;
-(void)failedToExecuteWithError:(id)arg1 ;
-(void)setAudioDevice:(DAAudioDevice *)arg1 ;
-(void)cleanUpResults:(id)arg1 ;
-(void)receivedNotification:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)finish;
-(DAAudioDevice *)audioDevice;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHAudioRecorderDelegate.h>

@protocol PHVoicemailGreetingModelDelegate;
@class PHAudioRecorder, NSTimer;

@interface PHVoicemailGreetingModel : NSObject <PHAudioRecorderDelegate> {

	id<PHVoicemailGreetingModelDelegate> _delegate;
	int _greetingState;
	PHAudioRecorder* _greetingRecorder;
	NSTimer* _greetingFetchTimeoutTimer;
	NSTimer* _greetingSaveTimeoutTimer;
	double _greetingDuration;

}

@property (assign,nonatomic,__weak) id<PHVoicemailGreetingModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int greetingState;                                                 //@synthesize greetingState=_greetingState - In the implementation block
@property (nonatomic,retain) PHAudioRecorder * greetingRecorder;                                //@synthesize greetingRecorder=_greetingRecorder - In the implementation block
@property (assign,nonatomic) double greetingDuration;                                           //@synthesize greetingDuration=_greetingDuration - In the implementation block
@property (nonatomic,retain) NSTimer * greetingFetchTimeoutTimer;                               //@synthesize greetingFetchTimeoutTimer=_greetingFetchTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSTimer * greetingSaveTimeoutTimer;                                //@synthesize greetingSaveTimeoutTimer=_greetingSaveTimeoutTimer - In the implementation block
-(void)_handlePlayerControllerRateOrStatusChange:(id)arg1 ;
-(void)_handlePlayerDidFinishPlaying:(id)arg1 ;
-(void)_mediaserverReset:(id)arg1 ;
-(void)fetchGreeting;
-(int)mailboxGreetingState;
-(int)greetingState;
-(void)pauseGreeting;
-(void)saveGreeting:(int)arg1 ;
-(void)saveGreeting:(int)arg1 useServerCachedGreeting:(char)arg2 ;
-(void)playGreeting;
-(void)audioRecorderStartedWithFile:(id)arg1 ;
-(void)audioRecorderContinuedWithFile:(id)arg1 duration:(double)arg2 ;
-(void)audioRecorderEndedWithFile:(id)arg1 duration:(double)arg2 error:(id)arg3 ;
-(id)greetingTempFileLocation;
-(PHAudioRecorder *)greetingRecorder;
-(void)setGreetingState:(int)arg1 ;
-(void)_loadGreeting:(id)arg1 ;
-(void)_greetingSaveCompleted:(id)arg1 ;
-(void)_greetingSaveTimedOut;
-(double)greetingDuration;
-(void)_greetingFetchEnded:(id)arg1 ;
-(void)_greetingFetchTimedOut;
-(void)setGreetingDuration:(double)arg1 ;
-(void)_stopListeningForGreetingFetchNotifications;
-(void)_stopListeningForGreetingSaveNotifications;
-(void)setGreetingRecorder:(PHAudioRecorder *)arg1 ;
-(NSTimer *)greetingFetchTimeoutTimer;
-(void)setGreetingFetchTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)greetingSaveTimeoutTimer;
-(void)setGreetingSaveTimeoutTimer:(NSTimer *)arg1 ;
-(void)setDelegate:(id<PHVoicemailGreetingModelDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PHVoicemailGreetingModelDelegate>)delegate;
-(void)stopRecording;
-(void)startRecording;
@end


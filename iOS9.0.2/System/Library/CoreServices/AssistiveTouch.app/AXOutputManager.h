/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, AXAccessQueue, AXSpeechManager;

@interface AXOutputManager : NSObject {

	char _speechEnabled;
	char _soundEffectsEnabled;
	char _audioSessionActive;
	NSMutableDictionary* _registeredSoundIDs;
	AXAccessQueue* _outputAccessQueue;
	AXSpeechManager* _speechManager;

}

@property (nonatomic,readonly) char scanningInterruptsSpeech; 
@property (assign,getter=isAudioSessionActive,nonatomic) char audioSessionActive;                 //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (assign,getter=areSoundEffectsEnabled,nonatomic) char soundEffectsEnabled;              //@synthesize soundEffectsEnabled=_soundEffectsEnabled - In the implementation block
@property (assign,getter=isSpeechEnabled,nonatomic) char speechEnabled;                           //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredSoundIDs;                            //@synthesize registeredSoundIDs=_registeredSoundIDs - In the implementation block
@property (nonatomic,retain) AXAccessQueue * outputAccessQueue;                                   //@synthesize outputAccessQueue=_outputAccessQueue - In the implementation block
@property (nonatomic,retain) AXSpeechManager * speechManager;                                     //@synthesize speechManager=_speechManager - In the implementation block
-(void)_setAudioSessionProperties:(id)arg1 ;
-(void)_flushSoundIDs;
-(void)setRegisteredSoundIDs:(NSMutableDictionary *)arg1 ;
-(void)setOutputAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setSpeechManager:(AXSpeechManager *)arg1 ;
-(char)areSoundEffectsEnabled;
-(AXAccessQueue *)outputAccessQueue;
-(NSMutableDictionary *)registeredSoundIDs;
-(void)_playSoundWithSoundID:(unsigned long)arg1 ;
-(id)_urlForSoundEffect:(int)arg1 ;
-(id)_voiceOverBundle;
-(char)isSpeechEnabled;
-(void)setSoundEffectsEnabled:(char)arg1 ;
-(char)scanningInterruptsSpeech;
-(void)outputScannerFocusContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AXSpeechManager *)speechManager;
-(void)setAudioSessionActive:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancelSpeech;
-(char)isAudioSessionActive;
-(void)playSound:(int)arg1 ;
-(void)setSpeechEnabled:(char)arg1 ;
-(void)dispatchSpeechAction:(id)arg1 ;
@end


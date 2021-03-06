/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CSDAVConferenceConnection : NSObject {

	char _host;
	char _voip;
	char _outgoing;
	char _audioDisabled;
	char _receivedDidStart;
	NSString* _identifier;
	NSString* _audioSourceIdentifier;
	/*^block*/id _didStartHandler;
	/*^block*/id _didStopHandler;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isHost,nonatomic) char host;                                //@synthesize host=_host - In the implementation block
@property (assign,getter=isVoIP,nonatomic) char voip;                                //@synthesize voip=_voip - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) char outgoing;                        //@synthesize outgoing=_outgoing - In the implementation block
@property (nonatomic,copy) NSString * audioSourceIdentifier;                         //@synthesize audioSourceIdentifier=_audioSourceIdentifier - In the implementation block
@property (assign,getter=isAudioDisabled,nonatomic) char audioDisabled;              //@synthesize audioDisabled=_audioDisabled - In the implementation block
@property (assign,nonatomic) char receivedDidStart;                                  //@synthesize receivedDidStart=_receivedDidStart - In the implementation block
@property (nonatomic,copy) id didStartHandler;                                       //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,copy) id didStopHandler;                                        //@synthesize didStopHandler=_didStopHandler - In the implementation block
-(void)setReceivedDidStart:(char)arg1 ;
-(void)invokeDidStartIfNecessary:(char)arg1 error:(id)arg2 ;
-(void)setDidStopHandler:(id)arg1 ;
-(void)setVoip:(char)arg1 ;
-(void)setAudioDisabled:(char)arg1 ;
-(char)isAudioDisabled;
-(char)isVoIP;
-(char)receivedDidStart;
-(void)invokeDidStopIfNecessary:(char)arg1 error:(id)arg2 ;
-(id)didStopHandler;
-(char)isHost;
-(id)didStartHandler;
-(void)setDidStartHandler:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setOutgoing:(char)arg1 ;
-(char)isOutgoing;
-(void)setHost:(char)arg1 ;
-(NSString *)audioSourceIdentifier;
-(id)initWithCall:(id)arg1 ;
-(void)setAudioSourceIdentifier:(NSString *)arg1 ;
@end


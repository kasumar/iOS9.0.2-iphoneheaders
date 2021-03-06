/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent {

	char _requestingDefermentToPlaybackQueuePosition;

}

@property (getter=isRequestingDefermentToPlaybackQueuePosition,nonatomic,readonly) char requestingDefermentToPlaybackQueuePosition;              //@synthesize requestingDefermentToPlaybackQueuePosition=_requestingDefermentToPlaybackQueuePosition - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(char)isRequestingDefermentToPlaybackQueuePosition;
@end


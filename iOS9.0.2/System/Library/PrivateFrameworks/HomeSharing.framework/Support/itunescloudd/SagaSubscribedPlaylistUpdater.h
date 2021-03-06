/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, CloudLibraryConnection, NSURL;

@interface SagaSubscribedPlaylistUpdater : NSObject {

	char _ignoreMinRefreshInterval;
	NSArray* _playlistCloudIDs;
	CloudLibraryConnection* _connection;
	NSURL* _payloadDownloadPathOverride;
	long long _requestReason;

}

@property (nonatomic,copy,readonly) NSArray * playlistCloudIDs;                  //@synthesize playlistCloudIDs=_playlistCloudIDs - In the implementation block
@property (nonatomic,readonly) CloudLibraryConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long requestReason;                            //@synthesize requestReason=_requestReason - In the implementation block
@property (assign,nonatomic) char ignoreMinRefreshInterval;                      //@synthesize ignoreMinRefreshInterval=_ignoreMinRefreshInterval - In the implementation block
@property (nonatomic,copy) NSURL * payloadDownloadPathOverride;                  //@synthesize payloadDownloadPathOverride=_payloadDownloadPathOverride - In the implementation block
-(char)ignoreMinRefreshInterval;
-(NSURL *)payloadDownloadPathOverride;
-(id)initWithSubscribedPlaylistCloudIDs:(id)arg1 cloudLibraryConnection:(id)arg2 ;
-(char)performUpdateWithError:(id*)arg1 ;
-(NSArray *)playlistCloudIDs;
-(void)setIgnoreMinRefreshInterval:(char)arg1 ;
-(void)setPayloadDownloadPathOverride:(NSURL *)arg1 ;
-(CloudLibraryConnection *)connection;
-(long long)requestReason;
-(void)setRequestReason:(long long)arg1 ;
@end


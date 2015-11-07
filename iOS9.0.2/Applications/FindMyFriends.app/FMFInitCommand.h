/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString;

@interface FMFInitCommand : FMFBaseCmd {

	int _fetchStatus;
	NSString* _legacyFMFUserDSID;

}

@property (assign,nonatomic) int fetchStatus;                           //@synthesize fetchStatus=_fetchStatus - In the implementation block
@property (nonatomic,retain) NSString * legacyFMFUserDSID;              //@synthesize legacyFMFUserDSID=_legacyFMFUserDSID - In the implementation block
-(void)processCommandResponse:(id)arg1 ;
-(char)allowsEmptyResponse;
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(void)setLegacyFMFUserDSID:(NSString *)arg1 ;
-(id)clientInfoString;
-(NSString *)legacyFMFUserDSID;
-(void)setFetchStatus:(int)arg1 ;
-(int)fetchStatus;
-(id)headers;
-(id)init;
-(id)jsonBodyDictionary;
-(void)sendRequest;
-(id)clientContext;
@end

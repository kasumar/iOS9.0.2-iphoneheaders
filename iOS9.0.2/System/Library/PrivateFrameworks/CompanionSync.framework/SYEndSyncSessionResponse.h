/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYEndSyncSessionResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSString* _sessionID;
	char _didRollback;
	SCD_Struct_SY6 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasDidRollback; 
@property (assign,nonatomic) char didRollback;                      //@synthesize didRollback=_didRollback - In the implementation block
-(SYErrorInfo *)error;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDidRollback:(char)arg1 ;
-(void)setHasDidRollback:(char)arg1 ;
-(char)hasDidRollback;
-(char)didRollback;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setError:(SYErrorInfo *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(char)hasError;
@end

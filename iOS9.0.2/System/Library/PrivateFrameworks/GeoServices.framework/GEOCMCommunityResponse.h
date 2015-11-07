/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCMTicketFollowupResponse, GEOCMTicketStatusResponse, GEOCMTicketSubmissionResponse;

@interface GEOCMCommunityResponse : PBCodable <NSCopying> {

	int _requestType;
	int _statusCode;
	GEOCMTicketFollowupResponse* _ticketFollowupResponse;
	GEOCMTicketStatusResponse* _ticketStatusResponse;
	GEOCMTicketSubmissionResponse* _ticketSubmissionResponse;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                                       //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) char hasTicketSubmissionResponse; 
@property (nonatomic,retain) GEOCMTicketSubmissionResponse * ticketSubmissionResponse;              //@synthesize ticketSubmissionResponse=_ticketSubmissionResponse - In the implementation block
@property (nonatomic,readonly) char hasTicketFollowupResponse; 
@property (nonatomic,retain) GEOCMTicketFollowupResponse * ticketFollowupResponse;                  //@synthesize ticketFollowupResponse=_ticketFollowupResponse - In the implementation block
@property (nonatomic,readonly) char hasTicketStatusResponse; 
@property (nonatomic,retain) GEOCMTicketStatusResponse * ticketStatusResponse;                      //@synthesize ticketStatusResponse=_ticketStatusResponse - In the implementation block
-(int)requestType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRequestType:(char)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(char)hasRequestType;
-(char)hasStatusCode;
-(void)setHasStatusCode:(char)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setTicketFollowupResponse:(GEOCMTicketFollowupResponse *)arg1 ;
-(GEOCMTicketSubmissionResponse *)ticketSubmissionResponse;
-(void)setTicketSubmissionResponse:(GEOCMTicketSubmissionResponse *)arg1 ;
-(GEOCMTicketFollowupResponse *)ticketFollowupResponse;
-(char)hasTicketSubmissionResponse;
-(GEOCMTicketStatusResponse *)ticketStatusResponse;
-(void)setTicketStatusResponse:(GEOCMTicketStatusResponse *)arg1 ;
-(char)hasTicketFollowupResponse;
-(char)hasTicketStatusResponse;
-(char)readFrom:(id)arg1 ;
@end

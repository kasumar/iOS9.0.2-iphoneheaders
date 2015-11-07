/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitListInstruction : PBCodable <NSCopying> {

	NSMutableArray* _commandFormatteds;
	NSMutableArray* _commands;
	NSMutableArray* _detailFormatteds;
	NSMutableArray* _details;
	NSMutableArray* _noticeFormatteds;
	NSMutableArray* _notices;

}

@property (nonatomic,retain) NSMutableArray * commands;                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSMutableArray * details;                        //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) NSMutableArray * notices;                        //@synthesize notices=_notices - In the implementation block
@property (nonatomic,retain) NSMutableArray * noticeFormatteds;               //@synthesize noticeFormatteds=_noticeFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandFormatteds;              //@synthesize commandFormatteds=_commandFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailFormatteds;               //@synthesize detailFormatteds=_detailFormatteds - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)noticeFormattedsCount;
-(void)addDetailFormatted:(id)arg1 ;
-(unsigned)commandFormattedsCount;
-(NSMutableArray *)detailFormatteds;
-(void)setDetails:(NSMutableArray *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(NSMutableArray *)details;
-(NSMutableArray *)notices;
-(void)clearDetailFormatteds;
-(void)addDetail:(id)arg1 ;
-(void)clearNoticeFormatteds;
-(id)commandFormattedAtIndex:(unsigned)arg1 ;
-(void)clearCommands;
-(void)setNotices:(NSMutableArray *)arg1 ;
-(void)clearDetails;
-(void)clearNotices;
-(unsigned)detailsCount;
-(void)clearCommandFormatteds;
-(NSMutableArray *)noticeFormatteds;
-(void)addNotice:(id)arg1 ;
-(void)addNoticeFormatted:(id)arg1 ;
-(void)setNoticeFormatteds:(NSMutableArray *)arg1 ;
-(void)setDetailFormatteds:(NSMutableArray *)arg1 ;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(void)addCommandFormatted:(id)arg1 ;
-(id)noticeAtIndex:(unsigned)arg1 ;
-(unsigned)detailFormattedsCount;
-(NSMutableArray *)commandFormatteds;
-(unsigned)commandsCount;
-(id)noticeFormattedAtIndex:(unsigned)arg1 ;
-(void)setCommandFormatteds:(NSMutableArray *)arg1 ;
-(id)commandAtIndex:(unsigned)arg1 ;
-(id)detailFormattedAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)commands;
-(unsigned)noticesCount;
-(id)detailAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

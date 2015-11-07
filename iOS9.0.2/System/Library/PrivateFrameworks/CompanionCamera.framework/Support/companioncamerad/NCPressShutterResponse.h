/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NCPressShutterResponse : PBCodable <NSCopying> {

	char _didPress;
	SCD_Struct_NC3 _has;

}

@property (assign,nonatomic) char hasDidPress; 
@property (assign,nonatomic) char didPress;                 //@synthesize didPress=_didPress - In the implementation block
-(void)setDidPress:(char)arg1 ;
-(char)didPress;
-(void)setHasDidPress:(char)arg1 ;
-(char)hasDidPress;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

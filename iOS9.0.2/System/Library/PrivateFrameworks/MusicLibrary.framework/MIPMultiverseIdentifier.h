/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {

	long long _accountId;
	long long _purchaseHistoryId;
	long long _sagaId;
	long long _storeId;
	NSMutableArray* _libraryIdentifiers;
	int _mediaObjectType;
	int _mediaType;
	NSString* _name;
	SCD_Struct_MI14 _has;

}

@property (assign,nonatomic) char hasMediaObjectType; 
@property (assign,nonatomic) int mediaObjectType;                              //@synthesize mediaObjectType=_mediaObjectType - In the implementation block
@property (assign,nonatomic) char hasMediaType; 
@property (assign,nonatomic) int mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char hasAccountId; 
@property (assign,nonatomic) long long accountId;                              //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) char hasStoreId; 
@property (assign,nonatomic) long long storeId;                                //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) char hasSagaId; 
@property (assign,nonatomic) long long sagaId;                                 //@synthesize sagaId=_sagaId - In the implementation block
@property (assign,nonatomic) char hasPurchaseHistoryId; 
@property (assign,nonatomic) long long purchaseHistoryId;                      //@synthesize purchaseHistoryId=_purchaseHistoryId - In the implementation block
@property (nonatomic,retain) NSMutableArray * libraryIdentifiers;              //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
-(int)mediaObjectType;
-(NSMutableArray *)libraryIdentifiers;
-(unsigned)libraryIdentifiersCount;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasName;
-(void)setLibraryIdentifiers:(NSMutableArray *)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(char)arg1 ;
-(char)hasStoreId;
-(long long)storeId;
-(void)addLibraryIdentifiers:(id)arg1 ;
-(void)clearLibraryIdentifiers;
-(id)libraryIdentifiersAtIndex:(unsigned)arg1 ;
-(void)setMediaObjectType:(int)arg1 ;
-(void)setHasMediaObjectType:(char)arg1 ;
-(char)hasMediaObjectType;
-(void)setAccountId:(long long)arg1 ;
-(void)setHasAccountId:(char)arg1 ;
-(char)hasAccountId;
-(void)setSagaId:(long long)arg1 ;
-(void)setHasSagaId:(char)arg1 ;
-(char)hasSagaId;
-(void)setPurchaseHistoryId:(long long)arg1 ;
-(void)setHasPurchaseHistoryId:(char)arg1 ;
-(char)hasPurchaseHistoryId;
-(long long)accountId;
-(long long)sagaId;
-(long long)purchaseHistoryId;
-(char)readFrom:(id)arg1 ;
-(char)hasMediaType;
-(void)setHasMediaType:(char)arg1 ;
@end

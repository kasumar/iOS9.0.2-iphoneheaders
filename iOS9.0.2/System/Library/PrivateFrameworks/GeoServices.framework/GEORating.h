/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	double _maxScore;
	double _score;
	int _numberOfRatings;
	int _numberOfReviews;
	NSString* _provider;
	NSMutableArray* _reviews;
	NSString* _uRL;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) char hasMaxScore; 
@property (assign,nonatomic) double maxScore;                       //@synthesize maxScore=_maxScore - In the implementation block
@property (assign,nonatomic) char hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings;                   //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) char hasProvider; 
@property (nonatomic,retain) NSString * provider;                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) char hasURL; 
@property (nonatomic,retain) NSString * uRL;                        //@synthesize uRL=_uRL - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviews;              //@synthesize reviews=_reviews - In the implementation block
@property (assign,nonatomic) char hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews;                   //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
-(double)score;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)provider;
-(char)hasURL;
-(NSString *)uRL;
-(char)hasMaxScore;
-(char)hasNumberOfReviews;
-(void)clearReviews;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasProvider;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setHasMaxScore:(char)arg1 ;
-(char)hasScore;
-(void)setHasNumberOfReviews:(char)arg1 ;
-(void)setReviews:(NSMutableArray *)arg1 ;
-(void)setProvider:(NSString *)arg1 ;
-(int)numberOfRatings;
-(unsigned)reviewsCount;
-(int)numberOfReviews;
-(void)setMaxScore:(double)arg1 ;
-(char)hasNumberOfRatings;
-(id)reviewAtIndex:(unsigned)arg1 ;
-(void)addReview:(id)arg1 ;
-(double)maxScore;
-(NSMutableArray *)reviews;
-(void)setScore:(double)arg1 ;
-(void)setHasNumberOfRatings:(char)arg1 ;
-(id)initWithSampleSizeForUserRatingScore:(unsigned)arg1 normalizedUserRatingScore:(float)arg2 ;
-(char)readFrom:(id)arg1 ;
@end

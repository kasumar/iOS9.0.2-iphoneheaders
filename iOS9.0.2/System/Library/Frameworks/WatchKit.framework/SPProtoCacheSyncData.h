/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SPProtoCacheAssets;

@interface SPProtoCacheSyncData : PBCodable <NSCopying> {

	NSString* _cacheIdentifier;
	SPProtoCacheAssets* _permanentCache;
	SPProtoCacheAssets* _transientCache;

}

@property (nonatomic,retain) NSString * cacheIdentifier;                       //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (nonatomic,retain) SPProtoCacheAssets * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPProtoCacheAssets * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(NSString *)cacheIdentifier;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SPProtoCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPProtoCacheAssets *)arg1 ;
-(SPProtoCacheAssets *)transientCache;
-(void)setTransientCache:(SPProtoCacheAssets *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


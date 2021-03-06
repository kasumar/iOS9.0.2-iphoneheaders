/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSString;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {

	unsigned char _kind;
	unsigned char _uuid[16];

}

@property (nonatomic,readonly) char isRoot; 
@property (nonatomic,readonly) char isDocuments; 
@property (nonatomic,readonly) NSString * itemIDString; 
@property (nonatomic,readonly) NSString * shortItemIDString; 
@property (nonatomic,readonly) const char* UTF8String; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(void)initialize;
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(id)documentsItemID;
+(id)rootItemID;
+(id)newItemIDFromEnclosureUUID:(id)arg1 ;
+(id)parseMangledItemID:(id)arg1 mangledContainerID:(id*)arg2 etag:(id*)arg3 ;
-(const char*)UTF8String;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(char)isEqualToItemID:(id)arg1 ;
-(NSString *)itemIDString;
-(char)isDocuments;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(NSString *)shortItemIDString;
-(id)derivedAliasItemIDWithOwnerName:(id)arg1 ;
-(id)contentsRecordIDInZoneID:(id)arg1 ;
-(id)validatingDirectoryReferenceInZoneID:(id)arg1 ;
-(id)initWithKind:(unsigned char)arg1 bytes:(const void*)arg2 length:(unsigned)arg3 ;
-(id)itemUUIDString;
-(id)initWithItemID:(id)arg1 ;
-(char)isRoot;
@end


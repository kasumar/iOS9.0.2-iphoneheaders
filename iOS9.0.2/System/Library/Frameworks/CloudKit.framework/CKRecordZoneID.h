/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying> {

	NSString* _zoneName;
	NSString* _ownerName;

}

@property (nonatomic,readonly) NSString * zoneName;               //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) NSString * ownerName;              //@synthesize ownerName=_ownerName - In the implementation block
+(id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2 ;
+(char)supportsSecureCoding;
-(id)_initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(id)sqliteRepresentation;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)CKXPCSuitableString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(NSString *)zoneName;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(NSString *)ownerName;
@end


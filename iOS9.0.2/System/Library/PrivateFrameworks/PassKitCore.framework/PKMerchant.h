/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, CLLocation;

@interface PKMerchant : NSObject <NSSecureCoding> {

	NSString* _displayName;
	int _resultProviderIdentifier;
	int _industryCode;
	NSString* _industryCategory;
	NSString* _name;
	NSString* _mapsName;
	NSString* _rawName;
	NSString* _phoneNumber;
	NSURL* _url;
	unsigned long long _mapsIdentifier;
	double _locationLatitude;
	double _locationLongitude;

}

@property (assign,nonatomic) unsigned long long mapsIdentifier;              //@synthesize mapsIdentifier=_mapsIdentifier - In the implementation block
@property (assign,nonatomic) int resultProviderIdentifier;                   //@synthesize resultProviderIdentifier=_resultProviderIdentifier - In the implementation block
@property (assign,nonatomic) int industryCode;                               //@synthesize industryCode=_industryCode - In the implementation block
@property (nonatomic,copy) NSString * industryCategory;                      //@synthesize industryCategory=_industryCategory - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * mapsName;                              //@synthesize mapsName=_mapsName - In the implementation block
@property (nonatomic,copy) NSString * rawName;                               //@synthesize rawName=_rawName - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                           //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (setter=setURL:,nonatomic,copy) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) CLLocation * location; 
@property (assign,nonatomic) double locationLatitude;                        //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                       //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
+(char)supportsSecureCoding;
-(unsigned long long)mapsIdentifier;
-(int)resultProviderIdentifier;
-(int)industryCode;
-(NSString *)industryCategory;
-(NSString *)mapsName;
-(NSString *)rawName;
-(double)locationLatitude;
-(double)locationLongitude;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)url;
-(CLLocation *)location;
-(void)setURL:(id)arg1 ;
-(NSString *)phoneNumber;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)displayName;
-(void)setMapsIdentifier:(unsigned long long)arg1 ;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(void)setMapsName:(NSString *)arg1 ;
-(void)setRawName:(NSString *)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(void)setIndustryCode:(int)arg1 ;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(void)_regenerateDisplayName;
-(char)isEqualToMerchant:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

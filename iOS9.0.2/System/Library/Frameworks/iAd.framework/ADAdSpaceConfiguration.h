/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSSet;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding> {

	int _creativeType;
	int _options;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;

}

@property (assign,nonatomic) int creativeType;                             //@synthesize creativeType=_creativeType - In the implementation block
@property (assign,nonatomic) int options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                  //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;              //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                //@synthesize context=_context - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSSet *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(int)creativeType;
-(void)setCreativeType:(int)arg1 ;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(NSURL *)serverURL;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSArray, NSString, NSDate;

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSArray* _accountPermissions;
	int _accountStatus;
	unsigned long long _acceptedStoreTermsVersion;
	int _carrierBundlingStatus;
	NSString* _cellularOperatorName;
	char _discoveryModeEligible;
	char _familyOrganizer;
	char _familySubscription;
	char _hasFamily;
	char _hasFamilyMembers;
	unsigned long long _latestStoreTermsVersion;
	NSString* _phoneNumber;
	double _subscriptionExpirationTime;
	char _subscriptionPurchaser;
	NSString* _sessionIdentifier;

}

@property (nonatomic,readonly) unsigned long long MP_capabilities; 
@property (nonatomic,copy) NSNumber * accountIdentifier;                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cellularOperatorName;                                          //@synthesize cellularOperatorName=_cellularOperatorName - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSArray * accountPermissions;                                             //@synthesize accountPermissions=_accountPermissions - In the implementation block
@property (assign,nonatomic) int accountStatus;                                                      //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign,nonatomic) int carrierBundlingStatus;                                              //@synthesize carrierBundlingStatus=_carrierBundlingStatus - In the implementation block
@property (assign,getter=isDiscoveryModeEligible,nonatomic) char discoveryModeEligible;              //@synthesize discoveryModeEligible=_discoveryModeEligible - In the implementation block
@property (assign,getter=isFamilyOrganizer,nonatomic) char familyOrganizer;                          //@synthesize familyOrganizer=_familyOrganizer - In the implementation block
@property (assign,getter=isFamilySubscription,nonatomic) char familySubscription;                    //@synthesize familySubscription=_familySubscription - In the implementation block
@property (assign,nonatomic) char hasFamily;                                                         //@synthesize hasFamily=_hasFamily - In the implementation block
@property (assign,nonatomic) char hasFamilyMembers;                                                  //@synthesize hasFamilyMembers=_hasFamilyMembers - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) char subscribed; 
@property (nonatomic,copy) NSString * sessionIdentifier;                                             //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * subscriptionExpirationDate; 
@property (assign,getter=isSubscriptionPurchaser,nonatomic) char subscriptionPurchaser;              //@synthesize subscriptionPurchaser=_subscriptionPurchaser - In the implementation block
@property (assign,nonatomic) unsigned long long acceptedStoreTermsVersion;                           //@synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion - In the implementation block
@property (assign,nonatomic) unsigned long long latestStoreTermsVersion;                             //@synthesize latestStoreTermsVersion=_latestStoreTermsVersion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)MP_capabilities;
-(char)isSubscribed;
-(int)carrierBundlingStatus;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(unsigned long long)latestStoreTermsVersion;
-(unsigned long long)acceptedStoreTermsVersion;
-(void)setSubscribed:(char)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSArray *)accountPermissions;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(int)accountStatus;
-(char)isFamilySubscription;
-(char)hasFamily;
-(char)isFamilyOrganizer;
-(char)hasFamilyMembers;
-(id)initWithUserDefaultsRepresentation:(id)arg1 ;
-(void)resetAccountBasedProperties;
-(void)resetCarrierBundlingProperties;
-(void)setAcceptedStoreTermsVersion:(unsigned long long)arg1 ;
-(void)setCarrierBundlingStatus:(int)arg1 ;
-(void)setCellularOperatorName:(NSString *)arg1 ;
-(void)setDiscoveryModeEligible:(char)arg1 ;
-(void)setSubscriptionExpirationDate:(NSDate *)arg1 ;
-(void)setFamilyOrganizer:(char)arg1 ;
-(void)setFamilySubscription:(char)arg1 ;
-(void)setHasFamily:(char)arg1 ;
-(void)setHasFamilyMembers:(char)arg1 ;
-(void)setLatestStoreTermsVersion:(unsigned long long)arg1 ;
-(void)setSubscriptionPurchaser:(char)arg1 ;
-(void)setAccountStatus:(int)arg1 ;
-(void)_setSubscribed:(char)arg1 ;
-(void)setAccountPermissions:(NSArray *)arg1 ;
-(NSString *)cellularOperatorName;
-(char)isDiscoveryModeEligible;
-(char)isSubscriptionPurchaser;
-(NSDate *)subscriptionExpirationDate;
-(id)copyUserDefaultsRepresentation;
-(void)setValuesUsingStatusDictionary:(id)arg1 ;
@end


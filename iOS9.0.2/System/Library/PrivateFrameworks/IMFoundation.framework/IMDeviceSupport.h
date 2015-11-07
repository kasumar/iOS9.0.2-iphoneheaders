/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSRecursiveLock;

@interface IMDeviceSupport : NSObject {

	NSString* _model;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
+(id)sharedInstance;
+(id)marketingNameForModel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(void)_generateProductInformation;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(NSString *)productBuildVersion;
-(NSString *)productName;
-(NSString *)productVersion;
@end

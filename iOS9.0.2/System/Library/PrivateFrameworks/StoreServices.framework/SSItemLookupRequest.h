/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {

	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic) id<SSItemLookupRequestDelegate> delegate; 
@property (copy,readonly) NSDictionary * parameters; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)start;
-(NSDictionary *)parameters;
-(void)startWithItemLookupBlock:(/*^block*/id)arg1 ;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)_errorForStatusCode:(int)arg1 ;
-(id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(id)copyQueryStringParameters;
@end

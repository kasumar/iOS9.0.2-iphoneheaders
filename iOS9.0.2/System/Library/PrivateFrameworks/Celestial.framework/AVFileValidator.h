/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface AVFileValidator : NSObject {

	AVFileValidatorPrivate* _priv;
	NSString* _validationRules;

}

@property (retain) NSString * validationRules;              //@synthesize validationRules=_validationRules - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)url;
-(char)isCompleted;
-(id)initWithURL:(id)arg1 ;
-(float)progress;
-(void)validate;
-(NSString *)validationRules;
-(id)notificationForFileCheckResult:(id)arg1 ;
-(void)postNotificationForCallback:(id)arg1 ;
-(void)setValidationRules:(NSString *)arg1 ;
-(id)validateBlocking:(char)arg1 ;
-(char)isStreaming;
-(void)validateForCameraRoll;
-(char)validateSyncWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
@end

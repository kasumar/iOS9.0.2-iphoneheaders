/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeech.h>

@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech

@property (nonatomic,retain) SASPronunciationContext * context; 
+(id)startPronunciationRequest;
+(id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(SASPronunciationContext *)context;
-(void)setContext:(SASPronunciationContext *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

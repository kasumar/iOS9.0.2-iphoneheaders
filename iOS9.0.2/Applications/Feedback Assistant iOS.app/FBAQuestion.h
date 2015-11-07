/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>

@class NSString, NSNumber, FBAQuestionGroup, NSArray;

@interface FBAQuestion : FBAManagedFeedbackObject

@property (retain) NSString * text; 
@property (retain) NSString * role; 
@property (retain) NSString * placeholder; 
@property (retain) NSNumber * sortOrder; 
@property (retain) NSString * resolver; 
@property (retain) FBAQuestionGroup * questionGroup; 
@property (assign) unsigned answerType; 
@property (getter=isRequired) char required; 
@property (readonly) char appearsRequiredIfOptional; 
@property (getter=isConditional) char conditional; 
@property (retain) NSNumber * conditionQuestionID; 
@property (retain) id conditionValue; 
@property (retain) NSArray * conditions; 
@property (retain) NSArray * choices; 
@property (retain) NSString * targetUserAgent; 
@property (retain) NSString * userAgentPopulate; 
@property (assign) char visible; 
@property (retain) NSNumber * primitiveAnswerType; 
@property (retain) NSNumber * primitiveRequired; 
@property (retain) NSNumber * primitiveConditional; 
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(unsigned)answerType;
-(void)setAnswerType:(unsigned)arg1 ;
-(void)setConditional:(char)arg1 ;
-(char)affectsRequirements;
-(id)titleForValue:(id)arg1 ;
-(id)choiceForValue:(id)arg1 ;
-(char)appearsRequiredIfOptional;
-(id)answerToDisplayNameValueTransformer;
-(id)description;
-(char)isConditional;
-(char)isRequired;
-(void)setRequired:(char)arg1 ;
@end

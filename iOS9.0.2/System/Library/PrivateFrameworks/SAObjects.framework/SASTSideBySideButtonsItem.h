/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIColor;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * buttonsViewStyle; 
@property (nonatomic,retain) id<SASTTemplateAction> primaryButtonAction; 
@property (assign,nonatomic) char primaryButtonEnabled; 
@property (nonatomic,copy) NSString * primaryButtonLabel; 
@property (nonatomic,retain) SAUIColor * primaryButtonTextColor; 
@property (nonatomic,retain) id<SASTTemplateAction> secondaryButtonAction; 
@property (assign,nonatomic) char secondaryButtonEnabled; 
@property (nonatomic,copy) NSString * secondaryButtonLabel; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sideBySideButtonsItem;
+(id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)buttonsViewStyle;
-(void)setButtonsViewStyle:(NSString *)arg1 ;
-(id<SASTTemplateAction>)primaryButtonAction;
-(void)setPrimaryButtonAction:(id<SASTTemplateAction>)arg1 ;
-(char)primaryButtonEnabled;
-(void)setPrimaryButtonEnabled:(char)arg1 ;
-(NSString *)primaryButtonLabel;
-(void)setPrimaryButtonLabel:(NSString *)arg1 ;
-(SAUIColor *)primaryButtonTextColor;
-(void)setPrimaryButtonTextColor:(SAUIColor *)arg1 ;
-(id<SASTTemplateAction>)secondaryButtonAction;
-(void)setSecondaryButtonAction:(id<SASTTemplateAction>)arg1 ;
-(char)secondaryButtonEnabled;
-(void)setSecondaryButtonEnabled:(char)arg1 ;
-(NSString *)secondaryButtonLabel;
-(void)setSecondaryButtonLabel:(NSString *)arg1 ;
@end


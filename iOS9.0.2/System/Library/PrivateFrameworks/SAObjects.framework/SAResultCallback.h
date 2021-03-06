/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (assign,nonatomic) int code; 
@property (nonatomic,copy) NSArray * commandReferences; 
@property (nonatomic,copy) NSArray * commands; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultCallback;
+(id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)code;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)commandReferences;
-(void)setCommandReferences:(NSArray *)arg1 ;
-(void)setCode:(int)arg1 ;
@end


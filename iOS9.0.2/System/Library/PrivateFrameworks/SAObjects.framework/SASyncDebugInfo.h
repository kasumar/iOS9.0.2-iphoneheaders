/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SASyncAnchor, NSString;

@interface SASyncDebugInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * objectIds; 
@property (nonatomic,retain) SASyncAnchor * syncAnchor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)debugInfo;
+(id)debugInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)objectIds;
-(void)setObjectIds:(NSArray *)arg1 ;
-(SASyncAnchor *)syncAnchor;
-(void)setSyncAnchor:(SASyncAnchor *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXReader : NSObject
+(id)readFromParentNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)chartPartWithParentNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)externalDataRelationshipWithChartPart:(id)arg1 drawingState:(id)arg2 ;
+(id)externalDataWithChartPart:(id)arg1 relationship:(id)arg2 ;
+(id)readFromXmlDocument:(xmlDoc*)arg1 chartStyleId:(int)arg2 drawingState:(id)arg3 ;
@end

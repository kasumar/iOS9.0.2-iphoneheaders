/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) int source; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) int sourceLine; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceLine:(int)arg1 ;
-(int)sourceLine;
-(id)initWithText:(id)arg1 source:(int)arg2 ;
@end


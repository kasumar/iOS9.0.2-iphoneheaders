/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMCSSStyleSheet;

@interface DOMCSSRule : DOMObject

@property (readonly) unsigned short type; 
@property (copy) NSString * cssText; 
@property (readonly) DOMCSSStyleSheet * parentStyleSheet; 
@property (readonly) DOMCSSRule * parentRule; 
-(NSString *)cssText;
-(void)dealloc;
-(unsigned short)type;
-(void)setCssText:(NSString *)arg1 ;
-(void)finalize;
-(DOMCSSStyleSheet *)parentStyleSheet;
-(DOMCSSRule *)parentRule;
@end


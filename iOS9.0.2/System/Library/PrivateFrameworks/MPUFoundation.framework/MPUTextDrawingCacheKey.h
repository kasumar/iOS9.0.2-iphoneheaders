/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPUTextDrawingCacheKey : NSObject <NSCopying> {

	NSString* _text;
	CGSize _allowedSize;

}

@property (assign,nonatomic) CGSize allowedSize;              //@synthesize allowedSize=_allowedSize - In the implementation block
@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)allowedSize;
-(void)setAllowedSize:(CGSize)arg1 ;
@end

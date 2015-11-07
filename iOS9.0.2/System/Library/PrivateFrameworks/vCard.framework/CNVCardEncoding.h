/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CNVCardEncoding : NSObject {

	NSString* _name;
	unsigned _stringEncoding;

}

@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) unsigned stringEncoding;              //@synthesize stringEncoding=_stringEncoding - In the implementation block
+(id)standardEncodings;
+(id)encodingsFromUserDefaults;
+(id)utf8Encoding;
+(id)asciiEncoding;
+(id)isoLatin1Encoding;
+(id)macRomanEncoding;
+(id)preferredEncodingInUserDefaults;
+(id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2 ;
+(id)encodingWithName:(id)arg1 stringEncoding:(unsigned)arg2 ;
-(NSString *)name;
-(unsigned)stringEncoding;
-(id)initWithName:(id)arg1 stringEncoding:(unsigned)arg2 ;
@end

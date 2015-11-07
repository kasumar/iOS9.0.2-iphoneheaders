/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface SKBitmapFont : NSObject <NSCoding> {

	NSString* _fontName;
	NSString* _filePath;
	float _lineHeight;
	float _baseLine;
	NSArray* _characterSprites;
	map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > >* _characterSpriteByChar;
	map<unsigned short, float, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, float> > >* _characterAdvanceByChar;
	map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >* _characterKerningByCharPair;
	char _internal;
	NSString* _fileName;

}
+(id)fontForFileNamed:(id)arg1 ;
+(id)fontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
+(id)_fontForFileNamed:(id)arg1 ;
-(id)spriteForCharacterNamed:(unsigned short)arg1 ;
-(float)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2 ;
-(float)advanceForCharacterNamed:(unsigned short)arg1 ;
-(char)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(float)lineHeight;
-(id)fontName;
@end

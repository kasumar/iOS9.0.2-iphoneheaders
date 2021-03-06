/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSString;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {

	char _assertDefaultKeyPlane;
	TIKeyboardInputManagerState* _inputManagerState;
	TIKeyboardIntermediateText* _intermediateText;
	NSString* _layoutTag;
	NSString* _accentKeyString;

}

@property (nonatomic,copy) TIKeyboardInputManagerState * inputManagerState;              //@synthesize inputManagerState=_inputManagerState - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;              //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                                         //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,copy) NSString * accentKeyString;                                   //@synthesize accentKeyString=_accentKeyString - In the implementation block
@property (assign,nonatomic) char assertDefaultKeyPlane;                                 //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(TIKeyboardInputManagerState *)inputManagerState;
-(void)setInputManagerState:(TIKeyboardInputManagerState *)arg1 ;
-(TIKeyboardIntermediateText *)intermediateText;
-(char)assertDefaultKeyPlane;
-(NSString *)accentKeyString;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(void)setAccentKeyString:(NSString *)arg1 ;
-(void)setAssertDefaultKeyPlane:(char)arg1 ;
@end


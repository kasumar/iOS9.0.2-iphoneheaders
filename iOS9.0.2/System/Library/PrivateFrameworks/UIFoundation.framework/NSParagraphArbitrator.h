/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSAttributedString;

@interface NSParagraphArbitrator : NSObject {

	NSAttributedString* _attributedString;
	/*^block*/id _lineWidth;
	/*^block*/id _validateLineBreakContext;
	unsigned _lineBreakStrategy;
	float _hyphenationFactor;
	int _typesetterBehavior;
	NSRange _paragraphRange;

}

@property (retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign) NSRange paragraphRange;                             //@synthesize paragraphRange=_paragraphRange - In the implementation block
@property (copy) id lineWidth;                                         //@synthesize lineWidth=_lineWidth - In the implementation block
@property (copy) id validateLineBreakContext;                          //@synthesize validateLineBreakContext=_validateLineBreakContext - In the implementation block
@property (assign) unsigned lineBreakStrategy;                         //@synthesize lineBreakStrategy=_lineBreakStrategy - In the implementation block
@property (assign) float hyphenationFactor;                            //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
@property (assign) int typesetterBehavior;                             //@synthesize typesetterBehavior=_typesetterBehavior - In the implementation block
+(id)paragraphArbitratorWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(id)init;
-(id)lineWidth;
-(void)setLineWidth:(id)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setHyphenationFactor:(float)arg1 ;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(int)typesetterBehavior;
-(unsigned)lineBreakStrategy;
-(void)setParagraphRange:(NSRange)arg1 ;
-(void)setTypesetterBehavior:(int)arg1 ;
-(void)setValidateLineBreakContext:(id)arg1 ;
-(float)hyphenationFactor;
-(void)setLineBreakStrategy:(unsigned)arg1 ;
-(SCD_Struct_NS23)lineBreakContextBeforeIndex:(unsigned)arg1 lineFragmentWidth:(float)arg2 range:(NSRange)arg3 ;
-(NSRange)paragraphRange;
-(id)validateLineBreakContext;
-(unsigned)adjustedLineBreakIndexForProposedIndex:(unsigned)arg1 ;
@end

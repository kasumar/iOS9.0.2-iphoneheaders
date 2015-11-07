/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor, OADFill, OADDash, OADLineJoin, OADLineEnd;

@interface OADStroke : OADProperties <NSCopying> {

	OADColor* mColor;
	OADFill* mFill;
	OADDash* mDash;
	OADLineJoin* mJoin;
	OADLineEnd* mHead;
	OADLineEnd* mTail;
	float mWidth;
	unsigned char mCap;
	unsigned char mCompoundType;
	int mPenAlignment;
	unsigned mIsColorOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsCapOverridden : 1;
	unsigned mIsCompoundTypeOverridden : 1;
	unsigned mIsPenAlignmentOverridden : 1;

}

@property (nonatomic,retain) OADLineEnd * head; 
@property (nonatomic,retain) OADLineEnd * tail; 
+(id)defaultProperties;
+(id)blackStroke;
+(id)nullStroke;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fill;
-(float)width;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(float)arg1 ;
-(char)isWidthOverridden;
-(char)isColorOverridden;
-(char)isFillOverridden;
-(char)isDashOverridden;
-(id)dash;
-(char)isCompoundTypeOverridden;
-(unsigned char)compoundType;
-(void)setFill:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(OADLineEnd *)head;
-(OADLineEnd *)tail;
-(void)setCap:(unsigned char)arg1 ;
-(void)setCompoundType:(unsigned char)arg1 ;
-(void)setPenAlignment:(int)arg1 ;
-(void)setDash:(id)arg1 ;
-(void)setJoin:(id)arg1 ;
-(void)setTail:(OADLineEnd *)arg1 ;
-(void)setHead:(OADLineEnd *)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(char)isCapOverridden;
-(unsigned char)cap;
-(id)initWithDefaults;
-(char)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(char)isJoinOverridden;
-(char)isPenAlignmentOverridden;
-(char)isHeadOverridden;
-(char)isTailOverridden;
-(id)join;
-(int)penAlignment;
-(void)removeUnnecessaryOverrides;
@end

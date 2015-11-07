/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {

	NSString* _semantic;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(id)infoWithSemantic:(id)arg1 options:(id)arg2 ;
+(char)supportsSecureCoding;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
@end

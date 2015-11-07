/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionTransitionExports.h>

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports> {

	unsigned _target;
	float _progress;
	float _velocity;

}

@property (nonatomic,readonly) unsigned target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) float progress;               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float velocity;               //@synthesize velocity=_velocity - In the implementation block
+(char)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)transitionWithState:(unsigned)arg1 target:(unsigned)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)target;
-(float)velocity;
-(float)progress;
@end

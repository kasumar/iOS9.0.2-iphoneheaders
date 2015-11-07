/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class NSString, SCRCIndexMap, VOTKeyInfo;

@interface VOTEvent : NSObject {

	double _time;
	int _origin;
	NSString* _command;
	SCRCIndexMap* _info;
	CGPoint _touchPoint;
	float _touchVelocity;
	unsigned _fingerCount;
	char _bypassHelp;
	float _touchForce;

}

@property (assign,nonatomic) int origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSString * command;                //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) CGPoint touchPoint;                //@synthesize touchPoint=_touchPoint - In the implementation block
@property (assign,nonatomic) float touchForce;                  //@synthesize touchForce=_touchForce - In the implementation block
@property (assign,nonatomic) unsigned fingerCount;              //@synthesize fingerCount=_fingerCount - In the implementation block
@property (assign,nonatomic) float touchVelocity;               //@synthesize touchVelocity=_touchVelocity - In the implementation block
@property (nonatomic,retain) VOTKeyInfo * keyInfo; 
@property (assign,nonatomic) char bypassHelp; 
+(id)externalDeviceEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)keyEventWithCommand:(id)arg1 keyInfo:(id)arg2 ;
+(id)touchEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)internalEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)systemServerEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)brailleEventWithCommand:(id)arg1 info:(id)arg2 ;
-(char)isKeyEvent;
-(char)isTouchEvent;
-(char)isExternalDeviceEvent;
-(char)isBrailleEvent;
-(char)isSystemServerEvent;
-(char)bypassHelp;
-(void)setBypassHelp:(char)arg1 ;
-(void)setFingerCount:(unsigned)arg1 ;
-(float)touchVelocity;
-(void)setTouchVelocity:(float)arg1 ;
-(NSString *)command;
-(void)dealloc;
-(id)description;
-(id)initWithType:(int)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(double)time;
-(float)touchForce;
-(void)setTouchForce:(float)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)setKeyInfo:(VOTKeyInfo *)arg1 ;
-(VOTKeyInfo *)keyInfo;
-(unsigned)fingerCount;
-(CGPoint)touchPoint;
-(void)setTouchPoint:(CGPoint)arg1 ;
-(id)objectForIndex:(unsigned long)arg1 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long)arg2 ;
-(void)setCommand:(NSString *)arg1 ;
@end

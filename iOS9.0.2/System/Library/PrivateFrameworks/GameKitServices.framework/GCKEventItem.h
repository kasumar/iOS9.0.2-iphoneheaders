/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GCKEventItem : NSObject {

	SCD_Struct_GC4* _event;
	unsigned _pid;

}

@property (assign) SCD_Struct_GC4* event;              //@synthesize event=_event - In the implementation block
@property (assign) unsigned pid;                       //@synthesize pid=_pid - In the implementation block
-(void)dealloc;
-(id)init;
-(SCD_Struct_GC4*)event;
-(void)setEvent:(SCD_Struct_GC4*)arg1 ;
-(id)initWithEvent:(SCD_Struct_GC4*)arg1 remotePeer:(unsigned)arg2 ;
-(void)setPid:(unsigned)arg1 ;
-(unsigned)pid;
@end


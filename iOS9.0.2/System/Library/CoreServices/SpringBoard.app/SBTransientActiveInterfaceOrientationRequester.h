/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject {

	int _orientation;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) int orientation;                     //@synthesize orientation=_orientation - In the implementation block
-(id)initWithOrientation:(int)arg1 andReason:(id)arg2 ;
-(void)dealloc;
-(int)orientation;
-(NSString *)reason;
@end


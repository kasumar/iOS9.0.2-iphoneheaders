/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenterClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ScreenSuppressor : NSObject {

	NSMutableDictionary* _dict;

}
+(id)sharedInstance;
-(void)appInit;
-(void)incSuppressEventScreenMessageAssertionLevel:(id)arg1 ;
-(void)decSuppressEventScreenMessageAssertionLevel:(id)arg1 ;
-(char)suppressEventScreenMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MFNanoServerMessageUpdater : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_libraryMessageForMessageId:(id)arg1 ;
-(void)updateMessages:(id)arg1 ;
-(char)_status:(unsigned)arg1 containsState:(unsigned)arg2 ;
-(void)_addOperation:(id)arg1 withMessages:(id)arg2 toChangeManager:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end


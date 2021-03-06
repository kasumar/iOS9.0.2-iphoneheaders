/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject {

	char _finished;
	BKSProcessAssertion* _assertion;
	/*^block*/id _completionHandler;
	NSString* _bundleID;
	unsigned _trigger;
	int _sequenceNumber;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned trigger;                                     //@synthesize trigger=_trigger - In the implementation block
@property (readonly) int sequenceNumber;                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) char finished;                                        //@synthesize finished=_finished - In the implementation block
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_fireCompletionHandlerWithResult:(unsigned)arg1 ;
-(id)initForApplication:(id)arg1 trigger:(unsigned)arg2 sequenceNumber:(int)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSString *)bundleID;
-(void)finishWithResult:(unsigned)arg1 ;
-(char)finished;
-(void)dealloc;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BKSProcessAssertion *)assertion;
-(int)sequenceNumber;
-(unsigned)trigger;
@end


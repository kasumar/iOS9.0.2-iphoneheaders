/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCloudScenarioConsumer;
@class NSArray;

@interface PLCloudScenarioProducer : NSObject {

	NSArray* _triggers;
	id<PLCloudScenarioConsumer> _consumer;

}

@property (nonatomic,retain) NSArray * triggers;                                //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) id<PLCloudScenarioConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)dealloc;
-(void)activate;
-(void)setConsumer:(id<PLCloudScenarioConsumer>)arg1 ;
-(id<PLCloudScenarioConsumer>)consumer;
-(void)subscribeToTriggerType:(Class)arg1 withSelector:(SEL)arg2 ;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end


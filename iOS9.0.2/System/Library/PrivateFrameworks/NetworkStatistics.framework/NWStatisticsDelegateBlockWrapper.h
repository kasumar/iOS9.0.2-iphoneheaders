/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWStatisticsSourceDelegate.h>
#import <libobjc.A.dylib/NWStatisticsManagerDelegate.h>

@class NSString;

@interface NWStatisticsDelegateBlockWrapper : NSObject <NWStatisticsSourceDelegate, NWStatisticsManagerDelegate> {

	/*^block*/id _addedBlock;
	/*^block*/id _countsBlock;
	/*^block*/id _descriptionBlock;
	/*^block*/id _removedBlock;
	/*^block*/id _eventsBlock;

}

@property (copy) id addedBlock;                                     //@synthesize addedBlock=_addedBlock - In the implementation block
@property (copy) id countsBlock;                                    //@synthesize countsBlock=_countsBlock - In the implementation block
@property (copy) id descriptionBlock;                               //@synthesize descriptionBlock=_descriptionBlock - In the implementation block
@property (copy) id removedBlock;                                   //@synthesize removedBlock=_removedBlock - In the implementation block
@property (copy) id eventsBlock;                                    //@synthesize eventsBlock=_eventsBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)statisticsManager:(id)arg1 didAddSource:(id)arg2 ;
-(void)sourceDidReceiveDescription:(id)arg1 ;
-(void)sourceDidReceiveCounts:(id)arg1 ;
-(void)statisticsManager:(id)arg1 didRemoveSource:(id)arg2 ;
-(id)addedBlock;
-(id)eventsBlock;
-(id)removedBlock;
-(id)countsBlock;
-(id)descriptionBlock;
-(void)setAddedBlock:(id)arg1 ;
-(void)setCountsBlock:(id)arg1 ;
-(void)setDescriptionBlock:(id)arg1 ;
-(void)setRemovedBlock:(id)arg1 ;
-(void)setEventsBlock:(id)arg1 ;
@end

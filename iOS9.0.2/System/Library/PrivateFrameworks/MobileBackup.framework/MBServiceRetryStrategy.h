/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBRetryStrategy.h>

@interface MBServiceRetryStrategy : MBRetryStrategy {

	unsigned _consecutiveRetryCount;
	unsigned _softConsecutiveRetryLimit;
	unsigned _hardConsecutiveRetryLimit;
	double _resetConsecutiveRetriesTimeInterval;
	double _forcedRetryTimeInterval;
	double _networkRetryTimeInterval;
	double _maximumServiceUnavailableRetryInterval;

}
-(char)canRetryAfterError:(id)arg1 ;
-(void)setSoftConsecutiveRetryLimit:(unsigned)arg1 ;
-(void)setHardConsecutiveRetryLimit:(unsigned)arg1 ;
-(void)setResetConsecutiveRetriesTimeInterval:(double)arg1 ;
-(void)setForcedRetryTimeInterval:(double)arg1 ;
-(void)setNetworkRetryTimeInterval:(double)arg1 ;
-(void)setMaximumServiceUnavailableRetryInterval:(double)arg1 ;
-(void)setConsecutiveRetryCount:(unsigned)arg1 ;
-(double)maximumServiceUnavailableRetryInterval;
-(unsigned)consecutiveRetryCount;
-(unsigned)hardConsecutiveRetryLimit;
-(double)networkRetryTimeInterval;
-(double)resetConsecutiveRetriesTimeInterval;
-(double)forcedRetryTimeInterval;
-(char)_shouldResetConsecutiveRetryCounter;
-(void)_incrementKey:(id)arg1 ;
-(unsigned)softConsecutiveRetryLimit;
-(char)_shouldForceRetry;
-(char)shouldRetryAfterError:(id)arg1 hard:(char)arg2 ;
-(char)wouldRetry;
-(id)_updateAccountIfNeededAfterError:(id)arg1 ;
-(double)_sleepIntervalAfterError:(id)arg1 ;
-(id)initWithEngine:(id)arg1 ;
@end


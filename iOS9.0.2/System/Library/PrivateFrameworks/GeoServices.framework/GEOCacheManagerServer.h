/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <geod/GEOServer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface GEOCacheManagerServer : GEOServer {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)identifier;
-(void)replyToMessage:(id)arg1 withErrorType:(int)arg2 ;
-(void)versionsForDomainsWithMessage:(id)arg1 ;
-(void)checkHasExpiredWithMessage:(id)arg1 ;
-(void)snapshotWithFilePathArrayWithMessage:(id)arg1 ;
-(void)refreshLOIAssociatedMapItemsWithMessage:(id)arg1 ;
-(void)refreshLOIReverseGeocodedMapItemsWithMessage:(id)arg1 ;
-(id)init;
@end


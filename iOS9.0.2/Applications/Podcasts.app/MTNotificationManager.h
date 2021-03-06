/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTNotificationManager : MTSingleton {

	NSObject*<OS_dispatch_queue> _workQueue;

}
-(char)canSendNewEpisodeAlerts;
-(char)canSendNotification:(unsigned)arg1 ;
-(id)computeNotifications;
-(void)markEpisodesAsNotified:(id)arg1 ;
-(void)scheduleLocalNotifications:(id)arg1 ;
-(void)showPodcastDetailForUUID:(id)arg1 andEpisodeUUIDs:(id)arg2 ;
-(void)scheduleLocationNotificationForPodcast:(id)arg1 ;
-(void)processNotifications;
-(void)handleLocalNotification:(id)arg1 ;
-(void)clearAllNotifications;
-(id)init;
-(void)setupNotifications;
@end


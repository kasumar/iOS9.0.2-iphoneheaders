/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@interface MTAppShortcutManager : MTSingleton {

	unsigned _backgroundTaskIdentifier;
	unsigned _updateCount;

}

@property (assign,nonatomic) unsigned backgroundTaskIdentifier;              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (assign,nonatomic) unsigned updateCount;                           //@synthesize updateCount=_updateCount - In the implementation block
+(char)supportsFeature;
-(void)startObservingChanges;
-(void)stopObservingChanges;
-(id)_shortcutItems;
-(void)performResumeActionForShortcutItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performNextEpisodeActionForShortcutItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_resumeShortcutItem;
-(id)_recentPodcasts;
-(id)_nextEpisodeShortcutItemForPodcast:(id)arg1 ;
-(id)_episodeUuidToResume;
-(id)_resumeShortcutItemForEpisodeUuid:(id)arg1 ;
-(id)_shortcutIconForPodcastUuid:(id)arg1 ;
-(id)_episodeUuidForCurrentPlayerItem;
-(void)performActionForShortcutItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUpdateCount:(unsigned)arg1 ;
-(unsigned)updateCount;
-(void)_endBackgroundTask;
-(void)dealloc;
-(id)init;
-(void)_endBackgroundTask:(char)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(unsigned)backgroundTaskIdentifier;
-(void)updateShortcutItems;
-(void)_beginBackgroundTask;
@end


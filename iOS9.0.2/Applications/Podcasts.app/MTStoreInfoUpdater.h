/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue, ISOperationQueue;

@interface MTStoreInfoUpdater : NSObject {

	NSOperationQueue* _updateOperationQueue;
	ISOperationQueue* _storeOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * updateOperationQueue;              //@synthesize updateOperationQueue=_updateOperationQueue - In the implementation block
@property (nonatomic,retain) ISOperationQueue * storeOperationQueue;               //@synthesize storeOperationQueue=_storeOperationQueue - In the implementation block
+(id)sharedInstance;
-(void)updateStoreInfoForPodcast:(id)arg1 ;
-(ISOperationQueue *)storeOperationQueue;
-(void)updateStoreInfoForEpisodesAndPodcast:(id)arg1 skipPodcastLastCheckDate:(char)arg2 ;
-(void)setUpdateOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)updateOperationQueue;
-(id)episodesWithMissingAdamIdsForPodcast:(id)arg1 withContext:(id)arg2 ;
-(void)updateStoreInfoForEpisodesInPodcast:(id)arg1 withEpisodeIds:(id)arg2 andEpisodesWithGuid:(id)arg3 ;
-(void)getStoreInfoForPodcastWithAdamId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(char)updateAdamId:(id)arg1 forEpisode:(id)arg2 ;
-(void)getStoreInfoForEpisodesWithAdamIds:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setStoreOperationQueue:(ISOperationQueue *)arg1 ;
-(id)init;
@end

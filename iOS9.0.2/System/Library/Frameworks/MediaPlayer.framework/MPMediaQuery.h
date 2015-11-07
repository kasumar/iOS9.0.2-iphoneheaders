/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary, MPMediaQueryCriteria, NSArray, MPMediaPlaylist, MPMediaItemCollection, NSSet, NSDictionary, MPMediaQuerySectionInfo, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying> {

	MPMediaLibrary* _mediaLibrary;
	MPMediaQueryCriteria* _criteria;
	int _isFilteringDisabled;
	NSArray* _staticEntities;
	int _staticEntityType;

}

@property (nonatomic,readonly) MPMediaPlaylist * containingPlaylist; 
@property (nonatomic,readonly) MPMediaItemCollection * collectionByJoiningCollections; 
@property (nonatomic,retain) NSSet * filterPredicates; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * collections; 
@property (assign,nonatomic) int groupingType; 
@property (nonatomic,readonly) NSArray * itemSections; 
@property (nonatomic,readonly) NSArray * collectionSections; 
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,copy) NSSet * itemPropertiesToFetch; 
@property (nonatomic,copy) NSSet * collectionPropertiesToFetch; 
@property (setter=_setOrderingProperties:,getter=_orderingProperties,nonatomic,copy) NSArray * orderingProperties; 
@property (setter=_setOrderingDirectionMappings:,getter=_orderingDirectionMappings,nonatomic,copy) NSDictionary * orderingDirectionMappings; 
@property (assign,nonatomic) char sortItems; 
@property (assign,nonatomic) char useSections; 
@property (assign,nonatomic) unsigned entityLimit; 
@property (nonatomic,readonly) char _hasItems; 
@property (nonatomic,readonly) char _hasCollections; 
@property (nonatomic,readonly) unsigned _countOfItems; 
@property (nonatomic,readonly) unsigned _countOfCollections; 
@property (nonatomic,readonly) char _hasStaticEntities; 
@property (nonatomic,readonly) NSArray * itemPersistentIdentifiers; 
@property (nonatomic,readonly) NSArray * collectionPersistentIdentifiers; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * itemSectionInfo; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * collectionSectionInfo; 
@property (nonatomic,readonly) char excludesEntitiesWithBlankNames; 
@property (assign,nonatomic) char includeEntitiesWithBlankNames; 
@property (nonatomic,readonly) char specifiesPlaylistItems; 
@property (assign,nonatomic) char shouldIncludeNonLibraryEntities; 
@property (nonatomic,readonly) char willGroupEntities; 
@property (assign,nonatomic) char ignoreSystemFilterPredicates; 
@property (nonatomic,readonly) MPMediaItemCollection * _representativeCollection; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setFilteringDisabled:(char)arg1 ;
+(id)audiobooksQuery;
+(void)initFilteringDisabled;
+(id)playlistsQuery;
+(char)isFilteringDisabled;
+(id)artistsQuery;
+(id)songsQuery;
+(id)podcastsQuery;
+(id)ITunesUQuery;
+(id)ITunesUAudioQuery;
+(id)videoITunesUQuery;
+(id)audibleAudiobooksQuery;
+(id)compilationsQuery;
+(id)composersQuery;
+(id)genresQuery;
+(id)albumArtistsQuery;
+(id)videosQuery;
+(id)musicVideosQuery;
+(id)tvShowsQuery;
+(id)homeVideosQuery;
+(id)moviesQuery;
+(id)movieRentalsQuery;
+(id)audioPodcastsQuery;
+(id)videoPodcastsQuery;
+(id)geniusMixesQuery;
+(id)playlistsRecentlyAddedQuery;
+(id)playbackHistoryPlaylist;
+(id)activeGeniusPlaylist;
+(id)currentDevicePurchasesPlaylist;
+(char)supportsSecureCoding;
+(void)initialize;
+(id)albumsQuery;
-(id)_MPUSDS_searchPredicate;
-(unsigned)_countOfItems;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(unsigned)_countOfCollections;
-(void)setFilterPredicates:(NSSet *)arg1 ;
-(id)initWithFilterPredicates:(id)arg1 ;
-(char)_isFilteringDisabled;
-(id)initWithCriteria:(id)arg1 library:(id)arg2 ;
-(void)setStaticEntities:(id)arg1 entityType:(int)arg2 ;
-(int)groupingType;
-(NSSet *)filterPredicates;
-(id)protobufferEncodableObject;
-(void)setGroupingType:(int)arg1 ;
-(void)setSortItems:(char)arg1 ;
-(void)_setOrderingProperties:(id)arg1 ;
-(void)_setOrderingDirectionMappings:(id)arg1 ;
-(NSArray *)collections;
-(id)predicateForProperty:(id)arg1 ;
-(char)excludesEntitiesWithBlankNames;
-(char)specifiesPlaylistItems;
-(unsigned)groupingThreshold;
-(MPMediaQuerySectionInfo *)itemSectionInfo;
-(MPMediaQuerySectionInfo *)collectionSectionInfo;
-(id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(int)arg3 ;
-(void)_enumerateItemsInOrder:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateItemPersistentIDsInOrder:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionsInOrder:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionPersistentIDsInOrder:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setEntityLimit:(unsigned)arg1 ;
-(id)initWithEntities:(id)arg1 entityType:(int)arg2 ;
-(id)copyByRemovingStaticEntities;
-(id)copyBySanitizingStaticEntities;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(unsigned)entityLimit;
-(char)shouldIncludeNonLibraryEntities;
-(void)setShouldIncludeNonLibraryEntities:(char)arg1 ;
-(char)includeEntitiesWithBlankNames;
-(void)setIncludeEntitiesWithBlankNames:(char)arg1 ;
-(char)ignoreSystemFilterPredicates;
-(void)setIgnoreSystemFilterPredicates:(char)arg1 ;
-(NSSet *)itemPropertiesToFetch;
-(NSSet *)collectionPropertiesToFetch;
-(void)setCollectionPropertiesToFetch:(NSSet *)arg1 ;
-(char)_hasItems;
-(char)_hasCollections;
-(char)_hasStaticEntities;
-(NSArray *)itemPersistentIdentifiers;
-(NSArray *)collectionPersistentIdentifiers;
-(id)_orderingProperties;
-(id)_orderingDirectionMappings;
-(MPMediaItemCollection *)_representativeCollection;
-(char)sortItems;
-(void)setUseSections:(char)arg1 ;
-(char)useSections;
-(char)willGroupEntities;
-(NSArray *)itemSections;
-(NSArray *)collectionSections;
-(id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 ;
-(id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 ;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)criteria;
-(void)setCriteria:(id)arg1 ;
-(void)removePredicatesForProperty:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 forProperty:(id)arg2 ;
-(MPMediaPlaylist *)containingPlaylist;
-(void)setFilterPropertyPredicate:(id)arg1 ;
-(char)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2 ;
-(MPMediaItemCollection *)collectionByJoiningCollections;
-(id)MPSD_mediaQueryForDownloadableEntities;
-(id)MPSD_mediaQueryForDownloadingEntities;
-(char)MPSD_hasDownloadableEntities;
-(char)MPSD_hasDownloadingEntities;
-(void)addFilterPredicate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)_enumerateUnorderedItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)setItemPropertiesToFetch:(NSSet *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTEpisodeCollectionViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Podcasts/MTSearchOverlayControllerDelegate.h>
#import <Podcasts/MTSSDownloadManagerDelegate.h>

@class MTAddPodcastOrStationController, MTAllPropertyChangesQueryObserver, MTUuidQueryObserver, UINavigationController, MTUnplayedSectionsMaker, MTSearchOverlayController, _UINavigationControllerPalette, UIRefreshControl, UISearchBar, NSIndexPath, NSTimer, NSString;

@interface MTUnplayedViewController : MTEpisodeCollectionViewController <UISearchBarDelegate, MTSearchOverlayControllerDelegate, MTSSDownloadManagerDelegate> {

	MTAddPodcastOrStationController* _addPodcastOrStationController;
	char _viewHasEverAppeared;
	char _expandedSizeDirty;
	char _viewSizeChangedWhileNotVisible;
	char _displayDownloads;
	char _showingEmptyView;
	char _refreshing;
	MTAllPropertyChangesQueryObserver* _fetchedObserver;
	MTUuidQueryObserver* _lastObjectQueryObserver;
	UINavigationController* _emptyViewNavigationController;
	MTUnplayedSectionsMaker* _sectionsMaker;
	MTSearchOverlayController* _searchOverlayController;
	_UINavigationControllerPalette* _searchPalette;
	UIRefreshControl* _podcastsRefreshControl;
	UISearchBar* _searchBar;
	NSIndexPath* _indexPathToRestoreOnRotation;
	NSTimer* _todayChangedTimer;
	CGSize _downloadCellSize;

}

@property (assign,nonatomic) char displayDownloads;                                               //@synthesize displayDownloads=_displayDownloads - In the implementation block
@property (assign,nonatomic) char showingEmptyView;                                               //@synthesize showingEmptyView=_showingEmptyView - In the implementation block
@property (nonatomic,retain) MTAllPropertyChangesQueryObserver * fetchedObserver;                 //@synthesize fetchedObserver=_fetchedObserver - In the implementation block
@property (nonatomic,retain) MTUuidQueryObserver * lastObjectQueryObserver;                       //@synthesize lastObjectQueryObserver=_lastObjectQueryObserver - In the implementation block
@property (nonatomic,retain) UINavigationController * emptyViewNavigationController;              //@synthesize emptyViewNavigationController=_emptyViewNavigationController - In the implementation block
@property (nonatomic,retain) MTUnplayedSectionsMaker * sectionsMaker;                             //@synthesize sectionsMaker=_sectionsMaker - In the implementation block
@property (nonatomic,retain) MTSearchOverlayController * searchOverlayController;                 //@synthesize searchOverlayController=_searchOverlayController - In the implementation block
@property (nonatomic,retain) _UINavigationControllerPalette * searchPalette;                      //@synthesize searchPalette=_searchPalette - In the implementation block
@property (nonatomic,retain) UIRefreshControl * podcastsRefreshControl;                           //@synthesize podcastsRefreshControl=_podcastsRefreshControl - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) char refreshing;                                 //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                             //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) CGSize downloadCellSize;                                             //@synthesize downloadCellSize=_downloadCellSize - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathToRestoreOnRotation;                          //@synthesize indexPathToRestoreOnRotation=_indexPathToRestoreOnRotation - In the implementation block
@property (nonatomic,retain) NSTimer * todayChangedTimer;                                         //@synthesize todayChangedTimer=_todayChangedTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)flowLayoutClass;
-(void)observeChangesToOurDataSet;
-(void)stopObservingDataSetChanges;
-(char)showingEmptyView;
-(void)tearDownWelcomeChildContainer;
-(void)standupWelcomeChildContainer;
-(void)setShowingEmptyView:(char)arg1 ;
-(MTSearchOverlayController *)searchOverlayController;
-(MTAllPropertyChangesQueryObserver *)fetchedObserver;
-(UINavigationController *)emptyViewNavigationController;
-(void)removeNavigationControllerPalette;
-(void)restoreNavigationControllerPalette;
-(void)searchOverlayControllerWillPresent:(id)arg1 ;
-(void)searchOverlayControllerWillDismiss:(id)arg1 ;
-(void)searchOverlayControllerDidDismiss:(id)arg1 ;
-(id)metricsName;
-(void)setEmptyViewNavigationController:(UINavigationController *)arg1 ;
-(void)setFetchedObserver:(MTAllPropertyChangesQueryObserver *)arg1 ;
-(void)setSearchOverlayController:(MTSearchOverlayController *)arg1 ;
-(void)downloadManager:(id)arg1 willRemoveDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didRemoveDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg1 didUpdateDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didAddDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 updateDownloadCount:(id)arg2 ;
-(char)showsArtworkInCells;
-(void)playEpisodeAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4 ;
-(float)estimatedCellHeightForWidth:(float)arg1 ;
-(void)fixEmptyTextContainers;
-(NSTimer *)todayChangedTimer;
-(UIRefreshControl *)podcastsRefreshControl;
-(void)configureCollectionView;
-(void)setupAddPodcastOrStationController;
-(void)registerForFeedUpdateNotifications;
-(void)beginObservingRefresh;
-(void)updateNumberOfColumnsForSize:(CGSize)arg1 ;
-(void)updateDownloadCell;
-(void)setDownloadCellSize:(CGSize)arg1 ;
-(void)refreshCompositeResultsController;
-(void)endObservingRefresh;
-(void)adjustVisibleHeaderInsets:(CGSize)arg1 ;
-(void)adjustDownloadCellInsets:(CGSize)arg1 ;
-(char)isExpandedEpisodeOffScreen;
-(id)indexPathForScrollOnRotate;
-(void)setIndexPathToRestoreOnRotation:(NSIndexPath *)arg1 ;
-(MTUnplayedSectionsMaker *)sectionsMaker;
-(id)getOldestEpisodeDate;
-(MTUuidQueryObserver *)lastObjectQueryObserver;
-(void)todayDidChange;
-(void)setTodayChangedTimer:(NSTimer *)arg1 ;
-(void)updateListStateAnimated:(char)arg1 ;
-(void)adjustContentOffsetForDownloadCell;
-(id)_indexPathForDownloadCell;
-(CGSize)downloadCellSize;
-(char)displayDownloads;
-(void)feedUpdateDidComplete:(id)arg1 ;
-(void)feedUpdateDidStart;
-(NSIndexPath *)indexPathToRestoreOnRotation;
-(void)collectionView:(id)arg1 configureReusableView:(id)arg2 ofSupplementaryElementOfKind:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(void)libraryUpdateFinished:(id)arg1 ;
-(void)libraryUpdateStarted:(id)arg1 ;
-(void)setDisplayDownloads:(char)arg1 ;
-(void)dismissSearchOverlayController;
-(CGPoint)initialLayoutContentOffset;
-(id)leftButtonItems;
-(id)emptyListMessage;
-(char)hasBulkMarkAsUnplayedAction;
-(void)setLastObjectQueryObserver:(MTUuidQueryObserver *)arg1 ;
-(void)setSectionsMaker:(MTUnplayedSectionsMaker *)arg1 ;
-(void)setPodcastsRefreshControl:(UIRefreshControl *)arg1 ;
-(_UINavigationControllerPalette *)searchPalette;
-(void)setSearchPalette:(_UINavigationControllerPalette *)arg1 ;
-(void)refresh:(id)arg1 ;
-(CGPoint)topOffset;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UISearchBar *)searchBar;
-(void)commitPreviewViewController:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg1 ;
-(CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(char)isRefreshing;
-(void)setRefreshing:(char)arg1 ;
@end

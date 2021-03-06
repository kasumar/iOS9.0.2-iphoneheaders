/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTListViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <Podcasts/MTSectionHeaderViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class MTUpNextResultsController, MTChapterResultsController, NSIndexPath, NSString;

@interface MTUpNextViewController : MTListViewController <UITableViewDataSource, MTSectionHeaderViewDelegate, UIPopoverPresentationControllerDelegate> {

	MTUpNextResultsController* _upNextResultsController;
	MTChapterResultsController* _chapterResultsController;
	NSIndexPath* _deletedIndexPath;

}

@property (nonatomic,retain) MTUpNextResultsController * upNextResultsController;                //@synthesize upNextResultsController=_upNextResultsController - In the implementation block
@property (nonatomic,retain) MTChapterResultsController * chapterResultsController;              //@synthesize chapterResultsController=_chapterResultsController - In the implementation block
@property (nonatomic,retain) NSIndexPath * deletedIndexPath;                                     //@synthesize deletedIndexPath=_deletedIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentUpNextInViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(UIEdgeInsets)contentInsetsForSectionHeaderView:(id)arg1 ;
-(char)hideHeaderForEmptySection:(int)arg1 ;
-(void)setUpNextResultsController:(MTUpNextResultsController *)arg1 ;
-(void)setChapterResultsController:(MTChapterResultsController *)arg1 ;
-(void)scrollToNowPlayingItemAnimated:(char)arg1 ;
-(void)setDeletedIndexPath:(NSIndexPath *)arg1 ;
-(MTUpNextResultsController *)upNextResultsController;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 forChapterAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 forEpisodeAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 forPlayerItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 withArtworkForPlayerItem:(id)arg2 atIndexPath:(id)arg3 ;
-(MTChapterResultsController *)chapterResultsController;
-(void)playEpisodeAtIndexPath:(id)arg1 withOffset:(unsigned)arg2 ;
-(void)_updateBackgroundForTraitCollection:(id)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)rightButtonItems;
-(void)_dismissUpNext;
-(NSIndexPath *)deletedIndexPath;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTStationsViewController.h>

@protocol MTEpisodeListViewControllerDelegate;
@class NSIndexPath, NSString;

@interface MTiTunesFolderViewController : MTStationsViewController {

	NSIndexPath* _lastSelectedIndexPath;
	char _folder;
	NSString* _playlistUuid;
	id<MTEpisodeListViewControllerDelegate> _selectionDelegate;

}

@property (nonatomic,retain) NSString * playlistUuid;                                                       //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (assign,nonatomic,__weak) id<MTEpisodeListViewControllerDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,getter=isFolder,nonatomic) char folder;                                                   //@synthesize folder=_folder - In the implementation block
-(void)restoreSelection;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(NSString *)playlistUuid;
-(void)iTunesFoldersAreNotRefreshable;
-(char)isFolder;
-(id<MTEpisodeListViewControllerDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<MTEpisodeListViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)initWithPlaylist:(id)arg1 ;
-(void)setFolder:(char)arg1 ;
@end


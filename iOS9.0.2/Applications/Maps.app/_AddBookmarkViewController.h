/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/BookmarkViewController.h>

@protocol AddBookmarkViewControllerDelegate;
@class UIBarButtonItem, AddBookmarkViewController;

@interface _AddBookmarkViewController : BookmarkViewController {

	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _saveButtonItem;
	id<AddBookmarkViewControllerDelegate> _delegate;
	AddBookmarkViewController* _parentBookmarkController;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                       //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButtonItem;                                         //@synthesize saveButtonItem=_saveButtonItem - In the implementation block
@property (assign,nonatomic,__weak) AddBookmarkViewController * parentBookmarkController;              //@synthesize parentBookmarkController=_parentBookmarkController - In the implementation block
@property (assign,nonatomic,__weak) id<AddBookmarkViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(UIBarButtonItem *)saveButtonItem;
-(void)_saveAddBookmark:(id)arg1 ;
-(AddBookmarkViewController *)parentBookmarkController;
-(void)_cancelAddBookmark:(id)arg1 ;
-(void)setSaveButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setParentBookmarkController:(AddBookmarkViewController *)arg1 ;
-(void)setDelegate:(id<AddBookmarkViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AddBookmarkViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)textDidChange:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
@end


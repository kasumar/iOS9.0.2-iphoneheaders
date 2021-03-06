/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <FindMyFriends/NotifyOthersClosingDelegate.h>

@protocol NotifyOthersListViewControllerDelegate;
@class NSArray, NSString;

@interface NotifyOthersListViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, NotifyOthersClosingDelegate> {

	char _hideDoneButton;
	id<NotifyOthersListViewControllerDelegate> _delegate;
	NSArray* _notifyOtherFences;
	NSArray* _fencesOnMe;
	id _removeObserver;

}

@property (assign,nonatomic,__weak) id<NotifyOthersListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char hideDoneButton;                                                     //@synthesize hideDoneButton=_hideDoneButton - In the implementation block
@property (nonatomic,retain) NSArray * notifyOtherFences;                                             //@synthesize notifyOtherFences=_notifyOtherFences - In the implementation block
@property (nonatomic,retain) NSArray * fencesOnMe;                                                    //@synthesize fencesOnMe=_fencesOnMe - In the implementation block
@property (nonatomic,retain) id removeObserver;                                                       //@synthesize removeObserver=_removeObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadFMFData:(id)arg1 ;
-(void)notifyOthersViewControllerDidClose;
-(void)setNotifyOtherFences:(NSArray *)arg1 ;
-(void)setFencesOnMe:(NSArray *)arg1 ;
-(void)objectDidDelete:(id)arg1 ;
-(void)setRemoveObserver:(id)arg1 ;
-(id)removeObserver;
-(NSArray *)fencesOnMe;
-(NSArray *)notifyOtherFences;
-(char)disableAddingNewFences;
-(void)setDelegate:(id<NotifyOthersListViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<NotifyOthersListViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)reload:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)setHideDoneButton:(char)arg1 ;
-(char)hideDoneButton;
@end


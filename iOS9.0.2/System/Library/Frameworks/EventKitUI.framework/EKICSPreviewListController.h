/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol EKICSPreviewListDelegate;
@class EKICSPreviewModel, NSMutableArray;

@interface EKICSPreviewListController : UITableViewController {

	EKICSPreviewModel* _model;
	NSMutableArray* _sections;
	char _allowsImport;
	char _allowsSubitems;
	char _showWeekNumbers;
	id<EKICSPreviewListDelegate> _listDelegate;

}

@property (assign,nonatomic) char allowsImport;                                             //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) char allowsSubitems;                                           //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic,__weak) id<EKICSPreviewListDelegate> listDelegate;              //@synthesize listDelegate=_listDelegate - In the implementation block
@property (assign,nonatomic) char showWeekNumbers;                                          //@synthesize showWeekNumbers=_showWeekNumbers - In the implementation block
-(void)setAllowsSubitems:(char)arg1 ;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(void)buildSections;
-(void)updateImportButton;
-(void)importAllPressed:(id)arg1 ;
-(char)showWeekNumbers;
-(void)setShowWeekNumbers:(char)arg1 ;
-(char)allowsImport;
-(void)setAllowsImport:(char)arg1 ;
-(char)allowsSubitems;
-(id<EKICSPreviewListDelegate>)listDelegate;
-(void)setListDelegate:(id<EKICSPreviewListDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithModel:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@class NSArray, NSString;

@interface ICDebuggingViewController : UITableViewController <UIDocumentPickerDelegate> {

	NSArray* _sectionDictionaries;

}

@property (retain) NSArray * sectionDictionaries;                   //@synthesize sectionDictionaries=_sectionDictionaries - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createSectionDictionaries;
-(NSArray *)sectionDictionaries;
-(void)purgeEverything:(id)arg1 ;
-(void)deleteEverything:(id)arg1 ;
-(void)deletePreviews:(id)arg1 ;
-(void)loadTestData:(id)arg1 ;
-(void)setCloudConfiguration:(id)arg1 ;
-(void)resetWelcomeScreenState:(id)arg1 ;
-(void)loadArchiveFromICloudDrive:(id)arg1 ;
-(void)syncLocalWithCloud:(id)arg1 ;
-(void)pushEverythingToCloud:(id)arg1 ;
-(void)deleteServerChangeTokens:(id)arg1 ;
-(void)migrateICloudAccount:(id)arg1 ;
-(void)migrateLocalAccount:(id)arg1 ;
-(void)deleteMigratedDuplicates:(id)arg1 ;
-(void)resetLocalAccountMigration:(id)arg1 ;
-(void)startFresh:(id)arg1 ;
-(void)saveBackup:(id)arg1 ;
-(void)loadBackup:(id)arg1 ;
-(void)clearAllBackups:(id)arg1 ;
-(void)sendArchive:(id)arg1 ;
-(void)sendCurrentLog:(id)arg1 ;
-(void)sendAllLogs:(id)arg1 ;
-(void)clearAllLogs:(id)arg1 ;
-(void)logStateOfTheWorld:(id)arg1 ;
-(void)sendStateOfTheWorld:(id)arg1 ;
-(void)deleteSearchIndex:(id)arg1 ;
-(void)addSomeRandomNotes:(id)arg1 ;
-(void)toggleNonContiguousLayout:(id)arg1 ;
-(void)crashThisApp:(id)arg1 ;
-(void)setSectionDictionaries:(NSArray *)arg1 ;
-(void)sendLogsAtURLs:(id)arg1 fromSender:(id)arg2 ;
-(id)URLsForTestDataDirectories;
-(void)importTestDataFromDirectoryAtURL:(id)arg1 ;
-(id)allBackupURLs;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)viewDidLoad;
-(void)setDefaultLogLevel:(id)arg1 ;
@end

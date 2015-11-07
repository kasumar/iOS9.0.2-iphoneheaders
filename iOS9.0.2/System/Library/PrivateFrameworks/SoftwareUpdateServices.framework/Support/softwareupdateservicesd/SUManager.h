/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUNetworkObserver.h>

@protocol SUManagerDelegate;
@class SUState, SUScanOptions, NSMutableArray, ASAsset, MSUUpdateBrainAssetLoader, SUDownload, SUOperationProgress, NSTimer, NSHashTable, NSString;

@interface SUManager : NSObject <SUNetworkObserver> {

	id<SUManagerDelegate> _delegate;
	SUState* _state;
	char _foreground;
	SUScanOptions* _autoScanOptions;
	char _scanning;
	NSMutableArray* _scanRequests;
	ASAsset* _assetToDownloadFromLastScan;
	MSUUpdateBrainAssetLoader* _brainAssetDownloader;
	char _downloading;
	ASAsset* _downloadAsset;
	SUDownload* _download;
	SUOperationProgress* _downloadProgressSnapshot;
	NSTimer* _documentationDownloadTimer;
	char _installing;
	char _installed;
	char _isInstallTonight;
	NSHashTable* _observers;

}

@property (assign,nonatomic) id<SUManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isForeground,nonatomic) char foreground;                //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) char isInstallTonight;                              //@synthesize isInstallTonight=_isInstallTonight - In the implementation block
@property (nonatomic,retain) SUState * state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SUDownload * download;                              //@synthesize download=_download - In the implementation block
@property (assign,getter=isDownloading,nonatomic) char downloading; 
@property (assign,getter=isScanning,nonatomic) char scanning;                    //@synthesize scanning=_scanning - In the implementation block
@property (assign,getter=isInstalling,nonatomic) char installing;                //@synthesize installing=_installing - In the implementation block
@property (nonatomic,retain) ASAsset * downloadAsset;                            //@synthesize downloadAsset=_downloadAsset - In the implementation block
@property (nonatomic,retain) ASAsset * assetToDownloadFromLastScan;              //@synthesize assetToDownloadFromLastScan=_assetToDownloadFromLastScan - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
-(void)noteAutodownloadFailedToStartWithError:(id)arg1 ;
-(void)tryAutodownload;
-(void)endAutodownloadTasksAndResetState;
-(void)autoScanAndDownloadIfAvailable:(int)arg1 ;
-(void)_autoDownloadWiFiPeriodDidEnd;
-(void)_setupManualDownloadPolicyPeriodIfNecessary:(id)arg1 fromDate:(id)arg2 save:(char)arg3 ;
-(char)_updateAssetDownloadOptions;
-(void)_resumeFromLastKnownState;
-(void)setDownloadAsset:(ASAsset *)arg1 ;
-(char)__startBrainAssetDownload;
-(void)_updateLastSavedDownloadPhase:(id)arg1 ;
-(void)_verifyAndPrepareUpdate;
-(char)__startUpdateAssetDownload:(char)arg1 ;
-(void)_purgeSUAsset:(id)arg1 ;
-(char)_doAutodownload:(id)arg1 error:(id*)arg2 ;
-(char)startDownloadWithMetadata:(id)arg1 error:(id*)arg2 ;
-(void)_cleanupPreviousDownload;
-(void)_tryOrScheduleAutodownloadWithPolicy:(id)arg1 allowOneTimeRetry:(char)arg2 ;
-(void)scanForUpdates:(id)arg1 complete:(/*^block*/id)arg2 ;
-(char)_isWithinAutodownloadWifiWindow;
-(void)_endOrRescheduleAutodownloadRetryInOneDay:(id)arg1 ;
-(void)_endAutodownloadTasksAndResetState:(char)arg1 ;
-(char)_isDateWithinAutodownloadWifiWindow:(id)arg1 ;
-(char)isDownloadHalted;
-(char)_cancelDownload:(char)arg1 userRequested:(char)arg2 error:(id*)arg3 ;
-(void)notifyScanRequestDidStart:(id)arg1 ;
-(void)setScanning:(char)arg1 ;
-(void)setAssetToDownloadFromLastScan:(ASAsset *)arg1 ;
-(void)notifyScanRequestDidFinish:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)notifyScanDidComplete:(id)arg1 error:(id)arg2 ;
-(void)_sendDownloadInvalidatedForNewDescriptor:(id)arg1 ;
-(void)_doScanWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchDocumentationFromSoftwareUpdateAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remoteQueryWithMatcher:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_scheduleDocumentationDownloadTimeoutTimer:(id)arg1 ;
-(void)_invalidateDocumentationDownloadTimeoutTimer;
-(void)_documentationDownloadTimeout:(id)arg1 ;
-(char)_killDownload:(char)arg1 userRequested:(char)arg2 error:(id*)arg3 ;
-(void)_downloadFailedWithError:(id)arg1 ;
-(void)_updateLastSavedDownloadsMetadata:(id)arg1 ;
-(int)_downloadPriority;
-(id)_computedDownloadOptionsForBrain:(char)arg1 ;
-(ASAsset *)assetToDownloadFromLastScan;
-(void)_cleanupPreviousDownload:(char)arg1 ;
-(char)_reapplyExistingDownloadPolicyIfDownloadable:(char)arg1 ;
-(void)_updateDownloadStatusForBrainAssetState:(id)arg1 ;
-(void)_updateDownloadStatusForUpdateAssetState:(id)arg1 ;
-(char)cancelDownloadUserRequested:(char)arg1 error:(id*)arg2 ;
-(int)_orderForPhase:(id)arg1 ;
-(char)_isPhase:(id)arg1 afterPhase:(id)arg2 ;
-(void)_notePhaseCompleted:(id)arg1 ;
-(void)_changeDownloadPhase:(id)arg1 state:(id)arg2 ;
-(void)_updateNormalizedDownloadProgressAndNotifyDelegate;
-(void)_updateNormalizedDownloadProgress;
-(char)_shouldSendUpdatedProgressToDelegate;
-(void)_snapshotProgress;
-(void)_setVerifyExclusions:(id)arg1 ;
-(void)_downloadFinished;
-(char)_isUpdateReadyForInstallation:(id*)arg1 forceDiskCleanupIfNeeded:(char)arg2 ShouldRetry:(char*)arg3 ;
-(char)isInstallTonight;
-(void)resumeOrResetIfNecessary;
-(char)purgeDownloadUserRequested:(char)arg1 error:(id*)arg2 ;
-(char)updateDownloadMetadata:(id)arg1 error:(id*)arg2 ;
-(char)_isPhase:(id)arg1 beforePhase:(id)arg2 ;
-(char)isUpdateReadyForInstallation:(id*)arg1 shouldRetry:(char*)arg2 ;
-(void)setIsInstallTonight:(char)arg1 ;
-(ASAsset *)downloadAsset;
-(SUDownload *)download;
-(void)setDelegate:(id<SUManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SUManagerDelegate>)delegate;
-(SUState *)state;
-(void)setState:(SUState *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(char)startDownload:(id*)arg1 ;
-(char)isScanning;
-(char)isDownloading;
-(void)setDownloading:(char)arg1 ;
-(char)isInstalling;
-(void)setInstalling:(char)arg1 ;
-(char)isForeground;
-(void)setForeground:(char)arg1 ;
-(char)installUpdate:(id*)arg1 ;
-(void)operatorBundleChanged;
-(void)setDownload:(SUDownload *)arg1 ;
-(id)lastScannedDescriptor;
-(char)pauseDownload:(id*)arg1 ;
-(void)resumeDownload:(id*)arg1 ;
@end

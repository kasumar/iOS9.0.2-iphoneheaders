/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLMomentGenerationDataManagement;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSObject, PLMomentAnalyzer;

@interface PLMomentGeneration : NSObject {

	char _isGenerationPassInProgress;
	unsigned _inProgressCount;
	NSMutableOrderedSet* _pendingInsertsAndUpdates;
	NSMutableDictionary* _pendingDeletes;
	NSMutableArray* _pendingCompletionBlocks;
	NSObject*<OS_dispatch_queue> _incrementalGenerationStateQueue;
	PLMomentAnalyzer* _pairedAnalyzer;
	PLMomentAnalyzer* _analyzer;
	char _isInStressTestMode;
	id<PLMomentGenerationDataManagement> _momentGenerationDataManager;

}

@property (assign,nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
@property (assign,nonatomic) PLMomentAnalyzer * analyzer; 
+(id)generateSplitCustomMomentUUID;
+(id)generateMergeCustomMomentUUID;
+(id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2 withAffectedMoments:(id)arg3 ;
+(id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2 ;
+(id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4 ;
+(char)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id*)arg2 ;
+(void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(PLMomentAnalyzer *)analyzer;
-(void)saveChangesForAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 ;
-(void)generateWithIncrementalDataCompletionHandler:(/*^block*/id)arg1 ;
-(char)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2 ;
-(void)setMomentGenerationDataManager:(id<PLMomentGenerationDataManagement>)arg1 ;
-(void)setAnalyzer:(PLMomentAnalyzer *)arg1 ;
-(void)generateWithAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PLMomentGenerationDataManagement>)momentGenerationDataManager;
-(void)_updateIncrementalMomentGeneration;
-(void)_runIncrementalGenerationPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(char)arg2 ;
-(id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1 ;
-(char)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2 ;
-(id)_coalescedDateRangesFromRanges:(id)arg1 ;
-(id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2 withAffectedMoments:(id)arg3 ;
-(id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2 ;
-(id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4 ;
-(char)_deleteAllMomentDataInManager:(id)arg1 incremental:(char)arg2 error:(id*)arg3 ;
-(void)_clearReplayLog;
-(char)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(char)arg2 error:(id*)arg3 ;
-(id)_logEntryForAssets:(id)arg1 isBatchUpdate:(char)arg2 ;
-(id)_detailsForAsset:(id)arg1 simpleOnly:(char)arg2 ;
-(char)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3 ;
-(id)_nameForMomentGenerationType:(short)arg1 ;
-(id)_detailsForMoment:(id)arg1 ;
-(void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rebuildAllMomentLists:(/*^block*/id)arg1 ;
-(id)momentGenerationStatus;
-(id)allAssetMetadataWriteToFile:(id)arg1 ;
-(id)allMomentsMetadataWriteToFile:(id)arg1 ;
-(void)clearUserInfluencedMoments;
@end


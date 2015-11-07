/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPCluster : NSObject <CPDisposable> {

	const SCD_Struct_CP23* profile;
	unsigned xCount;
	double* x;
	double* dx;
	unsigned* dxOrderIndex;
	unsigned interClusterMinIndex;
	double* ddx;
	unsigned* ddxOrderIndex;
	unsigned interLevelMinIndex;
	unsigned minClusterSize;
	double maxClusterSpread;
	double minInterClusterDiff;
	double minInterLevel2ndDiff;
	unsigned clusterCount;
	SCD_Struct_CP24* xStats;
	unsigned levels;
	SCD_Struct_CP24* dxStats;
	char ownData;
	char ownDifferences;

}
+(void)clusterTextLine:(id)arg1 ;
+(unsigned*)createOrderIndexFor:(double*)arg1 ofSize:(unsigned)arg2 ;
+(void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned)arg2 count:(unsigned*)arg3 ;
-(void)dispose;
-(void)dealloc;
-(id)init;
-(unsigned)levels;
-(char)joinLevelsFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)splitSecondDifferences;
-(void)assembleDifferenceStats;
-(char)coalesceFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)computeDataFromDifferences;
-(void)assembleDensityDifferenceStats;
-(void)computeDifferencesFromData;
-(void)analyzeDifferences;
-(void)analyzeDensities;
-(char)splitLevelAtIndex:(unsigned)arg1 betweenValue:(double)arg2 andValue:(double)arg3 ;
-(char)joinClosestLevelPairFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)assembleDataStats;
-(void)setMinimumClusterSize:(unsigned)arg1 ;
-(void)setMaximumClusterSpread:(double)arg1 ;
-(void)setMinimumRecognizedInterClusterDifference:(double)arg1 ;
-(void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1 ;
-(void)findClusters:(double*)arg1 count:(unsigned)arg2 ;
-(void)findClustersFromDifferences:(double*)arg1 count:(unsigned)arg2 ;
-(void)findDensityClusters:(double*)arg1 count:(unsigned)arg2 ;
-(char)applyDifferenceHints:(SCD_Struct_CP24*)arg1 count:(unsigned)arg2 ;
-(unsigned)clusterCount;
-(SCD_Struct_CP24)clusterStatisticsAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP24)differenceClusterStatisticsAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP24)largestClusterStatistics;
-(void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(char)arg2 ;
-(void)makeWords:(SCD_Struct_CP17*)arg1 count:(unsigned)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned)arg4 ;
-(void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(SCD_Struct_CP24*)arg3 ;
-(id)initWithProfile:(const SCD_Struct_CP23*)arg1 ;
-(void)finalize;
@end

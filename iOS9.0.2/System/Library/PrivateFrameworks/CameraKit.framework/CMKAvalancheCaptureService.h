/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CMKCaptureService.h>

@class NSArray, NSMutableDictionary, CMKAvalancheSession, NSCountedSet, NSMutableSet;

@interface CMKAvalancheCaptureService : CMKCaptureService {

	char _supportsAvalancheAnalysis;
	NSArray* _recentFaceMetadata;
	NSMutableDictionary* __avalancheSessionsByUUID;
	CMKAvalancheSession* __activeAvalancheSession;
	NSCountedSet* __inflightRequestsByUUID;
	NSMutableSet* __avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
	double __avalancheStartTime;

}

@property (assign,nonatomic) char supportsAvalancheAnalysis;                                                           //@synthesize supportsAvalancheAnalysis=_supportsAvalancheAnalysis - In the implementation block
@property (nonatomic,copy) NSArray * recentFaceMetadata;                                                               //@synthesize recentFaceMetadata=_recentFaceMetadata - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _avalancheSessionsByUUID;                                         //@synthesize _avalancheSessionsByUUID=__avalancheSessionsByUUID - In the implementation block
@property (nonatomic,readonly) CMKAvalancheSession * _activeAvalancheSession;                                          //@synthesize _activeAvalancheSession=__activeAvalancheSession - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inflightRequestsByUUID;                                                 //@synthesize _inflightRequestsByUUID=__inflightRequestsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _avalancheSessionsToBeFinalizedAfterNextResponseCompletion;              //@synthesize _avalancheSessionsToBeFinalizedAfterNextResponseCompletion=__avalancheSessionsToBeFinalizedAfterNextResponseCompletion - In the implementation block
@property (nonatomic,readonly) double _avalancheStartTime;                                                             //@synthesize _avalancheStartTime=__avalancheStartTime - In the implementation block
-(int)numberOfPhotos;
-(id)init;
-(void)_ensureValidAvalancheSession;
-(void)finishAvalancheCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CMKAvalancheSession *)_activeAvalancheSession;
-(char)_canFinishCapturingActiveAvalanche;
-(void)_finalizeAvalancheSession:(id)arg1 ;
-(NSMutableSet *)_avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
-(void)_cancelAvalancheSession:(id)arg1 ;
-(void)_finalizeAndBeginNewAvalancheSession;
-(char)supportsAvalancheAnalysis;
-(NSMutableDictionary *)_avalancheSessionsByUUID;
-(NSArray *)recentFaceMetadata;
-(void)startAvalancheCapture;
-(void)finishAvalancheCapture;
-(void)cancelAvalancheCapture;
-(char)canContinueAvalancheCapture;
-(void)requestWasEnqueued:(id)arg1 ;
-(void)responseWasGenerated:(id)arg1 error:(id)arg2 ;
-(void)responseWasCompleted:(id)arg1 error:(id)arg2 ;
-(void)setSupportsAvalancheAnalysis:(char)arg1 ;
-(void)setRecentFaceMetadata:(NSArray *)arg1 ;
-(NSCountedSet *)_inflightRequestsByUUID;
-(double)_avalancheStartTime;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, UIView, NSArray, NSMutableArray;

@interface _UIFocusRegionMapSnapshot : NSObject {

	char _isFocusedRectEmpty;
	char _didSetRegionClipFrame;
	CGRect _regionClipFrame;
	char _committed;
	char _clipToSnapshotRect;
	UIImage* _visualRepresentation;
	UIView* _rootView;
	NSArray* _sortedFocusContainerGuideMapEntries;
	NSMutableArray* _detectedFocusableViewMapEntries;
	NSMutableArray* _detectedFocusableGuideMapEntries;
	NSMutableArray* _detectedFocusContainerGuideMapEntries;
	unsigned _focusHeading;
	UIView* _focusableRegionAncestorView;
	NSArray* _finalFocusableRegionMapEntries;
	CGRect _mapEntriesFrame;
	CGRect _snapshottedRect;
	CGRect _focusedRect;
	CGRect _visualRepresentationMinimumArea;

}

@property (nonatomic,__weak,readonly) UIView * rootView;                                          //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,readonly) CGRect snapshottedRect;                                            //@synthesize snapshottedRect=_snapshottedRect - In the implementation block
@property (assign,getter=isCommitted,nonatomic) char committed;                                   //@synthesize committed=_committed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allFocusableRegionMapEntries; 
@property (nonatomic,copy) NSArray * sortedFocusContainerGuideMapEntries;                         //@synthesize sortedFocusContainerGuideMapEntries=_sortedFocusContainerGuideMapEntries - In the implementation block
@property (nonatomic,readonly) UIImage * visualRepresentation;                                    //@synthesize visualRepresentation=_visualRepresentation - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFocusableViewMapEntries;                    //@synthesize detectedFocusableViewMapEntries=_detectedFocusableViewMapEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFocusableGuideMapEntries;                   //@synthesize detectedFocusableGuideMapEntries=_detectedFocusableGuideMapEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedFocusContainerGuideMapEntries;              //@synthesize detectedFocusContainerGuideMapEntries=_detectedFocusContainerGuideMapEntries - In the implementation block
@property (assign,nonatomic) CGRect focusedRect;                                                  //@synthesize focusedRect=_focusedRect - In the implementation block
@property (assign,nonatomic) unsigned focusHeading;                                               //@synthesize focusHeading=_focusHeading - In the implementation block
@property (assign,nonatomic) char clipToSnapshotRect;                                             //@synthesize clipToSnapshotRect=_clipToSnapshotRect - In the implementation block
@property (assign,nonatomic) CGRect visualRepresentationMinimumArea;                              //@synthesize visualRepresentationMinimumArea=_visualRepresentationMinimumArea - In the implementation block
@property (assign,nonatomic,__weak) UIView * focusableRegionAncestorView;                         //@synthesize focusableRegionAncestorView=_focusableRegionAncestorView - In the implementation block
@property (nonatomic,readonly) CGRect mapEntriesFrame;                                            //@synthesize mapEntriesFrame=_mapEntriesFrame - In the implementation block
@property (nonatomic,copy) NSArray * finalFocusableRegionMapEntries;                              //@synthesize finalFocusableRegionMapEntries=_finalFocusableRegionMapEntries - In the implementation block
-(id)init;
-(unsigned)focusHeading;
-(void)setFocusHeading:(unsigned)arg1 ;
-(UIView *)rootView;
-(id)_initWithRootView:(id)arg1 snapshotRect:(CGRect)arg2 ;
-(CGRect)focusedRect;
-(void)setFocusedRect:(CGRect)arg1 ;
-(char)clipToSnapshotRect;
-(void)setClipToSnapshotRect:(char)arg1 ;
-(CGRect)visualRepresentationMinimumArea;
-(void)setVisualRepresentationMinimumArea:(CGRect)arg1 ;
-(UIView *)focusableRegionAncestorView;
-(void)setFocusableRegionAncestorView:(UIView *)arg1 ;
-(void)_occludeFocusInRegion:(id)arg1 ;
-(void)_addFocusContainerGuide:(id)arg1 ;
-(void)_addFocusableRegion:(id)arg1 isFocusGuide:(char)arg2 ;
-(void)_commit;
-(CGRect)snapshottedRect;
-(CGRect)_clippedRegionFrame:(CGRect)arg1 ;
-(NSMutableArray *)detectedFocusableGuideMapEntries;
-(void)_punchHoleInMap:(id)arg1 atFrame:(CGRect)arg2 ;
-(NSMutableArray *)detectedFocusableViewMapEntries;
-(NSMutableArray *)detectedFocusContainerGuideMapEntries;
-(id)_finalFocusableRegionMapEntriesFromMapEntries:(id)arg1 ;
-(id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)arg1 guideMapEntries:(id)arg2 ;
-(void)setFinalFocusableRegionMapEntries:(NSArray *)arg1 ;
-(id)_sortedEligibleFocusContainerGuidesInArray:(id)arg1 ;
-(void)setSortedFocusContainerGuideMapEntries:(NSArray *)arg1 ;
-(void)setCommitted:(char)arg1 ;
-(NSArray *)finalFocusableRegionMapEntries;
-(char)isCommitted;
-(NSArray *)sortedFocusContainerGuideMapEntries;
-(id)visualRepresentationWithMinimumArea:(CGRect)arg1 ;
-(CGRect)mapEntriesFrame;
-(UIImage *)visualRepresentation;
-(NSArray *)allFocusableRegionMapEntries;
-(id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)arg1 ;
-(id)debugQuickLookObject;
-(void)setDetectedFocusableViewMapEntries:(NSMutableArray *)arg1 ;
-(void)setDetectedFocusableGuideMapEntries:(NSMutableArray *)arg1 ;
-(void)setDetectedFocusContainerGuideMapEntries:(NSMutableArray *)arg1 ;
@end


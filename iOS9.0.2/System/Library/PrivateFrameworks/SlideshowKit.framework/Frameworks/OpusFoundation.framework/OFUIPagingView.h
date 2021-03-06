/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OFUIPagingViewDelegate;
@class UIScrollView, OFUIPagingViewController, NSMutableSet, NSString;

@interface OFUIPagingView : OFUIView <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	OFUIPagingViewController* _pagingViewController;
	id<OFUIPagingViewDelegate> _delegate;
	float _gapBetweenPages;
	int _pagesToPreload;
	NSMutableSet* _recycledPages;
	NSMutableSet* _visiblePages;
	int _pageCount;
	int _currentPageIndex;
	int _previousPageIndex;
	int _firstLoadedPageIndex;
	int _lastLoadedPageIndex;
	char _rotationInProgress;
	char _scrollViewIsMoving;
	char _recyclingEnabled;

}

@property (assign,nonatomic) OFUIPagingViewController * pagingViewController;              //@synthesize pagingViewController=_pagingViewController - In the implementation block
@property (assign,nonatomic) id<OFUIPagingViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float gapBetweenPages;                                        //@synthesize gapBetweenPages=_gapBetweenPages - In the implementation block
@property (assign,nonatomic) int pagesToPreload;                                           //@synthesize pagesToPreload=_pagesToPreload - In the implementation block
@property (nonatomic,readonly) int pageCount;                                              //@synthesize pageCount=_pageCount - In the implementation block
@property (assign,nonatomic) int currentPageIndex;                                         //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,readonly) int previousPageIndex;                                      //@synthesize previousPageIndex=_previousPageIndex - In the implementation block
@property (nonatomic,readonly) int firstVisiblePageIndex; 
@property (nonatomic,readonly) int lastVisiblePageIndex; 
@property (nonatomic,readonly) int firstLoadedPageIndex;                                   //@synthesize firstLoadedPageIndex=_firstLoadedPageIndex - In the implementation block
@property (nonatomic,readonly) int lastLoadedPageIndex;                                    //@synthesize lastLoadedPageIndex=_lastLoadedPageIndex - In the implementation block
@property (nonatomic,readonly) char isScrolling;                                           //@synthesize scrollViewIsMoving=_scrollViewIsMoving - In the implementation block
@property (assign,nonatomic) char recyclingEnabled;                                        //@synthesize recyclingEnabled=_recyclingEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<OFUIPagingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<OFUIPagingViewDelegate>)delegate;
-(void)didRotate;
-(int)pageCount;
-(float)gapBetweenPages;
-(void)setGapBetweenPages:(float)arg1 ;
-(void)commonInit;
-(char)isScrolling;
-(int)currentPageIndex;
-(void)setCurrentPageIndex:(int)arg1 ;
-(void)willAnimateRotation;
-(void)setPagingViewController:(OFUIPagingViewController *)arg1 ;
-(void)configurePages;
-(CGRect)frameForScrollView;
-(void)recyclePage:(id)arg1 ;
-(int)firstVisiblePageIndex;
-(int)lastVisiblePageIndex;
-(id)viewForPageAtIndex:(unsigned)arg1 ;
-(void)configurePage:(id)arg1 forIndex:(int)arg2 ;
-(CGRect)frameForPageAtIndex:(unsigned)arg1 ;
-(void)knownToBeMoving;
-(void)knownToBeIdle;
-(void)setPagesToPreload:(int)arg1 ;
-(id)dequeueReusablePage;
-(OFUIPagingViewController *)pagingViewController;
-(int)pagesToPreload;
-(int)previousPageIndex;
-(int)firstLoadedPageIndex;
-(int)lastLoadedPageIndex;
-(char)recyclingEnabled;
-(void)setRecyclingEnabled:(char)arg1 ;
@end


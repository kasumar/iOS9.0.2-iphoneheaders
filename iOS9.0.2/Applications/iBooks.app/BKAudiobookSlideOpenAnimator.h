/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKBookSlideOpenAnimator.h>

@class UIView;

@interface BKAudiobookSlideOpenAnimator : BKBookSlideOpenAnimator {

	UIView* _currentCoverView;
	UIView* _contentView;
	UIView* _contentClipView;
	CGRect _contentFrame;

}

@property (nonatomic,retain) UIView * currentCoverView;                                                              //@synthesize currentCoverView=_currentCoverView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                                    //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,retain) UIView * contentClipView;                                                               //@synthesize contentClipView=_contentClipView - In the implementation block
@property (nonatomic,readonly) char landscape; 
@property (nonatomic,readonly) UIViewController*<BKAudiobookOpenTransitioning> audiobookViewController; 
-(CGRect)zoomedCoverFrame;
-(UIViewController*<BKAudiobookOpenTransitioning>)audiobookViewController;
-(void)setCurrentCoverView:(UIView *)arg1 ;
-(UIView *)currentCoverView;
-(double)revealDuration;
-(double)coverFadeDuration;
-(void)animationsDidFinish;
-(char)animatesCoverBounds;
-(char)wantsCoverShadow;
-(void)setupViewsForZoom;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)setupViewsForReveal;
-(void)animateRevealWithCompletion:(/*^block*/id)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentClipView;
-(void)setContentClipView:(UIView *)arg1 ;
-(char)landscape;
-(CGRect)contentFrame;
@end


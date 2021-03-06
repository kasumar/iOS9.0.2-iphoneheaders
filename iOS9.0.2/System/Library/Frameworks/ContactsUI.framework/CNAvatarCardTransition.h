/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIPanGestureRecognizer, UIView, NSString;

@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	char _reversed;
	char _interactive;
	UIPanGestureRecognizer* _gestureRecognizer;
	id<UIViewControllerContextTransitioning> _context;
	UIView* _presentedView;

}

@property (assign) char reversed;                                                           //@synthesize reversed=_reversed - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                    //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * presentedView;                                        //@synthesize presentedView=_presentedView - In the implementation block
@property (nonatomic,readonly) char interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresentedView:(UIView *)arg1 ;
-(char)interactive;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(id<UIViewControllerContextTransitioning>)context;
-(UIView *)presentedView;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setReversed:(char)arg1 ;
-(char)reversed;
@end


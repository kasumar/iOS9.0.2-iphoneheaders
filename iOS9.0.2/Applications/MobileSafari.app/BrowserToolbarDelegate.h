/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BrowserToolbarDelegate <NSObject>
@optional
-(void)presentAddTabPopoverFromButtonBar;
-(void)addTabFromButtonBar;

@required
-(void)toggleBookmarksFromButtonBar;
-(void)backFromButtonBar;
-(void)forwardFromButtonBar;
-(void)showActionPanelFromButtonBar;
-(void)presentBookmarksLongPressMenuFromButtonBar;
-(void)showTabsFromButtonBar;
-(void)presentBackPopoverFromButtonBar;
-(void)presentForwardPopoverFromButtonBar;
-(CGPoint*)targetPointForButtonBarLinkImageAnimationIntoLayer:(id)arg1 proposedTargetPoint:(CGPoint)arg2;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUNavigationController.h>

@interface SKUINavigationController : SUNavigationController
-(id)description;
-(id)popViewControllerAnimated:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(char)arg2 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(void)attachPalette:(id)arg1 isPinned:(char)arg2 ;
-(char)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
-(void)_scheduleConfigurationOfNavigationBar;
-(void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(char)arg2 ;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(int)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(char)arg5 accessibilityButtonBackgroundTintColor:(id)arg6 ;
-(void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(char)arg2 ;
-(void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1 ;
@end

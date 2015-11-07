/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/__SKUIPhysicalCirclesViewAccessibility_super.h>

@interface SKUIPhysicalCirclesViewAccessibility : __SKUIPhysicalCirclesViewAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityValueForCircle:(id)arg1 ;
-(void)_accessibilityDeleteCircle:(id)arg1 ;
-(void)_accessibilityActivateCircle:(id)arg1 ;
-(int)_accessibilityIndexOfCircle:(id)arg1 ;
-(id)_accessibilityValueForAffinityCount:(int)arg1 ;
-(id)_accessibilityCircleBodies;
-(CGPoint)_accessibilityForceTranslationForScrollDirection:(int)arg1 ;
-(id)_accessibilityPushingScrollStatusInDirection:(int)arg1 ;
-(char)accessibilityScroll:(int)arg1 ;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)removeCircleAtIndex:(int)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_reloadDidFinish;
-(char)_accessibilityUsesChildrenFramesForSorting;
@end

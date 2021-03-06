/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface AXHeaderValueCell : UIView {

	UILabel* _headerLabel;
	UILabel* _contentLabel;

}
-(id)initWithFrame:(CGRect)arg1 header:(id)arg2 content:(id)arg3 ;
-(char)accessibilityScrollToVisible;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(char)isAccessibilityElement;
@end


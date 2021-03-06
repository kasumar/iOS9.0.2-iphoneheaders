/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIReflectingView : UIView {

	UIView* _containerView;
	UIView* _gradientView;
	float _reflectionAlpha;

}

@property (nonatomic,retain,readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) float reflectionFraction; 
@property (assign,nonatomic) float reflectionAlpha; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(id)_gradientLayer;
-(void)setReflectionAlpha:(float)arg1 ;
-(void)setReflectionFraction:(float)arg1 ;
-(float)reflectionAlpha;
-(void)_updateGradientColors;
-(float)reflectionFraction;
@end


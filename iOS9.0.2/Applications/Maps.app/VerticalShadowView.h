/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface VerticalShadowView : UIView {

	char _isDimmed;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) char isDimmed;                                //@synthesize isDimmed=_isDimmed - In the implementation block
-(void)setIsDimmed:(char)arg1 ;
-(void)updateGradientColorsForTheme;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(char)isDimmed;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end

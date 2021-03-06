/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell {

	char _separatorHidden;
	float _leftSeparatorInset;
	float _rightSeparatorInset;

}

@property (assign,getter=isSeparatorHidden,nonatomic) char separatorHidden;              //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) float leftSeparatorInset;                                   //@synthesize leftSeparatorInset=_leftSeparatorInset - In the implementation block
@property (assign,nonatomic) float rightSeparatorInset;                                  //@synthesize rightSeparatorInset=_rightSeparatorInset - In the implementation block
@property (assign,nonatomic) float leadingSeparatorInset; 
@property (assign,nonatomic) float trailingSeparatorInset; 
-(void)setLeftSeparatorInset:(float)arg1 ;
-(void)setLeadingSeparatorInset:(float)arg1 ;
-(void)setRightSeparatorInset:(float)arg1 ;
-(float)leadingSeparatorInset;
-(float)trailingSeparatorInset;
-(void)_updateSeparatorInset;
-(void)setSeparatorHidden:(char)arg1 ;
-(float)leftSeparatorInset;
-(void)setTrailingSeparatorInset:(float)arg1 ;
-(float)rightSeparatorInset;
-(char)isSeparatorHidden;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGRect)_separatorFrame;
@end


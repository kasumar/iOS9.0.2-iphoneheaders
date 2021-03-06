/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/WAAnswer.siriUIBundle/WAAnswer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WAAnswer/WAAnswer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UIImageView, UIImage;

@interface WAImageView : SiriUIContentCollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image; 
-(CGSize)_imageSizeForWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(CGSize)_imageSize;
@end


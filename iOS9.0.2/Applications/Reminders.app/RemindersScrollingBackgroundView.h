/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface RemindersScrollingBackgroundView : UIView {

	UIImage* _textureImage;

}

@property (retain) UIImage * textureImage;              //@synthesize textureImage=_textureImage - In the implementation block
+(id)kitPaperTextureImage;
-(void)setTextureImage:(UIImage *)arg1 ;
-(UIImage *)textureImage;
-(void)resizeForRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

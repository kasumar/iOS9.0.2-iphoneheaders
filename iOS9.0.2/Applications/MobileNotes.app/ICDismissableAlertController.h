/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface ICDismissableAlertController : UIAlertController {

	UIAlertAction* _dismissAction;

}

@property (nonatomic,retain) UIAlertAction * dismissAction;              //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)dismissWhenPossible;
-(UIAlertAction *)dismissAction;
-(void)setDismissAction:(UIAlertAction *)arg1 ;
@end

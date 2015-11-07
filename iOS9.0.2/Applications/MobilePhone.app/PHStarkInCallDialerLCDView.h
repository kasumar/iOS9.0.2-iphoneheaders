/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>
#import <MobilePhone/DialerLCDFieldProtocol.h>

@class UILabel, NSString;

@interface PHStarkInCallDialerLCDView : UIView <DialerLCDFieldProtocol> {

	UILabel* _mainNumberLabel;

}

@property (retain) UILabel * mainNumberLabel;                       //@synthesize mainNumberLabel=_mainNumberLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInCallMode:(char)arg1 ;
-(void)setText:(id)arg1 needsFormat:(char)arg2 ;
-(id)unformattedText;
-(void)deleteCharacter;
-(void)setMainNumberLabel:(UILabel *)arg1 ;
-(UILabel *)mainNumberLabel;
-(char)inCallMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)text;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setLabel:(id)arg1 ;
-(char)highlighted;
@end

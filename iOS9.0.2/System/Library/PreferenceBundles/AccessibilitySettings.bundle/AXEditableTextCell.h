/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface AXEditableTextCell : PSTableCell <UITextFieldDelegate> {

	char _shouldAllowSelection;
	UITextField* _nameTextField;

}

@property (nonatomic,retain) UITextField * nameTextField;              //@synthesize nameTextField=_nameTextField - In the implementation block
@property (assign,nonatomic) char shouldAllowSelection;                //@synthesize shouldAllowSelection=_shouldAllowSelection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNameTextField:(UITextField *)arg1 ;
-(char)shouldAllowSelection;
-(void)setShouldAllowSelection:(char)arg1 ;
-(void)setTextFieldValue:(id)arg1 specifier:(id)arg2 ;
-(id)textFieldValue:(id)arg1 ;
-(UITextField *)nameTextField;
-(char)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)setSelectionStyle:(int)arg1 ;
-(void)updateText;
@end

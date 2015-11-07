/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell {

	NSString* _alert;
	NSString* _subtitle;
	NSMutableString* _detailText;

}

@property (retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * alert;                          //@synthesize alert=_alert - In the implementation block
@property (retain) NSMutableString * detailText;              //@synthesize detailText=_detailText - In the implementation block
-(void)setDetailText:(NSMutableString *)arg1 ;
-(NSMutableString *)detailText;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)setChecked:(char)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)alert;
-(void)setAlert:(NSString *)arg1 ;
@end

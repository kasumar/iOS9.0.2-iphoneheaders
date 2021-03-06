/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKRecurrenceChooserControllerDelegate;
@class UIColor, NSDate;

@interface EKRecurrenceChooserController : NSObject {

	id<EKRecurrenceChooserControllerDelegate> _delegate;
	UIColor* _backgroundColor;
	NSDate* _date;

}

@property (__weak) id<EKRecurrenceChooserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) int frequency; 
@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
+(int)dayFromNumber:(int)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)startDateComponents:(unsigned)arg1 ;
-(void)notifyDelegate;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellForRow:(int)arg1 ;
-(float)heightForRow:(int)arg1 ;
-(char)drawBackgroundForRow:(int)arg1 ;
-(void)rowTapped:(int)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<EKRecurrenceChooserControllerDelegate>)arg1 ;
-(id<EKRecurrenceChooserControllerDelegate>)delegate;
-(NSDate *)date;
-(int)numberOfRows;
-(int)frequency;
-(void)setDate:(NSDate *)arg1 ;
@end


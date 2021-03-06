/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem {

	NSMutableArray* _cells;
	unsigned _checkedRow;

}

@property (nonatomic,readonly) NSMutableArray * cells;              //@synthesize cells=_cells - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSubitems;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(NSMutableArray *)cells;
-(char)saveStateToCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned)arg2 ;
-(id)_cellForColor:(id)arg1 ;
-(void)reset;
-(id)headerTitle;
@end


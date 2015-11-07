/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, CLLocation, NSDate;

@interface RAPPhoto : NSObject {

	UIImage* _photo;
	CLLocation* _location;
	NSDate* _date;

}

@property (nonatomic,readonly) UIImage * photo;                    //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(id)initWithPhoto:(id)arg1 date:(id)arg2 location:(id)arg3 ;
-(UIImage *)photo;
-(NSDate *)date;
-(CLLocation *)location;
@end

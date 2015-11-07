/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DADAFilterData.h>
#import <Diagnostics/DADAScalarData.h>
#import <Diagnostics/DADAVectorData.h>

@interface DABarometerData : NSObject <DADAFilterData, DADAScalarData, DADAVectorData> {

	float _pressure;
	float _temperature;
	double _timestamp;

}

@property (assign,nonatomic) float pressure;                 //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float temperature;              //@synthesize temperature=_temperature - In the implementation block
+(id)dataWithVectorDictionary:(id)arg1 ;
-(id)filterData;
-(id)scalarData;
-(id)vectorData;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)pressure;
-(float)temperature;
-(void)setTemperature:(float)arg1 ;
-(void)setPressure:(float)arg1 ;
@end

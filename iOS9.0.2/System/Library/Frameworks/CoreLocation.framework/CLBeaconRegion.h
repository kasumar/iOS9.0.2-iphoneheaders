/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@class NSUUID, NSNumber;

@interface CLBeaconRegion : CLRegion {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;

}

@property (nonatomic,readonly) NSUUID * proximityUUID;                    //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * major;                          //@synthesize major=_major - In the implementation block
@property (nonatomic,readonly) NSNumber * minor;                          //@synthesize minor=_minor - In the implementation block
@property (assign,nonatomic) char notifyEntryStateOnDisplay; 
+(id)any;
+(char)supportsSecureCoding;
-(id)initWithClientRegion:(SCD_Struct_CL10)arg1 ;
-(char)_measuredPowerForDevice;
-(id)peripheralDataWithMeasuredPower:(id)arg1 ;
-(char)notifyEntryStateOnDisplay;
-(void)setNotifyEntryStateOnDisplay:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSUUID *)proximityUUID;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithProximityUUID:(id)arg1 identifier:(id)arg2 ;
-(NSNumber *)major;
-(NSNumber *)minor;
@end

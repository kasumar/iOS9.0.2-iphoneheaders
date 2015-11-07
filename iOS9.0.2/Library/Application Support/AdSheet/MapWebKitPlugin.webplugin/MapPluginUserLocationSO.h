/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MapPluginUserLocationSO : NSObject {

	float latitude;
	float longitude;
	float altitude;
	float horizontalAccuracy;
	float verticalAccuracy;

}

@property (assign,nonatomic) float latitude; 
@property (assign,nonatomic) float longitude; 
@property (assign,nonatomic) float altitude; 
@property (assign,nonatomic) float horizontalAccuracy; 
@property (assign,nonatomic) float verticalAccuracy; 
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(float)verticalAccuracy;
-(float)horizontalAccuracy;
-(float)latitude;
-(float)longitude;
-(void)setAltitude:(float)arg1 ;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(float)altitude;
-(void)setVerticalAccuracy:(float)arg1 ;
-(id)attributeKeys;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
@end

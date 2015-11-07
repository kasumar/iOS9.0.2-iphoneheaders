/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAGenericTermsUIRequest.h>

@class NRDevice, NSURLRequest;

@interface COSAAGenericTermsUIRequest : AAGenericTermsUIRequest {

	char _showWarranty;
	NRDevice* _device;

}

@property (retain) NRDevice * device;                        //@synthesize device=_device - In the implementation block
@property (assign) char showWarranty;                        //@synthesize showWarranty=_showWarranty - In the implementation block
@property (readonly) NSURLRequest * urlRequest; 
+(id)deviceModelHeaderName;
+(id)clientInfoHeaderForDevice:(id)arg1 ;
+(id)pairedClientInfoHeaderName;
-(id)initWithGizmoDevice:(id)arg1 showWarranty:(char)arg2 ;
-(char)showWarranty;
-(void)setShowWarranty:(char)arg1 ;
-(NRDevice *)device;
-(NSURLRequest *)urlRequest;
-(void)setDevice:(NRDevice *)arg1 ;
@end

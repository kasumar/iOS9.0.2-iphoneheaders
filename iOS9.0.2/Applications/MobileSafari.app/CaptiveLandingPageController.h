/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface CaptiveLandingPageController : NSObject {

	NSURL* _captiveLandingPageURL;
	unsigned long long _URLGeneration;

}

@property (nonatomic,readonly) NSURL * captiveLandingPageURL; 
+(id)sharedCaptiveLandingPageController;
-(id)popCaptiveLandingPageURL;
-(NSURL *)captiveLandingPageURL;
-(void)clearCaptiveLandingPageURL;
-(id)init;
@end

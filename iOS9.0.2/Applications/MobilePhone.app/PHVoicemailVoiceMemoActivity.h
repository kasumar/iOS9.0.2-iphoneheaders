/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class VMVoicemail;

@interface PHVoicemailVoiceMemoActivity : UIActivity {

	VMVoicemail* _voicemail;

}

@property (nonatomic,retain) VMVoicemail * voicemail;              //@synthesize voicemail=_voicemail - In the implementation block
+(int)activityCategory;
-(VMVoicemail *)voicemail;
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)initWithVoicemail:(id)arg1 ;
-(void)setVoicemail:(VMVoicemail *)arg1 ;
@end

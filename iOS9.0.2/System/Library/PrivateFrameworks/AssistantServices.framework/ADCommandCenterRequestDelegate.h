/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADCommandCenterRequestDelegate <NSObject>
@required
-(void)adRequestDidFinish;
-(void)adRequestDidFailWithError:(id)arg1 requestClass:(id)arg2;
-(void)adServerRequestsTTSStateUnmuted:(char)arg1;
-(void)adAceConnectionWillRetryOnError:(id)arg1;
-(void)adRequestRequestedDismissAssistant;
-(void)adRequestDidReceiveCommand:(id)arg1 reply:(/*^block*/id)arg2;

@end

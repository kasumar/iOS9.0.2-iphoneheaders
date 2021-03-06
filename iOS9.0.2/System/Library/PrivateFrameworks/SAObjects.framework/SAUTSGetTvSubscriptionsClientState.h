/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SAUTSTvSubscriptionsClientState, NSString, NSArray;

@interface SAUTSGetTvSubscriptionsClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SAUTSTvSubscriptionsClientState * clientState; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)getTvSubscriptionsClientState;
+(id)getTvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUTSTvSubscriptionsClientState *)clientState;
-(void)setClientState:(SAUTSTvSubscriptionsClientState *)arg1 ;
-(char)requiresResponse;
@end


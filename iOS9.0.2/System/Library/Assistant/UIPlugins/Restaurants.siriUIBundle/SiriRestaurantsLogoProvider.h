/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@class NSMutableDictionary, NSString;

@interface SiriRestaurantsLogoProvider : NSObject {

	NSMutableDictionary* _resourceDict;
	NSString* _providerKey;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * providerKey;              //@synthesize providerKey=_providerKey - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(id)_logoInfoForType:(int)arg1 ;
-(id)_logoInfoIfExistsForType:(int)arg1 ;
-(void)setImageResourceName:(id)arg1 pressed:(id)arg2 punchOut:(id)arg3 forType:(int)arg4 ;
-(void)setImageResourceWithKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3 type:(int)arg4 ;
-(void)getLogoForType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)logoSizeForType:(int)arg1 ;
-(void)setProviderKey:(NSString *)arg1 ;
-(NSString *)providerKey;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

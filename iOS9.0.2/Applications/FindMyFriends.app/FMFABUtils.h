/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FindMyFriends/FindMyFriends-Structs.h>
@interface FMFABUtils : NSObject
+(id)contactForMe;
+(void)getDirectionsForFriend:(id)arg1 ;
+(id)imageForMe:(id)arg1 drawsBorder:(char*)arg2 ;
+(void*)currentUserMeCardABRecord;
+(void)openInMapsWithCoordinate:(SCD_Struct_FM3)arg1 andMessage:(id)arg2 location:(id)arg3 ;
+(id)convertPersonArrayToRecordNumber:(CFArrayRef)arg1 ;
+(char)isOrganization:(void*)arg1 ;
+(void)openInMapsWithCoordinate:(SCD_Struct_FM3)arg1 andMessage:(id)arg2 ;
+(void)openFriendInMaps:(id)arg1 ;
+(id)displayedPropertiesForPersonViewController;
+(char)person:(void*)arg1 isNotMeOrFriend:(id)arg2 ;
+(id)locationAddressBookEntityIDForRecord:(void*)arg1 andUnlocalizedLabel:(id)arg2 ;
+(void)addCurrentAddressForFriend:(id)arg1 ;
@end

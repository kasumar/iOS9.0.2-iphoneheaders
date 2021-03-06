/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FMFComposeRecipient : NSObject <NSCopying> {

	void* _record;
	int _recordID;
	int _property;
	int _identifier;
	NSString* _address;
	NSString* _label;
	int status;

}

@property (assign,nonatomic) int status; 
+(id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 ;
+(id)recipientWithProperty:(int)arg1 address:(id)arg2 ;
+(id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)_unformattedAddress;
-(id)address;
-(void*)record;
-(id)uncommentedAddress;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)displayString;
-(int)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)label;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)compositeName;
-(char)isEmail;
-(id)commentedAddress;
-(id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5 ;
-(char)isPhone;
-(id)unlocalizedLabel;
-(void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3 ;
-(int)recordID;
-(int)property;
@end


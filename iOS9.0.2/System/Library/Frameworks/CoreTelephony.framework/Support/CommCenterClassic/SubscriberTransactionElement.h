/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenterClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenterClassic/CommCenterClassic-Structs.h>
@class NSMutableDictionary;

@interface SubscriberTransactionElement : NSObject {

	NSMutableDictionary* _info;
	int _type;

}

@property (nonatomic,retain) NSMutableDictionary * info;              //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(char)matchContent:(id)arg1 ;
-(id)initWithAction:(id)arg1 andIdentifier:(int)arg2 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)action;
-(void)setIdentifier:(int)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSMutableDictionary *)info;
-(void)setPayload:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
@end

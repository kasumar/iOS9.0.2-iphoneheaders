/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PHCallParticipantLabelDescriptor : NSObject {

	char _dynamic;
	int _type;
	NSString* _string;
	NSArray* _strings;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) NSArray * strings;                          //@synthesize strings=_strings - In the implementation block
@property (assign,getter=isDynamic,nonatomic) char dynamic;              //@synthesize dynamic=_dynamic - In the implementation block
+(id)labelDescriptorWithString:(id)arg1 ;
+(id)labelDescriptorWithFormat:(id)arg1 ;
+(id)labelDescriptorWithArray:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)string;
-(void)setDynamic:(char)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(char)isDynamic;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMSortKeyAdjustment : NSObject {

	unsigned long long _stride;
	NSString* _sortKey;

}

@property (nonatomic,readonly) unsigned long long stride;              //@synthesize stride=_stride - In the implementation block
@property (nonatomic,readonly) NSString * sortKey;                     //@synthesize sortKey=_sortKey - In the implementation block
-(void)resetKeyValueCodingObjects:(id)arg1 ;
-(id)initWithSortKey:(id)arg1 stride:(unsigned long long)arg2 ;
-(char)resortKeyValueCodingObjects:(id)arg1 ;
-(unsigned long long)stride;
-(NSString *)sortKey;
@end


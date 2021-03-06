/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
	char _isFastCountable;

}

@property (nonatomic,readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (nonatomic,readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
@property (assign,nonatomic) char isFastCountable;                                  //@synthesize isFastCountable=_isFastCountable - In the implementation block
-(char)hasEntities;
-(unsigned)countOfEntities;
-(Class)entityClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(char)arg2 ;
-(id)persistentIDProperty;
-(char)sectionsPersistentIDColumnIsDistinct;
-(Class)aggregateEntityClass;
-(NSString *)foreignPersistentIDProperty;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(char)isFastCountable;
-(void)setIsFastCountable:(char)arg1 ;
@end


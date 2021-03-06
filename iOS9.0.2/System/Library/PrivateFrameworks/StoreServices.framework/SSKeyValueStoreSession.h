/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 ;
-(SSSQLiteDatabase *)database;
-(id)copyValueForDomain:(id)arg1 key:(id)arg2 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(id)copyDataForDomain:(id)arg1 key:(id)arg2 ;
-(id)existingEntityForDomain:(id)arg1 key:(id)arg2 ;
@end


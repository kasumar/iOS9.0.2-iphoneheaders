/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/KeyboardMigrator.migrator/KeyboardMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class CPBitmapStore;

@interface KeyboardMigrator : DataClassMigrator {

	CPBitmapStore* _store;

}

@property (readonly) CPBitmapStore * store; 
-(CPBitmapStore *)store;
-(float)estimatedDuration;
-(void)dealloc;
-(id)dataClassName;
-(char)performMigration;
@end

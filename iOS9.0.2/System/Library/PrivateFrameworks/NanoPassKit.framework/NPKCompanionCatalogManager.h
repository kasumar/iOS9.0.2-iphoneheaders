/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKCatalog, NSObject;

@interface NPKCompanionCatalogManager : NSObject {

	PKCatalog* _currentCatalog;
	NSObject*<OS_dispatch_queue> _mutex;

}

@property (nonatomic,retain) PKCatalog * currentCatalog;              //@synthesize currentCatalog=_currentCatalog - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mutex;                //@synthesize mutex=_mutex - In the implementation block
-(void)setMutex:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)archiveFileName;
-(void)setCurrentCatalog:(PKCatalog *)arg1 ;
-(NSObject*<OS_dispatch_queue>)mutex;
-(PKCatalog *)currentCatalog;
-(char)needsUpdateForNewCatalog:(id)arg1 ;
-(id)init;
@end


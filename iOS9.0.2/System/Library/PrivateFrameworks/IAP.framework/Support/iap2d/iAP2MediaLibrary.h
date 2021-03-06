/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class iAP2Connection, NSObject, NSMutableDictionary, NSSet, MPMediaLibrary, iAP2MediaLibraryInfo, MPRadioLibrary;

@interface iAP2MediaLibrary : NSObject {

	iAP2Connection* connection;
	NSObject*<OS_dispatch_queue> libraryInfoUpdateQ;
	NSMutableDictionary* libraryList;
	NSSet* _libraries;
	MPMediaLibrary* _deviceMediaLibrary;
	iAP2MediaLibraryInfo* _deviceLibrary;
	MPRadioLibrary* _mpRadioLibrary;
	iAP2MediaLibraryInfo* _radioLibrary;
	BOOL _radioIsEnabled;
	BOOL _enableLibraryInfoUpdate;

}

@property (nonatomic,readonly) iAP2Connection * connection; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> libraryInfoUpdateQ; 
@property (nonatomic,readonly) NSMutableDictionary * libraryList; 
@property (nonatomic,readonly) iAP2MediaLibraryInfo * deviceLibrary;                         //@synthesize deviceLibrary=_deviceLibrary - In the implementation block
@property (nonatomic,readonly) BOOL radioIsEnabled;                                          //@synthesize radioIsEnabled=_radioIsEnabled - In the implementation block
-(void)shuttingDown;
-(void)startSendingMediaLibraryInfomationUpdates;
-(void)stopSendingMediaLibraryInfomationUpdates;
-(NSObject*<OS_dispatch_queue>)libraryInfoUpdateQ;
-(NSMutableDictionary *)libraryList;
-(char)isGeniusMixesSupported;
-(BOOL)radioIsEnabled;
-(void)_updateMediaLibraryInfomationUpdates;
-(void)_mediaLibraryiesAvailableChanged:(id)arg1 ;
-(iAP2MediaLibraryInfo *)deviceLibrary;
-(void)dealloc;
-(id)description;
-(iAP2Connection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end


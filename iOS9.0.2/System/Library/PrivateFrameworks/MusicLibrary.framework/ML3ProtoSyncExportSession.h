/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ExportSession.h>

@class NSString, MSVStreamWriter;

@interface ML3ProtoSyncExportSession : ML3ExportSession {

	NSString* _libraryUUID;
	int _syncType;
	MSVStreamWriter* _streamWriter;
	SCD_Struct_ML50 _stats;
	double _sessionStartTime;

}
-(id)end;
-(id)begin:(unsigned)arg1 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
-(id)exportTrackUpdated:(unsigned long long)arg1 ;
-(id)_writSyncPackageToStream:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 syncType:(int)arg3 ;
@end


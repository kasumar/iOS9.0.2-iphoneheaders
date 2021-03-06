/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, MCSoftwareUpdateInfo;

@interface MCSoftwareUpdateStatus : NSObject {

	char _downloading;
	char _downloaded;
	char _installing;
	NSNumber* _downloadPercentComplete;
	MCSoftwareUpdateInfo* _updateInfo;

}

@property (nonatomic,retain) NSNumber * downloadPercentComplete;                 //@synthesize downloadPercentComplete=_downloadPercentComplete - In the implementation block
@property (assign,getter=isDownloading,nonatomic) char downloading;              //@synthesize downloading=_downloading - In the implementation block
@property (assign,getter=isDownloaded,nonatomic) char downloaded;                //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,getter=isInstalling,nonatomic) char installing;                //@synthesize installing=_installing - In the implementation block
@property (nonatomic,retain) MCSoftwareUpdateInfo * updateInfo;                  //@synthesize updateInfo=_updateInfo - In the implementation block
-(char)isDownloaded;
-(char)isDownloading;
-(void)setDownloaded:(char)arg1 ;
-(NSNumber *)downloadPercentComplete;
-(void)setDownloadPercentComplete:(NSNumber *)arg1 ;
-(void)setDownloading:(char)arg1 ;
-(char)isInstalling;
-(void)setInstalling:(char)arg1 ;
-(MCSoftwareUpdateInfo *)updateInfo;
-(void)setUpdateInfo:(MCSoftwareUpdateInfo *)arg1 ;
@end


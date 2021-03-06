/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSObject, NSString, NSMutableDictionary;

@interface OFImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialDiskSaveQueue;
	NSString* _diskCacheDirectory;
	NSMutableDictionary* _diskCacheDirectoryForURLs;
	char _useAsynchronousSerialDiskSaveQueue;
	unsigned _imageFormat;

}

@property (assign,nonatomic) char useAsynchronousSerialDiskSaveQueue;              //@synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue - In the implementation block
@property (assign,nonatomic) unsigned imageFormat;                                 //@synthesize imageFormat=_imageFormat - In the implementation block
+(unsigned)bestResolutionForSize:(CGSize)arg1 ;
+(unsigned)alignResolution:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)imageFormat;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)invalidateMemoryCaches;
-(id)_diskCacheDirectoryForURL:(id)arg1 ;
-(id)_diskCacheFilePathForURL:(id)arg1 withResolution:(unsigned)arg2 ;
-(id)_diskCacheResolutionsForURL:(id)arg1 ;
-(id)initWithDiskCacheDirectory:(id)arg1 ;
-(void)invalidateDiskCaches;
-(void)invalidateDiskCacheForURL:(id)arg1 ;
-(void)purgeDiskCache:(unsigned)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setImage:(CGImageRef)arg1 withResolution:(unsigned)arg2 forURL:(id)arg3 ;
-(CGImageRef)imageForURL:(id)arg1 withResolution:(unsigned)arg2 ;
-(char)hasImageForURL:(id)arg1 withResolution:(unsigned)arg2 ;
-(CGImageRef)imageFromBestDiskCacheForURL:(id)arg1 withResolution:(unsigned)arg2 ;
-(CGImageRef)bestImageDiskCacheForURL:(id)arg1 ;
-(char)useAsynchronousSerialDiskSaveQueue;
-(void)setUseAsynchronousSerialDiskSaveQueue:(char)arg1 ;
-(void)setImageFormat:(unsigned)arg1 ;
@end


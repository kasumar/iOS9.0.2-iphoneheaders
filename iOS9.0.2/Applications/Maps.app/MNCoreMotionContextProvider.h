/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/GEOMotionContextProvider.h>

@protocol GEOMotionContextProviderDelegate;
@class CMActivityManager, MNTraceRecorder, NSString;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {

	CMActivityManager* _activityManager;
	id<GEOMotionContextProviderDelegate> _delegate;
	MNTraceRecorder* _traceRecorder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
-(id)initWithTraceRecorder:(id)arg1 ;
-(void)dealloc;
-(void)startMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)stopMotionUpdates;
@end


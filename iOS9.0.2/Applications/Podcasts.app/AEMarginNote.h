/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AEAnnotation;
@class AEAnnotationTheme;

@interface AEMarginNote : NSObject <NSCopying> {

	int mSide;
	float mYStart;
	float mYEnd;
	float mXOffset;
	id<AEAnnotation> mAnnotation;
	AEAnnotationTheme* mTheme;

}

@property (nonatomic,retain) AEAnnotationTheme * theme; 
@property (assign,nonatomic) int side; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (assign,nonatomic) float yStart; 
@property (assign,nonatomic) float yEnd; 
@property (assign,nonatomic) float xOffset; 
-(int)side;
-(void)setSide:(int)arg1 ;
-(float)yStart;
-(void)setYStart:(float)arg1 ;
-(float)yEnd;
-(void)setYEnd:(float)arg1 ;
-(float)xOffset;
-(void)setXOffset:(float)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id<AEAnnotation>)arg1 ;
-(AEAnnotationTheme *)theme;
-(void)setTheme:(AEAnnotationTheme *)arg1 ;
@end

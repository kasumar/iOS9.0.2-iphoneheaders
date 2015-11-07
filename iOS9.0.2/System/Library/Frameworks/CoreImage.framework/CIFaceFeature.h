/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@interface CIFaceFeature : CIFeature {

	CGRect bounds;
	char hasLeftEyePosition;
	CGPoint leftEyePosition;
	char hasRightEyePosition;
	CGPoint rightEyePosition;
	char hasMouthPosition;
	CGPoint mouthPosition;
	char hasTrackingID;
	int trackingID;
	char hasTrackingFrameCount;
	int trackingFrameCount;
	char hasFaceAngle;
	float faceAngle;
	char hasSmile;
	char leftEyeClosed;
	char rightEyeClosed;

}

@property (readonly) CGRect bounds; 
@property (readonly) char hasLeftEyePosition; 
@property (readonly) CGPoint leftEyePosition; 
@property (readonly) char hasRightEyePosition; 
@property (readonly) CGPoint rightEyePosition; 
@property (readonly) char hasMouthPosition; 
@property (readonly) CGPoint mouthPosition; 
@property (readonly) char hasTrackingID; 
@property (readonly) int trackingID; 
@property (readonly) char hasTrackingFrameCount; 
@property (readonly) int trackingFrameCount; 
@property (readonly) char hasFaceAngle; 
@property (readonly) float faceAngle; 
@property (readonly) char hasSmile; 
@property (readonly) char leftEyeClosed; 
@property (readonly) char rightEyeClosed; 
-(float)faceAngle;
-(char)hasLeftEyePosition;
-(CGPoint)leftEyePosition;
-(char)hasRightEyePosition;
-(CGPoint)rightEyePosition;
-(char)hasMouthPosition;
-(CGPoint)mouthPosition;
-(id)initWithBounds:(CGRect)arg1 hasLeftEyePosition:(char)arg2 leftEyePosition:(CGPoint)arg3 hasRightEyePosition:(char)arg4 rightEyePosition:(CGPoint)arg5 hasMouthPosition:(char)arg6 mouthPosition:(CGPoint)arg7 hasFaceAngle:(char)arg8 faceAngle:(float)arg9 hasTrackingID:(char)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(char)arg12 trackingFrameCount:(int)arg13 hasSmile:(char)arg14 leftEyeClosed:(char)arg15 rightEyeClosed:(char)arg16 ;
-(char)hasTrackingID;
-(char)hasTrackingFrameCount;
-(int)trackingFrameCount;
-(char)hasFaceAngle;
-(char)hasSmile;
-(char)leftEyeClosed;
-(char)rightEyeClosed;
-(CGRect)bounds;
-(id)type;
-(int)trackingID;
@end

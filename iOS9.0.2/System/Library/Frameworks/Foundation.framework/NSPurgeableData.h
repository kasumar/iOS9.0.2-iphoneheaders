/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

	unsigned _length;
	int _accessCount;
	unsigned char _private[32];
	void* _reserved;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(char)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)_destroyMemory;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)length;
-(id)initWithCapacity:(unsigned)arg1 ;
-(const void*)bytes;
-(void)setLength:(unsigned)arg1 ;
-(char)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(char)isContentDiscarded;
-(void*)mutableBytes;
-(void)finalize;
@end


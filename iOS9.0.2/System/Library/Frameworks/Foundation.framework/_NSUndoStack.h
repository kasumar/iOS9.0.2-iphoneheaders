/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned _max;
	unsigned _count;
	unsigned _nestingLevel;
	_NSUndoObject* _head;

}
-(id)topUndoObject;
-(void)setMax:(unsigned)arg1 ;
-(void)markBegin;
-(char)isDiscardable;
-(id)popUndoObject;
-(void)markEnd;
-(unsigned)max;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(char)arg1 ;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(char)popAndInvoke;
-(id)groupIdentifier;
-(unsigned)nestingLevel;
-(void)push:(id)arg1 ;
@end


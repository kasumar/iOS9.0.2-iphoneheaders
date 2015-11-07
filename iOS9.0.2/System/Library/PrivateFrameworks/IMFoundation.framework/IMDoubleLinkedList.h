/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject {

	IMDoubleLinkedListNode* _first;
	IMDoubleLinkedListNode* _last;
	unsigned _count;

}

@property (retain) IMDoubleLinkedListNode * first;              //@synthesize first=_first - In the implementation block
@property (retain) IMDoubleLinkedListNode * last;               //@synthesize last=_last - In the implementation block
@property (readonly) unsigned count;                            //@synthesize count=_count - In the implementation block
-(IMDoubleLinkedListNode *)first;
-(void)setFirst:(IMDoubleLinkedListNode *)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeObjectNode:(id)arg1 ;
-(id)appendObjectNode:(id)arg1 ;
-(IMDoubleLinkedListNode *)last;
-(void)setLast:(IMDoubleLinkedListNode *)arg1 ;
@end

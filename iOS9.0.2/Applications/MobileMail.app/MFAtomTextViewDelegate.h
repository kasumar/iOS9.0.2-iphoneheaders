/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFAtomTextViewDelegate <NSObject>
@optional
-(void)atomTextViewDidChangeSelection:(id)arg1;
-(id)supportedPasteboardTypesForAtomTextView:(id)arg1;
-(id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
-(char)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;

@required
-(id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;

@end

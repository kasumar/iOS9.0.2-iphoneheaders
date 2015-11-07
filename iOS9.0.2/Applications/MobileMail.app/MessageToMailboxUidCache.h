/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileMail/MobileMail-Structs.h>
@class MFMailMessageLibrary;

@interface MessageToMailboxUidCache : NSObject {

	CFDictionaryRef _mailboxCache;
	MFMailMessageLibrary* _library;

}
-(id)mailboxForMessage:(id)arg1 ;
-(id)mailboxForMessageInfo:(id)arg1 ;
-(id)_mailboxWithMailboxLibraryID:(unsigned)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)debugDescription;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSMailboxOperation.h>

@class NSString, MFMailboxUid;

@interface MCSCreateMailboxOperation : MCSMailboxOperation {

	NSString* _pendingName;
	MFMailboxUid* _parentMailbox;
	NSString* _reasonForFailure;

}

@property (nonatomic,copy) NSString * reasonForFailure;              //@synthesize reasonForFailure=_reasonForFailure - In the implementation block
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)accountForErrorHandling;
-(void)setReasonForFailure:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 parentMailbox:(id)arg2 ;
-(NSString *)reasonForFailure;
-(char)revert;
-(void)dealloc;
-(char)commit;
@end


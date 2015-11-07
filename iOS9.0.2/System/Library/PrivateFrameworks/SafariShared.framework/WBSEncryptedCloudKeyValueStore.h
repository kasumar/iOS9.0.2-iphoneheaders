/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {

	id _accountUpdateObserver;
	NSString* _dsid;
	RetainPtr<_PCSIdentitySetData *>* _pcsIdentitySet;
	RetainPtr<_OpaquePCSShareProtection *>* _pcsShareProtection;
	RetainPtr<const __CFData *>* _serializedPCSObject;
	NSUbiquitousKeyValueStore* _backingStore;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(id)defaultStore;
-(id)initWithStore:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg1 ;
-(void)synchronize;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(NSUbiquitousKeyValueStore *)backingStore;
-(id)_dsidForPrimaryAccount;
-(int)_currentPCSConfiguration;
-(id)decryptEntry:(id)arg1 ;
-(id)encryptPropertyList:(id)arg1 ;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
@end

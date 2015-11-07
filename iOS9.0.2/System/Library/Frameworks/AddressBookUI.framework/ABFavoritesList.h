/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject {

	ABFavoritesListManager* _favoritesListManager;

}
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
+(id)sharedInstance;
-(void)addEntry:(id)arg1 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(id)entriesForPerson:(void*)arg1 ;
-(void)removeEntryAtIndex:(int)arg1 ;
-(void)moveEntryAtIndex:(int)arg1 toIndex:(int)arg2 ;
-(void)recacheIdentitiesSoon;
-(char)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(char)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(char)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(char)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(char)isFull;
-(void)save;
-(void)dealloc;
-(id)entries;
-(id)initWithAddressBook:(void*)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface SearchStateCache : NSObject {

	NSMapTable* _cache;

}
-(id)cachedCompletionListForTabDocument:(id)arg1 ;
-(void)cacheAcceptanceOfCompletionItem:(id)arg1 withCompletionList:(id)arg2 forTabDocument:(id)arg3 ;
-(void)removeCachedSearchStateForTabDocument:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNAutocompleteProbeProvider;
@interface CNAutocompleteUsageMonitor : NSObject {

	id<CNAutocompleteProbeProvider> _probeProvider;

}

@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;              //@synthesize probeProvider=_probeProvider - In the implementation block
+(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned)arg2 forRequest:(id)arg3 ;
+(void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2 ;
-(id)init;
-(id)initWithProbeProvider:(id)arg1 ;
-(void)userIgnoredResultsOfBatch:(unsigned)arg1 forRequest:(id)arg2 afterDelay:(double)arg3 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(void)userSawResultsOfBatch:(unsigned)arg1 forRequest:(id)arg2 ;
-(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned)arg2 forRequest:(id)arg3 ;
@end

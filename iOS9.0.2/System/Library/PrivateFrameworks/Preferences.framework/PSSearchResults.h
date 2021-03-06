/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface PSSearchResults : NSObject <NSCopying> {

	NSMutableArray* _sectionEntries;
	NSMutableSet* _explicitlyAddedSectionEntries;
	NSMutableDictionary* _entriesBySection;
	char _needsSorting;
	char _treatSectionEntriesAsRegularEntries;
	/*^block*/id _sectionComparator;
	/*^block*/id _entryComparator;

}

@property (nonatomic,copy) id sectionComparator;                                    //@synthesize sectionComparator=_sectionComparator - In the implementation block
@property (nonatomic,copy) id entryComparator;                                      //@synthesize entryComparator=_entryComparator - In the implementation block
@property (assign,nonatomic) char treatSectionEntriesAsRegularEntries;              //@synthesize treatSectionEntriesAsRegularEntries=_treatSectionEntriesAsRegularEntries - In the implementation block
-(void)addEntry:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
-(unsigned)removeEntries:(id)arg1 ;
-(void)sortResults;
-(id)resultsByMergingWithResults:(id)arg1 ;
-(void)mergeWithResults:(id)arg1 ;
-(char)removeEntry:(id)arg1 ;
-(void)setSectionComparator:(id)arg1 ;
-(id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3 ;
-(id)entriesInSectionAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSectionEntries;
-(unsigned)numberOfEntriesInSectionAtIndex:(unsigned)arg1 ;
-(unsigned)totalNumberOfEntries;
-(id)sectionEntryAtIndex:(unsigned)arg1 ;
-(id)entryAtIndexPath:(id)arg1 ;
-(id)allSectionEntries;
-(void)setEntryComparator:(id)arg1 ;
-(id)sectionComparator;
-(id)entryComparator;
-(char)treatSectionEntriesAsRegularEntries;
-(void)setTreatSectionEntriesAsRegularEntries:(char)arg1 ;
@end


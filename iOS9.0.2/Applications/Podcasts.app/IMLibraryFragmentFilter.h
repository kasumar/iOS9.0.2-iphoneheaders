/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface IMLibraryFragmentFilter : NSObject <NSCoding> {

	NSMutableDictionary* _identifiedDocuements;
	SCD_Struct_IM34 _specification;

}
+(SCD_Struct_IM33)fragmentFilterSpecificationForDocumentLength:(int)arg1 librarySpecification:(SCD_Struct_IM34)arg2 ;
-(void)addFilter:(id)arg1 withIdentifier:(id)arg2 ;
-(id)initWithFilterSpecification:(SCD_Struct_IM34)arg1 ;
-(void)addDocument:(id)arg1 withIdentifier:(id)arg2 ;
-(char)containsDocumentWithIdentifier:(id)arg1 ;
-(id)allIdentifiers;
-(id)candidateIdentifiersForQuery:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)documentCount;
@end


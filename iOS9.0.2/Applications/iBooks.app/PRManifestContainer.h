/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface PRManifestContainer : NSObject {

	unsigned _containerVersion;
	int _syncType;
	NSDictionary* _metadata;
	NSArray* _manifest;

}

@property (assign,nonatomic) unsigned containerVersion;                   //@synthesize containerVersion=_containerVersion - In the implementation block
@property (assign,nonatomic) int syncType;                                //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRep; 
-(unsigned)containerVersion;
-(NSDictionary *)dictionaryRep;
-(id)dictionaryRepRenamingRootTo:(id)arg1 ;
-(void)setContainerVersion:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setManifest:(NSArray *)arg1 ;
-(NSArray *)manifest;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(int)syncType;
-(void)setSyncType:(int)arg1 ;
-(NSDictionary *)metadata;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchGenericResult.h>
#import <MobileSafari/SearchUIDelegate.h>
#import <MobileSafari/CompletionItem.h>
#import <MobileSafari/SearchUIResult.h>

@class UIImage, NSString, NSArray, NSURL, NSIndexSet, WBSParsecSearchSession, SearchUITableViewCell;

@interface UniversalSearchGenericResult : WBSParsecSearchGenericResult <SearchUIDelegate, CompletionItem, SearchUIResult> {

	NSArray* _allAdamIDs;
	NSArray* _mediaItems;
	NSIndexSet* _indicesOfLocalMediaItems;
	WBSParsecSearchSession* _cardFetchSession;
	WBSParsecSearchSession* _parsecSearchSession;
	SearchUITableViewCell* _completionTableViewCell;
	char _scrollable;

}

@property (getter=isScrollable,nonatomic,readonly) char scrollable;                              //@synthesize scrollable=_scrollable - In the implementation block
@property (nonatomic,readonly) char _iTunesContentIsLocal; 
@property (nonatomic,readonly) char _iTunesContentIsOwned; 
@property (nonatomic,readonly) NSString * _anyAdamID; 
@property (nonatomic,readonly) NSArray * _allAdamIDs; 
@property (nonatomic,readonly) NSArray * _mediaItems; 
@property (nonatomic,readonly) NSIndexSet * _indicesOfLocalMediaItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,readonly) NSString * completionTableHeaderViewReuseIdentifier; 
@property (nonatomic,readonly) char restoresSearchState; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned titleMaxLines; 
@property (nonatomic,copy,readonly) NSString * secondaryTitle; 
@property (nonatomic,readonly) NSArray * richTextItems; 
@property (nonatomic,copy,readonly) NSString * footnote; 
@property (nonatomic,readonly) id<SearchUIActionButtonItem> actionButton; 
@property (nonatomic,readonly) id<SearchUIAuxiliaryInfo> auxiliaryInfo; 
@property (nonatomic,copy,readonly) NSArray * cardSections; 
@property (nonatomic,copy,readonly) NSArray * rowSections; 
@property (nonatomic,copy,readonly) NSURL * destinationURL; 
@property (nonatomic,readonly) char centered; 
@property (nonatomic,readonly) char requiresTwoLineTitles; 
@property (nonatomic,readonly) char secondaryTitleDetached; 
@property (nonatomic,readonly) char shouldCropImageToCircle; 
@property (nonatomic,readonly) float imageCornerRadius; 
@property (nonatomic,readonly) UIImage * secondaryImage; 
@property (nonatomic,copy,readonly) NSURL * cardURL; 
+(char)_userIsFuseSubscriber;
-(id)completionTableViewCellReuseIdentifier;
-(void)acceptCompletionWithActionHandler:(id)arg1 ;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2 ;
-(char)restoresSearchState;
-(unsigned)_searchUIStyle;
-(NSString *)_anyAdamID;
-(void)_showCardViewControllerWithHandler:(id)arg1 ;
-(char)_contentIsPlayable;
-(char)_iTunesContentIsLocal;
-(char)_canStreamMedia;
-(char)_iTunesContentIsOwned;
-(NSArray *)_allAdamIDs;
-(NSIndexSet *)_indicesOfLocalMediaItems;
-(unsigned)titleMaxLines;
-(id<SearchUIActionButtonItem>)actionButton;
-(NSArray *)richTextItems;
-(char)centered;
-(float)imageCornerRadius;
-(NSURL *)destinationURL;
-(id)initWithDictionary:(id)arg1 ;
-(UIImage *)image;
-(id)supportedStyleOverrides;
-(char)isScrollable;
-(void)resultSelected:(id)arg1 ;
-(void)didSelectActionItemForResult:(id)arg1 ;
-(id)viewControllerForPresenting;
-(NSArray *)_mediaItems;
@end


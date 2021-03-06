/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKSearchOperation.h>

@class BKWebView, NSArray;

@interface BKEpubSearchOperation : BKSearchOperation {

	BKWebView* _webView;
	NSArray* _physicalPageMap;

}

@property (nonatomic,retain) BKWebView * webView;                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSArray * physicalPageMap;              //@synthesize physicalPageMap=_physicalPageMap - In the implementation block
-(void)setPhysicalPageMap:(NSArray *)arg1 ;
-(NSArray *)physicalPageMap;
-(int)addOneResult:(int)arg1 ;
-(char)_doSearch;
-(void)dealloc;
-(BKWebView *)webView;
-(void)setWebView:(BKWebView *)arg1 ;
@end


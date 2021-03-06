/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SFWebViewController.h>
#import <libobjc.A.dylib/SFReaderControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>

@class SFReaderController, WKPreferences, NSString;

@interface SFReaderEnabledWebViewController : SFWebViewController <SFReaderControllerDelegate, WKNavigationDelegatePrivate> {

	SFReaderController* _readerController;
	WKPreferences* _wkPreferences;
	char _privateBrowsingEnabled;

}

@property (nonatomic,readonly) SFReaderController * readerController;                                   //@synthesize readerController=_readerController - In the implementation block
@property (nonatomic,readonly) char privateBrowsingEnabled;                                             //@synthesize privateBrowsingEnabled=_privateBrowsingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SFReaderEnabledWebViewControllerDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processPool;
-(id)readerControllerInitialConfiguration:(id)arg1 ;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(char)arg2 ;
-(void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2 ;
-(void)readerController:(id)arg1 didPrepareReaderContentForDisplay:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)setUpReaderWithReaderWebView:(id)arg1 ;
-(SFReaderController *)readerController;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)webViewConfiguration;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(char)privateBrowsingEnabled;
@end


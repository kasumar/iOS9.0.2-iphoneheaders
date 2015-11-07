/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AskPermissionUI.app/AskPermissionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AskPermissionUI/AskPermissionUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>

@protocol AUStorePreviewWebViewDelegate;
@class PRRequest, NSString, UIWebView, UIView, UILabel;

@interface AUStorePreviewWebViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate> {

	PRRequest* _request;
	NSString* _requestString;
	id<AUStorePreviewWebViewDelegate> _delegate;
	UIWebView* _webView;
	UIView* _bannerView;
	UILabel* _bannerLabel;

}

@property (readonly) PRRequest * request;                                     //@synthesize request=_request - In the implementation block
@property (readonly) NSString * requestString;                                //@synthesize requestString=_requestString - In the implementation block
@property (readonly) id<AUStorePreviewWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) UIWebView * webView;                                       //@synthesize webView=_webView - In the implementation block
@property (assign) UIView * bannerView;                                       //@synthesize bannerView=_bannerView - In the implementation block
@property (assign) UILabel * bannerLabel;                                     //@synthesize bannerLabel=_bannerLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 requestString:(id)arg2 delegate:(id)arg3 ;
-(void)loadPreview;
-(UILabel *)bannerLabel;
-(NSString *)requestString;
-(void)declineTapped:(id)arg1 ;
-(void)approveTapped:(id)arg1 ;
-(void)setBannerLabel:(UILabel *)arg1 ;
-(UIView *)bannerView;
-(id<AUStorePreviewWebViewDelegate>)delegate;
-(PRRequest *)request;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
@end

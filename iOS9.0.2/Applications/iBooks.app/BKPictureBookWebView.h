/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKWebView.h>

@interface BKPictureBookWebView : BKWebView {

	char useImagePassthroughProtocol;
	char _shouldDisableOptimizeSpeed;

}

@property (assign,nonatomic) char useImagePassthroughProtocol; 
@property (assign,nonatomic) char shouldDisableOptimizeSpeed;               //@synthesize shouldDisableOptimizeSpeed=_shouldDisableOptimizeSpeed - In the implementation block
-(id)initWithFrame:(CGRect)arg1 forNonDisplayPurposesOnly:(char)arg2 ;
-(char)shouldDisableOptimizeSpeed;
-(id)initWithFrame:(CGRect)arg1 usingLegacyTextRendering:(char)arg2 ;
-(void)setUseImagePassthroughProtocol:(char)arg1 ;
-(void)setShouldDisableOptimizeSpeed:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 usingLegacyTextRendering:(char)arg2 forNonDisplayPurposesOnly:(char)arg3 ;
-(char)useImagePassthroughProtocol;
-(void)loadUrl:(id)arg1 ;
-(void)doPostDOMContentLoadedModifications;
-(void)injectAuthorStylesheet;
-(char)_shouldDoStyleChangesOnCurrentThread;
-(char)shouldInstallDocumentClickHandler;
-(char)shouldInstallWebkitSwizzles;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)_updateViewSettings;
-(void)setCSSAnimationsSuspended:(char)arg1 ;
@end


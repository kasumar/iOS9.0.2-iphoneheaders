/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, NSString;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPage> _page;
	WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > _formDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;

}

@property (nonatomic,readonly) OpaqueWKBundlePageRef _bundlePageRef; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (setter=_setFormDelegate:,__weak) id<WKWebProcessPlugInFormDelegatePrivate> _formDelegate; 
@property (assign,setter=_setDefersLoading:,nonatomic) char _defersLoading; 
@property (nonatomic,readonly) char _usesNonPersistentWebsiteDataStore; 
@property (readonly) WKDOMDocument * mainFrameDocument; 
@property (readonly) WKDOMRange * selectedRange; 
@property (readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (readonly) WKWebProcessPlugInPageGroup * pageGroup; 
@property (__weak) id<WKWebProcessPlugInLoadDelegate> loadDelegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpBrowsingContextFromHandle:(id)arg1 ;
-(WKBrowsingContextHandle *)handle;
-(void)dealloc;
-(WKDOMRange *)selectedRange;
-(WKWebProcessPlugInFrame *)mainFrame;
-(id<WKWebProcessPlugInFormDelegatePrivate>)_formDelegate;
-(void)_setFormDelegate:(id)arg1 ;
-(Object*)_apiObject;
-(OpaqueWKBundlePageRef)_bundlePageRef;
-(char)_defersLoading;
-(void)_setDefersLoading:(char)arg1 ;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(WKWebProcessPlugInPageGroup *)pageGroup;
-(char)_usesNonPersistentWebsiteDataStore;
-(WKDOMDocument *)mainFrameDocument;
-(id<WKWebProcessPlugInLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKWebProcessPlugInLoadDelegate>)arg1 ;
@end

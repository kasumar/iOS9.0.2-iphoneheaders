/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSMutableData, NSURLRequest, NSString, NSURLSessionDataTask, NSURLSessionTask;

@interface TPSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSMutableData* _data;
	int _dataType;
	char _isCancelled;
	NSURLRequest* _request;
	NSString* _lastModified;
	id _completionHandler;
	NSURLSessionDataTask* _dataTask;

}

@property (assign,nonatomic) char isCancelled;                              //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                       //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * sessionTask; 
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;               //@synthesize dataTask=_dataTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlSessionWithRequest:(id)arg1 dataType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)defaultURLSessionConfiguration;
+(id)defaultOperationQueue;
-(void)setLastModified:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(char)isCancelled;
-(void)resume;
-(void)setIsCancelled:(char)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 dataType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSessionTask *)sessionTask;
-(void)notifyWithFormattedData:(id)arg1 response:(id)arg2 error:(id)arg3 cacheData:(char)arg4 ;
-(NSString *)lastModified;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

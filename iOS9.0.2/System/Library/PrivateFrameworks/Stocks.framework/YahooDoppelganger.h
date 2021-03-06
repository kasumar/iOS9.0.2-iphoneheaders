/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLSessionDataDelegate;
@class NSString, NSData, NSURLSession, NSURLSessionDataTask;

@interface YahooDoppelganger : NSObject {

	NSString* _expectedRequestPattern;
	NSData* _response;
	unsigned _responseChunkSize;
	unsigned _responseChunkDelay;
	unsigned _responseChunkInitialDelay;
	unsigned _responseOffset;
	char _cancelled;
	NSURLSession* _session;
	NSURLSessionDataTask* _dataTask;
	id<NSURLSessionDataDelegate> _delegate;

}

@property (nonatomic,retain) NSString * expectedRequestPattern;                         //@synthesize expectedRequestPattern=_expectedRequestPattern - In the implementation block
@property (nonatomic,retain) NSData * response;                                         //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned responseChunkSize;                                //@synthesize responseChunkSize=_responseChunkSize - In the implementation block
@property (assign,nonatomic) unsigned responseChunkDelay;                               //@synthesize responseChunkDelay=_responseChunkDelay - In the implementation block
@property (assign,nonatomic) unsigned responseChunkInitialDelay;                        //@synthesize responseChunkInitialDelay=_responseChunkInitialDelay - In the implementation block
@property (assign,nonatomic,__weak) id<NSURLSessionDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)canHandleRequest:(id)arg1 ;
+(void)hookIntoYQLRequestIfNeeded;
+(id)newDoppelgangerMatchingRequestPattern:(id)arg1 ;
+(void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2 ;
+(void)_doppelgangerFinished:(id)arg1 ;
+(void)setTestHarness:(id)arg1 ;
+(id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2 ;
+(id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(char)arg2 ;
+(id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(int)arg2 ;
+(id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(int)arg2 ;
+(void)spewDoppelgangerData;
+(void)clearDoppelgangerData;
+(char)waitForAllDoppelgangersUpToTimeout:(double)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<NSURLSessionDataDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<NSURLSessionDataDelegate>)delegate;
-(void)start;
-(void)resume;
-(NSData *)response;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setResponse:(NSData *)arg1 ;
-(char)matchesRequest:(id)arg1 ;
-(void)setExpectedRequestPattern:(NSString *)arg1 ;
-(void)_relayDataChunk;
-(void)setResponseChunkSize:(unsigned)arg1 ;
-(NSString *)expectedRequestPattern;
-(unsigned)responseChunkSize;
-(unsigned)responseChunkDelay;
-(void)setResponseChunkDelay:(unsigned)arg1 ;
-(unsigned)responseChunkInitialDelay;
-(void)setResponseChunkInitialDelay:(unsigned)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
@end


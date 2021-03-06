/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_nw_path_evaluator;
@class NWEndpoint, NWParameters, NSObject, NWPath;

@interface NWPathEvaluator : NSObject {

	char _shouldRegisterWithHelper;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NSObject*<OS_nw_path_evaluator> _internalEvaluator;
	NWPath* _internalPath;
	int _helperClientPID;
	unsigned long long _helperClientID;

}

@property (readonly) NWPath * path; 
@property (readonly) NWEndpoint * endpoint;                                          //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSObject*<OS_nw_path_evaluator> internalEvaluator;              //@synthesize internalEvaluator=_internalEvaluator - In the implementation block
@property (retain) NWPath * internalPath;                                            //@synthesize internalPath=_internalPath - In the implementation block
@property (assign) char shouldRegisterWithHelper;                                    //@synthesize shouldRegisterWithHelper=_shouldRegisterWithHelper - In the implementation block
@property (assign) unsigned long long helperClientID;                                //@synthesize helperClientID=_helperClientID - In the implementation block
@property (assign) int helperClientPID;                                              //@synthesize helperClientPID=_helperClientPID - In the implementation block
+(id)sharedDefaultEvaluator;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)getSavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2 shouldRegisterWithHelper:(char)arg3 helperClientID:(unsigned long long)arg4 helperClientPID:(int)arg5 ;
+(void)savePathEvaluator:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NWPath *)path;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(char)matchesEndpoint:(id)arg1 parameters:(id)arg2 shouldRegisterWithHelper:(char)arg3 helperClientID:(unsigned long long)arg4 helperClientPID:(int)arg5 ;
-(void)setHelperClientPID:(int)arg1 ;
-(char)shouldRegisterWithHelper;
-(id)initLocallyWithEndpoint:(id)arg1 parameters:(id)arg2 helperClientID:(unsigned long long)arg3 helperClientPID:(int)arg4 ;
-(void)setShouldRegisterWithHelper:(char)arg1 ;
-(void)triggerPathAgentsIncludingVoluntary:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)helperClientID;
-(void)setHelperClientID:(unsigned long long)arg1 ;
-(void)satisfyPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInternalPath:(NWPath *)arg1 ;
-(NSObject*<OS_nw_path_evaluator>)internalEvaluator;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 shouldRegisterWithHelper:(char)arg3 helperClientID:(unsigned long long)arg4 helperClientPID:(int)arg5 ;
-(NWPath *)internalPath;
-(void)triggerVoluntaryPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)helperClientPID;
@end


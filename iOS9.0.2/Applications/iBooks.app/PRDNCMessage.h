/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PRDNCSession, NSString;

@interface PRDNCMessage : NSObject {

	PRDNCSession* _receivingConnection;
	NSString* _name;
	NSString* _param;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * param;                                  //@synthesize param=_param - In the implementation block
@property (assign,nonatomic) char paramAsBool; 
@property (nonatomic,readonly) NSString * dncNotificationName; 
@property (nonatomic,readonly) PRDNCSession * receivingConnection;              //@synthesize receivingConnection=_receivingConnection - In the implementation block
+(id)fullNotificationNameForBaseName:(id)arg1 param:(id)arg2 ;
+(id)componentsForFullNotificationName:(id)arg1 ;
-(void)sendBoolReply:(char)arg1 ;
-(void)sendStillAlive;
-(char)paramAsBool;
-(NSString *)dncNotificationName;
-(id)initWithReceivingConnection:(id)arg1 name:(id)arg2 param:(id)arg3 ;
-(void)setParam:(NSString *)arg1 ;
-(PRDNCSession *)receivingConnection;
-(void)setParamAsBool:(char)arg1 ;
-(void)sendACK;
-(NSString *)param;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
@end

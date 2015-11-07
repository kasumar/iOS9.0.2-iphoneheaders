/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSError, NSURL;

@interface SSVDirectUpload : NSObject <SSXPCCoding> {

	NSString* _categoryName;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesSent;
	NSError* _error;
	char _explicitContent;
	long long _persistentIdentifier;
	int _state;
	NSString* _subtitle;
	NSURL* _thumbnailImageURL;
	NSString* _title;
	NSString* _uploadKind;
	NSString* _uti;

}

@property (assign,nonatomic) long long persistentIdentifier;                             //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) char explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                      //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * thumbnailImageURL;                                    //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSString * UTI;                                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) long long countOfBytesExpectedToSend;                       //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                                 //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (setter=_setUploadKind:,nonatomic,copy) NSString * _uploadKind;                //@synthesize uploadKind=_uploadKind - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isExplicitContent;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSError *)error;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(void)setError:(NSError *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(long long)persistentIdentifier;
-(NSURL *)thumbnailImageURL;
-(void)setExplicitContent:(char)arg1 ;
-(void)_adoptStatusFromUpload:(id)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setPersistentIdentifier:(long long)arg1 ;
-(NSString *)_uploadKind;
-(void)_setUploadKind:(id)arg1 ;
@end

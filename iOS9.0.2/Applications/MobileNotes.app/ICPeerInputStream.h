/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol ICPeerInputStreamDelegate;
@class NSInputStream, ICDDevice, NSMutableData, NSString;

@interface ICPeerInputStream : NSObject <NSStreamDelegate> {

	char _isMessage;
	NSInputStream* _inputStream;
	id<ICPeerInputStreamDelegate> _delegate;
	ICDDevice* _device;
	NSMutableData* _data;
	unsigned _length;
	unsigned _maxLength;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                              //@synthesize inputStream=_inputStream - In the implementation block
@property (assign,nonatomic,__weak) id<ICPeerInputStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) ICDDevice * device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                                       //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned length;                                            //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned maxLength;                                         //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) char isMessage;                                             //@synthesize isMessage=_isMessage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsMessage:(char)arg1 ;
-(char)isMessage;
-(void)startReadLength;
-(void)startReadMessage:(unsigned)arg1 ;
-(void)readDataFrom:(id)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)setDelegate:(id<ICPeerInputStreamDelegate>)arg1 ;
-(void)dealloc;
-(id<ICPeerInputStreamDelegate>)delegate;
-(unsigned)length;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setMaxLength:(unsigned)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(ICDDevice *)device;
-(id)initWithInputStream:(id)arg1 ;
-(NSInputStream *)inputStream;
-(unsigned)maxLength;
-(void)setDevice:(ICDDevice *)arg1 ;
@end

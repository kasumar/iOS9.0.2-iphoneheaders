/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/PlugIns/AirDropDiagnostic.appex/AirDropDiagnostic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>

@class NSMutableArray;

@interface AirDropDiagnosticExtension : DEExtensionProvider {

	NSMutableArray* _logsArray;

}

@property (nonatomic,retain) NSMutableArray * logsArray;              //@synthesize logsArray=_logsArray - In the implementation block
-(NSMutableArray *)logsArray;
-(void)setLogsArray:(NSMutableArray *)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
@end

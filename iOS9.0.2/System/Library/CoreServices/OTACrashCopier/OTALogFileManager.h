/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OTALogFileManager : NSObject
+(void)moveAsidePendingLogs;
+(void)gatherNonMobileLogs;
+(id)scanProxies;
+(void)cleanupRetiredLogsInPath:(id)arg1 ;
+(unsigned)scanLogs:(id)arg1 from:(id)arg2 ;
+(void)retireLog:(id)arg1 inPath:(id)arg2 ;
+(void)scanDir:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)setup;
@end


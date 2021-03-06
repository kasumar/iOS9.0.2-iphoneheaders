/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:17:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <Foundation/NSValue.h>

@interface UAAuditToken : NSValue {

	SCD_Struct_UA0 _auditTokenValue;

}

@property (readonly) SCD_Struct_UA0 auditTokenValue;                 //@synthesize auditTokenValue=_auditTokenValue - In the implementation block
@property (readonly) int pid; 
@property (readonly) int pidVersion; 
@property (readonly) unsigned euid; 
@property (readonly) unsigned ruid; 
@property (readonly) unsigned egid; 
@property (readonly) unsigned rgid; 
@property (readonly) int asid; 
@property (getter=isSandboxed,readonly) char sandboxed; 
-(SCD_Struct_UA0)auditTokenValue;
-(int)pidVersion;
-(unsigned)euid;
-(unsigned)ruid;
-(unsigned)egid;
-(unsigned)rgid;
-(int)asid;
-(id)description;
-(id)debugDescription;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(id)initWithAuditToken:(SCD_Struct_UA0)arg1 ;
-(char)isSandboxed;
-(int)pid;
@end


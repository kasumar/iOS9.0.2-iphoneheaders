/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OISFUCryptoUtils : NSObject
+(unsigned)ivLengthForKey:(id)arg1 ;
+(id)generateRandomSaltWithLength:(unsigned long)arg1 ;
+(char)generateRandomDataInBuffer:(char*)arg1 length:(unsigned long)arg2 ;
+(id)sha256HashFromData:(id)arg1 ;
+(char)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1 ;
+(id)saltForSageFiles;
+(id)generateRandomSalt;
+(id)hashForPassphrase:(id)arg1 withSalt:(id)arg2 ;
+(unsigned)iterationCountFromPassphraseVerifier:(id)arg1 ;
+(id)saltFromVerifier:(id)arg1 saltLength:(unsigned long)arg2 ;
+(char)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2 ;
+(id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(char)arg3 zipStream:(id*)arg4 ;
+(id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(char)arg4 zipStream:(id*)arg5 ;
+(id)sha256HashFromStorage:(id)arg1 ;
+(id)sha256HashFromString:(id)arg1 ;
+(id)sha1HashFromStorage:(id)arg1 ;
+(id)decodePassphraseHint:(id)arg1 ;
+(id)encodePassphraseHint:(id)arg1 ;
+(id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2 ;
@end

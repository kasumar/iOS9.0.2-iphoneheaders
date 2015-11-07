/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSString, NSMutableDictionary, MFWeakReferenceHolder, NSURL, MFPartialNetworkDataConsumer, NSData;

@interface MFMimePart : NSObject {

	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	NSMutableDictionary* _otherIvars;
	NSRange _range;
	MFWeakReferenceHolder* _parent;
	MFWeakReferenceHolder* _body;
	MFMimePart* _nextPart;
	NSURL* _partURL;
	NSURL* _parentPartURL;
	MFPartialNetworkDataConsumer* _partialDataConsumer;
	NSData* _fullData;
	MFWeakReferenceHolder* _decodedData;

}
+(void)initialize;
+(char)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
+(char)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 ;
+(char)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4 ;
-(id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3 ;
-(void)_setSigners:(id)arg1 ;
-(char)_needsSignatureVerification:(id*)arg1 ;
-(void)_setSMIMEError:(id)arg1 ;
-(id)decodeMultipartSigned;
-(id)decodeApplicationPkcs7_mime;
-(id)SMIMEError;
-(id)copySigners;
-(void)download;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)fileWrapperForcingDownload:(char)arg1 ;
-(int)numberOfAlternatives;
-(id)alternativeAtIndex:(int)arg1 ;
-(unsigned)totalTextSize;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 asHTML:(char)arg4 isComplete:(char*)arg5 ;
-(id)rfc822DecodedMessageBody;
-(unsigned)numberOfAttachments;
-(char)isHTML;
-(id)bodyParameterForKey:(id)arg1 ;
-(id)attachmentURLs;
-(id)partURL;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 asHTML:(char)arg3 ;
-(id)mimeBody;
-(unsigned)approximateRawSize;
-(id)copyBodyDataToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 ;
-(id)disposition;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)subtype;
-(void)setSubtype:(id)arg1 ;
-(NSRange)range;
-(void)setIsGenerated:(char)arg1 ;
-(id)fileWrapper;
-(id)attachments;
-(char)isGenerated;
-(void)setRange:(NSRange)arg1 ;
-(id)subparts;
-(void)setSubparts:(id)arg1 ;
-(void)setContentLocation:(id)arg1 ;
-(void)setLanguages:(id)arg1 ;
-(id)languages;
-(char)isRich;
-(id)chosenAlternativePart;
-(id)_partThatIsAttachment;
-(char)shouldConsiderInlineOverridingExchangeServer;
-(id)startPart;
-(id)subpartAtIndex:(int)arg1 ;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(void)_ensureBodyDataToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 isComplete:(char*)arg4 decoded:(id*)arg5 ;
-(id)bodyDataForcingDownload:(char)arg1 ;
-(id)contentsForTextSystemForcingDownload:(char)arg1 ;
-(id)bodyDataToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 asHTML:(char)arg4 isComplete:(char*)arg5 ;
-(id)preservedHeaderValueForKey:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(void)_setRFC822DecodedMessageBody:(id)arg1 ;
-(void)clearCachedDescryptedMessageBody;
-(char)_hasCompleteBodyDataToOffset:(unsigned)arg1 ;
-(id)copyBodyDataToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 ;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 asHTML:(char)arg4 ;
-(char)parseMimeBodyDownloadIfNecessary:(char)arg1 ;
-(char)parseMimeBody;
-(void)_contents:(id*)arg1 toOffset:(unsigned)arg2 resultOffset:(unsigned*)arg3 downloadIfNecessary:(char)arg4 asHTML:(char)arg5 isComplete:(char*)arg6 ;
-(id)contentsForTextSystemToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 asHTML:(char)arg4 ;
-(id)contentsForTextSystemToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 ;
-(char)hasContents;
-(id)contentsForTextSystemToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 ;
-(id)bodyDataToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 ;
-(void)decodeIfNecessary;
-(id)decodeApplicationZip;
-(id)decodeApplicationOctet_stream;
-(id)decodeMultipartRelated;
-(id)decodeMultipartAlternative;
-(id)decodeMultipart;
-(char)parseIMAPPropertyList:(id)arg1 ;
-(void)getNumberOfAttachments:(unsigned*)arg1 isSigned:(char*)arg2 isEncrypted:(char*)arg3 ;
-(void)addSubpart:(id)arg1 ;
-(id)firstChildPart;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setDisposition:(id)arg1 ;
-(id)bodyParameterKeys;
-(id)dispositionParameterKeys;
-(id)dispositionParameterForKey:(id)arg1 ;
-(id)contentTransferEncoding;
-(id)contentDescription;
-(id)contentLocation;
-(id)nextSiblingPart;
-(void)setContentTransferEncoding:(id)arg1 ;
-(char)isReadableText;
-(id)textHtmlPart;
-(id)attachmentFilename;
-(void)configureFileWrapper:(id)arg1 ;
-(id)parentPart;
-(char)isAttachment;
-(id)decodedDataForData:(id)arg1 ;
-(void)setMimeBody:(id)arg1 ;
-(id)copyBodyDataToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 isComplete:(char*)arg4 ;
-(unsigned long)textEncoding;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(char)_shouldContinueDecodingProcess;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(char)arg3 ;
-(id)decodeText;
-(id)contentsForTextSystem;
-(char)usesKnownSignatureProtocol;
-(id)signedData;
-(id)decryptedMessageBodyIsEncrypted:(char*)arg1 isSigned:(char*)arg2 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(char)arg2 isSigned:(char)arg3 ;
-(id)bodyData;
-(id)partNumber;
@end

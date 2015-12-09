/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMimePart : MFMimePart

+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)arg1;

- (BOOL)_shouldContinueDecodingProcess;
- (void)configureFileWrapper:(id)arg1;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMultipartAppledouble;
- (id)decodeTextCalendar;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)decodeTextPlain;
- (id)decodeTextRichtext;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MimePart, NSData, NSMutableDictionary, NSString, PartialNetworkData;

@interface MimePart : NSObject {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSData *_fullData;
    MimePart *_nextPart;
    NSMutableDictionary *_otherIvars;
    id _parentOrBody;
    PartialNetworkData *_partialData;
    } _range;
    NSString *_subtype;
    NSString *_type;
}

+ (void)initialize;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;

- (id)YahooXMLContent;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)_partThatIsAttachment;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3;
- (void)addSubpart:(id)arg1;
- (id)alternativeAtIndex:(NSInteger)arg1;
- (NSUInteger)approximateRawSize;
- (id)attachmentFilename;
- (id)attachments;
- (id)availableBodyData;
- (id)availableHtmlContent;
- (id)bodyData;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (id)bodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)bodyParameterForKey:(id)arg1;
- (id)bodyParameterKeys;
- (id)chosenAlternativePart;
- (void)clearCachedDescryptedMessageBody;
- (void)configureFileWrapper:(id)arg1;
- (id)contentDescription;
- (id)contentID;
- (id)contentLocation;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentTransferEncoding;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)copyBodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)copyBodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)copyBodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartAppledouble;
- (id)decodeMultipartRelated;
- (id)decodeMultipartSigned;
- (id)decodeText;
- (id)decodeTextCalendar;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)decodeTextPlain;
- (id)decodeTextRichtext;
- (id)decodedDataForData:(id)arg1;
- (id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2;
- (id)description;
- (id)disposition;
- (id)dispositionParameterForKey:(id)arg1;
- (id)dispositionParameterKeys;
- (id)fileWrapper;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)firstChildPart;
- (void)getNumberOfAttachments:(NSUInteger*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3;
- (id)htmlContent;
- (id)htmlContentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)htmlContentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)init;
- (BOOL)isAttachment;
- (BOOL)isHTML;
- (BOOL)isReadableText;
- (BOOL)isRich;
- (id)languages;
- (void)loadMoreHtmlContent;
- (id)mimeBody;
- (id)nextSiblingPart;
- (NSInteger)numberOfAlternatives;
- (NSUInteger)numberOfAttachments;
- (id)parentPart;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)parseMimeBody;
- (id)partNumber;
- (id)preservedHeaderValueForKey:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)setContentDescription:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContentLocation:(id)arg1;
- (void)setContentTransferEncoding:(id)arg1;
- (void)setDisposition:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (void)setLanguages:(id)arg1;
- (void)setMimeBody:(id)arg1;
- (void)setRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setSubparts:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (id)signedData;
- (id)startPart;
- (id)subpartAtIndex:(NSInteger)arg1;
- (id)subparts;
- (id)subtype;
- (unsigned long)textEncoding;
- (id)textHtmlPart;
- (NSUInteger)totalTextSize;
- (id)type;
- (BOOL)usesKnownSignatureProtocol;

@end

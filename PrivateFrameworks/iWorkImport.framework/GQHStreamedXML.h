/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHStreamedXML : NSObject <GQHXMLOutput> {
    struct __CFData { } *mData;
    struct __CFArray { } *mElementNameStack;
    NSInteger mLastOp;
    BOOL mNeedNewlineBeforeNextElement;
    struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuffer {} *x5; struct _xmlBuffer {} *x6; NSInteger x7; NSInteger x8; } *mOutputBuffer;
    struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; } *mXMLDoc;
}

- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData { }*)createHtml;
- (struct __CFData { }*)createHtmlWithCss:(struct __CFString { }*)arg1;
- (void)dealloc;
- (void)endElement;
- (id)initEmpty;
- (id)initWithHead;
- (const char *)peekElementName;
- (char *)popElementName;
- (void)pushElementName:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCheapMutableString : NSMutableString {
    union { 
        unsigned short *fat; 
        char *thin; 
    struct { 
        unsigned int isFat : 1; 
        unsigned int freeWhenDone : 1; 
        unsigned int refs : 30; 
    void *_reserved;
    } contents;
    } flags;
    NSUInteger numCharacters;
}

- (const char *)cString;
- (NSUInteger)cStringLength;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (NSUInteger)fastestEncoding;
- (void)finalize;
- (BOOL)getBytes:(char *)arg1 maxLength:(NSUInteger)arg2 usedLength:(NSUInteger*)arg3 encoding:(NSUInteger)arg4 options:(NSUInteger)arg5 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg6 remainingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg7;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)length;
- (const char *)lossyCString;
- (void)setContentsNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

+ (id)CJKCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)controlCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (void)initialize;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;

- (unsigned long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (NSUInteger)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invertedSet;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMutable;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (void)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPathStore2 : NSString {
    unsigned short _characters[0];
    NSUInteger _lengthAndRefCount;
}

+ (id)pathStoreWithCharacters:(const unsigned short*)arg1 length:(NSUInteger)arg2;
+ (id)pathWithComponents:(id)arg1;

- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)hash;
- (BOOL)isAbsolutePath;
- (BOOL)isEqualToString:(id)arg1;
- (id)lastPathComponent;
- (NSUInteger)length;
- (id)pathComponents;
- (id)pathExtension;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDColorReference, EDResources, NSFont, NSString;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
    NSInteger mCharSet;
    EDColorReference *mColorReference;
    NSInteger mFamily;
    double mHeightInTwips;
    NSFont *mNSFont;
    NSString *mName;
    EDResources *mResources;
    NSInteger mScript;
    NSInteger mUnderline;
    NSUInteger mWeight;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mBold;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mBoldOverridden;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDoNotModify;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHeightOverridden;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mItalic;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mItalicOverridden;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mNSFontValid;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mOutline;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShadow;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mStrike;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mStrikeOverridden;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mUnderlineOverridden;
}

+ (id)fontWithResources:(id)arg1;

- (NSInteger)charSet;
- (id)color;
- (id)colorReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSInteger)family;
- (double)height;
- (id)initWithResources:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBold;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBoldOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFont:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHeightOverridden;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isItalic;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isItalicOverridden;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isOutline;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShadow;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isStrike;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isStrikeOverridden;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isUnderlineOverridden;
- (id)name;
- (id)nsFont;
- (NSInteger)script;
- (void)setBold:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setCharSet:(NSInteger)arg1;
- (void)setColor:(id)arg1;
- (void)setColorReference:(id)arg1;
- (void)setDoNotModify:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setFamily:(NSInteger)arg1;
- (void)setHeight:(double)arg1;
- (void)setItalic:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setName:(id)arg1;
- (void)setOutline:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setScript:(NSInteger)arg1;
- (void)setShadow:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setStrike:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setUnderline:(NSInteger)arg1;
- (void)setWeight:(NSUInteger)arg1;
- (NSInteger)underline;
- (NSUInteger)weight;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFont : NSObject {
}

@property(retain,readonly) NSString *familyName;
@property(retain,readonly) NSString *fontName;
@property(readonly) float ascender;
@property(readonly) float capHeight;
@property(readonly) float descender;
@property(readonly) float leading;
@property(readonly) float pointSize;
@property(readonly) float xHeight;

+ (id)__dummy;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (float)buttonFontSize;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)fontWithFamilyName:(id)arg1 traits:(NSInteger)arg2 size:(float)arg3;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (float)labelFontSize;
+ (float)smallSystemFontSize;
+ (id)systemFontOfSize:(float)arg1;
+ (float)systemFontSize;

- (float)ascender;
- (float)capHeight;
- (Class)classForCoder;
- (float)descender;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)fontName;
- (id)fontWithSize:(float)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(NSInteger)arg2 size:(float)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (BOOL)isFixedPitch;
- (float)leading;
- (id)markupDescription;
- (float)pointSize;
- (NSInteger)traits;
- (float)xHeight;

@end

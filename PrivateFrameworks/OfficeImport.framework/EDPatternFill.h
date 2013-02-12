/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDColorReference;

@interface EDPatternFill : EDFill {
     /* Encoded args for previous method: B8@0:4 */
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
    NSInteger mType;
}

+ (id)patternFillWithType:(NSInteger)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(NSInteger)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(NSInteger)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(NSInteger)arg1 resources:(id)arg2;

- (id)backColor;
- (id)backColorReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)foreColor;
- (id)foreColorReference;
- (NSUInteger)hash;
- (id)initWithResources:(id)arg1;
- (id)initWithType:(NSInteger)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPatternFill:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setBackColorReference:(id)arg1;
- (void)setForeColor:(id)arg1;
- (void)setForeColorReference:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (NSInteger)type;

@end

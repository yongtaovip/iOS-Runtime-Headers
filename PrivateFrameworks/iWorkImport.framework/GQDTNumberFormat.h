/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTNumberFormat : NSObject <GQDNameMappable> {
    struct __CFString { } *mCurrencyCode;
    long mDecimalPlaces;
    struct __CFString { } *mFormatString;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    NSInteger mFractionAccuracy;
    NSInteger mNegativeStyle;
    struct __CFNumberFormatter { } *mSavedFormatter;
    BOOL mShowThousandsSeparator;
    BOOL mUseAccountingStyle;
    NSInteger mValueType;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (BOOL)needToSuppressMinusSignForFormatString:(struct __CFString { }*)arg1;

- (struct __CFString { }*)createFractionStringFromDouble:(double)arg1;
- (struct __CFString { }*)createStringFromDouble:(double)arg1;
- (void)dealloc;
- (id)initWithValueType:(NSInteger)arg1 formatString:(struct __CFString { }*)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(struct __CFString { }*)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(NSInteger)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(NSInteger)arg8;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (id)retainedNumberFormatBySettingValueTypeToDecimalWithParentheses;
- (BOOL)useAccountingStyle;
- (NSInteger)valueType;

@end

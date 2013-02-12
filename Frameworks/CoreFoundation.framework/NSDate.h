/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDate : NSObject <NSCopying, NSCoding> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)createDateInCommonFormatsWithString:(id)arg1;
+ (id)createLenientDateInCommonFormatsWithString:(id)arg1;
+ (id)date;
+ (id)dateWithActiveSyncString:(id)arg1;
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)arg1;
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)arg1;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;
+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)dateWithWordDate:(const struct WrdDateTime { int (**x1)(); NSInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long)_cfTypeID;
- (id)_web_RFC1123DateString;
- (NSInteger)_web_compareDay:(id)arg1;
- (BOOL)_web_isToday;
- (id)activeSyncString;
- (id)activeSyncStringForYearMonthDay;
- (id)activeSyncStringWithoutSeparators;
- (id)addTimeInterval:(double)arg1;
- (Class)classForCoder;
- (NSInteger)compare:(id)arg1;
- (void)copyToWordDate:(struct WrdDateTime { int (**x1)(); NSInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)description;
- (id)descriptionForMimeHeaders;
- (id)descriptionInBSDMailboxFormat;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDate:(id)arg1;
- (BOOL)isNSDate__;
- (BOOL)isNSDate__;
- (id)laterDate:(id)arg1;
- (id)nearestMidnight;
- (id)replyPrefixForSender:(id)arg1 withSpacer:(BOOL)arg2;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

@end

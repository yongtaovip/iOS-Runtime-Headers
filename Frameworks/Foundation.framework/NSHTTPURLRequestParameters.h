/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSData, NSMutableDictionary, NSString, _NSHTTPBodyStreamWrapper;

@interface NSHTTPURLRequestParameters : NSObject {
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
    _NSHTTPBodyStreamWrapper *bodyStreamWrapper;
    NSData *data;
    NSArray *extraCookies;
    NSMutableDictionary *fields;
    NSString *method;
    NSUInteger pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
}

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

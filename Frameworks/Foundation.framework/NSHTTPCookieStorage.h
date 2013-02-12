/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
    NSHTTPCookieStorageInternal *_internal;
}

+ (id)sharedHTTPCookieStorage;

- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;
- (id)_internalInit;
- (void)_readAcceptCookiesPreference;
- (void)_saveCookies;
- (void)_setPrivateBrowsingEnabled:(BOOL)arg1;
- (NSUInteger)cookieAcceptPolicy;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (id)cookies;
- (id)cookiesForURL:(id)arg1;
- (void)dealloc;
- (void)deleteCookie:(id)arg1;
- (id)description;
- (id)init;
- (void)setCookie:(id)arg1;
- (void)setCookieAcceptPolicy:(NSUInteger)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISAccount, ISClientInfo, ISPlistParser;

@interface ISAuthenticator : NSObject <ISDialogButtonHandler> {
    ISAccount *_account;
    NSUInteger _attempts;
    ISClientInfo *_lastClient;
    ISPlistParser *_requestParser;
    NSUInteger _retryDialogCount;
}

+ (void)_setParserClass:(Class)arg1;

- (id)_createRequestParser:(id)arg1;
- (BOOL)_failureTypeIsFinal:(NSInteger)arg1;
- (BOOL)_fetchIfNecessary:(id)arg1;
- (void)_handleError:(id)arg1 isFinal:(BOOL)arg2 hasDialog:(BOOL)arg3;
- (void)_handleErrorForPlist:(id)arg1;
- (id)_requestArguments;
- (void)_setLastClient:(id)arg1;
- (BOOL)authenticateForClient:(id)arg1;
- (BOOL)authenticateForLastClient;
- (BOOL)cancelAuthentication;
- (void)clearAccount;
- (void)dealloc;
- (void)dialogFailed:(id)arg1;
- (void)handleButton:(id)arg1 forDialog:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (BOOL)isAuthenticating;
- (NSUInteger)numberOfAttempts;
- (void)plistParser:(id)arg1 finishedWithPlist:(id)arg2 error:(id)arg3;
- (void)plistParserWasCancelled:(id)arg1;
- (void)plistParserWillSendDialog:(id)arg1 forPlist:(id)arg2;
- (id)requestParser;

@end

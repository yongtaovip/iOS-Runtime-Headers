/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSURLConnection, NSURLCredential;

@interface GmailAccount : IMAPAccount {
    unsigned int _isEnabling : 1;
    unsigned int _didEnable : 1;
    NSURLCredential *_credential;
    NSURLConnection *_enablingConnection;
}

+ (id)deliveryAccountHostname;
+ (NSUInteger)deliveryAccountPortNumber;
+ (BOOL)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)hostname;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)usernameIsEmailAddress;

- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (BOOL)_isOurConnection:(id)arg1;
- (void)_removeCredential:(id)arg1;
- (BOOL)archiveSentMessages;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (id)emailAddresses;
- (NSInteger)emptyFrequencyForMailboxType:(NSInteger)arg1;
- (BOOL)enableAccount;
- (id)hostname;
- (id)mailboxUidOfType:(NSInteger)arg1 createIfNeeded:(BOOL)arg2;
- (id)password;
- (id)primaryMailboxUid;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (BOOL)xListSupportedOnConnection:(id)arg1;

@end
